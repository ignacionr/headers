#pragma once
#include <string>
#include "tutor.h"

class Tutor; // forward reference

class Student
{
public:
    Student(std::string const &name) : _name{name} {}

    std::string greet(Tutor const &tutor) const;
    auto getName() const { return _name; }

private:
    std::string _name;
};
