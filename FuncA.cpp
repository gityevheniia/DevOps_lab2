#include "FuncA.h"
#include <cmath>






// Клас FuncA реалізує обчислення значення ln(1+x) за допомогою ряду
// Параметри:
// - n: кількість елементів ряду
// - x: значення аргументу
double FuncA::calculate(int n, double x) {

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i-1) * pow(x, i) / i;
    }
    return sum;
}
