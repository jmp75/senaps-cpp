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
 * PlatformPost.h
 *
 * 
 */

#ifndef PlatformPost_H_
#define PlatformPost_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "PlatformDeployment.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PlatformPost
    : public ModelBase
{
public:
    PlatformPost();
    virtual ~PlatformPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PlatformPost members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganisationid() const;
    bool organisationidIsSet() const;
    void unsetOrganisationid();
    void setOrganisationid(utility::string_t value);
    /// <summary>
    /// A list of group identifiers for which this stream will be a member.
    /// </summary>
    std::vector<utility::string_t>& getGroupids();
    bool groupidsIsSet() const;
    void unsetGroupids();
    void setGroupids(std::vector<utility::string_t> value);
    /// <summary>
    /// Streams linked directly to platform
    /// </summary>
    std::vector<utility::string_t>& getStreamids();
    bool streamidsIsSet() const;
    void unsetStreamids();
    void setStreamids(std::vector<utility::string_t> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<PlatformDeployment>>& getDeployments();
    bool deploymentsIsSet() const;
    void unsetDeployments();
    void setDeployments(std::vector<std::shared_ptr<PlatformDeployment>> value);

protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Organisationid;
    bool m_OrganisationidIsSet;
    std::vector<utility::string_t> m_Groupids;
    bool m_GroupidsIsSet;
    std::vector<utility::string_t> m_Streamids;
    bool m_StreamidsIsSet;
    std::vector<std::shared_ptr<PlatformDeployment>> m_Deployments;
    bool m_DeploymentsIsSet;
};

}
}
}
}

#endif /* PlatformPost_H_ */
