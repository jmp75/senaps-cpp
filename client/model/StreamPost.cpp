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



#include "StreamPost.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StreamPost::StreamPost()
{
    m_Id = utility::conversions::to_string_t("");
    m_Resulttype = utility::conversions::to_string_t("");
    m_Organisationid = utility::conversions::to_string_t("");
    m_GroupidsIsSet = false;
    m_Locationid = utility::conversions::to_string_t("");
    m_LocationidIsSet = false;
    m_Procedureid = utility::conversions::to_string_t("");
    m_ProcedureidIsSet = false;
    m_SamplePeriod = utility::conversions::to_string_t("");
    m_ReportingPeriod = utility::conversions::to_string_t("");
    m_StreamMetadataIsSet = false;
}

StreamPost::~StreamPost()
{
}

void StreamPost::validate()
{
    // TODO: implement validation
}

web::json::value StreamPost::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("resulttype")] = ModelBase::toJson(m_Resulttype);
    val[utility::conversions::to_string_t("organisationid")] = ModelBase::toJson(m_Organisationid);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Groupids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("groupids")] = web::json::value::array(jsonArray);
        }
    }
    if(m_LocationidIsSet)
    {
        val[utility::conversions::to_string_t("locationid")] = ModelBase::toJson(m_Locationid);
    }
    if(m_ProcedureidIsSet)
    {
        val[utility::conversions::to_string_t("procedureid")] = ModelBase::toJson(m_Procedureid);
    }
    val[utility::conversions::to_string_t("samplePeriod")] = ModelBase::toJson(m_SamplePeriod);
    val[utility::conversions::to_string_t("reportingPeriod")] = ModelBase::toJson(m_ReportingPeriod);
    if(m_StreamMetadataIsSet)
    {
        val[utility::conversions::to_string_t("streamMetadata")] = ModelBase::toJson(m_StreamMetadata);
    }

    return val;
}

void StreamPost::fromJson(web::json::value& val)
{
    setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    setResulttype(ModelBase::stringFromJson(val[utility::conversions::to_string_t("resulttype")]));
    setOrganisationid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("organisationid")]));
    {
        m_Groupids.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("groupids")))
        {
        for( auto& item : val[utility::conversions::to_string_t("groupids")].as_array() )
        {
            m_Groupids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locationid")))
    {
        setLocationid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("locationid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("procedureid")))
    {
        setProcedureid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("procedureid")]));
    }
    setSamplePeriod(ModelBase::stringFromJson(val[utility::conversions::to_string_t("samplePeriod")]));
    setReportingPeriod(ModelBase::stringFromJson(val[utility::conversions::to_string_t("reportingPeriod")]));
    if(val.has_field(utility::conversions::to_string_t("streamMetadata")))
    {
        if(!val[utility::conversions::to_string_t("streamMetadata")].is_null())
        {
            std::shared_ptr<StreamMetadata> newItem(new StreamMetadata());
            newItem->fromJson(val[utility::conversions::to_string_t("streamMetadata")]);
            setStreamMetadata( newItem );
        }
    }
}

void StreamPost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resulttype"), m_Resulttype));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("organisationid"), m_Organisationid));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Groupids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("groupids"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_LocationidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locationid"), m_Locationid));
        
    }
    if(m_ProcedureidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("procedureid"), m_Procedureid));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("samplePeriod"), m_SamplePeriod));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportingPeriod"), m_ReportingPeriod));
    if(m_StreamMetadataIsSet)
    {
        if (m_StreamMetadata.get())
        {
            m_StreamMetadata->toMultipart(multipart, utility::conversions::to_string_t("streamMetadata."));
        }
        
    }
}

void StreamPost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setResulttype(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("resulttype"))));
    setOrganisationid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("organisationid"))));
    {
        m_Groupids.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("groupids")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("groupids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Groupids.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("locationid")))
    {
        setLocationid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("locationid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("procedureid")))
    {
        setProcedureid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("procedureid"))));
    }
    setSamplePeriod(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("samplePeriod"))));
    setReportingPeriod(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportingPeriod"))));
    if(multipart->hasContent(utility::conversions::to_string_t("streamMetadata")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("streamMetadata")))
        {
            std::shared_ptr<StreamMetadata> newItem(new StreamMetadata());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("streamMetadata."));
            setStreamMetadata( newItem );
        }
    }
}

utility::string_t StreamPost::getId() const
{
    return m_Id;
}


void StreamPost::setId(utility::string_t value)
{
    m_Id = value;
    
}
utility::string_t StreamPost::getResulttype() const
{
    return m_Resulttype;
}


void StreamPost::setResulttype(utility::string_t value)
{
    m_Resulttype = value;
    
}
utility::string_t StreamPost::getOrganisationid() const
{
    return m_Organisationid;
}


void StreamPost::setOrganisationid(utility::string_t value)
{
    m_Organisationid = value;
    
}
std::vector<utility::string_t>& StreamPost::getGroupids()
{
    return m_Groupids;
}

void StreamPost::setGroupids(std::vector<utility::string_t> value)
{
    m_Groupids = value;
    m_GroupidsIsSet = true;
}
bool StreamPost::groupidsIsSet() const
{
    return m_GroupidsIsSet;
}

void StreamPost::unsetGroupids()
{
    m_GroupidsIsSet = false;
}

utility::string_t StreamPost::getLocationid() const
{
    return m_Locationid;
}


void StreamPost::setLocationid(utility::string_t value)
{
    m_Locationid = value;
    m_LocationidIsSet = true;
}
bool StreamPost::locationidIsSet() const
{
    return m_LocationidIsSet;
}

void StreamPost::unsetLocationid()
{
    m_LocationidIsSet = false;
}

utility::string_t StreamPost::getProcedureid() const
{
    return m_Procedureid;
}


void StreamPost::setProcedureid(utility::string_t value)
{
    m_Procedureid = value;
    m_ProcedureidIsSet = true;
}
bool StreamPost::procedureidIsSet() const
{
    return m_ProcedureidIsSet;
}

void StreamPost::unsetProcedureid()
{
    m_ProcedureidIsSet = false;
}

utility::string_t StreamPost::getSamplePeriod() const
{
    return m_SamplePeriod;
}


void StreamPost::setSamplePeriod(utility::string_t value)
{
    m_SamplePeriod = value;
    
}
utility::string_t StreamPost::getReportingPeriod() const
{
    return m_ReportingPeriod;
}


void StreamPost::setReportingPeriod(utility::string_t value)
{
    m_ReportingPeriod = value;
    
}
std::shared_ptr<StreamMetadata> StreamPost::getStreamMetadata() const
{
    return m_StreamMetadata;
}


void StreamPost::setStreamMetadata(std::shared_ptr<StreamMetadata> value)
{
    m_StreamMetadata = value;
    m_StreamMetadataIsSet = true;
}
bool StreamPost::streamMetadataIsSet() const
{
    return m_StreamMetadataIsSet;
}

void StreamPost::unsetStreamMetadata()
{
    m_StreamMetadataIsSet = false;
}

}
}
}
}

