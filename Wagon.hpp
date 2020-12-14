#pragma once
class Wagon
{
  public:
    int   m_name;
    double  m_maxCapacity = 10.0l;
    double m_capacity;

  public:
    Wagon(int name, int value);

    void printCapacity();
    void fillWagon(int value);
};
