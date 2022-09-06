#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie{
  private:
    std::string name;
    std::string rating;
    int watch_count;
  public:
    Movie(std::string n ="Harry Potter", std::string r="PG-13", int w_c=69);
    Movie(Movie const &source);
    ~Movie();
    void display() const;
    int get_count() const;
    void set_count(int w_c);
    std::string get_name() const;
};

#endif