#include "ant.hpp"

Ant::Ant(int rowStart, int colStart, int rowsIn, int colsIn)
{
   
    rows = rowsIn;
    cols = colsIn;
    rowPos = rowStart;
    colPos = colStart;
    orientation = Direction::NORTH;

    board = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        board[i] = new int[cols];
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            board[row][col] = 3;
        }
    }
   
}

void Ant::move(int steps)
{    
    ofstream outfile("Maitrik_Patel_Final.pgm");
    outfile << "P2" << endl;
    outfile << "Maitrik Patel" << endl;
    outfile << "147497167" << endl;
    outfile << rows << " "<< cols << endl;
    orientation = Direction::NORTH;
    rowPos = rowPos - 1;
    colPos = colPos - 1;
    board[rowPos][colPos] = 0;
    for (int counter = 0; counter <= steps; counter++)
    {
      switch(orientation){
        case Direction::NORTH:
         if ((rowPos - 1) < 0)
            {
                orientation = Direction::SOUTH;
                break;
            }
	    else if (board[rowPos - 1][colPos] == 0)
            {
                rowPos = rowPos - 1;
                orientation = Direction::WEST;
                board[rowPos][colPos] = 3;
                break;
            }
	    else if (board[rowPos - 1][colPos] == 1)
            {
                rowPos = rowPos - 1;
                orientation = Direction::WEST;
                board[rowPos][colPos] = 2;
                break;
            }
	    else if (board[rowPos - 1][colPos] == 2)
            {
                rowPos = rowPos - 1;
                orientation = Direction::EAST;
                board[rowPos][colPos] = 3;
                  break;
            }
            else if (board[rowPos - 1][colPos] == 3)
            {
                rowPos = rowPos - 1;
                orientation = Direction::EAST;
                board[rowPos][colPos] = 0;
                 break;
            }  
    
        case Direction::EAST:
            if ((colPos + 1) > (cols - 1))
            {
                orientation = Direction::WEST;
                break;
            }
	    else if (board[rowPos][colPos - 1] == 0)
            {
                colPos = colPos + 1;
                orientation = Direction::EAST;
                board[rowPos][colPos] = 3;
                break;
            }
	    else if (board[rowPos][colPos - 1] == 1)
            {
                colPos = colPos + 1;
                orientation = Direction::NORTH;
                board[rowPos][colPos] = 2;
                break;
            }

            else if (board[rowPos][colPos - 1] == 2)
            {
                colPos = colPos + 1;
                orientation = Direction::WEST;
                board[rowPos][colPos] = 1;
                break;
            }
            else if (board[rowPos][colPos - 1] == 3)
            {
                colPos = colPos + 1;
                orientation = Direction::SOUTH;
                board[rowPos][colPos] = 0;
                break;
            }        
        
        case Direction::WEST:
            if ((colPos - 1) < 0)
            {
                orientation = Direction::EAST;
                break;
            }
	    else if (board[rowPos][colPos + 1] == 0)
            {
                colPos = colPos - 1;
                orientation = Direction::WEST;
                board[rowPos][colPos] = 3;
                break;
            }
	    else if (board[rowPos][colPos + 1] == 1)
            {
                colPos = colPos - 1;
                orientation = Direction::SOUTH;
                board[rowPos][colPos] = 2;
                break;
            }
	    else if (board[rowPos][colPos + 1] == 2)
            {
                colPos = colPos - 1;
                orientation = Direction::EAST;
                board[rowPos][colPos] = 1;
                break;
            }
            else if (board[rowPos][colPos + 1] == 3)
            {
                colPos = colPos - 1;
                orientation = Direction::NORTH;
                board[rowPos][colPos] = 0;
                break;
            }
 
        case Direction::SOUTH :
        
            if ((rowPos + 1) > (rows - 1))
            {
                orientation = Direction::NORTH;
                break;
            }
            else if (board[rowPos + 1][colPos] == 0)
            {
                rowPos = rowPos + 1;
                orientation = Direction::SOUTH;
                board[rowPos][colPos] = 3;
                break;
            }
            else if (board[rowPos - 1][colPos] == 1)
            {
                rowPos = rowPos + 1;
                orientation = Direction::EAST;
                board[rowPos][colPos] = 2;
                break;
            }
            else if (board[rowPos + 1][colPos] == 2)
            {
                rowPos = rowPos + 1;
                orientation = Direction::NORTH;
                board[rowPos][colPos] = 1;
                break;
            }
            else if (board[rowPos + 1][colPos] == 3)
            {
                rowPos = rowPos + 1;
                orientation = Direction::WEST;
                board[rowPos][colPos] = 0;
                break;
            }
        
        default:
         break;
    }
  }

      for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            outfile << board[i][j] << " ";
        }

    }
    outfile.close();

}
  
Ant::~Ant() {
    {
        
        for (int i=0;i < rows; ++i)
        {
            delete[] board[i];
        }
        delete[] board;
    }

}