// InversionCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int GetInversionCount(const std::vector<int>& arr)
{
    int count = 0;
    for (auto i = arr.cbegin(); i != arr.cend(); ++i)
    {
        for (auto j = i + 1; j != arr.cend(); ++j)
        {
            if (*i > *j)
                ++count;
        }
    }

    return count;
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The number array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "The inversion count of the array: " << GetInversionCount(vec) << std::endl << std::endl;
    }
}
