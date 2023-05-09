#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    //CONSTRUCTOR 1 vacío
    vector<float> v1;

    //CONSTRUCTOR 2 de 7 elementos que son 0
    vector<float> v2(7);

    //CONSTRUCTOR 3 de relleno 7 elementos de valor 100
    vector<float> v3(7,100);
    
    //CONSTRUCTOR 4 de rango, usa iterators
    vector<float> v4(v2.begin(), v2.end());

    //CONSTRUCTOR 5 rango con =
    float arr[] = {1.54, 6.78, 20.1, -9.7, 9.8, 5.04, -7.41};
    vector<float> v5(arr, arr + sizeof(arr)/sizeof(float) );


    vector<float> v6( v5.begin(), v5.end() );

    cout << endl << "v3.size(): " << v3.size() << endl;
    cout << endl << "v4.size(): " << v4.size() << endl;
    cout << endl << "v5.size(): " << v5.size() << endl << endl;

    cout <<"Elementos de v2"<<endl;
    for(const auto i : v2){
        cout <<i << " ";
    }
    cout << endl << endl;

    
    cout <<"Elementos de v3"<<endl;
    for(const auto i : v3){
        cout <<i << " ";
    }
    cout << endl << endl;


    cout <<"Elementos de v4"<<endl;
    for(int i = 0; i < v4.size(); i++){
        cout << v4.at(i) << " ";
    }
    cout << endl << endl;


        cout <<"Elementos de v5"<<endl;
    for(int i = 0; i < v5.size(); i++){
        cout << v5[i] << " ";
    }
    cout << endl << endl;

    
    cout <<"Elementos de v6"<<endl;
    for(const auto i : v6){
        cout <<i << " ";
    }
    cout << endl << endl;




    return 0;
}
