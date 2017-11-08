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



#include "UserPost.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UserPost::UserPost()
{
    m_Id = U("");
    m_IdIsSet = false;
    m_RoleidsIsSet = false;
}

UserPost::~UserPost()
{
}

void UserPost::validate()
{
    // TODO: implement validation
}

web::json::value UserPost::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Roleids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("roleids")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void UserPost::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    {
        m_Roleids.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("roleids")))
        {
        for( auto& item : val[U("roleids")].as_array() )
        {
            m_Roleids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void UserPost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Roleids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("roleids"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
}

void UserPost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_Roleids.clear();
        if(multipart->hasContent(U("roleids")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("roleids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Roleids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

utility::string_t UserPost::getId() const
{
    return m_Id;
}


void UserPost::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool UserPost::idIsSet() const
{
    return m_IdIsSet;
}

void UserPost::unsetId()
{
    m_IdIsSet = false;
}

std::vector<utility::string_t>& UserPost::getRoleids()
{
    return m_Roleids;
}

void UserPost::setRoleids(std::vector<utility::string_t> value)
{
    m_Roleids = value;
    m_RoleidsIsSet = true;
}
bool UserPost::roleidsIsSet() const
{
    return m_RoleidsIsSet;
}

void UserPost::unsetRoleids()
{
    m_RoleidsIsSet = false;
}

}
}
}
}

