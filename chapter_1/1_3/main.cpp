
#include <iostream>
#include "store.hpp"

int main(){

    store store1( "First Store!" ) ;
    store store2( "Second Store!" ) ; 

    std::cout << "store1 : " << store1.get_name() << "\n" ;
    std::cout << "store2 : " << store2.get_name() << "\n" ;

    store1.set_name( "new first store! " );
    store2.set_name( "new second store! " );

    std::cout << "store1 : " << store1.get_name() << "\n" ;
    std::cout << "store2 : " << store2.get_name() << "\n" ;

    

    return 0;
}