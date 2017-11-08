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



#include "Permission.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Permission::Permission()
{
    m_Type = U("");
    m_TypeIsSet = false;
}

Permission::~Permission()
{
}

void Permission::validate()
{
    // TODO: implement validation
}

web::json::value Permission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void Permission::fromJson(web::json::value& val)
{
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void Permission::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void Permission::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

utility::string_t Permission::getType() const
{
    return m_Type;
}


void Permission::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool Permission::typeIsSet() const
{
    return m_TypeIsSet;
}

void Permission::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}
