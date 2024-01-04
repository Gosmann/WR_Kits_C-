/*
#include <string>

class store {

    public : 

        store( string name_init ) ; 

        string get_store_name( void ) ;

        void set_store_name( string new_name ) ;
    
    private :

        string store_name ;

}
*/

#include "store.hpp"

store::store( std::string name_init ) {
    
    store_name = name_init ;

} ;

std::string store::get_name( void ){

    return store_name ; 

} ;

void store::set_name( std::string new_name ){

    store_name = new_name ; 

} ;
