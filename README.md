🎮 Terminal Tic Tac Toe in C
A colorful 2-player Tic Tac Toe game in the terminal, written in C.
This game uses ANSI escape codes to color output, making the experience more visually engaging.

🧩 Features
✅ Two-player turn-based gameplay

✅ Color-coded players and game board using ANSI codes

✅ Win detection for all rows, columns, and diagonals

✅ "Draw" message when board fills with no winner

🖥️ Preview

Player 1
__________________
|__1_|_2__|_3__|
|__4_|_5__|_6__|
|__7_|_8__|_9__|

Enter the choise: 5
Player 1 uses X (Green)

Player 2 uses O (Blue)

Input is made by entering the number shown in the cell (1-9)

🛠️ How to Compile
You can compile this code using gcc:


gcc -o tictactoe tictactoe.c
Then run it:



🧪 Notes
The game does not validate invalid or repeated moves, so be careful when entering input.

Uses getchar() after scanf to consume newline.

📦 Future Improvements
✅ Input validation

✅ One-player mode (AI)

✅ Replay option
