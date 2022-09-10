//
// Created by devem on 8/29/22.
//

#include "text_to_binary.h"

void text_to_binary::split(const std::string &str, const char delim, vector<std::string> &out) {
    stringstream s(str);
    string s2;
    while(getline(s,s2, delim)){
        out.push_back(s2);
    }
}

void text_to_binary::convert(std::string name) {
    string s2;
    const char delim = ',';
    ifstream file (name);
    ofstream binary("Binary.bin");
    getline(file, s2);
    vector<string>out;
    split(s2, delim, out);
    int n;
    for (const auto &s2:out){
        int current = stoi(s2);
        binary.write(reinterpret_cast<const char *>(&current), sizeof(int));
        //cout <<current<<",";
    }
}