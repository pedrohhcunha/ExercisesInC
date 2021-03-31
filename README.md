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


### Exercise 5 - Print the figure

Objectives
Familiarize with:

Printing data in different formats
Fixing errors in a program
Scenario
Write a small program which prints a figure like the one in the Expected Output section below.

Your version of the program must print the same result as the expected output. Remember, if you want to print the \ character, then you have to escape it, like this: \\.

Expected output <br>
![image](https://user-images.githubusercontent.com/63168567/112986171-8c6b4080-9137-11eb-90b3-e892d987ff7a.png)

###Atividade 5 - Input/output format data

Objectives
Familiarize with:

Getting data from the user
Printing data in different formats
Fixing errors in a program
Scenario
Write a program which takes two values: a count of the days in one week and the value of Pi. Next, print these two values. Don't forget about data types.

Your version of the program must print the same result as the expected output.

Sample Input
7
3.3.14159265359

Sample Output
How many days in the week: 7
The value of Pi to two points: 3.14
There are 7 days in the week.
Pi value is 3.3.14159265359.

### Exercise 7 - Input/Output Sum, Difference and Multiple

Objectives
Familiarize with:

Getting data from the user
Printing data in different formats
Fixing errors in a program
Scenario
Write a program which records two float values. Next, print the sum, the difference and the result of the multiplication of these two values.

Your version of the program must print the same result as the expected output.

Sample Input
5.5
5.6

Sample output
Value A: 5.5
Value B: 5.6
5.500000 + 5.600000 = 11.100000.
5.500000 - 5.600000 = -0.100000.
5.500000 * 5.600000 = 30.799999.

Sample Input
9.13
4.18

Sample output
Value A: 9.13
Value B: 4.18
9.130000 + 4.180000 = 13.309999.
9.130000 - 4.180000 = 4.950000.
9.130000 * 4.180000 = 38.163399.

### Exercise 8 - Student Approval

Receive the two grades and the frequency of two students calculate your averages and check if you are above 7 and also check if the frequencies are greater than 75 and print your average and if they have been approved

