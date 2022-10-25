OBJS = main.o IStrategy.o Context.o ConcretStrategyA.o ConcretStrategyB.o
BINARY = Ejecutable
CFLAGS = -g -Wall
LDFLAGS = -LM

Ejecutable: $(OBJS)
	gcc -o $(BINARY) $(OBJS) $(CFLAGS) $(LDFLAGS)

main.o:main.c IStrategy.h ConcretStrategyA.h ConcretStrategyB.h Context.h
IStrategy.o: IStrategy.c IStrategy.h
ConcretStrategyA.o: ConcretStrategyA.c ConcretStrategyA.h
ConcretStrategyB.o: ConcretStrategyB.c ConcretStrategyB.h
Context.o: Context.c Context.h

clean:
	rm -f $(BINARY) $(OBJS)