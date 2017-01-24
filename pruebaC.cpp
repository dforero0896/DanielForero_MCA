#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
using namespace std;
 
int main () {
int i,j;
 
double nums[100];
srand( (unsigned)time( NULL ) );


for( i = 0; i < 100; i++ ) {
double u=((double)rand()/(double)RAND_MAX);
double x=log(1-u)/(-3);
nums[i]=x
}
FILE *f = fopen("numlist.csv", "w");
fprintf(f, "%f\n",nums);
fclose(f);
return 0;
}
