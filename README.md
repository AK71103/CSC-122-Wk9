# CSC-122-Wk9

## Fold lab
Implement the fold function.
This function is an abstraction of the idea of summing up a vector.
You should be able to pass in a vector v of ints and a function f of type int(int, int) and return

f (v[0],  f(v[1],  f(v[2],  ....)))

Which can be thought of recursively:

fold(f, v) ==
f(v[0], fold(f, the rest of the vector))

As an example, if you have a function add which adds two numbers together, fold(v, add) will return the sum of the vector v.
Remember to test with assert statements, and multiple different input functions. Add and Multiply are easy ones, but see if you can think of other ways to fold up a vector ;)

Answer the following TPQs:

1) What are some other functions that would be useful as an input to fold?

2) How could you use iterators and templates to further abstract the fold function?

3) The type of fold I defined is a rightwards fold, since the parenthesis end up nesting to the right. Consider how you would implement a leftwards fold. Would this function produce different results?
