#include <iostream> //iostream is a group of commands the computer recognizes and uses to run the code
using namespace std;
 
int main() { //indicates that the actual code is between the {} brackets
  
  for (int n=1; n<=100; n++){ //this is the start of the outer loop: creates an integer n which starts at 1, up through 100, increasing by 1 in each iteration
    cout<<"the factors of "<< n <<" are: "; //this is the first part of the output: names the value of n and says "the factors of n are: "
    for (int i=1; i<=n; i++){ //this creates the inner loop: starts at 1 and goes up to the value of n, increasing by 1 in each iteration
      if (n % i == 0){ //this is an if statement: says that if n is divided by i and there is not a remainder (which means i must be a factor of n), then the program should do the output on the following line
	cout<< i <<" "; //this is the rest of the output: gives all the factors of n with a space in between each; this statement must be within the inner loop since i only exists within the loop, and must be after the if statement since the condition is for all i=factors of n
      }
    }
    cout<<endl; //this ends the output line, so that the next value of n lists its factors on the next line; this must be inside the outer loop so that each new list of factors in each iteration is created on a new line
  }
 
  return 0;
}
