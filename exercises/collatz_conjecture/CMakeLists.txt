####################################################################################
# Exercise Variables:
####################################################################################
set (EXERCISE_NAME collatz_conjecture)

####################################################################################
# Library:
####################################################################################
add_library(${EXERCISE_NAME} STATIC src/${EXERCISE_NAME}.c)
target_include_directories(${EXERCISE_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

####################################################################################
# Tests:
####################################################################################
add_executable(${EXERCISE_NAME}_test tests/${EXERCISE_NAME}.c)
target_link_libraries(${EXERCISE_NAME}_test ${EXERCISE_NAME} unity)
add_test(${EXERCISE_NAME}_test ${EXERCISE_NAME}_test)