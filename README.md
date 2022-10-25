# OrderList
Write a C++ program that reads text lines from a file, each line contains an
identifier and an integer number,
this file can contain millions of lines, but it could be empty. You shall support
both cases with the maximum efficiency.
The program shall output the top ten items, ordered so the first item is the one
that has the maximum number.
identifiers are unique, i.e. they only will appear once in the file, and they do
not contain spaces.
Different lines can have same number, in that case items shall appear ordered by
their identifier.

The algorithm reads a text file called text.txt than contains pairs of names (strings) and numbers (integers) separated by spaces, and one pair per line. It only reads the first 10 lines and the pairs are stored in a map file called map using a loop.

Then there is a double loop that looks if each of the values of the map is the maximum. If it finds a maximum, the code prints the value and the name and deletes that pair from the map to avoid to use it again.

The size of the map is N=10
Time Complexity is O( N + N*logN )
Space Complexity: O(N)
