#include "nums.hpp" 

nums::nums(){
    //std::vector<int> nums_vect ;
}

void nums::read(){

    int i;

    std::cout << "Enter 6 numbers : " ; 

    for( i = 0 ; i < 6 ; i++ ){
        
        int temp;
        
        std::cin >> temp ;

        nums_vect.push_back(temp) ;

    }

} 

void nums::calculate(){

    std::cout << nums_vect[0] + nums_vect[1] << " \n" ;

    std::cout << nums_vect[2] - nums_vect[3] << " \n" ;

    std::cout << nums_vect[4] * nums_vect[5] << " \n" ;

}