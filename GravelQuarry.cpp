#include "GravelQuarry.hpp"
#include <iostream>

void GravelQuarry::fillBranch(int value)
{
    static int wagName = 1;
    branch1.m_name = 1;
    branch2.m_name = 2;
    
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

            if (branch1.train.size() == 5)
            {
                branch1.releaseFormation();
            }
        }
        else
        {
            branch2.addWagon(wagon);


            if (branch2.train.size() == 5)
            {
                branch2.releaseFormation();
            }
        }
    }
}