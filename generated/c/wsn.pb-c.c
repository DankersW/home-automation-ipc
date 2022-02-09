/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: wsn.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "wsn.pb-c.h"
void   wsn__sensor_data__init
                     (Wsn__SensorData         *message)
{
  static const Wsn__SensorData init_value = WSN__SENSOR_DATA__INIT;
  *message = init_value;
}
size_t wsn__sensor_data__get_packed_size
                     (const Wsn__SensorData *message)
{
  assert(message->base.descriptor == &wsn__sensor_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wsn__sensor_data__pack
                     (const Wsn__SensorData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wsn__sensor_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wsn__sensor_data__pack_to_buffer
                     (const Wsn__SensorData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wsn__sensor_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Wsn__SensorData *
       wsn__sensor_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Wsn__SensorData *)
     protobuf_c_message_unpack (&wsn__sensor_data__descriptor,
                                allocator, len, data);
}
void   wsn__sensor_data__free_unpacked
                     (Wsn__SensorData *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &wsn__sensor_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor wsn__sensor_data__field_descriptors[3] =
{
  {
    "sensor_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Wsn__SensorData, sensor_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "temperature",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Wsn__SensorData, temperature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "humidity",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Wsn__SensorData, humidity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wsn__sensor_data__field_indices_by_name[] = {
  2,   /* field[2] = humidity */
  0,   /* field[0] = sensor_id */
  1,   /* field[1] = temperature */
};
static const ProtobufCIntRange wsn__sensor_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor wsn__sensor_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wsn.SensorData",
  "SensorData",
  "Wsn__SensorData",
  "wsn",
  sizeof(Wsn__SensorData),
  3,
  wsn__sensor_data__field_descriptors,
  wsn__sensor_data__field_indices_by_name,
  1,  wsn__sensor_data__number_ranges,
  (ProtobufCMessageInit) wsn__sensor_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
