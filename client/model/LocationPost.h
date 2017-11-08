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
 * LocationPost.h
 *
 * 
 */

#ifndef LocationPost_H_
#define LocationPost_H_


#include "../ModelBase.h"

#include "GeoJSONPoint.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LocationPost
    : public ModelBase
{
public:
    LocationPost();
    virtual ~LocationPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LocationPost members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
        void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganisationid() const;
        void setOrganisationid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// A list of group identifiers for which this Location will be a member.
    /// </summary>
    std::vector<utility::string_t>& getGroupids();
    bool groupidsIsSet() const;
    void unsetGroupids();
    void setGroupids(std::vector<utility::string_t> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GeoJSONPoint> getGeoJson() const;
        void setGeoJson(std::shared_ptr<GeoJSONPoint> value);

protected:
    utility::string_t m_Id;
        utility::string_t m_Organisationid;
        utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::vector<utility::string_t> m_Groupids;
    bool m_GroupidsIsSet;
    std::shared_ptr<GeoJSONPoint> m_GeoJson;
    };

}
}
}
}

#endif /* LocationPost_H_ */
