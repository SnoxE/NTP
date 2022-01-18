//Pobierz repozytorium, popraw kod i dodaj potrzebne pliki w taki sposób, aby kod się kompilował oraz wrzuć wszystko na własne
//repozytorium w Githubie i sprawdź, czy narzędzie Github Actions zwraca poprawność kodu.

#include <iostream>
#include "PrintInt.h"

int add(int a, int b){
    return a + b;
}

int main(){

    std::cout << add(2, 3) << std::endl;
    printInt(4);
    
    return 0;
}
