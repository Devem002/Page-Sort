//
// Created by devem on 8/29/22.
//
#ifndef PAGE_SORT_PAGED_ARRAY_H
#define PAGE_SORT_PAGED_ARRAY_H
#include <iostream>
#include <fstream>
#include <vector>
#include <sys/resource.h>
using namespace std;

class Paged_Array {
public:
    static vector<int> read_file(vector<int> arr);
    static void setlimit();
    static void printArr(vector<int>arr);
    static void write_file(vector<int> arr, string name);

};


#endif //PAGE_SORT_PAGED_ARRAY_H
