# Connect_Four

My final project in the Computer Programming Ⅰ course was to make one of the Connect Four or Solitaire games to be played on a terminal. 

In order to do and present one of these projects, I had to get a CC or above in my final exam, but I passed the course with a DC.

Therefore, I could not present my project to my professors. 

So I decided to write the Connect Four project by learning new information that we didn't learn in class (we didn't cover pointers, dynamic memory management, etc.).

I plan to release this project in versions.

I wrote the game so that two different players can play against each other. There is no AI in the game.

Maybe in the final version, I can design this game with a GUI and create an AI that will play the game with the player.

I'm open to all developer comments, I'm at the very beginning of this and this is my first GitHub project. Please write your comments.

I will explain all the versions I released in this project, but before that I want to explain the logic of the Connect Four game.

WIKIPEDIA SAYS:
  Connect Four is a two-player connection rack game, in which the players choose a color and then take turns dropping colored tokens into a six-row, seven-column vertically suspended grid. 
  The pieces fall straight down, occupying the lowest available space within the column. 
  The objective of the game is to be the first to form a horizontal, vertical, or diagonal line of four of one's own tokens. Connect Four is a solved game. 
  The first player can always win by playing the right moves.

# connect_four_version1 - 10/07/2023:
  In this version, I chose to create my 6x7 main array with integer.

  The reason I chose integer was as follows: 
  
  When players start the game, they start the game with one of the 4 or 5 randomly selected numbers.
  
  Vertical, horizontal or diagonal queries aggregate the queried indexes with each other. 
  
  If the sum of the queried 4 indexes is 16 or 20 (because 4x4 or 5x4), the winner is declared and the game ends. 
  
  In the game I wrote, there are many shortcomings and situations that I need to fix. A few of them are as follows:
  
    1 - I cannot show which number (who) won the game.
    
    2 - The codes I wrote are very static. If you examine the functions I wrote, you will see that there are codes that are not written dynamically. This is partly because of the way I prefer to do the matrix query, but it should be fixed.
    
    3 - When changing the player order, we see the text "column full" even when the last column that can be changed is changed. I need to fix this situation.
    
    4 - Even though this may be due to my code not being dynamic, my project is very long. The project is almost 900 lines and I think this is too many for this project.
  
  

  

  
  
