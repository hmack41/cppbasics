#include <iostream>
#include <vector>
/*
typedef = reserved keywowrd used to create
          an additional name for another 
          data type. New identifier for an
          existing type. Helps with readabilty
          and reduces typos
          Replaced with using
*/
//Typedef
typedef std::vector<std::pair<std::string, int>> pairlist_t; 
typedef std::string text_t;
typedef int number_t;

//using
using text_t = std::string;
using number_t = int;

int main() {
    pairlist_t pairlist;
    text_t firstname = "Henry";
    number_t age = 24;
    std::cout << firstname << "\n";
    std::cout << age <<"\n";


return 0;
}