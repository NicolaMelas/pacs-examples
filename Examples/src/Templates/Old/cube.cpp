#include <iostream> 
#include <complex>

template<class T> T cube(T x) {
  std::cout << " Version 1" << std::endl;
  return x*x*x;
}

template<class T> std::complex<T> cube(std::complex<T> x) {
  std::cout << " Version 2" << std::endl;
  return x*x*x;
}

template<>  // CAN BE OMITTED
double cube(double x) {
  std::cout << " Version 3" << std::endl;
  return x*x*x;
}

int main(){

  int i = 2;
  double d =  5;
  std::complex<double> c(- 1, 3);

  int b=cube(i);       // version 1
  double z=cube(d);       // version 3  
  std::complex<double>l=cube(c);       // version 2
} 
