#include <iostream>
#include "sqlite3.h"
using namespace std;

int main() {

const char* dir = "C:/Users/Usuario/Desktop";
sqlite3* BD;

int exit = 0;
exit = sqlite3_open(dir, &BD);
sqlite3_close(BD);



  return 0;
}
