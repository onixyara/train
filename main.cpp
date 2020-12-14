#include "Wagon.hpp"
#include "Formation.hpp"
#include "GravelQuarry.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    GravelQuarry quarry;

    std::cout << "Press Ctrl + c to stop the program." << std::endl;
    
    while (true)
    {
        std::cout << "Enter weight to fill wagon:" << std::endl;
        
        int weight;
        std::cin >> weight;

        if (std::cin.fail())
        {
            std::cout << "You did not enter an integer";
            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << std::endl;
            continue;
        }
        quarry.fillBranch(weight);

        std::cout << std::endl;
    }
    return 0;
}
