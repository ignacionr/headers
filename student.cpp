#include <string>
#include "student.h"

std::string Student::greet(Tutor const &tutor) const
{
    return "Hello " + tutor.getName() + "!";
}
