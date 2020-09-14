int guess_solve(Sudoku& sudoku)
{
    sudoku.simple_solve();

    if(sudoku.solved())     // If simple solve works exit function.
        return 0;                   

    for([iterate over unsolved boxes b])
    {
       for([iterate over possible numbers i])
       {
           Sudoku s = sudoku;
           s.guess(b,i);
           try{
               s.simple_solve();  // Simple solve throws if any box ends up 
                                  //  with zero possibilities for its entry.
               if(s.solved())     // If simple solve works exit function.
               {
                   sudoku=s;
                   return 0;
               }
               else               // If it gets stuck (but DOES NOT encounter
                                  //  an inconsistency) use recursion.
               {
                   guess_solve(s);
                   sudoku=s;
                   return 0;
               }
            }
            catch(...)            // If our guess is wrong, simply move on
                                  //  and try the next guess.
            {
            }
        }
     }
}
