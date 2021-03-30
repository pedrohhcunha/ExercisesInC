# ExercisesInC - Exercises using the C language

### Exercise 1 - A simple "Hello Word" using the C language

### Exercise 2 - loop, numbers and char

Objectives
Familiarize with:

Character types and values
Using character types practically
Printing on screen
Scenario
Write a small program which prints the differences between all ten digit characters (from '1' to '0') and zero ('0'). Print each one on a separate line. Your program must print the same result as the expected output.

Expected output
'1' - '0' is: 1
'2' - '0' is: 2
'3' - '0' is: 3
'4' - '0' is: 4
'5' - '0' is: 5
'6' - '0' is: 6
'7' - '0' is: 7
'8' - '0' is: 8
'9' - '0' is: 9
'0' - '0' is: 0

### Exercise 3 - Data Format

Objectives
Familiarize with:

Printing data in different formats
Fixing errors in a program
Scenario
According to ISO 8601, many countries use the YYYY-MM-DD date format, where YYYY is a four-digit year, MM means a two-digit month, and DD means a two-digit day (one letter means no leading zeros). Local conventions can vary, and sometimes include formats like DD-MM-YYYY or MM-DD-YYYY.

Your task is to print values in four different formats. Check the program in the editor.

Find all possible compilation errors and logic errors. Fix them, but do not change any character values. Your version of the program must print the same result as the expected output.

Before you use the compiler, try to find the errors only by manual code analysis.

Expected output
2016-02-20 - YYYY-MM-DD format - ISO 8601
02-20-2016 - MM-DD-YYYY format
20-02-2016 - DD-MM-YYYY format
20-2-2016 - D-M-Y format


### Exercise 4 - Students AVG

Objectives
Familiarize with:

Printing data in different formats
Fixing errors in a program
Scenario
You have the data (included in code) of three students' grades (StudentA, StudentB, StudentC). Write a program to print this data in rows - the first row is a header in the format:

Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg

The next three rows contain: student name (StudentA, StudentB, StudentC is enough), grade (1stYGrade 2ndYGrade 3rdYGrade), and the average of these three grades (Avg). Your version of the program must print the same result as the expected output.

To print only two digits of a floating-point number, use the "%.2f" format specifier, and to fill it with spaces you can use the "%9.2f" format specifier where 9 is the length of the number and spaces.

Expected output

Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg
StudentA      4.20       4.50       4.20       4.30
StudentB      4.30       4.40       4.70       4.47
StudentC      4.30       4.80       4.90       4.67
