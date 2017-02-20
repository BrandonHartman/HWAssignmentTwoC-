A positive integer is said to be square-free if none of its factors (greater than 1) are themselves squares.
For example, the positive integer 30 has factors 1, 2, 3, 5, 6, 10, 15, and 30. None of these factors
(greater than 1) are themselves squares, and so 30 is square-free.

For another example, the positive integer 36 has factors 1, 2, 3, 4, 9, 12, 18, and 36. Notice that 3 of
these factors (greater than 1) are themselves squares: 4 (since 4 is 2 * 2), 9 (since 9 is 3 * 3), and 36
(since 36 is 6 * 6). Therefore, 36 is not square-free.

An ordered pair of positive integers can be classified in one of four ways:

 If both of the integers in the pair are square-free, then this pair is SWEET.
 If the first integer in the pair is square-free but the second one is not, then this pair is SOUR.
 If the second integer in the pair is square-free but the first one is not, then this pair is SALTY.
 If neither of the integers in the pair are square-fee, then this pair is BITTER.

Write, compile, execute, and test a C++ program that asks the user to input an ordered pair of integers,
each between 2 and 5000. Then, for each integer of the pair, it should display that integer's factors
(greater than 1) that are themselves squares, and also display whether or not that integer is square-free.

Finally, it should display whether this ordered pair of integers is SWEET, SOUR, SALTY, or BITTER.

If you haven’t done so already, be sure to install the CSTools software for your
District Unix account. To do so, login to your District Unix account, and from the
Unix prompt, issue the following command:
source ~rking0026/cstools-install
You will only need to install this software once for the entire semester.

Here is an example of how your program should look when run:

Enter the 1st integer of the pair, between 2 and 5000: 30
Enter the 2nd integer of the pair, between 2 and 5000: 36
30 has these factors (>1) that are square: (none)
30 is square-free
36 has these factors (>1) that are square: 4, 9, 36
36 is not square-free
Therefore, the ordered pair (30, 36) is SOUR.

Hint #1: Use a loop in your program to consider the squares of integers larger than 1 (up to what
stopping point?) as potential factors of the given integer. Each time you find a square which is a factor,
add one to a counter and display that factor. The counter can then be used to determine whether or
not the given integer is square-free.

Hint #2: You can tell if one number is a factor of another number by using the "mod" operator ("%") in
C++ (which computes the remainder of a division) and then determining if this remainder is zero or nonzero.
For example, 56 % 4 evaluates to 0 (4 goes into 56 14 times with a remainder of 0), so 4 is a factor
of 56. 56 % 9 evaluates to 2 (9 goes into 56 6 times with a remainder of 2), so 9 is not a factor of 56.
Be sure to modularize your program by breaking it down into a main function supported by several
appropriate secondary functions, all of which use arguments, parameters, and functional values to
communicate as necessary. Be sure to use range-checking data validation techniques to insure that all
inputs to your program are as expected. Finally, be sure your program is moderately-well commented,
uses good programming style, and is correct and efficient. (However, since this is just a homework
assignment, you will not need to provide External Documentation as you would for a full-fledged
programming assignment.)

Once you've written your program, log onto your District Unix account and enter your program into a
file named "homework2.cc", compile it, and execute it on several well-chosen testcases. In Unix, you'll
use:
1. an editing command (such as “vim” or “nano”) to edit your program
2. the "c++" command (from CSTools) to compile it
3. the "./a.out" command to execute it
4. the “listexec” command (from CSTools) to record it
