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

/*
 * Invitation.h
 *
 * 
 */

#ifndef Invitation_H_
#define Invitation_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Invitation__embedded.h"
#include "Organisation__links.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Invitation
    : public ModelBase
{
public:
    Invitation();
    virtual ~Invitation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Invitation members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Organisation__links> getLinks() const;
    bool linksIsSet() const;
    void unset_links();
    void setLinks(std::shared_ptr<Organisation__links> value);
    /// <summary>
    /// The unique identifier for the invitation
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The user who sent the invitation.
    /// </summary>
    utility::string_t getInvitedby() const;
    bool invitedbyIsSet() const;
    void unsetInvitedby();
    void setInvitedby(utility::string_t value);
    /// <summary>
    /// The date the invitation was sent. (iso8601 format)
    /// </summary>
    utility::string_t getInvitedon() const;
    bool invitedonIsSet() const;
    void unsetInvitedon();
    void setInvitedon(utility::string_t value);
    /// <summary>
    /// The userid of the invited user.
    /// </summary>
    utility::string_t getUserid() const;
    bool useridIsSet() const;
    void unsetUserid();
    void setUserid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Invitation__embedded> getEmbedded() const;
    bool embeddedIsSet() const;
    void unset_embedded();
    void setEmbedded(std::shared_ptr<Invitation__embedded> value);

protected:
    std::shared_ptr<Organisation__links> m__links;
    bool m__linksIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Invitedby;
    bool m_InvitedbyIsSet;
    utility::string_t m_Invitedon;
    bool m_InvitedonIsSet;
    utility::string_t m_Userid;
    bool m_UseridIsSet;
    std::shared_ptr<Invitation__embedded> m__embedded;
    bool m__embeddedIsSet;
};

}
}
}
}

#endif /* Invitation_H_ */