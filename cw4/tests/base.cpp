//
// Created by elim on 08/12/22.
//

#include <iostream>
#include <stdexcept>
#include <string>

namespace drawing {

    #define ALEPH_ASSERT_EQUAL( x, y ){
      if( ( x ) != ( y ) ){
        throw std::runtime_error(   std::string( __FILE__ )             
                                  + std::string( ":" )                  
                                  + std::to_string( __LINE__ )          
                                  + std::string( " in " )               
                                  + std::string( __PRETTY_FUNCTION__ )  
                                  + std::string( ": " )                 
                                  + std::to_string( ( x ) )             
                                  + std::string( " != " )               
                                  + std::to_string( ( y ) )             
        );                                                              
      }                                                                 
    }
    #define DRAWING_TEST_END() {
      std::cout<<"finishedn";
    }
}