#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "IStrategy.h"
#include "ConcretStrategyB.h"

ConcretStrategyB* StrategyNew()
{
    return(ConcretStrategyB*)malloc(sizeof(ConcretStrategyB));
}

void __DoAlgorithm(char data[])
{
    int longitud = strlen(data);
    int i;
    for (i = 0; i < strlen(data) / 2; i++)
    {
        char temporal = data[i];
        data[i] = data[longitud - i - 1];
        data[longitud - i - 1] = temporal;
    }
}