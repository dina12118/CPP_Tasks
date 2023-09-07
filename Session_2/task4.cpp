#include <iostream>

void merge_arrays(int arr1[], int size1, int arr2[], int size2, int merged_array[]){
    std::copy(arr1 , arr1+size1, merged_array);
    std::copy(arr2, arr2+size2, merged_array+size1);
}

int main(){
    int array1[] = {1,2,3,4,5};
    int array2[] = {6,7,8,9,10,11,12,0};
    int s1 = sizeof(array1)/sizeof(array1[0]);
    int s2 = sizeof(array2)/sizeof(array2[0]);

    int * result = new int[s1+s2];

    merge_arrays(array1, s1, array2, s2, result);
    for(int i = 0 ; i < s1 + s2 ; i++){
        std::cout << result[i] << " ";
    }

}