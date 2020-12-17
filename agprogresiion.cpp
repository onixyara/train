//Write the program to check if the inputed numbers forms arithmetic, geometric progression or not. Program should allow the user to check how many numbers to check. If part of the digits row forms the arithmetic or geometric progression (but not less than 3 numbers) it should also be found and corresponding message to user should be generated.

#include <iostream>
#include <vector>

bool checkIsAP(std::vector<int> arr, int count);
bool is_geometric(std::vector<int> arr, int count);

int main() {
    std::vector<int> arr;
    int n, n1, n2;
    int range;

    std::cout << "Enter amount of numbers in progression: " << std::endl;
    std::cin >> n;

    if (n < 3)
    {
        std::cout << "Amount must be 3 or more!" << std::endl;
        return 0;
    }

    std::cout << "Enter numbers: " << std::endl;

    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;

        arr.push_back(number);
    }

    std::cout << "Enter the range: " << std::endl;
    std::cin >> n1;
    std::cin >> n2;
    range = n2-- - n1--;

    if (n2 > arr.size() && n1 > arr.size())
    {
        std::cout << "Out of the range" << std::endl;
        return 0;
    }
    if(range < 2)
    {
        std::cout << "Choose range from more then 3 numbers" << std::endl;
        return 0;
    }
    std::vector<int> toCheck;
    for (; n1 < n2; n1++)
    {
        toCheck.push_back(arr[n1]);
    }

    (checkIsAP(arr, range)) ? (std::cout << "It is an arithmetic progression" << std::endl) : (std::cout << "It is not an arithmetic progression" << std::endl);
    (is_geometric(arr, 10)) ? (std::cout << "It is a geometric progression" << std::endl) : (std::cout << "It is not a geometric progression" << std::endl);
    

}


bool checkIsAP(std::vector<int> arr, int count)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    int d = arr[0] - arr[1];

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] - arr[i + 1] != d)
            return false;
    }

    return true;
}

bool is_geometric(std::vector<int> arr, int count) {
       for (int i = 0; i < arr.size(); i++)
       {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    int ratio = arr[1] / (arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        double rat = (double)arr[i] / (double)arr[i -1];

        if (rat != ratio)
        {
            return false;
        }
    }
    return true;
}