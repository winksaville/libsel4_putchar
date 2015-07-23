# Figure out how to share this copy code with the other libraries
add_custom_command(
    OUTPUT  ${CMAKE_BINARY_DIR}/includes/x86/pc99/include/sel4/putchar.h
    COMMAND mkdir -p ${CMAKE_BINARY_DIR}/includes/x86/pc99/include/sel4
    COMMAND cp include/sel4/putchar.h ${CMAKE_BINARY_DIR}/includes/x86/pc99/include/sel4/putchar.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    copy_putchar.h_file
    DEPENDS  ${CMAKE_BINARY_DIR}/includes/x86/pc99/include/sel4/putchar.h
)

add_library(sel4putchar STATIC src/sel4_putchar.c)

add_dependencies(sel4putchar libsel4 copy_putchar.h_file)

