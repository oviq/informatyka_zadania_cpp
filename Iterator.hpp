#pragma once

// Klasa abstrachujaca iteracje
// w C++. Ze wzgledu na niewielki
// rozmiar umieszczam ja w pojedynczym
// pliku hpp, dla zachowania czytelnosci.

// LICENCJA: GNU GPLv2
// Mikolaj Kisala 2020

#include <iostream>
#include <cstdlib>

#include <unistd.h>

// W ten sposob mozna uniknac
// problemow z kompatybilnoscia
//
// Na Windowsie nalezy kompilowac z
// "#define WINDOWS" przed zalaczeniem naglowka
#define CLEAR_COMMAND "clear"
#ifdef WINDOWS 
  #define CLEAR_COMMAND "cls"
#endif

class Iterator {
private:
  int _interval;
  std::string _message;

public:
  // domyslny konstruktor
  Iterator(const int& interval = 1, const std::string& message = "START")
    : _interval(interval), _message(message)
  {

  }

  // iteruje inkluzywnie od $min do $max 
  // co $_interval
  void iterate(const int& min, const int& max){
    if (_interval > 0){

      for (int i = min; i <= max; i+=_interval){
        std::cout << i << std::endl;
      }  
    }
    else if (_interval < 0){
      for (int i = min; i >= max; i+=_interval){
        std::cout << i << std::endl;
      }  
    }
    else return;
  }

  // iteruje inkluzywnie od $min do $max 
  // co $_interval, robiac przerwy co $time_interval
  // i czyszczac ekran
  void iterate(const int& min, const int& max, const unsigned int& time_interval){
    if (_interval > 0){
      for (int i = min; i <= max; i+=_interval){
        std::system(CLEAR_COMMAND);
        std::cout << i << std::endl;
        sleep(time_interval);
      }  
    }
    else if (_interval < 0){
      for (int i = min; i >= max; i+=_interval){
        std::system(CLEAR_COMMAND);
        std::cout << i << std::endl;
        sleep(time_interval);
      }  
    }
    else return;
  }
  // iteruje inkluzywnie od $min do $max 
  // co $_interval powtarzajac przy tym $name
  void iterate(const int& min, const int& max, const std::string& name){
    if (_interval > 0){
      for (int i = min; i <= max; i+=_interval){
        std::cout << i << ". " << name << std::endl;
      }  
    }
    else if (_interval < 0){
      for (int i = min; i >= max; i+=_interval){
        std::cout << i << ". " << name << std::endl;
      }  
    }
    else return;
  }

  // odlicza od $n do 0 co _interval
  // a potem wyswietla wiadomosc
  // (domyslnie START)
  void countdown(const int& n, const unsigned int& time_interval = 1){
    iterate(n, 0, time_interval);
    std::cout << _message << std::endl;
  }

  // getter i setter dla _interval
    // setter
    void setInterval(const int& interval){
      _interval = interval;
    }

    // getter
    int getInterval(){
      return _interval;
    }

  // getter i setter dla _message
    // setter
    void setMessage(const std::string& message){
      _message = message;
    }

    // getter
    std::string getMessage(){
      return _message;
    }
};
