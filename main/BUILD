load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "header_h",
    srcs = ["header.cc"],
    hdrs = ["header.h"],
)

cc_binary(
    name = "header_cc",
    srcs = ["header.cc"],
    deps = [
        ":header_h",
    ],
)