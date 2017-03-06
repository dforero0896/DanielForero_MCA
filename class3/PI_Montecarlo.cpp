#include <iostream>
using namespace std
#include <cmath>
#include <random>
//#include <mpi.h>


int elems = 100;
float x[elems];
float y[elems];
float *create_rand_nums(int num_elements) {
  float *rand_nums = (float *)malloc(sizeof(float) * num_elements);
  assert(rand_nums != NULL);
  int i;
  for (i = 0; i < num_elements; i++) {
    rand_nums[i] = (rand() / (float)RAND_MAX);
  }
  return rand_nums;
}

float rad (float *x, float *y){
return sqrt(pow(x, 2) + pow(y, 2));
}
int count_points (float *x, float*y){
for (int i =0; i< elems;i++){

}


}
int main(){

x = create_random_nums(elems);
y = create_random_nums(elems);


cout << x << endl;




}
