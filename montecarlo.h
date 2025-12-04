#ifndef MONTECARLO
#define MONTECARLO

#include <cstdint>

class Xorshift32{
	public:
		uint32_t state;

		Xorshift32(uint32_t s): state(s ? s : 1){}

		uint32_t next(){
			uint32_t x = state;
			x ^= x << 13;
			x ^= x >> 17;
			x ^= x << 5;
			state = x;
			return x * 0x9E3779BB;
		}

		double nextDouble(){
			return (next() / 4294967296.0);
		}
};

double montecarlo();

#endif

