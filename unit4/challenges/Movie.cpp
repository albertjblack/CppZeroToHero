#include "Movie.h"
#include <iostream>

Movie::Movie(std::string n, std::string r, int w_c) : name{n}, rating{r}, watch_count{w_c}{
  // std::cout << "Adding " << name << std::endl;
}

Movie::Movie(Movie const &source) : Movie(source.name, source.rating, source.watch_count){
  // std::cout << "Copy of " << source.name << std::endl;
}

Movie::~Movie(){
  // std::cout << "Destroyed 1x of " << name << std::endl;
}

void Movie::display() const{
  std::cout << "<Movie | name:" << name << " rating:" << rating << " watch_count:"<<watch_count<<">";
}

int Movie::get_count() const{
  return watch_count;
}

void Movie::set_count(int w_c){
  watch_count = w_c;
}

std::string Movie::get_name() const{
  return name;
}

