# Coin Toss Monte Carlo Simulation
A toy implementation of Monte Carlo simulations to compute the probabilties in a fair coin toss in C++.

## Features:
- Custom Xorshift based Random Number Generator class (no `<random>` dependency).
- Simulates 1 Billion (1,000,000,000) coin tosses to compute the probability of getting heads.
- Uses the PID of the program to seed the random number generator, allowing for a more realistic simulation.

## Project Structure:
```
.
├── Makefile
├── montecarlo.h
├── montecarlo.cpp
└── main.cpp
```
## Build Instructions:
### Compile Manually
Copy and paste the following commands to run the program: 
```bash
g++ main.cpp montecarlo.cpp -o main
./main
```

## How it works:
1. Create and initialise an `Xorshift32` object with a seed value (123 here) to prepare for pseudo random number generation.
2. Simulate 1 Billion coin tosses using the `coinToss()` function.
3. Return the probability of getting heads as: <br>
   $P(H) = \dfrac{N_H}{N}$
   
