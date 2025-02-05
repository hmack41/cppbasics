#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18 && age <= 100){
        std::cout << "Welcome to the site!";
    }
    else if(age < 0){
        std::cout <<"You haven't been born yet!";
    }
    else {
        std::cout << "GTFO!!!";
    }
    return 0;
}