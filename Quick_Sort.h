//
// Created by devem on 8/28/22.
//

#ifndef PAGE_SORT_QUICK_SORT_H
#define PAGE_SORT_QUICK_SORT_H
#include <vector>
#include <iostream>
using namespace std;
class Quick_Sort {
public:
    static void swap(int &a, int &b);
    static int partition(vector<int>&arr, int start, int end);
    static void quicksort(vector<int>&arr, int start, int end);
    static void print_array(vector<int>arr);
};


#endif //PAGE_SORT_QUICK_SORT_H
