#include <iostream>
#include <stdexcept>
#include "IntArray.h"

IntArray::IntArray(int n){
    if(n < 0){ throw std::invalid_argument("Size array must be > 0"); }

    size = n;
    data = new int[n];
    
    std::cout << "Reserve memory for " << this << std::endl;

    for(int i = 0; i < size; i++){
        *(this->data+i) = 0;
    }

}

IntArray::IntArray(const IntArray& arr){
    //como el operador de asignación, ya está definido, podemos hacer 
    *this = arr;
    /*
    this->size = arr.size;
    data = new int[size];

    std::cout << "Copy constructor from " << &arr << " to " << this << std::endl;

    for(int i = 0; i < size; i++){
        data[i] = arr.data[i];
    }
    */
}

void IntArray::operator=(const IntArray &arr){
    if(data != nullptr){//if (data)
        delete[] data;
    }
    std::cout << "Assingment from " << &arr << " to " << this << std::endl;
    data = nullptr;
    size = arr.size;
    data = new int[size];

    for(int i = 0; i < size; i++){
        data[i] = arr.data[i];
    }
}

void IntArray::operator=(int i){
    IntArray tmp(1);
    tmp.set(0,i);
    *this = tmp;
}

IntArray IntArray::operator+(const IntArray &arr){

    IntArray tmp(size + arr.size);//5Actual + 4Parametro
    
    for(int i = 0; i < size; i++){
        tmp.data[i] = data[i];
    }
    for(int i = size, j = 0; i < tmp.size; i++, j++){
        tmp.data[i] = arr.data[j];
    }
    
    return tmp;
}

int IntArray::operator[](int index) const{
    if(!safetyCheck(index)){
        throw std::invalid_argument("Invalid array index");
    }
    return data[index];
}

int& IntArray::operator[](int index) {
    if(!safetyCheck(index)){
        throw std::invalid_argument("Invalid array index");
    }
    return data[index];
}

IntArray::~IntArray(){
    std::cout << "Free memory for " << this << " with size: " << arraySize() <<std::endl;
    delete[] data;
}

int IntArray::get(int index){
    if(!safetyCheck(index)){
        throw std::invalid_argument("Invalid array index");
    }
    return (*this).data[index];
} //return this->data[index];

long int IntArray::arraySize() const{ return size; }

void IntArray::set(int index, int value){ 
    if(!safetyCheck(index)){
        throw std::invalid_argument("Invalid array index");
    }
    data[index] = value;
}

bool IntArray::safetyCheck(int index) const{
    return (index >= 0) && (index < size);
}