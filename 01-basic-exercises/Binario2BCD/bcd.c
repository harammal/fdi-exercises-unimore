#include "bcd.h"

unsigned short bin2bcd(unsigned short val) {

	// 0127 -> 0000.0001.0010.0111 -> 0x0127
	unsigned short u = val / 1 % 10;
	unsigned short d = val / 10 % 10;
	unsigned short c = val / 100 % 10;
	unsigned short m = val / 1000 % 10;

	return m * 16 * 16 * 16 + c * 16 * 16 + d * 16 + u;
}