#ifndef ISTRATEGY
#define ISTRATEGY

typedef char (*DoAlgorithm)(void*);
typedef struct
{
    DoAlgorithm doit;
}IStrategy;
//void __DoAlgor(void);
void Do_algorithm(IStrategy*);
#endif