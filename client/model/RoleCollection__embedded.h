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
 * RoleCollection__embedded.h
 *
 * 
 */

#ifndef RoleCollection__embedded_H_
#define RoleCollection__embedded_H_


#include "../ModelBase.h"

#include "Role.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RoleCollection__embedded
    : public ModelBase
{
public:
    RoleCollection__embedded();
    virtual ~RoleCollection__embedded();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RoleCollection__embedded members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Role>>& getRoles();
    bool rolesIsSet() const;
    void unsetRoles();
    void setRoles(std::vector<std::shared_ptr<Role>> value);

protected:
    std::vector<std::shared_ptr<Role>> m_Roles;
    bool m_RolesIsSet;
};

}
}
}
}

#endif /* RoleCollection__embedded_H_ */
