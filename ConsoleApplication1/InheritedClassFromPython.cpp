#include "pch.h"
#include "InheritedClassFromPython.h"

InheritedClassFromPython::InheritedClassFromPython()
{

    py::object classImpImport = py::module::import("modClassImp");
    m_pyObj = py::module::import("plugin");
    auto locals = py::dict(**m_pyObj.attr("__dict__"));
    py::exec("instance = GetInstance()", py::globals(), locals);
    auto howdyInt = locals["instance"];
    //py::object pyImport = py::module::import("module1");
    //m_pyObj = pyImport.attr("plugin");

    //py::object obj = m_pyObj();
}

void InheritedClassFromPython::hello()
{
    m_pyObj.attr("hello")();
}
