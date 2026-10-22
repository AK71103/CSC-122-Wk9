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

## Itergral concerns lab

In calculus, integration is a process for computing the area underneath the curve of a function (if the function goes below 0, the corresponding area is negative). The methods of calculus are often concerned with finding the indefinite integral - a general formula that can then be used to calculate the area under any segment of the formula. This indefinite integral is then used to find a definite integral, which is the area under a specific segment.

Thankfully, we have the power of computers. There are many ways to approximate a definite integral, with varying degrees of accuracy and efficiency. The simplest is the Riemann sum. The Riemann sum breaks the desired area into some number of chunks, then uses a value of the function in that chunk (typically at the left or right edge), to make the chunk into a rectangle, whose area can be easily computed. By summing the areas of all these rectangles, you get an approximation to the area of the function. (In fact, the standard integral is defined simply as the limit of the Riemann sum as the number of chunks increases to infinity).


Using the Riemann sum, implement the following function:

double integrate(function<double(double)> f, double a, double b, int precision);

Approximate the area under f from a to b, where your Riemann sum has "precision" chunks.

Use a default argument to make precision default to 100.

Test this function against the results of some integrals you know from calculus (or ones you can find online).

TPQS:

1) What precision was necessary for you to get good results for the different functions you tried?

2) Some functions require more or less precision for accuracy. What properties of a function might determine how much precision it needs?

3) The opposite of the integral is the derivative, which determines the slope of a function at a given point. How would you implement a function to approximate the derivative?

4) Calculus also cares about higher dimensional functions. Given a three dimensional function, f(x, y) -> z, how could you expand the method of Riemann sums to apply here?
