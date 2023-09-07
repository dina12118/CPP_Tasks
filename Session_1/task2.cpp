#include <iostream>
#include <algorithm>

int main(){

    int max = 0, a,b,c;

    std::cout << "Enter 3 numbers: " << std::endl;
    std::cin >> a >> b >> c ; 

    max = std::max({a,b,c});
    std::cout << std::endl << "The max num is: "<<max << std::endl;


    return 0;
}