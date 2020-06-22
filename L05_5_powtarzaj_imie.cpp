#include "Iterator.hpp"

int main(int argc, char** argv){
  std::string name;
  std::cout << "Podaj imie: ";
  std::cin >> name;

  unsigned int n;
  std::cout << "Podaj naturalna liczbe dodatnia: ";
  std::cin >> n;

  Iterator it(1);
  it.iterate(1, n, name);
  return 0;
}
