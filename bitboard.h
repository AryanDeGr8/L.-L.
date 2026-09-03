#ifndef BITBOARD_H

#define BITBOARD_H

#define U64 unsigned long long

#define get_bit(bitboard, square) ((bitboard) & (1ULL << (square)))

#define set_bit(bitboard, square) ((bitboard) |= (1ULL << (square)))

#define pop_bit(bitboard, square) ((bitboard) &= ~(1ULL << (square)))

void print_bitboard(U64 bitboard);

#endif
