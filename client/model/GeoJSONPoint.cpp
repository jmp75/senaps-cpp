/**
 * Sensor Data API
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2.20
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GeoJSONPoint.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GeoJSONPoint::GeoJSONPoint()
{
    m_Type = U("");
}

GeoJSONPoint::~GeoJSONPoint()
{
}

void GeoJSONPoint::validate()
{
    // TODO: implement validation
}

web::json::value GeoJSONPoint::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("type")] = ModelBase::toJson(m_Type);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Coordinates )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("coordinates")] = web::json::value::array(jsonArray);
    }

    return val;
}

void GeoJSONPoint::fromJson(web::json::value& val)
{
    setType(ModelBase::stringFromJson(val[U("type")]));
    {
        m_Coordinates.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[U("coordinates")].as_array() )
        {
            m_Coordinates.push_back(ModelBase::doubleFromJson(item));
        }
    }
}

void GeoJSONPoint::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Coordinates )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("coordinates"), web::json::value::array(jsonArray), U("application/json")));
            }
}

void GeoJSONPoint::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    {
        m_Coordinates.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("coordinates"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Coordinates.push_back(ModelBase::doubleFromJson(item));
        }
    }
}

utility::string_t GeoJSONPoint::getType() const
{
    return m_Type;
}


void GeoJSONPoint::setType(utility::string_t value)
{
    m_Type = value;
    
}
std::vector<double>& GeoJSONPoint::getCoordinates()
{
    return m_Coordinates;
}

void GeoJSONPoint::setCoordinates(std::vector<double> value)
{
    m_Coordinates = value;
    
}
}
}
}
}
