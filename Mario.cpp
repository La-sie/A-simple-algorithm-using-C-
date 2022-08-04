#include <iostream>
using namespace std;

int main() {

int numBer;

  do{

  cout << " Enter a number (1-8)" << endl;
  cin >> numBer;
 }
  while ( numBer < 1 || numBer > 8 );

  for (int i = 0; i < numBer; i ++) 
{
   for (int k = 1; k < numBer-1; k++) {
   cout << " ";
  }
   for ( int l = 0; l < i + 1; l++) {
   cout << "#";
  } 
   for ( int m = 0; m < 2; m++ ) {
   cout << " ";
  } 
   for ( int n = 0; n < i + 1; n++ ) {
    cout << "#";
  } cout << endl;
}


return 0;
}
