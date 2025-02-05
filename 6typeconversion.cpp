#include <iostream>
#include <vector>
/*
type conversion = conversion of a value of one data
                    type to another
                    implicit = automatic
                    explicit = recede value with new data type

*/

int main() {
//double x = (int) 3.1415;
char x = 100;
std::cout<<x;
std::cout<< (char) 100 << "\n";


int correct = 8;
int questions = 10;
double score = (double)correct/(double)questions * 100;
std::cout << score << "%";
return 0;
}