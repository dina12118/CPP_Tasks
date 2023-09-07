#include <iostream>
#define SIZE 5

int get_max(int arr[], int size){

    int max = arr[0];

    for(int i = 1 ; i < size ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int array[] = {5,4,7,9,1};
    std::cout << "The max. element is: "<< get_max(array, sizeof(array)/sizeof(array[0])) << std::endl;


    return 0;
}