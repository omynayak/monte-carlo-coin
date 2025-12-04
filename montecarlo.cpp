#include "montecarlo.h"

static inline int coinToss(Xorshift32 &coin){
	return (coin.next() & 1);
}

double montecarlo(){
	Xorshift32 coin(23);
	uint32_t n = 1000000000;

	uint32_t headCount = 0;
	for(uint32_t i = 0; i < n; i++){
		headCount += coinToss(coin);
	}

	return ((double) headCount / n);
}
