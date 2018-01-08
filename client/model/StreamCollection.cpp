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



#include "StreamCollection.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StreamCollection::StreamCollection()
{
    m__linksIsSet = false;
    m__embeddedIsSet = false;
    m_Count = 0.0;
    m_CountIsSet = false;
}

StreamCollection::~StreamCollection()
{
}

void StreamCollection::validate()
{
    // TODO: implement validation
}

web::json::value StreamCollection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }
    if(m__embeddedIsSet)
    {
        val[utility::conversions::to_string_t("_embedded")] = ModelBase::toJson(m__embedded);
    }
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(m_Count);
    }

    return val;
}

void StreamCollection::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        if(!val[utility::conversions::to_string_t("_links")].is_null())
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromJson(val[utility::conversions::to_string_t("_links")]);
            setLinks( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("_embedded")))
    {
        if(!val[utility::conversions::to_string_t("_embedded")].is_null())
        {
            std::shared_ptr<StreamCollection__embedded> newItem(new StreamCollection__embedded());
            newItem->fromJson(val[utility::conversions::to_string_t("_embedded")]);
            setEmbedded( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count")))
    {
        setCount(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("count")]));
    }
}

void StreamCollection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
        
    }
    if(m__embeddedIsSet)
    {
        if (m__embedded.get())
        {
            m__embedded->toMultipart(multipart, utility::conversions::to_string_t("_embedded."));
        }
        
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("count"), m_Count));
    }
}

void StreamCollection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_embedded")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_embedded")))
        {
            std::shared_ptr<StreamCollection__embedded> newItem(new StreamCollection__embedded());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_embedded."));
            setEmbedded( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("count")))
    {
        setCount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("count"))));
    }
}

std::shared_ptr<Organisation__links> StreamCollection::getLinks() const
{
    return m__links;
}


void StreamCollection::setLinks(std::shared_ptr<Organisation__links> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool StreamCollection::linksIsSet() const
{
    return m__linksIsSet;
}

void StreamCollection::unset_links()
{
    m__linksIsSet = false;
}

std::shared_ptr<StreamCollection__embedded> StreamCollection::getEmbedded() const
{
    return m__embedded;
}


void StreamCollection::setEmbedded(std::shared_ptr<StreamCollection__embedded> value)
{
    m__embedded = value;
    m__embeddedIsSet = true;
}
bool StreamCollection::embeddedIsSet() const
{
    return m__embeddedIsSet;
}

void StreamCollection::unset_embedded()
{
    m__embeddedIsSet = false;
}

double StreamCollection::getCount() const
{
    return m_Count;
}


void StreamCollection::setCount(double value)
{
    m_Count = value;
    m_CountIsSet = true;
}
bool StreamCollection::countIsSet() const
{
    return m_CountIsSet;
}

void StreamCollection::unsetCount()
{
    m_CountIsSet = false;
}

}
}
}
}

