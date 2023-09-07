#include <iostream>

int even_odd_num(int arr[], int size){
    int count_even = 0, temp;

    for(int i = 0 ; i < size ; i++){
        if(!(arr[i]%2)){
            temp = arr[count_even];
            arr[count_even++] = arr[i];
            arr[i] = temp;
            
        }
    }
    return count_even;
}


int main(){

    int counter,size, i = 0,array[] = {2,4,6,8,10,12};
    size = sizeof(array)/sizeof(array[0]);
    counter = even_odd_num(array, size);
    if(counter){
        std::cout << "Even numbers:" << std::endl;
        for (; i < counter; i++) {
            std::cout << array[i] << " ";
        }
    }
    else {
        std::cout << "No Even numbers" << std::endl;
    }
    if(i<size){
        std::cout << "\nOdd numbers:" << std::endl;
        for (; i < size; i++)
        {
            std::cout << array[i] << " ";
        }
    }
    else{
        std::cout << "\nNo Odd numbers" << std::endl;
    }



    return 0;
}