Menu-Driven Calculator in C
A simple beginner-level C program that displays a calculator menu and
uses a switch statement to respond to the user's selected option.
Features
- Displays a menu of four calculator operations:
  1. Addition
  2. Subtraction
  3. Division
  4. Multiplication
- Accepts the user's menu choice.
- Uses a switch statement to display the selected operation.
- Prints a completion message when the program finishes.
Note: This version only displays which operation was selected. It
does not yet ask for numbers or calculate results.

Requirements
- A C compiler, such as GCC
- A terminal or command prompt
How to Compile and Run
1. Save the source code as Calculator.c.
2. Open a terminal in the folder containing the file.
3. Compile the program with GCC:
   gcc Calculator.c -o calculator
4. Run the program:
   Windows
   .\calculator.exe
   Linux or macOS
   ./calculator
Example Output
Calculator
1. Add
2. Subtract
3. Division
4. Multiply
1
Add operator selected
Finished
The example assumes the user enters 1.
Concepts Used
- stdio.h for input and output
- printf() to display text
- scanf() to read the user's choice
- switch and case to select an operation
- break to exit a case
- return 0 to indicate successful program termination
Future Improvements
- Ask the user to enter two numbers.
- Perform the selected arithmetic operation.
- Display the calculation result.
- Handle division by zero.
- Validate invalid menu choices and non-numeric input.

Author
**ANISH**:- Created as a beginner C programming practice project.
