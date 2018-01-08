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



#include "GroupCollection__embedded.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GroupCollection__embedded::GroupCollection__embedded()
{
    m_GroupsIsSet = false;
}

GroupCollection__embedded::~GroupCollection__embedded()
{
}

void GroupCollection__embedded::validate()
{
    // TODO: implement validation
}

web::json::value GroupCollection__embedded::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Groups )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("groups")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void GroupCollection__embedded::fromJson(web::json::value& val)
{
    {
        m_Groups.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("groups")))
        {
        for( auto& item : val[utility::conversions::to_string_t("groups")].as_array() )
        {
            if(item.is_null())
            {
                m_Groups.push_back( std::shared_ptr<Group>(nullptr) );
            }
            else
            {
                std::shared_ptr<Group> newItem(new Group());
                newItem->fromJson(item);
                m_Groups.push_back( newItem );
            }
        }
        }
    }
}

void GroupCollection__embedded::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Groups )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("groups"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void GroupCollection__embedded::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Groups.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("groups")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("groups"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Groups.push_back( std::shared_ptr<Group>(nullptr) );
            }
            else
            {
                std::shared_ptr<Group> newItem(new Group());
                newItem->fromJson(item);
                m_Groups.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<Group>>& GroupCollection__embedded::getGroups()
{
    return m_Groups;
}

void GroupCollection__embedded::setGroups(std::vector<std::shared_ptr<Group>> value)
{
    m_Groups = value;
    m_GroupsIsSet = true;
}
bool GroupCollection__embedded::groupsIsSet() const
{
    return m_GroupsIsSet;
}

void GroupCollection__embedded::unsetGroups()
{
    m_GroupsIsSet = false;
}

}
}
}
}

