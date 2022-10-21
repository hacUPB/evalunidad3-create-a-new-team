#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "IStrategy.h"

char __DoAlgorithm(char data[])
{
    int i;
    for (i = 0; i < strlen(data); i++)
    {
        data[i] = data[i];
    }
    return data;
}
void Do_algorithm(IStrategy* this)
{
    this->doit(this);
}