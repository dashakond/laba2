// FuncA.cpp
#include "FuncA.h"

double FuncA::calculate() {
    double sum = 0.0;
    for (int i = 1; i <= 3; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}
