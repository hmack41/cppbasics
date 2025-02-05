#include <iostream>

int main(){
double temp;
char unit;

std::cout << "Temperature Conversion\n" << "F = Fahrenheit\n" << "C = Celcius\n";
std::cout << "What unit would you like to convert to: ";
std::cin >> unit;
switch(unit){
    case 'F':
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout << "Temperature is: " << temp << " F\n";
    break;
    case 'C':
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp-32)/1.8;
        std::cout << "Temperature: " << temp << " C\n";
    break;
    default:
        std::cout << "Please enter either C or F!\n";

}


std::cout <<"Program over";
}