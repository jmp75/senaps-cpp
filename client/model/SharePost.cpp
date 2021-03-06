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



#include "SharePost.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SharePost::SharePost()
{
    m_Organisationid = utility::conversions::to_string_t("");
    m_OrganisationidIsSet = false;
    m_Groupid = utility::conversions::to_string_t("");
    m_GroupidIsSet = false;
    m_Collectionid = utility::conversions::to_string_t("");
    m_CollectionidIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
}

SharePost::~SharePost()
{
}

void SharePost::validate()
{
    // TODO: implement validation
}

web::json::value SharePost::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_OrganisationidIsSet)
    {
        val[utility::conversions::to_string_t("organisationid")] = ModelBase::toJson(m_Organisationid);
    }
    if(m_GroupidIsSet)
    {
        val[utility::conversions::to_string_t("groupid")] = ModelBase::toJson(m_Groupid);
    }
    if(m_CollectionidIsSet)
    {
        val[utility::conversions::to_string_t("collectionid")] = ModelBase::toJson(m_Collectionid);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }

    return val;
}

void SharePost::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("organisationid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("groupid")))
    {
        setGroupid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("groupid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("collectionid")))
    {
        setCollectionid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("collectionid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromJson(val[utility::conversions::to_string_t("description")]));
    }
}

void SharePost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_OrganisationidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("organisationid"), m_Organisationid));
        
    }
    if(m_GroupidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("groupid"), m_Groupid));
        
    }
    if(m_CollectionidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("collectionid"), m_Collectionid));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
        
    }
}

void SharePost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("organisationid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("groupid")))
    {
        setGroupid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("groupid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("collectionid")))
    {
        setCollectionid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("collectionid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    }
}

utility::string_t SharePost::getOrganisationid() const
{
    return m_Organisationid;
}


void SharePost::setOrganisationid(utility::string_t value)
{
    m_Organisationid = value;
    m_OrganisationidIsSet = true;
}
bool SharePost::organisationidIsSet() const
{
    return m_OrganisationidIsSet;
}

void SharePost::unsetOrganisationid()
{
    m_OrganisationidIsSet = false;
}

utility::string_t SharePost::getGroupid() const
{
    return m_Groupid;
}


void SharePost::setGroupid(utility::string_t value)
{
    m_Groupid = value;
    m_GroupidIsSet = true;
}
bool SharePost::groupidIsSet() const
{
    return m_GroupidIsSet;
}

void SharePost::unsetGroupid()
{
    m_GroupidIsSet = false;
}

utility::string_t SharePost::getCollectionid() const
{
    return m_Collectionid;
}


void SharePost::setCollectionid(utility::string_t value)
{
    m_Collectionid = value;
    m_CollectionidIsSet = true;
}
bool SharePost::collectionidIsSet() const
{
    return m_CollectionidIsSet;
}

void SharePost::unsetCollectionid()
{
    m_CollectionidIsSet = false;
}

utility::string_t SharePost::getDescription() const
{
    return m_Description;
}


void SharePost::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool SharePost::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void SharePost::unsetDescription()
{
    m_DescriptionIsSet = false;
}

}
}
}
}

