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



#include "SharePut.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SharePut::SharePut()
{
    m_Id = U("");
    m_IdIsSet = false;
    m_Organisationid = U("");
    m_OrganisationidIsSet = false;
    m_Groupid = U("");
    m_GroupidIsSet = false;
    m_Collectionid = U("");
    m_CollectionidIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
}

SharePut::~SharePut()
{
}

void SharePut::validate()
{
    // TODO: implement validation
}

web::json::value SharePut::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_OrganisationidIsSet)
    {
        val[U("organisationid")] = ModelBase::toJson(m_Organisationid);
    }
    if(m_GroupidIsSet)
    {
        val[U("groupid")] = ModelBase::toJson(m_Groupid);
    }
    if(m_CollectionidIsSet)
    {
        val[U("collectionid")] = ModelBase::toJson(m_Collectionid);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }

    return val;
}

void SharePut::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromJson(val[U("organisationid")]));
    }
    if(val.has_field(U("groupid")))
    {
        setGroupid(ModelBase::stringFromJson(val[U("groupid")]));
    }
    if(val.has_field(U("collectionid")))
    {
        setCollectionid(ModelBase::stringFromJson(val[U("collectionid")]));
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
    }
}

void SharePut::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_OrganisationidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("organisationid"), m_Organisationid));
        
    }
    if(m_GroupidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("groupid"), m_Groupid));
        
    }
    if(m_CollectionidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("collectionid"), m_Collectionid));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
}

void SharePut::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromHttpContent(multipart->getContent(U("organisationid"))));
    }
    if(multipart->hasContent(U("groupid")))
    {
        setGroupid(ModelBase::stringFromHttpContent(multipart->getContent(U("groupid"))));
    }
    if(multipart->hasContent(U("collectionid")))
    {
        setCollectionid(ModelBase::stringFromHttpContent(multipart->getContent(U("collectionid"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
}

utility::string_t SharePut::getId() const
{
    return m_Id;
}


void SharePut::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool SharePut::idIsSet() const
{
    return m_IdIsSet;
}

void SharePut::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t SharePut::getOrganisationid() const
{
    return m_Organisationid;
}


void SharePut::setOrganisationid(utility::string_t value)
{
    m_Organisationid = value;
    m_OrganisationidIsSet = true;
}
bool SharePut::organisationidIsSet() const
{
    return m_OrganisationidIsSet;
}

void SharePut::unsetOrganisationid()
{
    m_OrganisationidIsSet = false;
}

utility::string_t SharePut::getGroupid() const
{
    return m_Groupid;
}


void SharePut::setGroupid(utility::string_t value)
{
    m_Groupid = value;
    m_GroupidIsSet = true;
}
bool SharePut::groupidIsSet() const
{
    return m_GroupidIsSet;
}

void SharePut::unsetGroupid()
{
    m_GroupidIsSet = false;
}

utility::string_t SharePut::getCollectionid() const
{
    return m_Collectionid;
}


void SharePut::setCollectionid(utility::string_t value)
{
    m_Collectionid = value;
    m_CollectionidIsSet = true;
}
bool SharePut::collectionidIsSet() const
{
    return m_CollectionidIsSet;
}

void SharePut::unsetCollectionid()
{
    m_CollectionidIsSet = false;
}

utility::string_t SharePut::getDescription() const
{
    return m_Description;
}


void SharePut::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool SharePut::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void SharePut::unsetDescription()
{
    m_DescriptionIsSet = false;
}

}
}
}
}
