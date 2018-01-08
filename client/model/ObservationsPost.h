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
 * ObservationsPost.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ObservationsPost_H_
#define IO_SWAGGER_CLIENT_MODEL_ObservationsPost_H_


#include "../ModelBase.h"

#include "UnivariateResult.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ObservationsPost
    : public ModelBase
{
public:
    ObservationsPost();
    virtual ~ObservationsPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ObservationsPost members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<UnivariateResult>>& getResults();
    bool resultsIsSet() const;
    void unsetResults();
    void setResults(std::vector<std::shared_ptr<UnivariateResult>> value);

protected:
    std::vector<std::shared_ptr<UnivariateResult>> m_Results;
    bool m_ResultsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ObservationsPost_H_ */
