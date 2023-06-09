# BITWISE-OPERATIONS

EXPERIMENT-1 (BITWISE OR, AND , EX-OR)

a. Start the program.

b. Declare three integer variables 'a', 'b', and 'result'.

c. Enter the first integer using printf().

d. Input integer using scanf() and store it in 'a'.

e. Enter the second integer using printf().

f. Read the input integer using scanf() and store it in 'b'.

g. Perform the bitwise OR operation on 'a' and 'b' using the '|' operator and store the result in 'result'.

h. Perform bitwise AND by using '&' or bitwise EXOR by using '^'.  

i. Display the result of the bitwise OR operation using printf() and similarly for the other two operations. 

j. End the program. 

OR- ![or op](https://user-images.githubusercontent.com/108262513/227780941-a99e87bb-946c-4f7e-a1a1-bd8c7dc937f7.png)

AND- ![AND OP](https://user-images.githubusercontent.com/108262513/227780963-b27c2cb9-2c14-4773-86a6-279a7c7ef1e8.png)

EX-OR -  ![EX-OR ](https://user-images.githubusercontent.com/108262513/227781071-4cd75dfd-ca98-4713-9cfe-80498c7952ae.png)

EXPERIMENT-2 (NO.OF 1S) 

a. Start.

b. Declare an integer variable 'num' and a counter variable 'count', both initialized to 0.

c. Display a message asking the user to input an integer.

d. Read the input number using scanf() and store it in 'num'.

e. Start a loop that continues until 'num' becomes 0.

f. Use a bitwise AND operator with 'num' and 1 to check if the rightmost bit is 1 or not. If it is 1, increment the 'count' variable.

g. Right-shift the value of 'num' by 1 to move the next bit to the rightmost position for the next iteration.

h. After the loop terminates, display the final value of 'count' using printf().

i. End. 

![no of 1s](https://user-images.githubusercontent.com/108262513/227778312-ba812181-9815-438d-b838-df04ce66b612.png)


EXPERIMENT-3 (EVEN OR ODD) 

a. Take the input integer n.

b. Perform a bitwise AND operation between n and 1.

c. Check if the result is equal to 0.

d. If the result is equal to 0, then n is even. Otherwise, n is odd.

e. End

![BIT ODD EVEN](https://user-images.githubusercontent.com/108262513/227791507-3f98e3d1-81f6-4750-97e2-041db1a3c9d6.png)


EXPERIMENT-4 (INT TO BINARY)

a. Take the input integer n.

b. Iterate over the 5 bits of n, starting from the most significant bit and ending with the least significant bit.

c. For each bit, right-shift n by the current bit index using the >> operator we're interested in the least significant position.

d. Perform a bitwise AND operation between the shifted number and the value 1 to isolate the least significant bit.

e. If the least significant bit is 1, print a "1" character. Otherwise, print a "0" character.

f. Continue iterating until all 5 bits have been processed.

![INT TO BIN](https://user-images.githubusercontent.com/108262513/227791465-911bdf95-bb7d-4c25-a917-fa03ff885e8f.png)
