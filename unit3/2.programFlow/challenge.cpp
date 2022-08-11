#include <iostream>
#include <vector>
#include <string>
using namespace std;

void displayMenu(){
 printf("P - print\nA - add\nM - mean\nS - smallest\nL - largest\nQ - quit\n\nEnter your choice: ");
}

void printList(vector <int> list){
 cout << '[';
 for(auto v:list){
  cout << v << ',';
 }
 cout << ']' << endl;
}

double getMean(vector <int> list){
 double mean {};
 for (auto v:list){
  mean+=v;
 }
 return mean/(double)list.size();
}

int getSmallest(vector <int> list){
 int smallest = list.at(0);
 for (auto v:list){
  if(v<smallest){
   smallest=v;
  }
 }
 return smallest;
}

int getLargest(vector <int> list){
 int largest = list.at(0);
 for (auto v:list){
  if(v>largest){
   largest=v;
  }
 }
 return largest;
}

int main(int argc, char *argv[]){
 vector <int> list {};

 char choice {};
 do {
  displayMenu();
  scanf(" %c",&choice);
  if (choice == 'q' || choice == 'Q'){cout << "bye!"<<endl;break;}
  switch (choice){
   case 'P':
   case 'p':
    if (list.size() > 0){
     printList(list);
    } else {
     printf("No Elements\n");
    }
    break;
   
   case 'A':
   case 'a':
    int n;
    printf("enter num: ");
    scanf("%d",&n);
    list.push_back(n);
    break;

   case 'M':
   case 'm':
    cout << getMean(list) << endl;
    break;

   case 'S':
   case 's':
    cout << getSmallest(list) << endl;
    break;

   case 'L':
   case 'l':
    cout << getLargest(list) << endl;
    break;

   default:
    cout << "Invalid option :(, try again" << endl;
    break;
  }
 } while (choice != 'q' or choice != 'Q');
 return 0;
}
