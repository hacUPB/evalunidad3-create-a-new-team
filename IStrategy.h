#ifndef ISTRATEGY
#define ISTRATEGY

typedef void (*DoAlgorithm)(void*);
typedef struct
{
    DoAlgorithm doit;
}IStrategy;
void __DoAlgor(void);
void Do_algorithm(IStrategy* this);
#endif