//
// Created by devem on 8/29/22.
//

#ifndef PAGE_SORT_TEXT_TO_BINARY_H
#define PAGE_SORT_TEXT_TO_BINARY_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class text_to_binary {
public:
    static void convert(string name);
    static void split(string const &str, const char delim, vector<string>&out);
};


#endif //PAGE_SORT_TEXT_TO_BINARY_H
