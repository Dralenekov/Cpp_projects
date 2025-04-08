#include <iostream>
#include <cmath>

int main(){
    
    //Check if numbers are odd or even
    int x;
    std::cout << "Enter a number: ";
    std:: cin >> x;
    x % 2 == 0 ? std::cout << "EVEN\n" : std::cout << "ODD\n";
    //Check if person is hungry or not

    bool hungry = true;
    std::cout << (hungry ? "You shall eat smmth " : "You are full. Stop eating ");
    
    return 0;
}