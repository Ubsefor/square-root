  //
  //  functions.cpp
  //  square-root
  //
  //  Created by Alex Makhov on 05.09.2020.
  //  Copyright © 2020 ISPRAS. All rights reserved.
  //

#include "functions.hpp"

double find_roots( double arg_a, double arg_b, double arg_c, double * root_1, double * root_2 )
{
  if ( isZero( arg_a ) )
  {
    if ( isZero( arg_b ) )
    {
      return ( isZero( arg_c ) )? INFINITY : 0;
    }
    else
    {
      *root_1 = -arg_c / arg_b;
      return 1;
    }
  }
  
  double discriminant = pow( arg_b, 2 ) - 4 * arg_a * arg_c;
  
  if ( discriminant < 0 )
  {
    return NAN;
  }
  else if ( isZero( discriminant ) )
  {
    *root_1 = *root_2 = -arg_b / ( 2 * arg_a );
    return 1;
  }
  
  double sqrt_dis = sqrt( discriminant );
  
  *root_1 = ( -arg_b - sqrt_dis ) / ( 2 * arg_a );
  *root_2 = ( -arg_b + sqrt_dis ) / ( 2 * arg_a );
  
  return 2;
}

void print_roots( double root_1, double root_2, float num )
{
  if ( std::isnan( num ) )
  {
    std::cout << "NO ROOTS" << std::endl;
    exit( 0 );
  }
  else if ( std::isinf( num ) )
  {
    std::cout << "INF ROOTS" << std::endl;
  }
  else if ( isZero( num - 2 ) )
  {
    std::cout << "2 ROOTS: " << root_1 << " and " << root_2 << std::endl;
    exit( 0 );
  }
  else
  {
    std::cout << "1 ROOT: " << root_1 << std::endl;
    exit( 0 );
  }
}

void parse_args( double * a, double * b, double * c, int argc, const char * argv[] )
{
  *a = strtod( argv[1], NULL );
  *b = strtod( argv[2], NULL );
  *c = strtod( argv[3], NULL );
#ifdef DEBUG
  std::cout << "Understood as " << *a << " " << *b << " " << *c << std::endl;
#endif
}

bool isZero( double number )
{
  return ( fabs( number ) < 1E-6 );
}
