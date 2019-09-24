#pragma once

#include "pch.h"

namespace py = pybind11;

class interface
{
public:
    virtual ~interface() {}
    virtual void hello() = 0;
};