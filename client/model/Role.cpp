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



#include "Role.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Role::Role()
{
    m_Id = U("");
    m_IdIsSet = false;
    m__linksIsSet = false;
    m_PermissionsIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_Implied = false;
    m_ImpliedIsSet = false;
}

Role::~Role()
{
}

void Role::validate()
{
    // TODO: implement validation
}

web::json::value Role::toJson() const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Permissions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("permissions")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_ImpliedIsSet)
    {
        val[U("implied")] = ModelBase::toJson(m_Implied);
    }

    return val;
}

void Role::fromJson(web::json::value& val)
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
    {
        m_Permissions.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("permissions")))
        {
        for( auto& item : val[U("permissions")].as_array() )
        {
            if(item.is_null())
            {
                m_Permissions.push_back( std::shared_ptr<Permission>(nullptr) );
            }
            else
            {
                std::shared_ptr<Permission> newItem(new Permission());
                newItem->fromJson(item);
                m_Permissions.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
    if(val.has_field(U("implied")))
    {
        setImplied(ModelBase::boolFromJson(val[U("implied")]));
    }
}

void Role::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Permissions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("permissions"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_ImpliedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("implied"), m_Implied));
    }
}

void Role::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_Permissions.clear();
        if(multipart->hasContent(U("permissions")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("permissions"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Permissions.push_back( std::shared_ptr<Permission>(nullptr) );
            }
            else
            {
                std::shared_ptr<Permission> newItem(new Permission());
                newItem->fromJson(item);
                m_Permissions.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
    if(multipart->hasContent(U("implied")))
    {
        setImplied(ModelBase::boolFromHttpContent(multipart->getContent(U("implied"))));
    }
}

utility::string_t Role::getId() const
{
    return m_Id;
}


void Role::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Role::idIsSet() const
{
    return m_IdIsSet;
}

void Role::unsetId()
{
    m_IdIsSet = false;
}

std::shared_ptr<Organisation__links> Role::getLinks() const
{
    return m__links;
}


void Role::setLinks(std::shared_ptr<Organisation__links> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool Role::linksIsSet() const
{
    return m__linksIsSet;
}

void Role::unset_links()
{
    m__linksIsSet = false;
}

std::vector<std::shared_ptr<Permission>>& Role::getPermissions()
{
    return m_Permissions;
}

void Role::setPermissions(std::vector<std::shared_ptr<Permission>> value)
{
    m_Permissions = value;
    m_PermissionsIsSet = true;
}
bool Role::permissionsIsSet() const
{
    return m_PermissionsIsSet;
}

void Role::unsetPermissions()
{
    m_PermissionsIsSet = false;
}

utility::string_t Role::getType() const
{
    return m_Type;
}


void Role::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool Role::typeIsSet() const
{
    return m_TypeIsSet;
}

void Role::unsetType()
{
    m_TypeIsSet = false;
}

bool Role::isImplied() const
{
    return m_Implied;
}


void Role::setImplied(bool value)
{
    m_Implied = value;
    m_ImpliedIsSet = true;
}
bool Role::impliedIsSet() const
{
    return m_ImpliedIsSet;
}

void Role::unsetImplied()
{
    m_ImpliedIsSet = false;
}

}
}
}
}
