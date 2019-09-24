// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "InheritedClassFromPython.h"

namespace py = pybind11;

int main()
{
    py::scoped_interpreter guard{}; // start the interpreter and keep it alive

    py::print("\nHello, World!\n \nLove,\nPython.\n"); // use the Python API


    //py::object module1 = py::module::import("module1");
    //py::object prin = module1.attr("printy");
    //
    //prin();

    InheritedClassFromPython classFromPython;

    classFromPython.hello();


    //py::exec(R"(
    //    import sys
    //    sys.path.insert(0, "E:\EyeDevelopmentModel-master\")
    //    import main
    //    print('hi')
    //    #module1.summarizePDF()
    //)", py::globals(), locals);

    //std::cout << "\nHello World!\n \nLove,\nC++\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
