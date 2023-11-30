#pragma once

// int from_digit(char value)
// {
//     int delta = value - 48;
// 
//     if ( delta >= 0
//     &&   delta <= 9 )
//         return delta;
// 
//     return -1;
// }
// 
// int from_hex(char value)
// {
//     int delta = value - 55;
// 
//     if ( delta >= 10
//     &&   delta <= 15 )
//         return delta;
// 
//     return -1;
// }
// 
// int get_hex_digit(char value)
// {
//     int result = from_digit(value);
//
//     if (result != -1) return result;
// 
//     return from_hex(value);
// }

int _16_10(char value)
{
    switch (value)
    {
        case '0': return  0 ;
        case '1': return  1 ;
        case '2': return  2 ;
        case '3': return  3 ;
        case '4': return  4 ;
        case '5': return  5 ;
        case '6': return  6 ;
        case '7': return  7 ;
        case '8': return  8 ;
        case '9': return  9 ;
        case 'A': return 10 ;
        case 'B': return 11 ;
        case 'C': return 12 ;
        case 'D': return 13 ;
        case 'E': return 14 ;
        case 'F': return 15 ;
    }
}

char _10_16(int value)
{
    switch (value)
    {
        case  0: return '0' ;
        case  1: return '1' ;
        case  2: return '2' ;
        case  3: return '3' ;
        case  4: return '4' ;
        case  5: return '5' ;
        case  6: return '6' ;
        case  7: return '7' ;
        case  8: return '8' ;
        case  9: return '9' ;
        case 10: return 'A' ;
        case 11: return 'B' ;
        case 12: return 'C' ;
        case 13: return 'D' ;
        case 14: return 'E' ;
        case 15: return 'F' ;
    }
}
