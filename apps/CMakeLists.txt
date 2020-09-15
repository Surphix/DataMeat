set(CMAKE_BUILD_TYPE Debug)

add_executable(app app.cpp)

set_target_properties(app
	        PROPERTIES
	        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
		ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
	        LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib")

add_library(DataMeatLib INTERFACE)
target_include_directories(DataMeatLib INTERFACE "${PROJECT_SOURCE_DIR}/include")
target_link_libraries(app DataMeatLib)

target_compile_features(app PRIVATE cxx_std_11)
