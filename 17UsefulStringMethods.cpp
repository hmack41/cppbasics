#include <iostream> 
// name.empty() check if empty
// name.clear() clears name
// name.append() 
// name.at(0)



int main (){
std::string name;
std::string email;
std::string funnyname;

char initial;
std::cout << "Enter your name: ";
std::getline(std::cin, name);
if(name.length() > 20 || (name.empty())){
    std::cout << "Invalid name!";
}
else{
    std::cout << "Welcome " << name << '\n';
    email=name.append("@gmail.com");
    std::cout << "Your email is: " << email << '\n';
    initial = name.at(0);
    std::cout << "initial is :" << initial << '\n';
    std::cout << name.find(' ') << '\n';
    funnyname = name.erase(0,1); //not inclusive
    std::cout << funnyname;
    }
}