#include <iostream>
using namespace std;

int FirstFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++){
       factorial = factorial * i;
    }
    
    return factorial; 
}

int main() { 

  cout << FirstFactorial(gets(stdin));
  return 0;
    
}