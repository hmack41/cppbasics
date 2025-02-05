#include <iostream>
namespace first{
    int x = 1; 
}
namespace second{
    int x = 2;
}

int main() {
    //using namespace first;    //auto go to first namespace
    using namespace std;
    int x = 0;
    cout << x;      //local
    cout << first::x;  //refers to the x in the first namespace
    cout << second::x; //second

    return 0;
}