#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {

int factor1, factor2;

cout <<endl<<"\t****** TABLA DE MULTIPLICAR ******"<<endl<<endl<<endl;
for(factor2 = 1; factor2 <= 10; factor2++){
    cout << setw(5) <<factor2;
}

cout <<"\n-------------------------------------------"<<endl;

for(factor1 = 1; factor1 <= 10; factor1++){
    cout << setw(6) << factor1 <<" |";
    for(factor2 = 1; factor2 <= 10; factor2++){
        cout << setw(5) << factor1 * factor2;
    }
    cout <<endl;
}


cout <<endl<<endl<<endl;







  return 0;
}
