#include <iostream>
#include <array>
#include <random>
#include <exception>
#include <ctime>
using namespace std;


int main(int argc, char const *argv[])
{
    
    array<int, 10> arr = {}; 
    array<int, 6> arr2 = {};
    array<int, 6> arr3 = {};
    default_random_engine motor(static_cast<unsigned int>(time(0)));
    uniform_int_distribution <unsigned int> intAleatorio(0,20);

    for(int i = 0; i < 7 ; i++){
        arr.at(i) = intAleatorio(motor);
    }

    cout <<"Elements of arr:"<<endl;
    for (const auto &i : arr)
    {
        cout << i << " " ;
    }
    cout << endl << endl;

    cout <<".size() = " << arr.size() << endl;
    cout <<".empty() = " << (arr.empty() ? "Is empty." : "Is not empty." ) <<endl;
    cout <<".at() = " << arr.at(3) << endl; 
    
    try{
        cout <<".at() = " << arr.at(13) << endl; //at valida el índice, ([]) no
    }catch(const out_of_range e){
        cout <<"Index is not valid bro."<<endl;
    }
    
    cout <<".front() = " << arr.front() << endl; //retornan una referencia, por tanto pueden modificar ese elemento
    cout <<".back() = " << arr.back() << endl;




    cout <<"\n------------------------------------------\narr2"<<endl;

    arr2.fill(1);
    for(auto i = arr2.begin(); i < arr2.end(); i++){
        cout << *i << " ";
    }
    cout << endl<< endl;
    cout <<"arr3 with random values"<<endl;

    for(int i = 0; i < arr3.size() ; i++){
        arr3.at(i) = intAleatorio(motor);
    }
        for(auto i = arr3.begin(); i < arr3.end(); i++){
        cout << *i << " ";
    }
    cout << endl<< endl;

    cout <<".swap()"<<endl;
    arr3.swap(arr2);
    cout <<"elements of swaped arr2"<<endl;
    for (const auto &i : arr2)
    {
        cout << i << " " ;
    }

    cout <<"\n\nelements of swaped arr3"<<endl;
    for (const auto &i : arr3)
    {
        cout << i << " " ;
    }

    return 0;
}
