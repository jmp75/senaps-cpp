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



#include "GeoJSONPoint.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GeoJSONPoint::GeoJSONPoint()
{
    m_Type = utility::conversions::to_string_t("");
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

    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Coordinates )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("coordinates")] = web::json::value::array(jsonArray);
    }

    return val;
}

void GeoJSONPoint::fromJson(web::json::value& val)
{
    setType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("type")]));
    {
        m_Coordinates.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("coordinates")].as_array() )
        {
            m_Coordinates.push_back(ModelBase::doubleFromJson(item));
        }
    }
}

void GeoJSONPoint::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Coordinates )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("coordinates"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void GeoJSONPoint::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    {
        m_Coordinates.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("coordinates"))));
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

