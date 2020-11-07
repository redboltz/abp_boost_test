LIST (APPEND check_PROGRAMS
    test1.cpp
)

FIND_PACKAGE (Boost 1.67.0 REQUIRED COMPONENTS unit_test_framework)

FOREACH (source_file ${check_PROGRAMS})
    GET_FILENAME_COMPONENT (source_file_we ${source_file} NAME_WE)
    ADD_EXECUTABLE (${source_file_we} ${source_file})
    TARGET_LINK_LIBRARIES (
        ${source_file_we} mqtt_cpp_iface Boost::unit_test_framework
    )
ENDFOREACH ()
