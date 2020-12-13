#include "Wagon.hpp"
#include <iostream>

Wagon::Wagon(int name, int value)
{
    m_name = name;
    m_capacity = value;
}

void Wagon::printCapasity()
{
    std::cout << "Wagon" << m_name << ", capacity = " << m_capacity;
}

void Wagon::fillWagon(int value)
{
    m_capacity += value;
}
