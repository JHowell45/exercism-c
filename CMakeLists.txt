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
# For Windows: Prevent overriding the parent project's compiler/linker settings
FetchContent_MakeAvailable(unity)

####################################################################################
# Add Subdirectories:
####################################################################################
add_subdirectory("exercises")