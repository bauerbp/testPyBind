#pragma once

#include "pch.h"
#include "interface.h"


class ClassImp : public interface
{
public:
    virtual ~ClassImp() {}

    void hello() override;
};

PYBIND11_EMBEDDED_MODULE(modClassImp, m) {
    py::class_<ClassImp>(m, "ClassImp")
        .def(py::init<>())
        .def("hello", &ClassImp::hello);
}