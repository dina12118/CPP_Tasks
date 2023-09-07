#include <iostream>
#include <iomanip>

int main(){

    unsigned char i = 0;

    std::cout << "+---------+---------+" << std::endl << "|    C    |    A    |" << std::endl << "+---------+---------+" << std::endl;

    for(; i < 255 ; i++){

        if( i < 33 || i == 127){
            std::cout << "|         |    " ;
        }
        else
        {
            std::cout << "|    " << i << "    |    " ;
        }
        printf("%d ", i);
        if(i < 10){
            std::cout << "    |" <<std::endl;
        }
        else if (i < 100)
        {
            std::cout << "   |" <<std::endl;
        }
        else
        {
            std::cout << "  |" <<std::endl;
        }       
    }

    std::cout << "|    " << i << "    |    " ;
    printf("%d ", i);
    std::cout << "  |" <<std::endl << "+---------+---------+";


    return 0;
}