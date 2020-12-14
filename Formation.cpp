#include "Formation.hpp"
#include <iostream>

void Formation::addWagon(Wagon wagon)
{
    m_trainCapacity = m_trainCapacity + wagon.m_capacity;
    train.push_back(wagon);
    std::cout << "Wagon added to branch " << m_name << std::endl;
}

void Formation::printCapacity(int name)
{
    for ( int i = 0; i < train.size(); i++)
    {
        if (train[i].m_name == name)
        {
            train[i].printCapacity();
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
        train[i].printCapacity();
        std::cout << std::endl;
    }
}

void Formation::releaseFormation()
{
    double percents = m_trainCapacity / ( MAX_CAPACITY / 100.0l);

    std::cout << "Formation " << m_name << " leaving gravel quarry" << std::endl;

    printFormation();
    std::cout << "Formation is loaded by = " << percents << "%" << std::endl;
    std::cout << std::endl;
    train.clear();
    m_trainCapacity = 0;
}

