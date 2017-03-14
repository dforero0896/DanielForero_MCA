#include <iostream>
using namespace std;
#include <cmath>

int N=64;
float T =5*pow(N, 2.2);
float B = 1.;

float* acc(float i[], float Beta);
int main(){




return 0;
}



float* acc(float x[], float Beta){
int k;
float a[N];
for(k=1;k<N;k++){
a[k]=x[k+1]-2*x[k]+x[k-1] + Beta*(pow((x[k+1]-x[k]), 3) - pow(x[k]-x[k-1], 3));
}
return a;

}
