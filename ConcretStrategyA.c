#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "IStrategy.h"
#include "ConcretStrategyA.h"

ConcretStrategyA* StrategyNew()
{
    return(ConcretStrategyA*)malloc(sizeof(ConcretStrategyA));
}
void __DoAlgorithm(char data[])
{
    int i;
    for (i = 0; i < strlen(data); i++)
    {
        data[i] = data[i];
    }
}