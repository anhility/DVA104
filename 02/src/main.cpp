/*
 *  main.cpp 
 *
 *  Created on: 2019-04-05
 *      Author: man16057
 */

#include "include.hpp"

using namespace std;

int main(int argc, char* argv[]){

  setlocale(LC_ALL, "sv_SE.UTF-8");

  // Check if correct number of arguments are given.
  //
  if(argc != 2){
    cout << "Programmet tar argument i följande format: " <<
      "02.out <arg>\n";
    return 0;
  }

  // Check if argument is only digits or digits with a hyphen (-) as prefix.
  //
  string str = argv[1];

  if(all_of(str.begin(), str.end(), ::isdigit) or
     (str[0] == '-' and all_of(next(str.begin(), 1), str.end(), ::isdigit))){
    // Converts string to int
    //
    int strToInt = stoi(str);

    // Calls recursive function
    //
    recursive_sum(strToInt);
  } else{
    cout << "Argumentet måste vara ett positivt eller negativt värde!\n";
    return 0;
  }


  // Tests of function
  //
  assert(recursive_sum(1, false) == 1);
  assert(recursive_sum(2, false) == 3);
  assert(recursive_sum(3, false) == 6);
  assert(recursive_sum(4, false) == 10);
  assert(recursive_sum(5, false) == 15);
  assert(recursive_sum(20, false) == 210);
  assert(recursive_sum(0, false) == 0);
  assert(recursive_sum(-1, false) == 0);

  return 0;
}
