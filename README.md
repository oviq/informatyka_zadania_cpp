#Kompilacja
  Jak widac pliki zrodlowe ulozone sa w sposob pozwalajacy
na kompilowanie ich przy uzyciu programu cmake, ktory potrafi
tworzyc projekty dla wielu build systemow (w tym Code::Blocks). Dzieki temu
projekt jest w 100% crossplatfomowy. Dodatkowo pozwolilem sobie
na uzycie biblioteki cstdlib w miejscu specyficznego dla Windowsa
Windows.h.

  Skoro juz o tym mowa, to w opcjach preprocesora nalezy dodac linie:
#define WINDOWS
ktora sprawi ze program w celu czyszczenia okna skorzysta z windowsowego
"cls", zamiast unixowego "clear" (lub recznie dopisac na gorze pliku Iterator.hpp).

  Pusty folder "build" sluzy do stworzenia w nim plikow projektu przy uzyciu
"cmake .." lub aplikacji GUI.

#Styl
  Wszystkie programy sa napisane w taki sposob zeby
uniknac kopiowania danych na stosie (stad const type& w
deklaracjach funkcji). Dodatkowo nie używam using namespace std.
Co prawda nie ma znaczenia w tak malych programach, ale chce 
tylko dac znac ze wiem ze w ten sposob mozna uniknac przepisywania
std::, ale powszechnie ta klauzula jest uwazana za blad stylistyczny,
ktory w wiekszych projektach moze doprowadzic do kolizji deklaracji
funkcji, typow i globalnych zmiennych.
