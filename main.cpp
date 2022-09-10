#include <iostream>
#include "Quick_Sort.h"
#include "Insertion_Sort.h"
#include "Selection_Sort.h"
#include "text_to_binary.h"
#include "Paged_Array.h"

using namespace std;


int main(int argc, char* argv[]) {
    vector<int> arr;
    vector <string> arg_list;
    for (int i = 0; i < argc; i++) {
        arg_list.push_back(argv[i]);
    }
    text_to_binary *file = new text_to_binary();
    file->convert(arg_list[2]);
    Paged_Array *bin = new Paged_Array();
    arr = bin->read_file(arr);
    bin->setlimit();
    //bin->printArr(arr);
    if (arg_list[4] == "QS") {
        Quick_Sort *sort = new Quick_Sort();
        sort->quicksort(arr, 0, arr.size() - 1);
        bin->write_file(arr, arg_list[6]);
        //sort->print_array(arr);
    }
    if (arg_list[4] == "IS") {
        Insertion_Sort *sort = new Insertion_Sort();
        sort->insertionsort(arr);
        bin->write_file(arr, arg_list[6]);
        //sort->print_array(arr);
    }
    if (arg_list[4] == "SS") {
        Selection_Sort *sort = new Selection_Sort();
        sort->selectionsort(arr);
        bin->write_file(arr, arg_list[6]);
        //sort->print_array(arr);
    }
    return 0;
}