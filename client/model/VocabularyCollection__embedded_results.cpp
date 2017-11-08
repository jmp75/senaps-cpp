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



#include "VocabularyCollection__embedded_results.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

VocabularyCollection__embedded_results::VocabularyCollection__embedded_results()
{
    m_Label = U("");
    m_LabelIsSet = false;
    m__linksIsSet = false;
}

VocabularyCollection__embedded_results::~VocabularyCollection__embedded_results()
{
}

void VocabularyCollection__embedded_results::validate()
{
    // TODO: implement validation
}

web::json::value VocabularyCollection__embedded_results::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_LabelIsSet)
    {
        val[U("label")] = ModelBase::toJson(m_Label);
    }
    if(m__linksIsSet)
    {
        val[U("_links")] = ModelBase::toJson(m__links);
    }

    return val;
}

void VocabularyCollection__embedded_results::fromJson(web::json::value& val)
{
    if(val.has_field(U("label")))
    {
        setLabel(ModelBase::stringFromJson(val[U("label")]));
    }
    if(val.has_field(U("_links")))
    {
        if(!val[U("_links")].is_null())
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromJson(val[U("_links")]);
            setLinks( newItem );
        }
    }
}

void VocabularyCollection__embedded_results::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_LabelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("label"), m_Label));
        
    }
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, U("_links."));
        }
        
    }
}

void VocabularyCollection__embedded_results::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("label")))
    {
        setLabel(ModelBase::stringFromHttpContent(multipart->getContent(U("label"))));
    }
    if(multipart->hasContent(U("_links")))
    {
        if(multipart->hasContent(U("_links")))
        {
            std::shared_ptr<Organisation__links> newItem(new Organisation__links());
            newItem->fromMultiPart(multipart, U("_links."));
            setLinks( newItem );
        }
    }
}

utility::string_t VocabularyCollection__embedded_results::getLabel() const
{
    return m_Label;
}


void VocabularyCollection__embedded_results::setLabel(utility::string_t value)
{
    m_Label = value;
    m_LabelIsSet = true;
}
bool VocabularyCollection__embedded_results::labelIsSet() const
{
    return m_LabelIsSet;
}

void VocabularyCollection__embedded_results::unsetLabel()
{
    m_LabelIsSet = false;
}

std::shared_ptr<Organisation__links> VocabularyCollection__embedded_results::getLinks() const
{
    return m__links;
}


void VocabularyCollection__embedded_results::setLinks(std::shared_ptr<Organisation__links> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool VocabularyCollection__embedded_results::linksIsSet() const
{
    return m__linksIsSet;
}

void VocabularyCollection__embedded_results::unset_links()
{
    m__linksIsSet = false;
}

}
}
}
}

