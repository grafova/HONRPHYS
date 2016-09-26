#include <iostream> //iostream is a group of commands the computer recognizes and uses to run the code
using namespace std;
 
int main() { //indicates that the actual code is between the {} brackets
  int m = 1; //assigns an integer variable m which will be the multiplier, starts at 1
  for (int n=1; n<11; n++){ //this is the start of the for loop: starts at n=1, up through n= 10, and n increases by 1 in each loop through the ++
    m=m*n; //this is the calculation of the factorial: the integer m is multiplied by n and becomes equal to that value for each iteration of the loop
    cout<< "the factorial of " << n <<" is: "<< m << endl; //this is the output: says that the factorial of n is m, using the calculation in the line above
  }
 
  return 0;
}
