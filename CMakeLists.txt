project (comLoader)


add_library( testLib SHARED test.cpp CTestComponent.cpp )


add_executable( starter main.cpp )
target_link_libraries ( starter ${CMAKE_DL_LIBS} )
