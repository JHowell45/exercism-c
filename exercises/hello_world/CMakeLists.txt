####################################################################################
# Library:
####################################################################################
add_library(hello_world STATIC src/hello_world.c)
target_include_directories(hello_world PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

####################################################################################
# Tests:
####################################################################################
add_executable(hello_world_test tests/hello_world.c)
target_link_libraries(hello_world_test hello_world unity)
add_test(hello_world_test hello_world_test)