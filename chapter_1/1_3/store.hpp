#include <string>

class store {

    public : 

        store( std::string ) ; 

        std::string get_name( void ) ;

        void set_name( std::string ) ;
    
    private :

        std::string store_name ;

} ;