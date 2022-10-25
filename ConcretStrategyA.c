#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
//#include "IStrategy.h"
#include "ConcretStrategyA.h"

ConcretStrategyA* newStrategyA()
{
    return(ConcretStrategyA*)malloc(sizeof(ConcretStrategyA));
}
char __DoAlgorithmA()
{
    char data [4];
    data[0]='a';
    data[1]='b';
    data[2]='c';
    data[3]='d';
    int i;
    for (i = 0; i < strlen(data); i++)
    {
        data[i] = data[i]+',';
    }
    return data;
}