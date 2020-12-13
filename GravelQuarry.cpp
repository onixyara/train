#include "GravelQuarry.hpp"
#include <iostream>

void GravelQuarry::fillBranch(int value)
{
    static int wagName = 0;

    if (value > 10)
    {
        std::cout << "Weight is to big" << std::endl;
    }
    else
    {
        Wagon wagon(wagName++, value);

        if (branch1.m_trainCapacity < branch2.m_trainCapacity)
        {
            branch1.addWagon(wagon);
        }
        else
        {
            branch2.addWagon(wagon);
        }
    }
}