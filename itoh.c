#pragma once

#include "hex_translation_table.c"
#include "count_places_of_base.c"

char* itoh(int value)
{
    int size = count_places_of_base(16, value) + 1;

    char* string = malloc(size);

    string[--size] = '\0';

    while (value)
    {
        string[--size] = _10_16(value & 0xF); value >>= 4;
    }

    return string;
}
