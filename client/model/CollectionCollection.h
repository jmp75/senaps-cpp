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
 * CollectionCollection.h
 *
 * 
 */

#ifndef CollectionCollection_H_
#define CollectionCollection_H_


#include "../ModelBase.h"

#include "Organisation__links.h"
#include "CollectionCollection__embedded.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CollectionCollection
    : public ModelBase
{
public:
    CollectionCollection();
    virtual ~CollectionCollection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CollectionCollection members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Organisation__links> getLinks() const;
    bool linksIsSet() const;
    void unset_links();
    void setLinks(std::shared_ptr<Organisation__links> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CollectionCollection__embedded> getEmbedded() const;
    bool embeddedIsSet() const;
    void unset_embedded();
    void setEmbedded(std::shared_ptr<CollectionCollection__embedded> value);
    /// <summary>
    /// 
    /// </summary>
    double getCount() const;
    bool countIsSet() const;
    void unsetCount();
    void setCount(double value);

protected:
    std::shared_ptr<Organisation__links> m__links;
    bool m__linksIsSet;
    std::shared_ptr<CollectionCollection__embedded> m__embedded;
    bool m__embeddedIsSet;
    double m_Count;
    bool m_CountIsSet;
};

}
}
}
}

#endif /* CollectionCollection_H_ */