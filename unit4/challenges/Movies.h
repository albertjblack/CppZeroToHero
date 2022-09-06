#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <iostream>
#include <vector>

#include "Movie.h"


class Movies{
  private:
    std::vector<Movie> list {};
  public:
    Movies();
    Movies(Movies const &source);
    ~Movies();

    void display() const;
    void add_movie(std::string,std::string,int);
    void increment_watched_count(std::string);
};

#endif