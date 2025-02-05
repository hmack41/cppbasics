#include <iostream>

int main(){
    //Integer
    int x = 5;
    int y = 6.5;    //decimal gets truncated
    int sum = x+y;
    int age = 24;

    //Doubles
    double price = 10.99;
    double GPA = 2.5;
    double temperature = 25.1;

    //Character
    char grade = 'A';
    char initial = 'H';

    //Boolean   (true or false)
    bool student = true;
    bool power = false;

    //String    (type of object that represents a sequence of text)
    std::string name = "henry";

    //Printing
    std::cout << "I like pizza!" << '\n';
    std::cout << "I would like " << sum << " pizzas" << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Grade: " << grade << '\n';
    std::cout << "Hello " << name << " you are " << age << " years old";

    return 0;
}