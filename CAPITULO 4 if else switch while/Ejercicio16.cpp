#include <iostream>
#include <iomanip>

using namespace std;


int main(){
int i = 1;

cout <<"| N |"<<setw(6)<<"10N |"<<setw(6)<<"100N |"<<setw(6)<<"1000N |"<<endl;
cout <<"_______________________"<<endl;
while(i <= 5){

cout<<setw(1)<< i <<setw(5)<< 10*i <<setw(8)<< 100*i <<setw(8)<< 1000*i <<endl;
i++;
}







    return 0;
}
