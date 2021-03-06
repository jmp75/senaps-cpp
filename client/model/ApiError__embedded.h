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

/*
 * ApiError__embedded.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ApiError__embedded_H_
#define IO_SWAGGER_CLIENT_MODEL_ApiError__embedded_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "User.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ApiError__embedded
    : public ModelBase
{
public:
    ApiError__embedded();
    virtual ~ApiError__embedded();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ApiError__embedded members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<User> getUser() const;
    bool userIsSet() const;
    void unsetUser();
    void setUser(std::shared_ptr<User> value);
    /// <summary>
    /// 
    /// </summary>
    double getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);

protected:
    std::shared_ptr<User> m_User;
    bool m_UserIsSet;
    double m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ApiError__embedded_H_ */
