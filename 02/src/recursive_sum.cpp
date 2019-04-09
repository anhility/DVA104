/*
 *  recusive_sum.cpp
 *
 *  Created on: 2019-04-05
 *      Author: man16057
 */

#include "include.hpp"

// Define functions here
//
int recursive_sum(int iteration, bool verbose){
  

  if(verbose){
    std::cout << "recursive_sum(" << iteration << ") anropas\n";
  }

  // If input is less than 1, return 0. Base case.
  //
  if(iteration < 1){
    
    if(verbose){
      std::cout << "recursive_sum(" << iteration << ") returnerar " <<
        0 << std::endl;
    }
    return 0;
  }
  // If iteration equals 1, return 1. Base case.
  //
  else if(iteration == 1){
    if(verbose){
      std::cout << "recursive_sun(" << iteration << ") returnerar " <<
        1 << std::endl;
    }
    return 1;
  }

  // Recursive part. Sums return values as it goes through iterations.
  
  int sum = iteration + recursive_sum(iteration - 1, verbose);
  
  if(verbose){
    std::cout << "recursive_sum(" << iteration << ") returnerar " <<
    sum << std::endl;
  }

  return sum;
}
