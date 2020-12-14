#pragma once
#include "Wagon.hpp"
#include <vector>

#define MAX_CAPACITY 50.0l

class Formation
{
    public:
        std::vector<Wagon> train;
        int m_trainCapacity = 0;
        int m_name;

        void addWagon(Wagon wagon);
        void printCapacity(int num);
        void printFormation();
        void releaseFormation();
};
