#include <iostream>

auto square = [](int x){
    return x*x;
};

int main(){

    int m = 5;
    std::cout << square(m) << std::endl;

    return 0;
}