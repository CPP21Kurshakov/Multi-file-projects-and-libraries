#include "Header.h"

Counter::Counter() : count(0) {};

void Counter::initV(int val)
{
	count = val;
}

void Counter::inc()
{
	count++;
}

void Counter::dec()
{
	--count;
}

int Counter::equals()
{
	return count;
}