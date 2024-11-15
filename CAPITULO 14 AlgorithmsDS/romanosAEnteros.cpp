#include <iostream>
#include <map>
#include <string>
#include <utility>
using std::cin;
using std::cout;
using std::string;

std::map<char, int> romans={ {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
    {'C', 100}, {'D', 500}, {'M', 1000} };

class RomanNumberToDecimal{

public:
    int solution(string romanNumber){
        int result = 0;
        int i = 0, n = romanNumber.length();
        while( i < n ){
            if( (i<n-1)&&(romans[romanNumber[i]] < romans[romanNumber[i+1]]) ){
                result += romans[romanNumber[i+1]] - romans[romanNumber[i]];
                i+=2;
            }else{
                result += romans[romanNumber[i]];
                i+=1;
            }
        }
        return result;
    }
};

int main(){
    string romanNumber{"XVI"};
    RomanNumberToDecimal roman;
    cout << roman.solution(romanNumber);
    // int result = 0;
    // int i = 0;
    // while( i < romanNumber.length() ){
    //     if( (i < romanNumber.length()-1)&&(romans[romanNumber[i]] < romans[romanNumber[i]]) ){
    //         result += romans[romanNumber[i]] - romans[romanNumber[i+1]];
    //         i+=2;
    //     }else{
    //         result += romans[romanNumber[i]];
    //         i+=1;
    //     }
    // }
}


/*
int main(int argc, char const *argv[])
{

    std::map<string, int> mapa = {
        {"primero",10},
        {"segundo",20},
        {"tercero", 30}
    };

    //la manera difícil con un toque ligeramente retador
    cout << "\tLA MANERA DIFÍCIL CON UN TOQUE LIGERAMENTE RETADOR\n";
    cout << "primero" << ": " << mapa["primero"] << "\n";
    cout << "segundo" << ": " << mapa["segundo"] << "\n";
    cout << "tercero" << ": " << mapa["tercero"] << "\n"; 


    //auto
    cout << "\n\tAUTO\n";
    for(auto& x: mapa){
        cout << x.first << ": " << x.second << "\n";
    }

    //usando un pair
    cout << "\n\tPAR\n";
    for(std::pair<string, int> mipar: mapa){
        cout << mipar.first << ": " << mipar.second << "\n";
    }

    //iterator
    cout << "\n\tITERATOR\n";
    std::map<string, int>::iterator it;
    for( it = mapa.begin(); it != mapa.end(); it++ ){
        cout << it->first << ": " << (*it).second << "\n";
    }
    return 0;
}
*/
