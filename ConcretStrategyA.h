#ifndef CONCRETSTRATEGYA
#define CONCRETSTRATEGYA
#include "IStrategy.h"
typedef struct 
{
    IStrategy strategy;
}ConcretStrategyA;
ConcretStrategyA *newStrategyA();
void Do_algorithm(IStrategy*);
#endif