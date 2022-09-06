#include <iostream>
#include <string>

#include "Movies.h"
#include "Movie.h"

Movies::Movies(){

};
Movies::Movies(Movies const &source){

};
Movies::~Movies(){

};

void Movies::display() const{
      for (const Movie &m:list){
        m.display();
        std::cout << "\n"; 
      }
    }

void Movies::add_movie(std::string n, std::string r, int c){
  Movie m = Movie(n,r,c);
  bool is_in_list = false;
  for (const Movie &x:list){
    if (x.get_name()==m.get_name()){
      is_in_list = true;
    }
  }
  if (is_in_list == false){
    list.push_back(m);
    std::cout << "Movie added to your watched films list." << std::endl;
  } else {
    std::cout << "Movie already in list. If you want to increment the number of times you've watched it choose the right option." << std::endl;
  }
}

void Movies::increment_watched_count(std::string s){
  for (Movie &m:list){
    if (m.get_name() == s){
      m.set_count(m.get_count()+1);
    } else{
      std::cout << s << " does not exit in your movies yet. Operation failed :(" << std::endl;
    }
  }
}