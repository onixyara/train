#include "Wagon.hpp"
#include <iostream>

Wagon::Wagon(int name, int value)
{
    m_name = name;
    m_capacity = value;
}

void Wagon::printCapacity()
{
    double percents = m_capacity / ( m_maxCapacity / 100.0l);

    std::cout << "[ Wagon" << m_name << ", filled by = " << percents << "%" << " ]";
}

void Wagon::fillWagon(int value)
{
    m_capacity += value;
}
