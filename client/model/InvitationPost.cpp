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



#include "InvitationPost.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

InvitationPost::InvitationPost()
{
    m_Userid = utility::conversions::to_string_t("");
    m_UseridIsSet = false;
    m_Organisationid = utility::conversions::to_string_t("");
    m_OrganisationidIsSet = false;
    m_RoleidsIsSet = false;
}

InvitationPost::~InvitationPost()
{
}

void InvitationPost::validate()
{
    // TODO: implement validation
}

web::json::value InvitationPost::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_UseridIsSet)
    {
        val[utility::conversions::to_string_t("userid")] = ModelBase::toJson(m_Userid);
    }
    if(m_OrganisationidIsSet)
    {
        val[utility::conversions::to_string_t("organisationid")] = ModelBase::toJson(m_Organisationid);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Roleids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("roleids")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void InvitationPost::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("userid")))
    {
        setUserid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("userid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("organisationid")]));
    }
    {
        m_Roleids.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("roleids")))
        {
        for( auto& item : val[utility::conversions::to_string_t("roleids")].as_array() )
        {
            m_Roleids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void InvitationPost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_UseridIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userid"), m_Userid));
        
    }
    if(m_OrganisationidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("organisationid"), m_Organisationid));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Roleids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("roleids"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void InvitationPost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("userid")))
    {
        setUserid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("organisationid"))));
    }
    {
        m_Roleids.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("roleids")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("roleids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Roleids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

utility::string_t InvitationPost::getUserid() const
{
    return m_Userid;
}


void InvitationPost::setUserid(utility::string_t value)
{
    m_Userid = value;
    m_UseridIsSet = true;
}
bool InvitationPost::useridIsSet() const
{
    return m_UseridIsSet;
}

void InvitationPost::unsetUserid()
{
    m_UseridIsSet = false;
}

utility::string_t InvitationPost::getOrganisationid() const
{
    return m_Organisationid;
}


void InvitationPost::setOrganisationid(utility::string_t value)
{
    m_Organisationid = value;
    m_OrganisationidIsSet = true;
}
bool InvitationPost::organisationidIsSet() const
{
    return m_OrganisationidIsSet;
}

void InvitationPost::unsetOrganisationid()
{
    m_OrganisationidIsSet = false;
}

std::vector<utility::string_t>& InvitationPost::getRoleids()
{
    return m_Roleids;
}

void InvitationPost::setRoleids(std::vector<utility::string_t> value)
{
    m_Roleids = value;
    m_RoleidsIsSet = true;
}
bool InvitationPost::roleidsIsSet() const
{
    return m_RoleidsIsSet;
}

void InvitationPost::unsetRoleids()
{
    m_RoleidsIsSet = false;
}

}
}
}
}

