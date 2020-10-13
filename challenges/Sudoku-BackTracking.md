# Solving a Sudoku puzzle using backtracking

## What is Backtracking?
Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time (by time, here, is referred to the time elapsed till reaching any level of the search tree).
More [here](https://www.geeksforgeeks.org/backtracking-introduction/).

## How does this help in solving sudoku?
The algorithm tries the first valid number it can put in the first empty square it finds on the grid. After this it recursively calls the function and it tries the first valid number on the next empty square.
If we encounter an empty square where no number is valid then the algorithm goes back to the previous recursive state, finds the next valid number in the previous step and builds upon that number.
This might not seem intuitive at the first go but you could find an amazing visualisation video on the topic [here](https://www.youtube.com/watch?v=_vWRZiDUGHU).

## C++ Code
### NOTE: I will be only giving snippets of the core functions required for proper functioning of the algorithm. Also, in our sudoku grid, a '0' digit means an empty space.
```cpp
// declared as global variables for proper functioning
int row;
int col;

bool findblank (int sudoku[9][9], int &row, int &col) //returns true if there is an unassigned value in grid
{
  // this function takes in a sudoku grid as an arguement 
  // and returns true if there exist an empty space in our grid.
  
  //declare row and col as global variables initially for proper functionality
  for (row = 0 ; row < 9; row++)
  {
    for (col = 0 ; col < 9; col++)
    {
      if (sudoku[row][col] == 0)
      {
        return true;
      }
    }
  }
  
  return false;
}

bool checknum (int sudoku[9][9], int row, int col, int num)
{
  // function to check whether a given number is valid in the given row and column
  
  // iterates over all rows and reuturns false if the number already exist in the column.
  for (int i = 0; i < 9; i++)
  {
    if (sudoku[i][col] == num)
      return false;
  }
  
  // iterates over all columns and reuturns false if the number already exist in the row.
  for (int i = 0; i < 9; i++)
  {
    if (sudoku[row][i] == num)
      return false;
  }
  
  // checks the 3*3 box in which the number is to be placed
  for (int i = row - row%3; i < row - row%3 + 3; i++)
  {
    for (int j = col - col%3; j < col - col%3 + 3; j++)
    {   
        if (sudoku[i][j] == num)
          return false;
    }
  }
  
  // return false directly if the square is pre-occupied
  if (sudoku[row][col] != 0)
    return false;
  
  return true;
}

bool solvemain (int sudoku[9][9])
{
  // main function where backtracking algorithm has been implemented.

  // if there is no empty square then the puzzle is solved hence return true.
  // however if there is an empty square then the values of the global variables 
  // row and column would have changed accordingly hence we make use of them
  // in the following for-loop.
  if (!findblank(sudoku, row, col)) // FIRST if condition
    return true;
  
  // iterates over all the numbers and uses the modified values of row, col to 
  // check whether the given number is valid in that position or not.
  for (int num = 1; num < 10; num++)
  {
      // if the given number is valid then assign the number to that empty square
      if (checknum (sudoku,row,col,num))
      { 
        sudoku[row][col] = num;
        
        // heart of the algorithm. 
        // recursive call to solvemain.
        // if the sudoku is completed then the last function will return true 
        // from the FIRST if condition itself.
        // hence the sudoku will be completed and we can return true.
        if (solvemain(sudoku))
			return true;
          
        // however if for some reason there comes a point when there is no valid
        // number for a given empty square,at that point this else condition will 
        // run and the function will finally return false.
        // This will lead to 'popping' of all stacks in which our sudoku has been
        // wrongly solved and the puzzle is essentially back to the point on which
        // the next empty square has no valid numbers.
        else
			sudoku[row][col] = 0;
      }
  }
  
  return false;
}
```

## Driver Code Snippet
```cpp
int sudoku[9][9] = {{0,6,4,0,3,0,0,0,0}, {0,0,0,1,0,0,0,0,0},{3,0,5,0,8,0,0,0,2},{0,0,0,0,0,8,0,7,0},{7,5,0,6,0,2,4,0,0},{0,0,0,0,0,0,0,1,8},{0,0,0,0,0,0,0,0,0},{0,0,2,7,0,0,0,0,9},{1,0,3,0,0,4,0,6,0}};
    if (solvemain(sudoku))  
        print_sudoku_grrid(sudoku); // any arbitary function which prints the sudoku
    else
       printf( "No solution exists");
```
## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Dwij Mehta | dwij2212 | BITS Pilani |
