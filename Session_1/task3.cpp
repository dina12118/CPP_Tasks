#include <iostream>
#include <algorithm>
#include <cmath>

int main() {

    int arr[3];
    
    std::cout << "Enter the sides of the triangle: " << std::endl;
    std::cin >> arr[0] >> arr[1] >> arr[2];

    std::sort(arr, arr+3);

    if(std::pow(arr[2], 2) == ((std::pow(arr[0], 2))+(std::pow(arr[1], 2)))){
        std::cout << std::endl << "RIGHT" << std::endl;
    }
    else
    {
        std::cout << "NOT RIGHT" << std::endl;
    }

    return 0;
}