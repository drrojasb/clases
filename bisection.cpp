#include <iostream>
#include <cmath>
#include <cstdlib>

double f (double x);
template <class fptr>
double bisection (double xl, double xu, fptr fun, double eps);

int main (int argc, char **argv)
{   
    std::cout.precision(16); std::cout.setf(std::ios::scientific);
    const double XL = std::atof(argv[1]);
    const double XU = std::atof(argv[2]);
    const double EPS = std::atof(argv[3]);

    std::cout << bisection(XL, XU, f, EPS) << std::endl;

    return 0;
}

double f (double x){
    return 9.81*(68.1)*(1 - std::exp(-x*10/68.1))/x - 40;
}
template <class fptr>
double bisection (double xl, double xu, fptr fun, double eps){
    double xr = 1;
    for ( ; std::fabs(fun(xr)) > eps ; ){
        xr = (xl + xu)/2;
        if (fun(xr)*fun(xl) < 0){
            xu = xr;
        }
        else {
            xl = xr;
        }
        std::cout << xl << "\t" << xu << "\t" << xr << std::endl;
    }
    return xr;
}
