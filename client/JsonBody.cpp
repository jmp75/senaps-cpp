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

#include "JsonBody.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

JsonBody::JsonBody( const web::json::value& json)
    : m_Json(json)
{
}

JsonBody::~JsonBody()
{
}

void JsonBody::writeTo( std::ostream& target )
{
    m_Json.serialize(target);
}

}
}
}
}
