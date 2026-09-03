#include "bitboard.h"
#include <stdio.h>

int bruh = 234234;

void print_bitboard(U64 bitboard)
{
    printf("\n");
    U64 mask = 0b1000000000000000000000000000000000000000000000000000000000000000ULL;
    for (int rank = 0; rank < 8; rank++)
    {

        for (int file = 0; file < 8; file++)
        {
            int square = rank * 8 + file;

            if (!file)
            {
                printf("%d  ", 8 - rank);
            }

            printf("%d ", (bitboard & mask) ? 1 : 0);

            mask = mask >> 1;
        }

        printf("\n");
    }

    printf("\n");
    printf("   ");
    for (int i = 0; i < 8; i++)
    {
        printf("%c ", 'a' + i);
    }
    printf("\n");
}
