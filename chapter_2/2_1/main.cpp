#include <iostream>

int main(){

    int grade ;

    std::cout << "write a grade (0~100) : " ;
    std::cin >> grade ;

    if( grade < 0 || grade > 100 ){

        std::cout << "grade is out of bounds \n" ;

    }
    else{
        
        if( grade >= 90 ){
            std::cout << "grau A \n" ;
        }
        else if( grade >= 80 ){
            std::cout << "grau B \n" ;
        }
        else if( grade >= 70 ){
            std::cout << "grau C \n" ;
        }
        else{
            std::cout << "REPROVADO \n" ;
        }

    }

    return 0;
}