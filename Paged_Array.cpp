//
// Created by devem on 8/29/22.
//

#include "Paged_Array.h"

vector<int> Paged_Array::read_file(vector<int> arr) {
    ifstream file;
    file.open("Binary.bin", ios::in | ios::binary);
    if(!file.is_open()){
        cerr<<"Falló"<<endl;
        //return;
    }
    int i = 0;
    while(!file.eof()){
        int num;
        file.read((char*)&num , sizeof (num));
        //cout<<num<<": ";
        arr.push_back(num);
        //cout<<arr[i]<<", ";
        i++;
        //cout<< num << ", ";
    }
    file.close();
    //printArr(arr);
    return arr;
}

void Paged_Array::write_file(vector<int> arr, string name) {
    ofstream file;
    file.open(name, ios::out);
    for (int i = 0; i < arr.size(); i++){
        //cout<<arr[i]<<", ";
        file << arr[i] << ", ";
    }
    //cout<<endl;
}

void Paged_Array::setlimit() {
    struct rlimit memlimit;
    int num = 128*1024;
    memlimit.rlim_cur = num;
    memlimit.rlim_max = num;
    setrlimit(RLIMIT_AS, &memlimit);
    //cout<<"Limite de memoria exitoso"<<endl;
}

void Paged_Array::printArr(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


/*
Paged_Array Paged_Array::operator[](int *list) {
    ifstream file;
    file.open("Binary.bin", ios::in | ios::binary);
    if(!file.is_open()){
        cerr<<"Falló"<<endl;
    }
    while(!file.eof()){
        int num;
        file.read((char*)&num , sizeof (num));
        list += num;
        //cout<< num << ", ";
    }
    cout<< list<<endl;
    file.close();
}
*/

