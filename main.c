#include <stdio.h>
#include "bitboard.h"

int main(int argc, char **argv)
{

    printf("This shall be very own Chess Engine.\nInspired by Lelouch Lamperouge from Code Geass - Lelouch of the Rebellion.\n");

    printf("%llx\n", get_bit(0xF0F0F0F0F8F0F0F8ULL, 3));
    print_bitboard(0xF0F0F0F0F8F0F0F8ULL);
    return 0;
}