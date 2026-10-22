// Intergral Concerns lab
//Alexander Kazantzis
//10-22-26
//Check my code
#include <iostream>
#include <vector>
#include <functional>
#include <cmath>
#include <stdexcept>
#include <limits>
using namespace std;

//using the Riemann Sum, Approx the area of f from A and B.
//use a default argument to set percision to 100

double IntrGrt(function<double(double)> f, double A, double B,int Prcsn = 100) {
    if(Prcsn<=0){ // Input validation
        throw std:: invalid_argument("Percision must be a positive number!");
    }
    if (A==B){
        return 0.0; // there's no area if the limits are equal
    }
    bool Rvrsd = false;
    if (A>B){ // the bigger limit must be assigned to B
        std::swap(A,B);
        Rvrsd = true;
    }
    double RectWdth = (B-A) //Width of the Rectangles
    double Sum = 0.0

    return Rvrsd ? -Sum : Sum;
}
    
int main(){
   try {
        // Example: integrate f(x) = x^2 from 0 to 1
        auto func = [](double x) { return x * x; };
        double result = IntrGrt(func, 0.0, 1.0); // default precision = 100
        std::cout << "The integral of x^2 from 0 to 1 ≈ " << result << std::endl;

        // Example with custom precision
        double result2 = IntrGrt(func, 0.0, 1.0, 1000);
        std::cout << "The integral with precision=1000 ≈ " << result2 << std::endl;

        // Example with reversed limits
        double result3 = IntrGrt(func, 1.0, 0.0);
        std::cout << "the integral from 1 to 0 ≈ " << result3 << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}