#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <random>
using namespace std;

const int TAM = 10;

int main() {

array<double, TAM> arr2 = {};
/*
random_device rd;
mt19937 gen(rd());
uniform_real_distribution<double> dist(1,50);
*/

default_random_engine motor_random (static_cast<unsigned int>( time(0) ) );
uniform_real_distribution< double > dist(0,20);


for(int i = 0; i < TAM; i++){
  arr2[i] = dist(motor_random);
}

for(int i = 0; i < TAM; i++){
  cout <<arr2[i]<<endl;
}

  return 0;
}
