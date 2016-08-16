load('//google/protobuf:protobuf.bzl', 'py_proto_library')

py_proto_library(
  name = 'compile_info',
  srcs = ['src/main/protobuf/extra_actions.proto'],
  protoc = '//google/protobuf:protoc',
  default_runtime = '//google/protobuf:protobuf_python',
  visibility = ['//visibility:public']
)
