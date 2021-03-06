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



#include "Invitation.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Invitation::Invitation()
{
    m__linksIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Invitedby = utility::conversions::to_string_t("");
    m_InvitedbyIsSet = false;
    m_Invitedon = utility::conversions::to_string_t("");
    m_InvitedonIsSet = false;
    m_Userid = utility::conversions::to_string_t("");
    m_UseridIsSet = false;
    m__embeddedIsSet = false;
}

Invitation::~Invitation()
{
}

void Invitation::validate()
{
    // TODO: implement validation
}

web::json::value Invitation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InvitedbyIsSet)
    {
        val[utility::conversions::to_string_t("invitedby")] = ModelBase::toJson(m_Invitedby);
    }
    if(m_InvitedonIsSet)
    {
        val[utility::conversions::to_string_t("invitedon")] = ModelBase::toJson(m_Invitedon);
    }
    if(m_UseridIsSet)
    {
        val[utility::conversions::to_string_t("userid")] = ModelBase::toJson(m_Userid);
    }
    if(m__embeddedIsSet)
    {
        val[utility::conversions::to_string_t("_embedded")] = ModelBase::toJson(m__embedded);
    }

    return val;
}

void Invitation::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        if(!val[utility::conversions::to_string_t("_links")].is_null())
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromJson(val[utility::conversions::to_string_t("_links")]);
            setLinks( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    }
    if(val.has_field(utility::conversions::to_string_t("invitedby")))
    {
        setInvitedby(ModelBase::stringFromJson(val[utility::conversions::to_string_t("invitedby")]));
    }
    if(val.has_field(utility::conversions::to_string_t("invitedon")))
    {
        setInvitedon(ModelBase::stringFromJson(val[utility::conversions::to_string_t("invitedon")]));
    }
    if(val.has_field(utility::conversions::to_string_t("userid")))
    {
        setUserid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("userid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_embedded")))
    {
        if(!val[utility::conversions::to_string_t("_embedded")].is_null())
        {
            std::shared_ptr<Invitation__embedded> newItem(new Invitation__embedded());
            newItem->fromJson(val[utility::conversions::to_string_t("_embedded")]);
            setEmbedded( newItem );
        }
    }
}

void Invitation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
    }
    if(m_InvitedbyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("invitedby"), m_Invitedby));
        
    }
    if(m_InvitedonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("invitedon"), m_Invitedon));
        
    }
    if(m_UseridIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userid"), m_Userid));
        
    }
    if(m__embeddedIsSet)
    {
        if (m__embedded.get())
        {
            m__embedded->toMultipart(multipart, utility::conversions::to_string_t("_embedded."));
        }
        
    }
}

void Invitation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("invitedby")))
    {
        setInvitedby(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("invitedby"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("invitedon")))
    {
        setInvitedon(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("invitedon"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userid")))
    {
        setUserid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_embedded")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_embedded")))
        {
            std::shared_ptr<Invitation__embedded> newItem(new Invitation__embedded());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_embedded."));
            setEmbedded( newItem );
        }
    }
}

std::shared_ptr<Organisation__links> Invitation::getLinks() const
{
    return m__links;
}


void Invitation::setLinks(std::shared_ptr<Organisation__links> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool Invitation::linksIsSet() const
{
    return m__linksIsSet;
}

void Invitation::unset_links()
{
    m__linksIsSet = false;
}

utility::string_t Invitation::getId() const
{
    return m_Id;
}


void Invitation::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Invitation::idIsSet() const
{
    return m_IdIsSet;
}

void Invitation::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Invitation::getInvitedby() const
{
    return m_Invitedby;
}


void Invitation::setInvitedby(utility::string_t value)
{
    m_Invitedby = value;
    m_InvitedbyIsSet = true;
}
bool Invitation::invitedbyIsSet() const
{
    return m_InvitedbyIsSet;
}

void Invitation::unsetInvitedby()
{
    m_InvitedbyIsSet = false;
}

utility::string_t Invitation::getInvitedon() const
{
    return m_Invitedon;
}


void Invitation::setInvitedon(utility::string_t value)
{
    m_Invitedon = value;
    m_InvitedonIsSet = true;
}
bool Invitation::invitedonIsSet() const
{
    return m_InvitedonIsSet;
}

void Invitation::unsetInvitedon()
{
    m_InvitedonIsSet = false;
}

utility::string_t Invitation::getUserid() const
{
    return m_Userid;
}


void Invitation::setUserid(utility::string_t value)
{
    m_Userid = value;
    m_UseridIsSet = true;
}
bool Invitation::useridIsSet() const
{
    return m_UseridIsSet;
}

void Invitation::unsetUserid()
{
    m_UseridIsSet = false;
}

std::shared_ptr<Invitation__embedded> Invitation::getEmbedded() const
{
    return m__embedded;
}


void Invitation::setEmbedded(std::shared_ptr<Invitation__embedded> value)
{
    m__embedded = value;
    m__embeddedIsSet = true;
}
bool Invitation::embeddedIsSet() const
{
    return m__embeddedIsSet;
}

void Invitation::unset_embedded()
{
    m__embeddedIsSet = false;
}

}
}
}
}

