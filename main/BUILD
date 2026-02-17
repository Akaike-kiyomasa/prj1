load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "vector_lib",
    srcs = ["vector.cc"],
    hdrs = ["vector.h"],
)

cc_binary(
    name = "vector_bi",
    srcs = ["vector.cc"],
    deps = [
        ":vector_lib",
    ],
)