//
// Created by devem on 8/28/22.
//

#include "Selection_Sort.h"

void Selection_Sort::swap(int &num1, int &num2) {
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

void Selection_Sort::selectionsort(vector<int> &arr) {
    int minor_num;
    for(int i = 0; i < arr.size()-1; i++){
        minor_num = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[minor_num]){
                minor_num = j;
            }
        }
        swap(arr[i],arr[minor_num]);
    }
}

void Selection_Sort::print_array(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}