
# set source file to project
add_executable(PortIsOpen main.cpp)

# find libraries
set(EXTRA_LIBS
  ${CMAKE_SOURCE_DIR}/lib/win/sfml-system-s-d.lib
  ${CMAKE_SOURCE_DIR}/lib/win/sfml-network-s-d.lib
  ws2_32.lib
)

# set library to project
target_link_libraries(PortIsOpen ${EXTRA_LIBS})

# set definitions
add_definitions(-DSFML_STATIC)
