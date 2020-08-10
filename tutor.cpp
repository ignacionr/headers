#include <string>
#include "tutor.h"

std::string Tutor::greet(Student const &student) const
{
    return "Hello my very good student " + student.getName() + "!";
}
