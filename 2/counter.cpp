#include "counter.h"

Counter::Counter() : value(1) {}

Counter::Counter(const int value) : value(value) {}

void Counter::increase() { ++value; }
void Counter::decrease() { --value; }
int  Counter::getValue() { return value; }

