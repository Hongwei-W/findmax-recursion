FindMax With Recursion

This is a small program written in C, to find the max number in a given array. 
The program provides two algorithms two calculate the max, namely recursion 
and tail recursion. These two algorithms are then included in one signle file
named test.c for an integrated access. The program also generate a random array
for testing and compare the run time between the two alogrithm. In the 
task.json file, you can specify how many element for the random-generated 
array, which algorithm will use, and the upper range of the random number. 
Other than these feature, you can modify the Optimize Option by changing the 
`-O` to `-O2` or `-O3`.

To compile the program, simply Run Build Task. To run the progran, use the 
debug mode in VSCode to get a default result. 

Or try this to compile:
`gcc -std=c99 -Wall -g test.c -o test -O`
And try this to run:
`./test 100000 tail_recur 10000`
Explain: Generating an array of 100000 integers whose range is between -10000 to
10000

Usage: num_int tail_recur|recur upper_range

