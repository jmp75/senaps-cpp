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
 * SharePost.h
 *
 * 
 */

#ifndef SharePost_H_
#define SharePost_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SharePost
    : public ModelBase
{
public:
    SharePost();
    virtual ~SharePost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SharePost members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganisationid() const;
    bool organisationidIsSet() const;
    void unsetOrganisationid();
    void setOrganisationid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGroupid() const;
    bool groupidIsSet() const;
    void unsetGroupid();
    void setGroupid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCollectionid() const;
    bool collectionidIsSet() const;
    void unsetCollectionid();
    void setCollectionid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);

protected:
    utility::string_t m_Organisationid;
    bool m_OrganisationidIsSet;
    utility::string_t m_Groupid;
    bool m_GroupidIsSet;
    utility::string_t m_Collectionid;
    bool m_CollectionidIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
};

}
}
}
}

#endif /* SharePost_H_ */