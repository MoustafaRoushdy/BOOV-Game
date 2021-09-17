// BOOVproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BOOV.h"
#include <ctime>



using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));
    //getting the boov's health
    std::cout << "Enter the BOOV's health value";
    int health;
    std::cin >> health;
    //getting the boov's shield
    cout << "Enter the BOOV's shield value";
    int shield;
    std::cin >> shield;
    //run many simulations 
    const int num_of_simulations = 10000;
    //counting the number of round_survived
    int round_survived = 0;

    for (int i = 0; i < num_of_simulations; i++)
    {
        BOOV oh("oh", health, shield);
            while (!oh.IsDefeated())
            {
                round_survived++;
                oh.GetAttacked();
            }
    }
    std::cout << "average number of rounds until defeated ";
    double average = round_survived / static_cast<double>(num_of_simulations);
    cout << average << endl;

    system("PAUSE");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file