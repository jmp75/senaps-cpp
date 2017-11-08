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



#include "User.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

User::User()
{
    m_Id = U("");
    m_IdIsSet = false;
    m__linksIsSet = false;
    m__embeddedIsSet = false;
}

User::~User()
{
}

void User::validate()
{
    // TODO: implement validation
}

web::json::value User::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m__linksIsSet)
    {
        val[U("_links")] = ModelBase::toJson(m__links);
    }
    if(m__embeddedIsSet)
    {
        val[U("_embedded")] = ModelBase::toJson(m__embedded);
    }

    return val;
}

void User::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
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
            std::shared_ptr<RoleCollection__embedded> newItem(new RoleCollection__embedded());
            newItem->fromJson(val[U("_embedded")]);
            setEmbedded( newItem );
        }
    }
}

void User::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
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
}

void User::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
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
            std::shared_ptr<RoleCollection__embedded> newItem(new RoleCollection__embedded());
            newItem->fromMultiPart(multipart, U("_embedded."));
            setEmbedded( newItem );
        }
    }
}

utility::string_t User::getId() const
{
    return m_Id;
}


void User::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool User::idIsSet() const
{
    return m_IdIsSet;
}

void User::unsetId()
{
    m_IdIsSet = false;
}

std::shared_ptr<Organisation__links> User::getLinks() const
{
    return m__links;
}


void User::setLinks(std::shared_ptr<Organisation__links> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool User::linksIsSet() const
{
    return m__linksIsSet;
}

void User::unset_links()
{
    m__linksIsSet = false;
}

std::shared_ptr<RoleCollection__embedded> User::getEmbedded() const
{
    return m__embedded;
}


void User::setEmbedded(std::shared_ptr<RoleCollection__embedded> value)
{
    m__embedded = value;
    m__embeddedIsSet = true;
}
bool User::embeddedIsSet() const
{
    return m__embeddedIsSet;
}

void User::unset_embedded()
{
    m__embeddedIsSet = false;
}

}
}
}
}

