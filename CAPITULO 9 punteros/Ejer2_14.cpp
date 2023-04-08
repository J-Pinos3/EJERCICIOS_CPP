#include <iostream>
using namespace std;


int *growArray (int cur_size);
int *p_values, *p_new_values;

int main ()
{
  int next_element = 0;
  int size = 10;
  p_values = new int[ size ];
  int val;
  cout << "Please enter a number: ";
  cin >> val;
  while ( val > 0 )
  {
    if ( size == next_element + 1 )
    {
        cout <<"\t\t\t\t\t\t\t\t\t\t\t--";
        // now all we need to do is implement growArray
        p_values = growArray(size );
        delete []p_new_values;
    }
      p_values[ next_element++ ] = val;
      cout << "Please enter a number (or 0 to exit): ";
      cin >> val;
  }

    delete []p_new_values;
    delete [] p_values;
}//FIN DEL MÉTODO DE MAIN

int *growArray (int cur_size)
{
  p_new_values = new int[ cur_size * 2 ];
  for ( int i = 0; i < cur_size; ++i )
  {
   p_new_values[ i ] = p_values[ i ];
  }
 delete p_values;
  return p_new_values;
}
