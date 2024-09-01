cmake_minimum_required(VERSION 3.30)
project("exercism-c")

####################################################################################
# Install Test Framework:
####################################################################################
set(UNITY_INCLUDE_CONFIG_H unity_config.h)

set (COMPILE_FLAGS "UNITY_SUPPORT_64")

set(unity_patch git apply ${CMAKE_CURRENT_SOURCE_DIR}/patches/unity.patch)

include(FetchContent)
FetchContent_Declare(
  unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG        860062d51b2e8a75d150337b63ca2a472840d13c # v2.6.0
  PATCH_COMMAND ${unity_patch}
  UPDATE_DISCONNECTED 1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
FetchContent_MakeAvailable(unity)

####################################################################################
# Add Subdirectories:
####################################################################################
include(CTest)
add_subdirectory("exercises")