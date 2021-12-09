#include <iostream>
#include <stdio.h>  
#include <stdlib.h>    
#include <time.h>   
using namespace std;

// Create a function
void rollTheDice(int sides, int dice){
    // Create a random number generator
    srand(time(NULL));
    // Create a variable to hold the total
    int total = 0;
    // Create a loop to roll the dice
    for (int i = 0; i < dice; i++) {
        // Create a variable to hold the roll
        int roll = rand() % sides + 1;
        // Add the roll to the total
        total += roll;
    }
    // Display the total
    cout << "The total is " << total << endl;
}

int main() {
  int sides = 0;
  std::cout << "How many sides does your dice have?";
  std::cin >> sides;
  int dice = 0;
  std::cout << "How many dice are there?";
  std::cin >> sides;
  rollTheDice(sides, dice);

}

// Outputs "I just got executed!"