#pragma once
class Counter
{
private:
	int count;

public:
	Counter();

	void initV(int val);

	void inc();

	void dec();

	int equals();
};