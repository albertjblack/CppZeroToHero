#include "MyStrings.h"

member::MyString2 & member::MyString2::operator-() const {
  char * buff = new char [strlen(str)+1];
  std::strcpy(buff,str);

  for (size_t i {}; i<strlen(buff); i++){
    buff[i] = std::tolower(buff[i]);
  }

  member::MyString2 tmp {buff};
  delete [] buff;
  return tmp;
}

member::MyString2 & member::MyString2::operator+(const MyString2 & rhs) const {
  char * buff = new char[strlen(str)+strlen(rhs.str)+1];
  strcpy(buff,str);
  strcat(buff,rhs.str);
  MyString2 tmp {buff};
  delete [] buff;
  return tmp;
}

member::MyString2 & member::MyString2::operator*(const int & rhs) const{
  char * buff = new char[strlen(str)*(rhs+1)];
  strcpy(buff,str);
  for (size_t i {0}; i<rhs; i++){
    strcat(buff,str);
  }
  MyString2 tmp {buff};
  delete [] buff;
  return tmp;

}

member::MyString2 & member::MyString2::operator=(const MyString2 & rhs){
  if (this == & rhs) {return *this;}
  delete [] str;
  str = new char[strlen(rhs.str)+1];
  std::strcpy(str,rhs.str);
  return *this;
}

member::MyString2 & member::MyString2::operator=(MyString2 && rhs){
  if (this == &rhs){return *this;}
  delete [] str;
  str = rhs.str;
  rhs.str= nullptr;
  return *this;
}


bool member::MyString2::operator==(const MyString2 & rhs) const {
  if (std::strcmp(str,rhs.str) == 0){
    return true;
  } 
    return false;
}

bool member::MyString2::operator!=(const MyString2 & rhs) const {
  if (std::strcmp(str,rhs.str) != 0){
    return true;
  } 
  return false;
}

bool member::MyString2::operator<(const MyString2 & rhs) const {
  if (std::strcmp(str,rhs.str)<0){
    return true;
  } 
  return false;
}

bool member::MyString2::operator>(const MyString2 & rhs) const {
  if (std::strcmp(str,rhs.str)>0){
    return true;
  }
  return false;
}

member::MyString2 member::MyString2::operator+=(const MyString2 & rhs){
  *this = *this + rhs;
  return *this;
}

member::MyString2 member::MyString2::operator*=(const int & n){
  *this = *this * n;
  return *this;
}