//
// Created by dimam on 18.09.2021.
//

#include <iostream>


int main()
{
    char chLetter('a');

    setlocale(LC_ALL,"Russian");

    std::cout << "Vvedite mal letteer :\n\n";

    std::cin >> chLetter;

    chLetter = chLetter - 32;

    std::cout << "\nEta letter big: " << chLetter << ".\n\n";

    return 0;
}