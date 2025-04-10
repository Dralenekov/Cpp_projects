#include <iostream>
#include <cmath>

int main(){
    //basic temperature conversetion program
    int tempc,tempf;
    char tType;
    std::cout << "Do you want the temperature display in C or F: ";
    std::cin >> tType;
    if(tType == 'F'){
        std::cout << "Enter temperature in C: ";
        std::cin >> tempc;
        tempf = (tempc*1.8) + 32;
        std:: cout << "Temp in F: " << tempf;
    }else if(tType == 'C'){
        std::cout << "Enter temperature in F: ";
        std::cin >> tempf;
        tempc = (tempf-32)/1.8;
        std:: cout << "Temp in F: " << tempc;
    }else{
        std::cout << "Invalid input!";
    }
    return 0;
}