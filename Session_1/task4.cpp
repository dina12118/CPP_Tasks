#include <iostream>

int main(){

    std::string vowel = "aoieu";

    char a;
    size_t o;
    std::cin >> a;

    o = vowel.find(a);
    if(o != std::string::npos){
        std::cout << "VOWEL" << std::endl;
    }
    else
    {
        std::cout << "NOT VOWEL" << std::endl;
    }





    return 0;
}