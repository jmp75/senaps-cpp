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



#include "GroupPost.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GroupPost::GroupPost()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Organisationid = utility::conversions::to_string_t("");
    m_OrganisationidIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_GroupidsIsSet = false;
}

GroupPost::~GroupPost()
{
}

void GroupPost::validate()
{
    // TODO: implement validation
}

web::json::value GroupPost::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OrganisationidIsSet)
    {
        val[utility::conversions::to_string_t("organisationid")] = ModelBase::toJson(m_Organisationid);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Groupids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("groupids")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void GroupPost::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("organisationid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromJson(val[utility::conversions::to_string_t("description")]));
    }
    {
        m_Groupids.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("groupids")))
        {
        for( auto& item : val[utility::conversions::to_string_t("groupids")].as_array() )
        {
            m_Groupids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void GroupPost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
        
    }
    if(m_OrganisationidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("organisationid"), m_Organisationid));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Groupids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("groupids"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void GroupPost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("organisationid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    }
    {
        m_Groupids.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("groupids")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("groupids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Groupids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

utility::string_t GroupPost::getId() const
{
    return m_Id;
}


void GroupPost::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool GroupPost::idIsSet() const
{
    return m_IdIsSet;
}

void GroupPost::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t GroupPost::getName() const
{
    return m_Name;
}


void GroupPost::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool GroupPost::nameIsSet() const
{
    return m_NameIsSet;
}

void GroupPost::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t GroupPost::getOrganisationid() const
{
    return m_Organisationid;
}


void GroupPost::setOrganisationid(utility::string_t value)
{
    m_Organisationid = value;
    m_OrganisationidIsSet = true;
}
bool GroupPost::organisationidIsSet() const
{
    return m_OrganisationidIsSet;
}

void GroupPost::unsetOrganisationid()
{
    m_OrganisationidIsSet = false;
}

utility::string_t GroupPost::getDescription() const
{
    return m_Description;
}


void GroupPost::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool GroupPost::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void GroupPost::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::vector<utility::string_t>& GroupPost::getGroupids()
{
    return m_Groupids;
}

void GroupPost::setGroupids(std::vector<utility::string_t> value)
{
    m_Groupids = value;
    m_GroupidsIsSet = true;
}
bool GroupPost::groupidsIsSet() const
{
    return m_GroupidsIsSet;
}

void GroupPost::unsetGroupids()
{
    m_GroupidsIsSet = false;
}

}
}
}
}

