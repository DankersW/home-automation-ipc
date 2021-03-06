// Code generated by protoc-gen-go. DO NOT EDIT.
// source: wsn.proto

package wsn

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

type MessageType int32

const (
	MessageType_SENSOR_DATA MessageType = 0
)

var MessageType_name = map[int32]string{
	0: "SENSOR_DATA",
}

var MessageType_value = map[string]int32{
	"SENSOR_DATA": 0,
}

func (x MessageType) String() string {
	return proto.EnumName(MessageType_name, int32(x))
}

func (MessageType) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_e98e9ae78d49442e, []int{0}
}

type SensorData struct {
	SensorId             string   `protobuf:"bytes,1,opt,name=sensor_id,json=sensorId,proto3" json:"sensor_id,omitempty"`
	Temperature          int32    `protobuf:"varint,2,opt,name=temperature,proto3" json:"temperature,omitempty"`
	Humidity             int32    `protobuf:"varint,3,opt,name=humidity,proto3" json:"humidity,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SensorData) Reset()         { *m = SensorData{} }
func (m *SensorData) String() string { return proto.CompactTextString(m) }
func (*SensorData) ProtoMessage()    {}
func (*SensorData) Descriptor() ([]byte, []int) {
	return fileDescriptor_e98e9ae78d49442e, []int{0}
}

func (m *SensorData) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SensorData.Unmarshal(m, b)
}
func (m *SensorData) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SensorData.Marshal(b, m, deterministic)
}
func (m *SensorData) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SensorData.Merge(m, src)
}
func (m *SensorData) XXX_Size() int {
	return xxx_messageInfo_SensorData.Size(m)
}
func (m *SensorData) XXX_DiscardUnknown() {
	xxx_messageInfo_SensorData.DiscardUnknown(m)
}

var xxx_messageInfo_SensorData proto.InternalMessageInfo

func (m *SensorData) GetSensorId() string {
	if m != nil {
		return m.SensorId
	}
	return ""
}

func (m *SensorData) GetTemperature() int32 {
	if m != nil {
		return m.Temperature
	}
	return 0
}

func (m *SensorData) GetHumidity() int32 {
	if m != nil {
		return m.Humidity
	}
	return 0
}

func init() {
	proto.RegisterEnum("wsn.MessageType", MessageType_name, MessageType_value)
	proto.RegisterType((*SensorData)(nil), "wsn.SensorData")
}

func init() { proto.RegisterFile("wsn.proto", fileDescriptor_e98e9ae78d49442e) }

var fileDescriptor_e98e9ae78d49442e = []byte{
	// 164 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0x2c, 0x2f, 0xce, 0xd3,
	0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0x2e, 0x2f, 0xce, 0x53, 0x4a, 0xe7, 0xe2, 0x0a, 0x4e,
	0xcd, 0x2b, 0xce, 0x2f, 0x72, 0x49, 0x2c, 0x49, 0x14, 0x92, 0xe6, 0xe2, 0x2c, 0x06, 0xf3, 0xe2,
	0x33, 0x53, 0x24, 0x18, 0x15, 0x18, 0x35, 0x38, 0x83, 0x38, 0x20, 0x02, 0x9e, 0x29, 0x42, 0x0a,
	0x5c, 0xdc, 0x25, 0xa9, 0xb9, 0x05, 0xa9, 0x45, 0x89, 0x25, 0xa5, 0x45, 0xa9, 0x12, 0x4c, 0x0a,
	0x8c, 0x1a, 0xac, 0x41, 0xc8, 0x42, 0x42, 0x52, 0x5c, 0x1c, 0x19, 0xa5, 0xb9, 0x99, 0x29, 0x99,
	0x25, 0x95, 0x12, 0xcc, 0x60, 0x69, 0x38, 0x5f, 0x4b, 0x8e, 0x8b, 0xdb, 0x37, 0xb5, 0xb8, 0x38,
	0x31, 0x3d, 0x35, 0xa4, 0xb2, 0x20, 0x55, 0x88, 0x9f, 0x8b, 0x3b, 0xd8, 0xd5, 0x2f, 0xd8, 0x3f,
	0x28, 0xde, 0xc5, 0x31, 0xc4, 0x51, 0x80, 0xc1, 0x89, 0x3d, 0x8a, 0x55, 0x4f, 0xbf, 0xbc, 0x38,
	0x2f, 0x89, 0x0d, 0xec, 0x3a, 0x63, 0x40, 0x00, 0x00, 0x00, 0xff, 0xff, 0x1a, 0x58, 0x50, 0x86,
	0xaa, 0x00, 0x00, 0x00,
}
