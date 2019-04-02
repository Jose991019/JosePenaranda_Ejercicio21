#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
  float x = 0;
  float y = 0;
  float dx;
  float dy;
  float pi = 2*asin(1);
  srand48(17);
  std::cout << x << " " << y << std::endl;
  for (int i=0;i<1000;i++){  
    float theta = 2*pi*drand48();
    dx = cos(theta);
    dy = sin(theta);
    x = x + dx;
    y = y + dy;
    std::cout << x << " " << y << std::endl;
    
  }
  
  return 0;
}

