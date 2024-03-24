#include <iostream>
#include "recursion/sum_of_first_N_numbers.h"
#include "recursion/facrotial.h"
#include "recursion/exponent.h"
#include "recursion/taylor_series.h"

using namespace std;

int main()
{
    // cout << sumLoop(5);
    // cout << sumRecursion(5);
    // cout << sumOfFirstNaturalNumberRecursion(5);
    // cout << sumOfFirstNaturalNumberLoop(5);
    // cout << sumOfFirstNaturalNumberEquation(5);
    // cout << factorialRecursion(4);
    // cout << factorialLoop(4);
    // cout << powerRecursion1(2, 3) << endl;
    // cout << powerRecursion2(2, 3) << endl;
    // cout << powerLoop1(2, 3) << endl;
    // cout << powerLoop2(2, 3);
    cout << taylorSeriesRecursive(1, 10);
    
    return 0;
}
