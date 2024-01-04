#include <iostream>
#include <math.h>

class calculator{

    public :
        void read_nums(void) ; 
        double calculate(void) ;

        double result ;

    private : 
        char opt ;
        double num1, num2 ;
        
} ;

void calculator::read_nums(){

        std::cout << "insert first number : " ;
        std::cin >> num1;

        std::cout << "insert second number : " ;
        std::cin >> num2;

        std::cout << "choose operation (+,-,*,/,P) : " ;
        std::cin >> opt ;       

}

double calculator::calculate(){ 

    switch(opt){

        case ( '+' ):
            result = num1 + num2 ;
            break;

        case ( '-' ):
            result = num1 - num2 ;
            break;

        case ( '*' ):
            result = num1 * num2 ; 
            break;

        case ( '/' ):
            result  = num1 / num2 ; 
            break;
            
        case ( 'P' ):
        case ( 'p' ):
            result = pow(num1, num2);
            break;

        default:
            std::cout << "ERROR : invalid option \n" ;
            break;
    } ;

    return result;    
}

int main(){

    calculator calc ; 
    char opt; 

    do{
        
        calc.read_nums() ;

        calc.calculate() ;        

        std::cout << "result : " << calc.result << " \n" ;

        do{
            std::cout << "do you want to continue? (y/n): " ;
            std::cin >> opt ; 

            std::cout << "\n";
        }
        while( opt != 'n' && opt != 'N' && opt != 'y' && opt != 'Y' );
        
    } while ( opt == 'y' || opt == 'Y' ) ;

    return 0;
}