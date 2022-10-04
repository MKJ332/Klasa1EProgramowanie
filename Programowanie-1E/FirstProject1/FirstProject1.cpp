
// FirstProject.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.


#include <iostream>


   //funkcja która pobierze dwie liczby oraz wykona podstawowe obliczenia artmetyczne
void task1()
{
    int FirstNumber, SecondNumber;

    std::cout << "Podaj pierwsza liczbe: \n";
    std::cin >> FirstNumber ;

    std::cout << "Podaj druga liczbe (nie podawaj zera): \n";
    std::cin >> SecondNumber;


    //suma, różnica,      iloczyn, iloraz
    int sum, difference, product, quotient, rest ;

    sum = FirstNumber + SecondNumber;
    difference = FirstNumber - SecondNumber;
    product = FirstNumber * SecondNumber;
    quotient = FirstNumber / SecondNumber;
    rest = FirstNumber % SecondNumber;



    std::cout << "Suma" << sum << "\n";
    std::cout << "Roznica" << difference << "\n";
    std::cout << "Iloczyn" << product << "\n";
    std::cout << "Iloraz" << quotient << "\n";
    std::cout << "Reszta z dzielenia" << rest << "\n";







}

int main()
{
    task1();
}



