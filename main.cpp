#include <iostream>
#include "student.h"
#include "tutor.h"

int main()
{
    Student s1("Sebastian");
    Tutor t1("Ignacio");
    std::cout << s1.greet(t1) << std::endl;
    std::cout << t1.greet(s1) << std::endl;
    return 0;
}
