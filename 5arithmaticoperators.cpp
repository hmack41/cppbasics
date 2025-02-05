#include <iostream>
#include <vector>
/*
operators = result of a arithmetic operator
*/

int main() {
    int students = 20;
    students = students+=1;
    students = students-=1;
    //students = students*2;
    students*=2;
    //students = students /2;
    students/=2;
    std::cout << students << "\n";

    int remainder = students % 3;
    std::cout << remainder;

    int eq = 6 - 5 + (4 * 3) / 2;
    std::cout << eq;




return 0;
}