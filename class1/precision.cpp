#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main(){


  unsigned int id;
  int min;
  float x;
  float y;
int mins[21];
float init[21];
int i;
init[0]=1E-10;
mins[0]=(*(unsigned int*)&init[0]);
ofstream myfile;
myfile.open("singlefloat.csv");
for(i=1;i<21;i++){
init[i]=10*init[i-1];
mins[i]=(*(unsigned int*)&init[i]);
id = mins[i]++;
y = (*(float*)&mins[i]);
    x = (*(float*)&id);
cout.precision(25);
 cout << init[i] << "   " << abs(x-y) << endl;
myfile << init[i] << "," << abs(x-y) << endl;

}
myfile.close();

ofstream otherfile;
otherfile.open("doublefloat.csv");
long int minsD[21];
double initD[21];
initD[0]=1E-10;
minsD[0]=(*(unsigned long int*)&initD[0]);


for(i=1;i<21;i++){
initD[i]=10*initD[i-1];
minsD[i]=(*(unsigned long int*)&initD[i]);
id = minsD[i]++;
y = (*(double*)&mins[i]);
    x = (*(double*)&id);
cout.precision(25);
 cout << init[i] << "   " << abs(x-y) << endl;
otherfile << init[i] << "," << abs(x-y) << endl;

}

otherfile.close();

}
