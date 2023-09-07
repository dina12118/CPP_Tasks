#include <algorithm>
#include <iostream>

int main(){

    int arr[] = {1,5,7,2,3,54,95,48,3,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    std::sort(arr, arr+size, [](int a, int b){
        return a < b;
    });

    for(auto i : arr){
        std::cout << i << " ";
    }

    std::cout << "\n--------" << std::endl;

    std::sort(arr, arr+size, [](int a, int b){
        return a > b;
    });

    for(auto i : arr){
        std::cout << i << " ";
    }

}