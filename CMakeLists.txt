cmake_minimum_required(VERSION 3.11...3.18)

project(
	DataMeat
	VERSION 0.1
	DESCRIPTION "MetaData feeder"
	LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
	set(CMAKE_CXX_EXTENSIONS OFF)
	set_property(GLOBAL PROPERTY USE_FOLDERS ON)
	include(CTest)
endif()

#add_subdirectory(src)
add_subdirectory(apps)

if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING) AND BUILD_TESTING)
	add_subdirectory(tests)
endif()
