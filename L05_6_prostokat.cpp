#include <iostream>

class Rectangle {
public:
  // rysuje prostokat o podanych wymiarach
  static void Draw(const int& x, const int& y){
    for (int i = 0; i < y; i++){
      for(int j = 0; j < x; j++){
        std::cout << "x ";
      }
      std::cout<<std::endl;
    }
  }
};

int main(int argc, char** argv){
  std::cout << "Podaj liczbe znakow x w poziomie: ";
  int x;
  std::cin >> x;
  std::cout << "Podaj liczbe znakow x w pione: ";
  int y;
  std::cin >> y;

  Rectangle::Draw(x, y);
  return 0;
}
