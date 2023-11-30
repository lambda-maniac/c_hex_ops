#pragma once

#include "hex_translation_table.c"

int htoi(const char* string)
{
    int data = _16_10(*string);

    while (*++string)
        data = data << 4 | _16_10(*string);

    return data;
}
