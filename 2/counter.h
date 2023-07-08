#pragma once
#include <iostream>

class Counter
{
	int value;

public:
	Counter();
	Counter(const int value);

	void increase();
	void decrease();
	int  getValue();
};

Counter* initCounter();