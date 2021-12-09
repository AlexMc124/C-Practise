#include <iostream>
using namespace std;

// Create a function
void myFunction() {
  std::cout << "I just got executed!";
}
int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"