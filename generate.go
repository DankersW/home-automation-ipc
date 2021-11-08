package edge_ipc

//go:generate mkdir -p generated/go
//go:generate protoc -I . --go_out=generated/go wsn.proto
