//
// Created by devem on 8/28/22.
//

#include "Insertion_Sort.h"

void Insertion_Sort::insertionsort(vector<int> &arr) {
    for(int i = 1; i < arr.size(); i++){
        int j = i;
        int aux = arr[i];
        while(j > 0 && aux < arr[j-1]){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = aux;
    }
}

void Insertion_Sort::print_array(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}