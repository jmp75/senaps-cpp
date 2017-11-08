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
 * StreamMetadata.h
 *
 * 
 */

#ifndef StreamMetadata_H_
#define StreamMetadata_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  StreamMetadata
    : public ModelBase
{
public:
    StreamMetadata();
    virtual ~StreamMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// StreamMetadata members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
        void setType(utility::string_t value);
    /// <summary>
    /// (Only applicable for ScalarStreamMetaData) Use the /vocabulary API to search for an applicable term. If you can&#39;t find a suitable term then contact the SensorCloud team to get your observed property added.
    /// </summary>
    utility::string_t getObservedProperty() const;
        void setObservedProperty(utility::string_t value);
    /// <summary>
    /// (Only applicable for GeoLocationStreamMetaData) Use the /vocabulary API to search for an applicable term. If you can&#39;t find a suitable term then contact SensorCloud team to get your unit of measure added.
    /// </summary>
    utility::string_t getUnitOfMeasure() const;
        void setUnitOfMeasure(utility::string_t value);
    /// <summary>
    /// Only &#39;Continuous&#39; and &#39;Discontinuous&#39; interpolation types are valid for GeoLocationValue resulttype.
    /// </summary>
    utility::string_t getInterpolationType() const;
        void setInterpolationType(utility::string_t value);
    /// <summary>
    /// (Only applicable for ScalarStreamMetaData). Does this data stream represent an accumulated total.
    /// </summary>
    bool isCummulative() const;
    bool cummulativeIsSet() const;
    void unsetCummulative();
    void setCummulative(bool value);
    /// <summary>
    /// (Only applicable for cummulative streams). Specify the accumulation interval using ISO8601 duration format. Use the most appropriate calendar unit.
    /// </summary>
    utility::string_t getAccumulationInterval() const;
    bool accumulationIntervalIsSet() const;
    void unsetAccumulationInterval();
    void setAccumulationInterval(utility::string_t value);
    /// <summary>
    /// (Only applicable for cummulative streams). Specify the accumulation anchor using ISO8601 format.
    /// </summary>
    utility::string_t getAccumulationAnchor() const;
    bool accumulationAnchorIsSet() const;
    void unsetAccumulationAnchor();
    void setAccumulationAnchor(utility::string_t value);
    /// <summary>
    /// Timezone of data stream. Required for cummulative scalar streams.
    /// </summary>
    utility::string_t getTimezone() const;
    bool timezoneIsSet() const;
    void unsetTimezone();
    void setTimezone(utility::string_t value);

protected:
    utility::string_t m_Type;
        utility::string_t m_ObservedProperty;
        utility::string_t m_UnitOfMeasure;
        utility::string_t m_InterpolationType;
        bool m_Cummulative;
    bool m_CummulativeIsSet;
    utility::string_t m_AccumulationInterval;
    bool m_AccumulationIntervalIsSet;
    utility::string_t m_AccumulationAnchor;
    bool m_AccumulationAnchorIsSet;
    utility::string_t m_Timezone;
    bool m_TimezoneIsSet;
};

}
}
}
}

#endif /* StreamMetadata_H_ */
