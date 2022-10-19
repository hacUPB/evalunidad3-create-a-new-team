#ifndef CONCRETSTRATEGYB
#define CONCRETSTRATEGYB
#include "IStrategy.h"
typedef struct 
{
    IStrategy strategy;
}ConcretStrategyB;
ConcretStrategyB* newStrategyB();
void Do_algorithm(IStrategy*);
#endif