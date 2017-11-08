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



#include "SensingProcedurePost.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SensingProcedurePost::SensingProcedurePost()
{
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Organisationid = U("");
    m_OrganisationidIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
}

SensingProcedurePost::~SensingProcedurePost()
{
}

void SensingProcedurePost::validate()
{
    // TODO: implement validation
}

web::json::value SensingProcedurePost::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OrganisationidIsSet)
    {
        val[U("organisationid")] = ModelBase::toJson(m_Organisationid);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }

    return val;
}

void SensingProcedurePost::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
    if(val.has_field(U("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromJson(val[U("organisationid")]));
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
    }
}

void SensingProcedurePost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_OrganisationidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("organisationid"), m_Organisationid));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
}

void SensingProcedurePost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
    if(multipart->hasContent(U("organisationid")))
    {
        setOrganisationid(ModelBase::stringFromHttpContent(multipart->getContent(U("organisationid"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
}

utility::string_t SensingProcedurePost::getId() const
{
    return m_Id;
}


void SensingProcedurePost::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool SensingProcedurePost::idIsSet() const
{
    return m_IdIsSet;
}

void SensingProcedurePost::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t SensingProcedurePost::getName() const
{
    return m_Name;
}


void SensingProcedurePost::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool SensingProcedurePost::nameIsSet() const
{
    return m_NameIsSet;
}

void SensingProcedurePost::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t SensingProcedurePost::getOrganisationid() const
{
    return m_Organisationid;
}


void SensingProcedurePost::setOrganisationid(utility::string_t value)
{
    m_Organisationid = value;
    m_OrganisationidIsSet = true;
}
bool SensingProcedurePost::organisationidIsSet() const
{
    return m_OrganisationidIsSet;
}

void SensingProcedurePost::unsetOrganisationid()
{
    m_OrganisationidIsSet = false;
}

utility::string_t SensingProcedurePost::getDescription() const
{
    return m_Description;
}


void SensingProcedurePost::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool SensingProcedurePost::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void SensingProcedurePost::unsetDescription()
{
    m_DescriptionIsSet = false;
}

}
}
}
}

