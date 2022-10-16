#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"

Context* Context_New()
{
    return (Context*)malloc(sizeof(Context));
}
void ContextConstruct(IStrategy*this)
{
    IStrategy IStrategy;
}
void ContextConstruct(IStrategy*this)
{
    free(this);
}