#include <iostream>
#include <cmath>
namespace person1{
    std::string name = "Ivailo";
    int age = 21;
}
namespace person2{
    std::string name = "Tino";
    int age = 23;
}

//typedef for a string data type to avoid unnecessery declaration:
    typedef std::string string_t;

int main(){
    //Hypothenuse calculator

    double a,b,c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    if(a<1 || b<1){
        std::cout << "Cant input negative numbers ";
    }else{
        std::cout << c;
    }

    return 0;
}