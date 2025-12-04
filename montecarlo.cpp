#include "montecarlo.h"

int coinToss(Xorshift32 &coin);

double montecarlo(){
	Xorshift32 coin(123);
	int value = 0;
	uint32_t n = 1000000000;

	uint32_t headCount = 0;
	for(uint32_t i = 0; i < n; i++){
		value = coinToss(coin);
		if(value == 1) headCount++;
	}

	return ((double) headCount / n);
}

int coinToss(Xorshift32 &coin){
	return (2 * coin.nextDouble());
}
