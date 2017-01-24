#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <fstream>

using namespace std;
 
int main () {
int i,j;
 
double nums[100];
srand( (unsigned)time( NULL ) );


for( i = 0; i < 100; i++ ) {
double u=((double)rand()/(double)RAND_MAX);
double x=log(1-u)/(-3);
nums[i]=10*(x+1);
//cout << x << '\n';
}
ofstream myfile ("numlist.csv");

if (myfile.is_open())
  {


    for(int count = 0; count < 99; count ++){
        myfile << nums[count] << "\n" ;
    }
    myfile.close();
  }
  else cout << "Unable to open file";

return 0;
}
