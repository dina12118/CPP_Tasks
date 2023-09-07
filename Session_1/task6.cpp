#include <iostream>

int sum_digits(int num){
    int sum = 0,l;
    
    l = std::to_string(num).length();
    

    for (int i = 0; i < l; i++)
    {
        sum += num%10;
        num /= 10;
    }

    return sum;
}

int main() {

    int o,a;

    std::cin >> a;

    o = sum_digits(a);
    std::cout << o << std::endl;


    return 0;
}