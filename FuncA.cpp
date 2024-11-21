#include "FuncA.h"
#include <cmath>

double FuncA::calculate() {
    int n = 3; // Фіксоване значення
    double x = 1; // Задайте x, наприклад, 1
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i-1) * pow(x, i) / i;
    }
    return sum;
}
