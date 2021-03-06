/**
 * Sensor Data API
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2.20
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.1-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "StreamCollection__embedded.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StreamCollection__embedded::StreamCollection__embedded()
{
    m_StreamsIsSet = false;
}

StreamCollection__embedded::~StreamCollection__embedded()
{
}

void StreamCollection__embedded::validate()
{
    // TODO: implement validation
}

web::json::value StreamCollection__embedded::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Streams )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("streams")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void StreamCollection__embedded::fromJson(web::json::value& val)
{
    {
        m_Streams.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("streams")))
        {
        for( auto& item : val[utility::conversions::to_string_t("streams")].as_array() )
        {
            if(item.is_null())
            {
                m_Streams.push_back( std::shared_ptr<Stream>(nullptr) );
            }
            else
            {
                std::shared_ptr<Stream> newItem(new Stream());
                newItem->fromJson(item);
                m_Streams.push_back( newItem );
            }
        }
        }
    }
}

void StreamCollection__embedded::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Streams )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("streams"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void StreamCollection__embedded::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Streams.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("streams")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("streams"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Streams.push_back( std::shared_ptr<Stream>(nullptr) );
            }
            else
            {
                std::shared_ptr<Stream> newItem(new Stream());
                newItem->fromJson(item);
                m_Streams.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<Stream>>& StreamCollection__embedded::getStreams()
{
    return m_Streams;
}

void StreamCollection__embedded::setStreams(std::vector<std::shared_ptr<Stream>> value)
{
    m_Streams = value;
    m_StreamsIsSet = true;
}
bool StreamCollection__embedded::streamsIsSet() const
{
    return m_StreamsIsSet;
}

void StreamCollection__embedded::unsetStreams()
{
    m_StreamsIsSet = false;
}

}
}
}
}

