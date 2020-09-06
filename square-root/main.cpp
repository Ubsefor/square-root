//
//  main.cpp
//  square-root
//
//  Created by Rave Botovski on 05.09.2020.
//  Copyright © 2020 ISPRAS. All rights reserved.
//


#include "functions.hpp"

int main( int argc, const char * argv[] )
{
    
    if ( argc != 4 ){
        std::cout << "Please provide 3 arguments of a, b and c to the program!" << std::endl;
        return 1;
    }
    
#ifdef DEBUG
    
    std::cout << "DEBUG PRINTING: " << std::endl;
    std::cout << "Total args: " << argc << std::endl;
    std::cout << "Got args: " << argv[1] << " " << argv[2] << " " << argv[3] << std::endl;
    double xdebug1 = 0, xdebug2 = 0;
    assert( find_roots(1, 4, -5, &xdebug1, &xdebug2) == 2 && xdebug1 == -5 && xdebug2 == 1 );
    assert( find_roots(1, 6, 9, &xdebug1, &xdebug2) == 1 && xdebug1 == -3 && xdebug2 == -3 );
    assert( isnan( find_roots(2, 4, 7, &xdebug1, &xdebug2 ) ) );
    
#endif
    
    double arg_a = 0, arg_b = 0, arg_c = 0;
    parse_args( &arg_a, &arg_b, &arg_c, argc, argv);
    
    double x1 = 0, x2 = 0;
    
    float num_roots = find_roots(arg_a, arg_b, arg_c, &x1, &x2);
    
    print_roots( x1, x2, num_roots );
    
    return 0;
}
