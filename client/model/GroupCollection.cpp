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



#include "GroupCollection.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GroupCollection::GroupCollection()
{
    m__linksIsSet = false;
    m__embeddedIsSet = false;
    m_Count = 0.0;
    m_CountIsSet = false;
}

GroupCollection::~GroupCollection()
{
}

void GroupCollection::validate()
{
    // TODO: implement validation
}

web::json::value GroupCollection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__linksIsSet)
    {
        val[U("_links")] = ModelBase::toJson(m__links);
    }
    if(m__embeddedIsSet)
    {
        val[U("_embedded")] = ModelBase::toJson(m__embedded);
    }
    if(m_CountIsSet)
    {
        val[U("count")] = ModelBase::toJson(m_Count);
    }

    return val;
}

void GroupCollection::fromJson(web::json::value& val)
{
    if(val.has_field(U("_links")))
    {
        if(!val[U("_links")].is_null())
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromJson(val[U("_links")]);
            setLinks( newItem );
        }
    }
    if(val.has_field(U("_embedded")))
    {
        if(!val[U("_embedded")].is_null())
        {
            std::shared_ptr<GroupCollection__embedded> newItem(new GroupCollection__embedded());
            newItem->fromJson(val[U("_embedded")]);
            setEmbedded( newItem );
        }
    }
    if(val.has_field(U("count")))
    {
        setCount(ModelBase::doubleFromJson(val[U("count")]));
    }
}

void GroupCollection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, U("_links."));
        }
        
    }
    if(m__embeddedIsSet)
    {
        if (m__embedded.get())
        {
            m__embedded->toMultipart(multipart, U("_embedded."));
        }
        
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("count"), m_Count));
    }
}

void GroupCollection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_links")))
    {
        if(multipart->hasContent(U("_links")))
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromMultiPart(multipart, U("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(U("_embedded")))
    {
        if(multipart->hasContent(U("_embedded")))
        {
            std::shared_ptr<GroupCollection__embedded> newItem(new GroupCollection__embedded());
            newItem->fromMultiPart(multipart, U("_embedded."));
            setEmbedded( newItem );
        }
    }
    if(multipart->hasContent(U("count")))
    {
        setCount(ModelBase::doubleFromHttpContent(multipart->getContent(U("count"))));
    }
}

std::shared_ptr<Organisation__links> GroupCollection::getLinks() const
{
    return m__links;
}


void GroupCollection::setLinks(std::shared_ptr<Organisation__links> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool GroupCollection::linksIsSet() const
{
    return m__linksIsSet;
}

void GroupCollection::unset_links()
{
    m__linksIsSet = false;
}

std::shared_ptr<GroupCollection__embedded> GroupCollection::getEmbedded() const
{
    return m__embedded;
}


void GroupCollection::setEmbedded(std::shared_ptr<GroupCollection__embedded> value)
{
    m__embedded = value;
    m__embeddedIsSet = true;
}
bool GroupCollection::embeddedIsSet() const
{
    return m__embeddedIsSet;
}

void GroupCollection::unset_embedded()
{
    m__embeddedIsSet = false;
}

double GroupCollection::getCount() const
{
    return m_Count;
}


void GroupCollection::setCount(double value)
{
    m_Count = value;
    m_CountIsSet = true;
}
bool GroupCollection::countIsSet() const
{
    return m_CountIsSet;
}

void GroupCollection::unsetCount()
{
    m_CountIsSet = false;
}

}
}
}
}

