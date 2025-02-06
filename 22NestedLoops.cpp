#include <iostream>

int main ()
{
    int rows;
    int cols;
    char sym;
    std::cout << "How many rows? :";
    std::cin >> rows;
    std::cout << "How many columns? :";
    std::cin >> cols;
    std::cout << "What symbol? :";
    std::cin >> sym;
    for(int n = 1; n <=rows; n++){
        for(int i = 1; i <= cols; i++){
            std::cout << sym;
        }
        std::cout <<'\n';
    }
    return 0;
}