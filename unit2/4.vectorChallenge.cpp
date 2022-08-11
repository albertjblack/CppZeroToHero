#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
 vector <int> vector1;
 vector1.push_back(10);
 vector1.push_back(20);
 printf("V1 | 0:%d 1:%d size:%lu\n", vector1.at(0), vector1.at(1), vector1.size());
 
 vector <int> vector2;
 vector2.push_back(100);
 vector2.push_back(200);
 printf("V2 | 0:%d 1:%d size:%lu\n", vector2.at(0), vector2.at(1), vector2.size());

 vector <vector<int>> vector_2d {};
 vector_2d.push_back(vector1);
 vector_2d.push_back(vector2);
 printf("Vector_2d: [[%d,%d],[%d,%d]]\n", vector_2d.at(0).at(0), vector_2d.at(0).at(1),vector_2d.at(1).at(0), vector_2d.at(1).at(1));
 
 vector1.at(0) = 1000;
 printf("Vector_2d: [[%d,%d],[%d,%d]]\n", vector_2d.at(0).at(0), vector_2d.at(0).at(1),vector_2d.at(1).at(0), vector_2d.at(1).at(1));
 printf("V1 | 0:%d 1:%d size:%lu\n", vector1.at(0), vector1.at(1), vector1.size());

 return 0;
}