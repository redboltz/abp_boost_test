LIST (APPEND check_PROGRAMS
    test1.cpp
)

FIND_PACKAGE (Boost 1.67.0 REQUIRED COMPONENTS unit_test_framework)

FOREACH (source_file ${check_PROGRAMS})
    GET_FILENAME_COMPONENT (source_file_we ${source_file} NAME_WE)
    ADD_EXECUTABLE (${source_file_we} ${source_file})
    #TARGET_COMPILE_DEFINITIONS (${source_file_we} PUBLIC BOOST_TEST_DYN_LINK)
    TARGET_LINK_LIBRARIES (
        ${source_file_we} Boost::unit_test_framework
    )
    ADD_TEST (NAME ${source_file_we} COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${source_file_we})
ENDFOREACH ()
