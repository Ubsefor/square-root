//
//  functions.hpp
//  square-root
//
//  Created by Alex Makhov on 05.09.2020.
//  Copyright © 2020 ISPRAS. All rights reserved.
//

#ifndef functions_h
#define functions_h

/* C++ program to find roots of a quadratic equation */
#include <iostream>
#include <cmath>

#ifdef DEBUG

#endif

double find_roots( double a, double b, double c, double * x1, double * x2 );

void print_roots( double root_1, double root_2, float num );

void parse_args( double * a, double * b, double * c, int argc, const char * argv[] );

#endif /* functions_h */
