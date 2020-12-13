#include "Wagon.hpp"
#include <vector>

class Formation
{
    public:
        std::vector<Wagon> train;
        int m_trainCapacity;

        void addWagon(Wagon wagon);
        void printCapacity(int num);
        void printFormation();
        void releaseFormation();
};
