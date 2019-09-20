#include <iostream>
#include "../src/RandomLite/random.h"

int main(int argc, char *argv[]) {
  std::cout  << "Test <Random> 'Eagle vs Tails' (10000 shots)" << std::endl;
  int eagle = 0;
  int tails = 0;
  for (int i =0; i < 10000; i++) {
    if (Random::get(0, 1) == 0) {
      eagle++;
    }
    else {
      tails++;
    };
  }
  std::cout  << "Dropped " << eagle << " 'Eagle'" << std::endl;
  std::cout  << "Dropped " << tails << " 'Tails'" << std::endl;
  if (eagle > tails) {
    std::cout << "Win: 'Eagle'" << std::endl;
  }
  else if (eagle < tails) {
    std::cout << "Win: 'Tails'" << std::endl;
  }
  else {
    std::cout << "Draw!!!" << std::endl;
  }
  return 0;
}
