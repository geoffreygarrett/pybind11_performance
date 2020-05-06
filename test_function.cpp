//
// Created by ggarrett on 06-05-20.
//
#include <cstdlib>
#include "test_function.h"

using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

