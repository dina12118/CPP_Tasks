#include <iostream>
#define SIZE 5

void search_number(int arr[], int size, int num){


    for(int i = 0 ; i < size ; i++){
        if(arr[i] == num){
            std::cout << "Your number is found with index = " << i << std::endl;
            return ;
        }
    }
    std::cout << "We didn't find your number" << std::endl;

}

int main(){

    int array[] = {5,4,7,9,1}, num;

    std::cout << "Enter number to search for it: " << std::endl;
    std::cin >> num;
    search_number(array, sizeof(array)/sizeof(array[0]) , num);


    return 0;
}