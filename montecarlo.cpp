#include "montecarlo.h"

Xorshift32 coin(123);
int coinToss();

double montecarlo(){
	int value = 0;
	uint32_t n = 1000000000;

	uint32_t headCount = 0;
	for(uint32_t i = 0; i < n; i++){
		value = coinToss();
		if(value == 1) headCount++;
	}

	return ((double) headCount / n);
}

int coinToss(){
	return (2 * coin.nextDouble());
}
