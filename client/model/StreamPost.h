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
 * StreamPost.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_StreamPost_H_
#define IO_SWAGGER_CLIENT_MODEL_StreamPost_H_


#include "../ModelBase.h"

#include "StreamMetadata.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  StreamPost
    : public ModelBase
{
public:
    StreamPost();
    virtual ~StreamPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// StreamPost members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
        void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResulttype() const;
        void setResulttype(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganisationid() const;
        void setOrganisationid(utility::string_t value);
    /// <summary>
    /// A list of group identifiers for which this stream will be a member.
    /// </summary>
    std::vector<utility::string_t>& getGroupids();
    bool groupidsIsSet() const;
    void unsetGroupids();
    void setGroupids(std::vector<utility::string_t> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLocationid() const;
    bool locationidIsSet() const;
    void unsetLocationid();
    void setLocationid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProcedureid() const;
    bool procedureidIsSet() const;
    void unsetProcedureid();
    void setProcedureid(utility::string_t value);
    /// <summary>
    /// Expected sample period in ISO8601 duration format.
    /// </summary>
    utility::string_t getSamplePeriod() const;
        void setSamplePeriod(utility::string_t value);
    /// <summary>
    /// Expected reporting period (time between updates for new samples) in ISO8601 duration format.
    /// </summary>
    utility::string_t getReportingPeriod() const;
        void setReportingPeriod(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StreamMetadata> getStreamMetadata() const;
    bool streamMetadataIsSet() const;
    void unsetStreamMetadata();
    void setStreamMetadata(std::shared_ptr<StreamMetadata> value);

protected:
    utility::string_t m_Id;
        utility::string_t m_Resulttype;
        utility::string_t m_Organisationid;
        std::vector<utility::string_t> m_Groupids;
    bool m_GroupidsIsSet;
    utility::string_t m_Locationid;
    bool m_LocationidIsSet;
    utility::string_t m_Procedureid;
    bool m_ProcedureidIsSet;
    utility::string_t m_SamplePeriod;
        utility::string_t m_ReportingPeriod;
        std::shared_ptr<StreamMetadata> m_StreamMetadata;
    bool m_StreamMetadataIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_StreamPost_H_ */
