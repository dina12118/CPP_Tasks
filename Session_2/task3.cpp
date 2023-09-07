#include <iostream>


void delete_number(int arr[], int size, int num){

    int flag = 0, i;
    for(i = 0 ; i < size ; i++){
        if(!flag){
            if(arr[i] == num){
                flag = 1;
                break;;
            }
        }
        
    }
    if(flag){
        std::copy(arr+i+1, arr+size, arr+i);
        arr[size-1] = 0;
        std::cout << num <<" is deleted" << std::endl;
    }
    else{
        std::cout << "We didn't find your number" << std::endl;
    }
    

}

int main(){

    int array[] = {5,4,7,9,1}, num, size;
    size = sizeof(array)/sizeof(array[0]);

    std::cout << "Enter number to delete: " << std::endl;
    std::cin >> num;
    delete_number(array, size , num);
    for(auto i : array){
        std::cout << i << " ";
    }


    return 0;
}