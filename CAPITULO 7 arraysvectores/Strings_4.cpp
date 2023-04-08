#include <iostream>
#include <string>
using namespace std;

int main() {

string s1 = "As time by ...";
string s2 =  "goes";

s1.insert(11,s2);
cout <<s1<<endl<<endl;

int pos_by = s1.find("by");
s1.erase(pos_by+3,7);
cout <<s1<<"#"<<endl<<endl;

s1.replace(3,4,"Bill");
cout <<s1<<endl<<endl;

  return 0;
}
