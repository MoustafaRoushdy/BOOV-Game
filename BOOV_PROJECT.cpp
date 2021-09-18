// BOOVproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BOOV.h"
#include <ctime>
#include"gorg.h"



using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));
    //getting the boov's health
    
    int health = 0 ;
   
    //getting the boov's shield
   
    int shield = 0 ;
    //run many simulations 
    const int num_of_simulations = 10000;
    //counting the number of round_survived
    int BOOV_wins = 0;
    int gorg_wins = 0; 


    for (int i = 0; i < num_of_simulations; i++)
    {
        competitor * oh = new BOOV("oh", 30  , 31);
        competitor *   goorg = new gorg; 
            while (!oh->IsDefeated() && !goorg->IsDefeated())
            {
                goorg->GetAttacked(); 
                if (!goorg->IsDefeated()) oh->GetAttacked();
                
            }
            if (goorg->IsDefeated()) BOOV_wins++;
            else gorg_wins++;
    }
    double BOOVpct = BOOV_wins / static_cast<double>(num_of_simulations)*100;
    double gorgpct = gorg_wins / static_cast<double>(num_of_simulations) * 100;

    cout <<"boov percentage = " << BOOVpct<< endl;
    cout << "gorg percentage = " << gorgpct << endl; 

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