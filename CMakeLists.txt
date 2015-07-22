#configure_file(
#    include/sel4/putchar.h
#    ../../stage/x86/pc99/include/sel4/putchar.h
#    COPYONLY)

add_custom_command(
    OUTPUT  ${CMAKE_SOURCE_DIR}/stage/x86/pc99/include/sel4/putchar.h
    COMMAND mkdir -p ../../stage/x86/pc99/include/sel4
    COMMAND cp include/sel4/putchar.h ../../stage/x86/pc99/include/sel4/putchar.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_custom_target(
    copy_h_file
    DEPENDS ${CMAKE_SOURCE_DIR}/stage/x86/pc99/include/sel4/putchar.h
    WORKING_DIRECTORY .)

add_library(sel4putchar STATIC src/sel4_putchar.c)

add_dependencies(sel4putchar libsel4 copy_h_file)

