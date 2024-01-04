#include <iostream>

class fun{

    public:
    
        int evaluate( int );

} ;

int fun::evaluate( int x ){

    int y;

    y = 4 * x - 53 ; 

    return y ;

}

int main(){

    int i; 
    fun func1 ; 

    for( i = -12 ; i <= 47 ; i++){

        std::cout << "f(" << i << ") = " << func1.evaluate(i) << " \n" ;

    }

    return 0;
}