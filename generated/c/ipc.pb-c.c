/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ipc.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ipc.pb-c.h"
void   ipc__wsn_sensor_data_telemetry__init
                     (Ipc__WsnSensorDataTelemetry         *message)
{
  static const Ipc__WsnSensorDataTelemetry init_value = IPC__WSN_SENSOR_DATA_TELEMETRY__INIT;
  *message = init_value;
}
size_t ipc__wsn_sensor_data_telemetry__get_packed_size
                     (const Ipc__WsnSensorDataTelemetry *message)
{
  assert(message->base.descriptor == &ipc__wsn_sensor_data_telemetry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ipc__wsn_sensor_data_telemetry__pack
                     (const Ipc__WsnSensorDataTelemetry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ipc__wsn_sensor_data_telemetry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ipc__wsn_sensor_data_telemetry__pack_to_buffer
                     (const Ipc__WsnSensorDataTelemetry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ipc__wsn_sensor_data_telemetry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ipc__WsnSensorDataTelemetry *
       ipc__wsn_sensor_data_telemetry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ipc__WsnSensorDataTelemetry *)
     protobuf_c_message_unpack (&ipc__wsn_sensor_data_telemetry__descriptor,
                                allocator, len, data);
}
void   ipc__wsn_sensor_data_telemetry__free_unpacked
                     (Ipc__WsnSensorDataTelemetry *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ipc__wsn_sensor_data_telemetry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ipc__wsn_sensor_data_telemetry__field_descriptors[3] =
{
  {
    "sensor_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Ipc__WsnSensorDataTelemetry, sensor_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "temperature",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(Ipc__WsnSensorDataTelemetry, temperature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "humidity",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(Ipc__WsnSensorDataTelemetry, humidity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ipc__wsn_sensor_data_telemetry__field_indices_by_name[] = {
  2,   /* field[2] = humidity */
  0,   /* field[0] = sensor_id */
  1,   /* field[1] = temperature */
};
static const ProtobufCIntRange ipc__wsn_sensor_data_telemetry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor ipc__wsn_sensor_data_telemetry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ipc.WsnSensorDataTelemetry",
  "WsnSensorDataTelemetry",
  "Ipc__WsnSensorDataTelemetry",
  "ipc",
  sizeof(Ipc__WsnSensorDataTelemetry),
  3,
  ipc__wsn_sensor_data_telemetry__field_descriptors,
  ipc__wsn_sensor_data_telemetry__field_indices_by_name,
  1,  ipc__wsn_sensor_data_telemetry__number_ranges,
  (ProtobufCMessageInit) ipc__wsn_sensor_data_telemetry__init,
  NULL,NULL,NULL    /* reserved[123] */
};