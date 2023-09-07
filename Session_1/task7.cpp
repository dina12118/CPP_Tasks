#include <iostream>
#include <bitset>

int main() {

    int chosen;
    std::cout << "if Convert from decimal to binary enter 1, for vice versa enter 2: " << std::endl;
    std::cout << chosen << std::endl;
    std::cout << "Enter num: " << std::endl;
    if(chosen == 1){
        int dec;
        std::cin >> dec;
        std::bitset<32> test(dec);
        std::cout << test << std::endl;

    }
    else if(chosen == 2)
    {
        std::string binary;
        std::cin >> binary;
        std::bitset<32> test(binary);
        std::cout << test.to_ulong() << std::endl;
    }


    return 0;
}