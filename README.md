# Variable-argument-function
# Design a variable argument function that can compute any kind of
polynomial such as a0 + a1x^1 + a2x^2 … + anx^n. Please use argv and argc in
main to input.
# Requirement:
Use va_list to design a function compute(x, N, a0, …) that return the
result of polynomial a0 + a1x
1 + a2x^2 … + anx^n, N represent the number ofparameter. 
Use argv to input variable x, call compute(x, 3), compute(x, 2, 4, 6), compute(x, 1, 2, 0, 7, 5) and print the result to the screen.
# Example:
Your program must have these three function calls and you can only use a
function compute().
r1 = compute(x, 1, 3);
r2 = compute(x, 3, 2, 4, 6);
r3 = compute(x, 5, 1, 2, 0, 7, 5);
# Command line:
> ./hw7 [x]
# Output:
Output the result of functions mentioned above to the screen.
(Note: Don’t print any unnecessary message to screen, thank you.)
# For example:
> ./hw7 2
3
34
141
