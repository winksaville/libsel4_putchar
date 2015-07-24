add_library(sel4putchar STATIC
    src/sel4_putchar.c
)

target_compile_definitions(sel4putchar
    PUBLIC HAVE_SEL4_PUTCHAR
)

target_include_directories(sel4putchar SYSTEM
    PUBLIC "include"
)

add_dependencies(sel4putchar libsel4)
