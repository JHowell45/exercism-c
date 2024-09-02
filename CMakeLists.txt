cmake_minimum_required(VERSION 3.30)
project("exercism-c")

####################################################################################
# Install Test Framework:
####################################################################################
include(FetchContent)
FetchContent_Declare(
  unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG        860062d51b2e8a75d150337b63ca2a472840d13c # v2.6.0
)
set(FLAGS = "UNITY_SUPPORT_64")
set(CMAKE_C_FLAGS "${FLAGS}")
set(CMAKE_CXX_FLAGS "${FLAGS}")
# For Windows: Prevent overriding the parent project's compiler/linker settings
# target_link_options(unity INTERFACE "UNITY_SUPPORT_64")
FetchContent_MakeAvailable(unity)
# target_link_options(unity INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/unity_config.h")
# target_link_libraries(unity PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/unity_config.h")
# target_link_options(unity INTERFACE "UNITY_SUPPORT_64")
# target_include_directories(unity INTERFACE unity_config.h)
# file(COPY unity_config.h DESTINATION ${unity_SOURCE_DIR}/src)

####################################################################################
# Add Subdirectories:
####################################################################################
include(CTest)
add_subdirectory("exercises")