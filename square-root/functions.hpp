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

/*!
 \brief Function to find roots of quadratic equation
 \author Ubsefor
 \version 1.0
 \date 09/06/2020
 \warning This function was created for educational purposes
 \return Returns amount of roots of quadratic equation
 \param[in] arg_a  – first param of equation
 \param[in] arg_b  – second param of equation
 \param[in] arg_c  – third param of equation
 \param[in] root_1  – first root of equation
 \param[in] root_2  – second root of equation
    
    Function finds the roots of quadratic equation and returns number of roots
 
 */

double find_roots( double arg_a, double arg_b, double arg_c, double * root_1, double * root_2 );

/*!
 \brief Function to print roots of quadratic equation
 \author Ubsefor
 \version 1.0
 \date 09/06/2020
 \warning This function was created for educational purposes
 \param[in] root_1  – first root of equation
 \param[in] root_2  – second root of equation
 \param[in] num – amount of roots
    
    Function prints the given roots of quadratic equation and their amount if there are any roots; Else prints that there is infinite amount of roots or no roots at all
 
 */

void print_roots( double root_1, double root_2, float num );

/*!
 \brief Function to parse command line arguments
 \author Ubsefor
 \version 1.0
 \date 09/06/2020
 \warning This function was created for educational purposes
 \param[in] a  – first param of equation
 \param[in] b  – second param of equation
 \param[in] c  – third param of equation
 \param[in] argc – amount of args
 \param[in] argv – array of args
    
    Function to parse command line arguments given to program, if a letter encountered, uses 0 instead of it
 
 */

void parse_args( double * a, double * b, double * c, int argc, const char * argv[] );

#endif /* functions_h */
