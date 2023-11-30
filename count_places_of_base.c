#pragma once

int count_places_of_base(int base, int value)
{
    int places = 1;

    while (value > base)
    {
        value /= base; ++places;
    }

    return places;
}
