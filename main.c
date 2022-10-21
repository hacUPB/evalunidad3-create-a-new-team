#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "IStrategy.h"
#include "Context.h"
#include "ConcretStrategyA.h"
#include "ConcretStrategyB.h"

int main(int argc, char* argv[])
{

    Context* cont=Context_New();
    printf("Client: Strategy is set to normal sorting.");
    ConcretStrategyA* stratA=newStrategyA();
    //char data=Do_algorithm((IStrategy*)stratA);
    DoSomeBusinessLogic(cont,(IStrategy*)stratA);
    
    printf("Client: Strategy is set to normal sorting.");
    ConcretStrategyB* stratB=newStrategyB();
    DoSomeBusinessLogic(cont,(IStrategy*)stratB);
    return EXIT_SUCCESS;
}