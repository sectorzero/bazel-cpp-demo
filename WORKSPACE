# WORKSPACE : bazel-demo

# ------------------------------
# googletest / googlemock
# ------------------------------
new_git_repository(
	name = "googletest",
	remote = "https://github.com/google/googletest.git",
	build_file = "third-party/googletest.BUILD",
	commit = "ec44c6c",
)

bind(
	name = "gtest",
	actual = "@googletest//:gtest_main"
)


# ------------------------------
# googleflags
# ------------------------------
git_repository(
	name = "googleflags",
	remote = "https://github.com/gflags/gflags.git",
	commit = "546819b",
)

bind(
	name = "gflags",
	actual = "@googleflags//:gflags"
)
