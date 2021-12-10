/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: wsn.proto */

#ifndef PROTOBUF_C_wsn_2eproto__INCLUDED
#define PROTOBUF_C_wsn_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Wsn__SensorData Wsn__SensorData;


/* --- enums --- */


/* --- messages --- */

struct  _Wsn__SensorData
{
  ProtobufCMessage base;
  char *sensor_id;
  float temperature;
  float humidity;
};
#define WSN__SENSOR_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wsn__sensor_data__descriptor) \
    , (char *)protobuf_c_empty_string, 0, 0 }


/* Wsn__SensorData methods */
void   wsn__sensor_data__init
                     (Wsn__SensorData         *message);
size_t wsn__sensor_data__get_packed_size
                     (const Wsn__SensorData   *message);
size_t wsn__sensor_data__pack
                     (const Wsn__SensorData   *message,
                      uint8_t             *out);
size_t wsn__sensor_data__pack_to_buffer
                     (const Wsn__SensorData   *message,
                      ProtobufCBuffer     *buffer);
Wsn__SensorData *
       wsn__sensor_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wsn__sensor_data__free_unpacked
                     (Wsn__SensorData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Wsn__SensorData_Closure)
                 (const Wsn__SensorData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor wsn__sensor_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_wsn_2eproto__INCLUDED */