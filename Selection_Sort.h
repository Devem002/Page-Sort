//
// Created by devem on 8/28/22.
//

#ifndef PAGE_SORT_SELECTION_SORT_H
#define PAGE_SORT_SELECTION_SORT_H
#include <vector>
#include <iostream>
using namespace std;

class Selection_Sort {
public:
    static void swap(int &num1, int &num2);
    static void selectionsort(vector<int>&arr);
    static void print_array(vector<int>arr);
};


#endif //PAGE_SORT_SELECTION_SORT_H
