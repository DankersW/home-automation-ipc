/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_SYSTEM_SYSTEM_PB_H_INCLUDED
#define PB_SYSTEM_SYSTEM_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _system_WsnSensorDataTelemetry { 
    uint32_t timestamp; 
    pb_callback_t sensor_id; 
    float temperature; 
    float humidity; 
} system_WsnSensorDataTelemetry;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define system_WsnSensorDataTelemetry_init_default {0, {{NULL}, NULL}, 0, 0}
#define system_WsnSensorDataTelemetry_init_zero  {0, {{NULL}, NULL}, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define system_WsnSensorDataTelemetry_timestamp_tag 1
#define system_WsnSensorDataTelemetry_sensor_id_tag 2
#define system_WsnSensorDataTelemetry_temperature_tag 3
#define system_WsnSensorDataTelemetry_humidity_tag 4

/* Struct field encoding specification for nanopb */
#define system_WsnSensorDataTelemetry_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   timestamp,         1) \
X(a, CALLBACK, SINGULAR, STRING,   sensor_id,         2) \
X(a, STATIC,   SINGULAR, FLOAT,    temperature,       3) \
X(a, STATIC,   SINGULAR, FLOAT,    humidity,          4)
#define system_WsnSensorDataTelemetry_CALLBACK pb_default_field_callback
#define system_WsnSensorDataTelemetry_DEFAULT NULL

extern const pb_msgdesc_t system_WsnSensorDataTelemetry_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define system_WsnSensorDataTelemetry_fields &system_WsnSensorDataTelemetry_msg

/* Maximum encoded size of messages (where known) */
/* system_WsnSensorDataTelemetry_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
