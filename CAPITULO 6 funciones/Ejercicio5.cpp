#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

cout <<fixed<<setprecision(3);

cout <<"a) x = fabs(7.5) = "<<fabs(7.5)<<endl;
//cout <<"x = fabs(7.5) = "<<abs(7.5)<<endl;

cout <<"b) x = floor(7.5) = "<<floor(7.5)<<endl;
cout <<"c) x = fabs(0.0) = "<<fabs(0.0)<<endl;
cout <<"d) x = ceil(0.0) = "<<ceil(0.0)<<endl;
cout <<"e) x = fabs(-6.4) = "<<fabs(-6.4)<<endl;
cout <<"f) x = ceil(-6.4) = "<<ceil(-6.4)<<endl;
cout <<"g) x = ceil( -fabs( -8 + floor(-5.5) ) ) = "<<ceil( -fabs( -8 + floor(-5.5) ) )<<endl;
cout <<"test) y = floor(-6.4) = "<<floor(-6.4)<<endl;







    return 0;
}
