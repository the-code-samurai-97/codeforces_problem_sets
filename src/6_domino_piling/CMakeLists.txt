  
cmake_minimum_required(VERSION 3.16)
SET(PROJ_NAME "6_domino_piling") #set project name
PROJECT(${PROJ_NAME})

project(${PROJ_NAME})

include(CheckCCompilerFlag)
include(CheckCXXCompilerFlag)

add_definitions(-O3) #optimize the code
add_definitions(-std=c++11) #c++11 OR set(CMAKE_CXX_STANDARD 11)

add_compile_options(-Wall) #show all warnings
add_compile_options(-Wextra) #show extra warnings  
# add_compile_options(-Werror) # make all warning into errors LOL
# add_compile_options(-Wfatal-errors) ## sho the first error and skip the remaining
add_compile_options(-pedantic)
set(CMAKE_BUILD_TYPE Debug) # Release or Debug

find_package(yaml-cpp REQUIRED) # find package to use their header #sudo apt-get install libyaml-cpp-dev

include_directories(${YAML_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}) # include other libraries

add_library(${PROJECT_NAME}_lib STATIC src/${PROJ_NAME}.cpp) #create a static library default(static)
                                                        #SHARED {use less space for other cpp files when using and it acts as reference for other cpp files}  
                                                        #STATIC {it copy and paste the library to other code when executing} #COPIED THE CODE WHEN IT IS COMPILED SO NO NEED THE CODE AFTER THAT
                                                        #MODULE load at runtime
add_executable(${PROJECT_NAME} src/${PROJ_NAME}.cpp) #create a executable
target_link_libraries( ${PROJECT_NAME} ${YAML_CPP_LIBRARIES}) #link multiple libraries to the excutable


INSTALL(TARGETS ${PROJ_NAME}
    DESTINATION "${${PROJ_NAME}_PATH_INSTALL}/lib/${CMAKE_BUILD_TYPE}/"
 )
