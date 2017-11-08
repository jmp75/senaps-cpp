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



#include "RolePost.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RolePost::RolePost()
{
    m_Id = U("");
    m_Type = U("");
    m_Organisationid = U("");
    m_Groupid = U("");
    m_GroupidIsSet = false;
    m_Implied = false;
    m_ImpliedIsSet = false;
}

RolePost::~RolePost()
{
}

void RolePost::validate()
{
    // TODO: implement validation
}

web::json::value RolePost::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("id")] = ModelBase::toJson(m_Id);
    val[U("type")] = ModelBase::toJson(m_Type);
    val[U("organisationid")] = ModelBase::toJson(m_Organisationid);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Permissions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("permissions")] = web::json::value::array(jsonArray);
    }
    if(m_GroupidIsSet)
    {
        val[U("groupid")] = ModelBase::toJson(m_Groupid);
    }
    if(m_ImpliedIsSet)
    {
        val[U("implied")] = ModelBase::toJson(m_Implied);
    }

    return val;
}

void RolePost::fromJson(web::json::value& val)
{
    setId(ModelBase::stringFromJson(val[U("id")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    setOrganisationid(ModelBase::stringFromJson(val[U("organisationid")]));
    {
        m_Permissions.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[U("permissions")].as_array() )
        {
            if(item.is_null())
            {
                m_Permissions.push_back( std::shared_ptr<RolePost_permissions>(nullptr) );
            }
            else
            {
                std::shared_ptr<RolePost_permissions> newItem(new RolePost_permissions());
                newItem->fromJson(item);
                m_Permissions.push_back( newItem );
            }
        }
    }
    if(val.has_field(U("groupid")))
    {
        setGroupid(ModelBase::stringFromJson(val[U("groupid")]));
    }
    if(val.has_field(U("implied")))
    {
        setImplied(ModelBase::boolFromJson(val[U("implied")]));
    }
}

void RolePost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("organisationid"), m_Organisationid));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Permissions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("permissions"), web::json::value::array(jsonArray), U("application/json")));
            }
    if(m_GroupidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("groupid"), m_Groupid));
        
    }
    if(m_ImpliedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("implied"), m_Implied));
    }
}

void RolePost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    setOrganisationid(ModelBase::stringFromHttpContent(multipart->getContent(U("organisationid"))));
    {
        m_Permissions.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("permissions"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Permissions.push_back( std::shared_ptr<RolePost_permissions>(nullptr) );
            }
            else
            {
                std::shared_ptr<RolePost_permissions> newItem(new RolePost_permissions());
                newItem->fromJson(item);
                m_Permissions.push_back( newItem );
            }
        }
    }
    if(multipart->hasContent(U("groupid")))
    {
        setGroupid(ModelBase::stringFromHttpContent(multipart->getContent(U("groupid"))));
    }
    if(multipart->hasContent(U("implied")))
    {
        setImplied(ModelBase::boolFromHttpContent(multipart->getContent(U("implied"))));
    }
}

utility::string_t RolePost::getId() const
{
    return m_Id;
}


void RolePost::setId(utility::string_t value)
{
    m_Id = value;
    
}
utility::string_t RolePost::getType() const
{
    return m_Type;
}


void RolePost::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t RolePost::getOrganisationid() const
{
    return m_Organisationid;
}


void RolePost::setOrganisationid(utility::string_t value)
{
    m_Organisationid = value;
    
}
std::vector<std::shared_ptr<RolePost_permissions>>& RolePost::getPermissions()
{
    return m_Permissions;
}

void RolePost::setPermissions(std::vector<std::shared_ptr<RolePost_permissions>> value)
{
    m_Permissions = value;
    
}
utility::string_t RolePost::getGroupid() const
{
    return m_Groupid;
}


void RolePost::setGroupid(utility::string_t value)
{
    m_Groupid = value;
    m_GroupidIsSet = true;
}
bool RolePost::groupidIsSet() const
{
    return m_GroupidIsSet;
}

void RolePost::unsetGroupid()
{
    m_GroupidIsSet = false;
}

bool RolePost::isImplied() const
{
    return m_Implied;
}


void RolePost::setImplied(bool value)
{
    m_Implied = value;
    m_ImpliedIsSet = true;
}
bool RolePost::impliedIsSet() const
{
    return m_ImpliedIsSet;
}

void RolePost::unsetImplied()
{
    m_ImpliedIsSet = false;
}

}
}
}
}

