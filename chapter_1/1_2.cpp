#include <iostream>

int main(){
    float num1, num2;

    std::cout << "Plase, write 2 numbers : ";
    std::cout << "Plase, write 2 numbers : ";

    std::cin >> num1 >> num2 ;

    std::cout << "num1 + num2 = " << num1 + num2 << " \n" ;
    std::cout << "num1 - num2 = " << num1 - num2 << " \n" ;
    std::cout << "num1 * num2 = " << num1 * num2 << " \n" ;
    std::cout << "num1 / num2 = " << num1 / num2 << " \n" ;

    if( num1 > num2 )
        std::cout << "num1 > num2 \n" ;
    
    else if( num1 < num2 )
        std::cout << "num1 < num2 \n" ;

    else if( num1 == num2 )
        std::cout << "num1 == num2 \n" ;


    return 0;
}