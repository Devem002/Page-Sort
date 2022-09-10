//
// Created by devem on 8/28/22.
//

#include "Quick_Sort.h"

void Quick_Sort::swap(int &num1, int &num2) {
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

int Quick_Sort::partition(vector<int> &arr, int start, int end) {
    int pivot = arr[start];
    int i = start + 1;
    for(int j = i; j <= end; j++){
        if(arr[j] < pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[start],arr[i-1]);
    return i-1;
}

void Quick_Sort::quicksort(vector<int> &arr, int start, int end) {
    if(start < end){
        int pivote = partition(arr,start,end);
        quicksort(arr,start,pivote-1);
        quicksort(arr,pivote+1,end);
    }
}

void Quick_Sort::print_array(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
