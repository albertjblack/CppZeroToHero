/*
Movie Fanatics Tracker

- class Movie: name (name), rating (G, PG, PG-13, R), watched (times)
- class Movies: collection of movie objects // main driver only interacts with Movies class

example from main
- create a Movies object
- ask Movies to add a movie by providing: name, rating, watched count
- ask Movies to increment watch count by 1 for a movie given its name
- ask Movies to display all movies

additionally
- if we try to add a movie already in the collection -> error -> 
- if we try to ++watch count for a movie that is not in the collection -> error ->

maybe start point
- Movie.h, Movie.cpp, Movies.h, Movies.cpp, main.cpp
- add_movie
- increment_watch_count
- void Movies::display const {}
- void Movie::display const {}
*/

#include <iostream>

#include "Movie.h"
#include "Movies.h"

char menu();

int main(int argc, char *argv[]){
  Movies *movies = new Movies();
  bool run = true;
  char user_y_n {};
  do {
    std::string title, rating;
    int watches;
    char option {menu()};
    switch (option){
      case '1':
        std::cout << "Adding a film :)" << std::endl;

        std::cout << "Enter the title: ";
        std::cin.ignore();
        std::getline(std::cin, title);
        std::cout << "Enter the rating: (G, PG, PG-13, R): ";
        std::cin >> rating;
        std::cout << "How many times have you watched \"" << title << "\"?: ";
        std::cin >> watches;

        std::transform(title.begin(), title.end(), title.begin(), [](unsigned char c){ return std::tolower(c); });

        movies->add_movie(title,rating,watches);
        break;

      case '2':
        std::cout << "Enter the title: ";
        std::cin.ignore();
        std::getline(std::cin, title);
        std::cout << "Incrementing film's watch count ++" << std::endl;
        movies->increment_watched_count(title);
        break;

      case '3':
        std::cout << "Displaying films..." << std::endl;
        movies->display();
        break;

      default:
        printf("Invalid option. Try again.");
        continue;
    }

    std::cout<<"Do you want to keep going? (y/n)"<<std::endl;
    std::cin>>user_y_n;
    run = true ? (user_y_n == 'y' || user_y_n == 'Y') : false;

  } while (run == true);

  std::cout << "Au revoir." << std::endl;
  delete movies;
  return 0;
}

char menu(){
  char option {};
  std::cout << "Choose an option: " << std::endl;
  std::cout << "1. Add a film to your watched movies" << std::endl;
  std::cout << "2. Increment the wathc count for a film" << std::endl;
  std::cout << "3. Display all films" << std::endl;
  std::cin >> option;
  return option;
}

