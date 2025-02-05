#include <iostream> 

int main()
{
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression 2;
    int grade;
    std::cout << "Grade?: ";
    std::cin >> grade;
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";
    grade % 2 == 1 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    bool hungry;
    //std::cout << "Hungry?: ";
    //std::cin >> hungry;   not working, need different input for boolean
    hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry " : "You are full");
    return 0;
}