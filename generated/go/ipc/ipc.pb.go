// Code generated by protoc-gen-go. DO NOT EDIT.
// source: ipc.proto

package ipc

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type WsnSensorDataTelemetry struct {
	SensorId             string   `protobuf:"bytes,1,opt,name=sensor_id,json=sensorId,proto3" json:"sensor_id,omitempty"`
	Temperature          float32  `protobuf:"fixed32,2,opt,name=temperature,proto3" json:"temperature,omitempty"`
	Humidity             float32  `protobuf:"fixed32,3,opt,name=humidity,proto3" json:"humidity,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *WsnSensorDataTelemetry) Reset()         { *m = WsnSensorDataTelemetry{} }
func (m *WsnSensorDataTelemetry) String() string { return proto.CompactTextString(m) }
func (*WsnSensorDataTelemetry) ProtoMessage()    {}
func (*WsnSensorDataTelemetry) Descriptor() ([]byte, []int) {
	return fileDescriptor_6eb2dac662210585, []int{0}
}

func (m *WsnSensorDataTelemetry) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_WsnSensorDataTelemetry.Unmarshal(m, b)
}
func (m *WsnSensorDataTelemetry) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_WsnSensorDataTelemetry.Marshal(b, m, deterministic)
}
func (m *WsnSensorDataTelemetry) XXX_Merge(src proto.Message) {
	xxx_messageInfo_WsnSensorDataTelemetry.Merge(m, src)
}
func (m *WsnSensorDataTelemetry) XXX_Size() int {
	return xxx_messageInfo_WsnSensorDataTelemetry.Size(m)
}
func (m *WsnSensorDataTelemetry) XXX_DiscardUnknown() {
	xxx_messageInfo_WsnSensorDataTelemetry.DiscardUnknown(m)
}

var xxx_messageInfo_WsnSensorDataTelemetry proto.InternalMessageInfo

func (m *WsnSensorDataTelemetry) GetSensorId() string {
	if m != nil {
		return m.SensorId
	}
	return ""
}

func (m *WsnSensorDataTelemetry) GetTemperature() float32 {
	if m != nil {
		return m.Temperature
	}
	return 0
}

func (m *WsnSensorDataTelemetry) GetHumidity() float32 {
	if m != nil {
		return m.Humidity
	}
	return 0
}

func init() {
	proto.RegisterType((*WsnSensorDataTelemetry)(nil), "ipc.WsnSensorDataTelemetry")
}

func init() { proto.RegisterFile("ipc.proto", fileDescriptor_6eb2dac662210585) }

var fileDescriptor_6eb2dac662210585 = []byte{
	// 144 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0xcc, 0x2c, 0x48, 0xd6,
	0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0xce, 0x2c, 0x48, 0x56, 0x2a, 0xe6, 0x12, 0x0b, 0x2f,
	0xce, 0x0b, 0x4e, 0xcd, 0x2b, 0xce, 0x2f, 0x72, 0x49, 0x2c, 0x49, 0x0c, 0x49, 0xcd, 0x49, 0xcd,
	0x4d, 0x2d, 0x29, 0xaa, 0x14, 0x92, 0xe6, 0xe2, 0x2c, 0x06, 0x0b, 0xc7, 0x67, 0xa6, 0x48, 0x30,
	0x2a, 0x30, 0x6a, 0x70, 0x06, 0x71, 0x40, 0x04, 0x3c, 0x53, 0x84, 0x14, 0xb8, 0xb8, 0x4b, 0x52,
	0x73, 0x0b, 0x52, 0x8b, 0x12, 0x4b, 0x4a, 0x8b, 0x52, 0x25, 0x98, 0x14, 0x18, 0x35, 0x98, 0x82,
	0x90, 0x85, 0x84, 0xa4, 0xb8, 0x38, 0x32, 0x4a, 0x73, 0x33, 0x53, 0x32, 0x4b, 0x2a, 0x25, 0x98,
	0xc1, 0xd2, 0x70, 0xbe, 0x13, 0x7b, 0x14, 0xab, 0x9e, 0x7e, 0x66, 0x41, 0x72, 0x12, 0x1b, 0xd8,
	0x25, 0xc6, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0x7e, 0x06, 0x05, 0x5e, 0x96, 0x00, 0x00, 0x00,
}
