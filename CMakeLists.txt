add_library(libsel4putchar STATIC
    src/sel4_putchar.c
)

target_compile_definitions(libsel4putchar
    PUBLIC HAVE_SEL4_PUTCHAR
)

target_include_directories(libsel4putchar SYSTEM
    PUBLIC "include"
)

target_link_libraries(libsel4putchar libsel4)
