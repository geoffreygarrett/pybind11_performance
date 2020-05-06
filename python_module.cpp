
#include <iostream>
#include <pybind11/pybind11.h>
#include "test_function.h"

PYBIND11_MODULE(python_test, m) {

    m.def("fib", &fib);

}
