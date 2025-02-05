#include <iostream>

int main(){
    //&& AND 
    //|| OR 
    //! Reverses the logical state

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
/*
    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!\n";
    }
    else{
        std::cout << "The temperature is bad\n";
    }
*/
    std::cout << ((temp > 0 && temp < 30) ? "The temperature is good\n" : "The temperature is bad\n");
    bool sunny = false;
    std::cout << ((!sunny) ? "It's cloudy" : "It's Sunny");


    return 0;
}