// get 2 arr and their sizes and then creat a new array of size n*m with their multiples
// get arr and size to display it

#include <iostream>
using namespace std;

int *mult_arr(int *arr1, size_t sz1, int *arr2, size_t sz2){
 int *res {nullptr};
 res = new int[sz1*sz2];
 
 size_t curr_idx {0};
 for (size_t i {0}; i<sz2; ++i){
  for (size_t j {0}; j<sz1; ++j){
   res[curr_idx++] = arr2[i] * arr1[j];
  }
 }
 return res;
}

void print_arr(int *arr, size_t sz){
 cout << "[ ";
 for (size_t i {0}; i<sz; ++i){
  cout << *arr++ << " ";
 }
 cout << "]" << endl;
}

int main(int argc, char *argv[]){
 int arr1[] {1,2,3,4,5};
 int arr2[] {10,20,30};
 int *arr3 {mult_arr(arr1,5,arr2,3)};
 print_arr(arr3,15);
 return 0;
}
