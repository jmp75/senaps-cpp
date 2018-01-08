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



#include "PlatformDeployment_validTime.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PlatformDeployment_validTime::PlatformDeployment_validTime()
{
    m_Start = utility::conversions::to_string_t("");
    m_StartIsSet = false;
    m_Finish = utility::conversions::to_string_t("");
    m_FinishIsSet = false;
}

PlatformDeployment_validTime::~PlatformDeployment_validTime()
{
}

void PlatformDeployment_validTime::validate()
{
    // TODO: implement validation
}

web::json::value PlatformDeployment_validTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_StartIsSet)
    {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(m_Start);
    }
    if(m_FinishIsSet)
    {
        val[utility::conversions::to_string_t("finish")] = ModelBase::toJson(m_Finish);
    }

    return val;
}

void PlatformDeployment_validTime::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("start")))
    {
        setStart(ModelBase::stringFromJson(val[utility::conversions::to_string_t("start")]));
    }
    if(val.has_field(utility::conversions::to_string_t("finish")))
    {
        setFinish(ModelBase::stringFromJson(val[utility::conversions::to_string_t("finish")]));
    }
}

void PlatformDeployment_validTime::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_StartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("start"), m_Start));
        
    }
    if(m_FinishIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("finish"), m_Finish));
        
    }
}

void PlatformDeployment_validTime::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("start")))
    {
        setStart(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("start"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("finish")))
    {
        setFinish(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("finish"))));
    }
}

utility::string_t PlatformDeployment_validTime::getStart() const
{
    return m_Start;
}


void PlatformDeployment_validTime::setStart(utility::string_t value)
{
    m_Start = value;
    m_StartIsSet = true;
}
bool PlatformDeployment_validTime::startIsSet() const
{
    return m_StartIsSet;
}

void PlatformDeployment_validTime::unsetStart()
{
    m_StartIsSet = false;
}

utility::string_t PlatformDeployment_validTime::getFinish() const
{
    return m_Finish;
}


void PlatformDeployment_validTime::setFinish(utility::string_t value)
{
    m_Finish = value;
    m_FinishIsSet = true;
}
bool PlatformDeployment_validTime::finishIsSet() const
{
    return m_FinishIsSet;
}

void PlatformDeployment_validTime::unsetFinish()
{
    m_FinishIsSet = false;
}

}
}
}
}

