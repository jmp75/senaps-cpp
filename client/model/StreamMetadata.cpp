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



#include "StreamMetadata.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StreamMetadata::StreamMetadata()
{
    m_Type = utility::conversions::to_string_t("");
    m_ObservedProperty = utility::conversions::to_string_t("");
    m_UnitOfMeasure = utility::conversions::to_string_t("");
    m_InterpolationType = utility::conversions::to_string_t("");
    m_Cummulative = false;
    m_CummulativeIsSet = false;
    m_AccumulationInterval = utility::conversions::to_string_t("");
    m_AccumulationIntervalIsSet = false;
    m_AccumulationAnchor = utility::conversions::to_string_t("");
    m_AccumulationAnchorIsSet = false;
    m_Timezone = utility::conversions::to_string_t("");
    m_TimezoneIsSet = false;
}

StreamMetadata::~StreamMetadata()
{
}

void StreamMetadata::validate()
{
    // TODO: implement validation
}

web::json::value StreamMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("observedProperty")] = ModelBase::toJson(m_ObservedProperty);
    val[utility::conversions::to_string_t("unitOfMeasure")] = ModelBase::toJson(m_UnitOfMeasure);
    val[utility::conversions::to_string_t("interpolationType")] = ModelBase::toJson(m_InterpolationType);
    if(m_CummulativeIsSet)
    {
        val[utility::conversions::to_string_t("cummulative")] = ModelBase::toJson(m_Cummulative);
    }
    if(m_AccumulationIntervalIsSet)
    {
        val[utility::conversions::to_string_t("accumulationInterval")] = ModelBase::toJson(m_AccumulationInterval);
    }
    if(m_AccumulationAnchorIsSet)
    {
        val[utility::conversions::to_string_t("accumulationAnchor")] = ModelBase::toJson(m_AccumulationAnchor);
    }
    if(m_TimezoneIsSet)
    {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(m_Timezone);
    }

    return val;
}

void StreamMetadata::fromJson(web::json::value& val)
{
    setType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("type")]));
    setObservedProperty(ModelBase::stringFromJson(val[utility::conversions::to_string_t("observedProperty")]));
    setUnitOfMeasure(ModelBase::stringFromJson(val[utility::conversions::to_string_t("unitOfMeasure")]));
    setInterpolationType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("interpolationType")]));
    if(val.has_field(utility::conversions::to_string_t("cummulative")))
    {
        setCummulative(ModelBase::boolFromJson(val[utility::conversions::to_string_t("cummulative")]));
    }
    if(val.has_field(utility::conversions::to_string_t("accumulationInterval")))
    {
        setAccumulationInterval(ModelBase::stringFromJson(val[utility::conversions::to_string_t("accumulationInterval")]));
    }
    if(val.has_field(utility::conversions::to_string_t("accumulationAnchor")))
    {
        setAccumulationAnchor(ModelBase::stringFromJson(val[utility::conversions::to_string_t("accumulationAnchor")]));
    }
    if(val.has_field(utility::conversions::to_string_t("timezone")))
    {
        setTimezone(ModelBase::stringFromJson(val[utility::conversions::to_string_t("timezone")]));
    }
}

void StreamMetadata::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("observedProperty"), m_ObservedProperty));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unitOfMeasure"), m_UnitOfMeasure));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("interpolationType"), m_InterpolationType));
    if(m_CummulativeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cummulative"), m_Cummulative));
    }
    if(m_AccumulationIntervalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("accumulationInterval"), m_AccumulationInterval));
        
    }
    if(m_AccumulationAnchorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("accumulationAnchor"), m_AccumulationAnchor));
        
    }
    if(m_TimezoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timezone"), m_Timezone));
        
    }
}

void StreamMetadata::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    setObservedProperty(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("observedProperty"))));
    setUnitOfMeasure(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("unitOfMeasure"))));
    setInterpolationType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("interpolationType"))));
    if(multipart->hasContent(utility::conversions::to_string_t("cummulative")))
    {
        setCummulative(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cummulative"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("accumulationInterval")))
    {
        setAccumulationInterval(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("accumulationInterval"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("accumulationAnchor")))
    {
        setAccumulationAnchor(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("accumulationAnchor"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timezone")))
    {
        setTimezone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timezone"))));
    }
}

utility::string_t StreamMetadata::getType() const
{
    return m_Type;
}


void StreamMetadata::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t StreamMetadata::getObservedProperty() const
{
    return m_ObservedProperty;
}


void StreamMetadata::setObservedProperty(utility::string_t value)
{
    m_ObservedProperty = value;
    
}
utility::string_t StreamMetadata::getUnitOfMeasure() const
{
    return m_UnitOfMeasure;
}


void StreamMetadata::setUnitOfMeasure(utility::string_t value)
{
    m_UnitOfMeasure = value;
    
}
utility::string_t StreamMetadata::getInterpolationType() const
{
    return m_InterpolationType;
}


void StreamMetadata::setInterpolationType(utility::string_t value)
{
    m_InterpolationType = value;
    
}
bool StreamMetadata::isCummulative() const
{
    return m_Cummulative;
}


void StreamMetadata::setCummulative(bool value)
{
    m_Cummulative = value;
    m_CummulativeIsSet = true;
}
bool StreamMetadata::cummulativeIsSet() const
{
    return m_CummulativeIsSet;
}

void StreamMetadata::unsetCummulative()
{
    m_CummulativeIsSet = false;
}

utility::string_t StreamMetadata::getAccumulationInterval() const
{
    return m_AccumulationInterval;
}


void StreamMetadata::setAccumulationInterval(utility::string_t value)
{
    m_AccumulationInterval = value;
    m_AccumulationIntervalIsSet = true;
}
bool StreamMetadata::accumulationIntervalIsSet() const
{
    return m_AccumulationIntervalIsSet;
}

void StreamMetadata::unsetAccumulationInterval()
{
    m_AccumulationIntervalIsSet = false;
}

utility::string_t StreamMetadata::getAccumulationAnchor() const
{
    return m_AccumulationAnchor;
}


void StreamMetadata::setAccumulationAnchor(utility::string_t value)
{
    m_AccumulationAnchor = value;
    m_AccumulationAnchorIsSet = true;
}
bool StreamMetadata::accumulationAnchorIsSet() const
{
    return m_AccumulationAnchorIsSet;
}

void StreamMetadata::unsetAccumulationAnchor()
{
    m_AccumulationAnchorIsSet = false;
}

utility::string_t StreamMetadata::getTimezone() const
{
    return m_Timezone;
}


void StreamMetadata::setTimezone(utility::string_t value)
{
    m_Timezone = value;
    m_TimezoneIsSet = true;
}
bool StreamMetadata::timezoneIsSet() const
{
    return m_TimezoneIsSet;
}

void StreamMetadata::unsetTimezone()
{
    m_TimezoneIsSet = false;
}

}
}
}
}

