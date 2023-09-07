#include <iostream>

int main() {

    for(int i = 1 ; i < 11 ; i++){
        std::cout << "---------------------------" << std::endl;
        std::cout << "Mul table of "<< i << std::endl;
        for(int j = 1 ; j < 11 ; j++){

            std::cout << i << " X " << j << " = " << i*j <<std::endl;

        }
    }

    return 0;
}