#include <stdio.h>
#include <omp.h>
#include <iostream>
using namespace std;

int main(){

//omp_set_num_threads(8);

#pragma omp parallel num_threads(8)
{
int id = omp_get_thread_num();
cout << id << endl;
}

return 0;


}
