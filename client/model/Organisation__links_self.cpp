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



#include "Organisation__links_self.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Organisation__links_self::Organisation__links_self()
{
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
}

Organisation__links_self::~Organisation__links_self()
{
}

void Organisation__links_self::validate()
{
    // TODO: implement validation
}

web::json::value Organisation__links_self::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }

    return val;
}

void Organisation__links_self::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        setHref(ModelBase::stringFromJson(val[utility::conversions::to_string_t("href")]));
    }
}

void Organisation__links_self::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
        
    }
}

void Organisation__links_self::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        setHref(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("href"))));
    }
}

utility::string_t Organisation__links_self::getHref() const
{
    return m_Href;
}


void Organisation__links_self::setHref(utility::string_t value)
{
    m_Href = value;
    m_HrefIsSet = true;
}
bool Organisation__links_self::hrefIsSet() const
{
    return m_HrefIsSet;
}

void Organisation__links_self::unsetHref()
{
    m_HrefIsSet = false;
}

}
}
}
}

