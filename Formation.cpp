#include "Formation.hpp"
#include <iostream>

void Formation::addWagon(Wagon wagon)
{
    if (train.size() < 5)
    {
        m_trainCapacity += wagon.m_capacity;
        train.push_back(wagon);
    }
    else
    {
        releaseFormation();
    }
}

void Formation::printCapacity(int name)
{
    for ( int i = 0; i < train.size(); i++)
    {
        if (train[i].m_name == name)
        {
            train[i].printCapasity();
        }
    }
}

void Formation::printFormation()
{
    if (train.size() == 0)
    {
        std::cout << "Train is empty" << std::endl;
    }
    for ( int i = 0; i < train.size(); i++)
    {
        train[i].printCapasity();
    }
}

void Formation::releaseFormation()
{
    std::cout << "Formation leaving gravel quarry" << std::endl;
    
    printFormation();
    train.clear();
}

