#pragma once

#include "pch.h"
#include "interface.h"


class InheritedClassFromPython : public interface
{
public:
    InheritedClassFromPython();
    virtual ~InheritedClassFromPython() {}

    void hello() override;

private:
    py::object m_pyObj;
};


