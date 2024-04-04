#include <iostream>
#include <string>

#include "mylib.h"

int main ()
{

    std::string n1, n2;
    int a1, a2;

    Student stdnt1 ("Name", 0);
    Student stdnt2 ("Name", 0);

    std::cout << "Enter the first students name: " ;
    getline(std::cin, n1);
    std::cout << std::endl;
    stdnt1.setName(n1);

    std::cout << "Enter the first students age: " ;
    std::cin >> a1 ;
    std::cout << std::endl;
    stdnt1.setAge(a1);
    
    stdnt1.print();

    std::cout << std::endl;
    
    std::cout << "Enter the second students name: " ;
    getline(std::cin, n2);
    std::cout << std::endl;
    stdnt2.setName(n2);

    std::cout << "Enter the second students age: " ;
    std::cin >> a2 ;
    std::cout << std::endl;
    stdnt2.setAge(a2);

    stdnt2.print();

    std::cout << std::endl;
}