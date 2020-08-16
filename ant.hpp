#include <fstream>
#include<iostream>
using namespace std;

enum Direction {NORTH, EAST, WEST, SOUTH};

class Ant{
  
  private:
  int** board; 
  Direction orientation; 
  int  rowPos,colPos;
  int rows, cols; 
  
  public:

  Ant(int , int , int , int ); // Parameter constructor
  ~Ant(); // Class destructor
  void move(int steps);
};
