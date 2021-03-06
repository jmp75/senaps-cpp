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



#include "VocabularyCollection__embedded.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

VocabularyCollection__embedded::VocabularyCollection__embedded()
{
    m_ResultsIsSet = false;
}

VocabularyCollection__embedded::~VocabularyCollection__embedded()
{
}

void VocabularyCollection__embedded::validate()
{
    // TODO: implement validation
}

web::json::value VocabularyCollection__embedded::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("results")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void VocabularyCollection__embedded::fromJson(web::json::value& val)
{
    {
        m_Results.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("results")))
        {
        for( auto& item : val[utility::conversions::to_string_t("results")].as_array() )
        {
            if(item.is_null())
            {
                m_Results.push_back( std::shared_ptr<VocabularyCollection__embedded_results>(nullptr) );
            }
            else
            {
                std::shared_ptr<VocabularyCollection__embedded_results> newItem(new VocabularyCollection__embedded_results());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
        }
        }
    }
}

void VocabularyCollection__embedded::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("results"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void VocabularyCollection__embedded::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Results.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("results")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("results"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Results.push_back( std::shared_ptr<VocabularyCollection__embedded_results>(nullptr) );
            }
            else
            {
                std::shared_ptr<VocabularyCollection__embedded_results> newItem(new VocabularyCollection__embedded_results());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<VocabularyCollection__embedded_results>>& VocabularyCollection__embedded::getResults()
{
    return m_Results;
}

void VocabularyCollection__embedded::setResults(std::vector<std::shared_ptr<VocabularyCollection__embedded_results>> value)
{
    m_Results = value;
    m_ResultsIsSet = true;
}
bool VocabularyCollection__embedded::resultsIsSet() const
{
    return m_ResultsIsSet;
}

void VocabularyCollection__embedded::unsetResults()
{
    m_ResultsIsSet = false;
}

}
}
}
}

