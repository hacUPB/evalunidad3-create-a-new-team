#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "IStrategy.h"
#include "ConcretStrategyB.h"

ConcretStrategyB* newStrategyB()
{
    return(ConcretStrategyB*)malloc(sizeof(ConcretStrategyB));
}

char __DoAlgorithmB()
{
    char data1 [4];
    data1[0]="a";
    data1[1]="b";
    data1[2]="c";
    data1[3]="d";
    int longitud = strlen(data1);
    int i;
    for (i = 0; i < strlen(data1) / 2; i++)
    {
        char temporal = data1[i];
        data1[i] = data1[longitud - i - 1];
        data1[longitud - i - 1] = temporal+",";
    }
    return data1;
}