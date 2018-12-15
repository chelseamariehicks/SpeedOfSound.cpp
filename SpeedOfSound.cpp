/**********************************************************************
**  Author:         Chelsea Hicks
**  Date:           12/15/2018
**  Description:    This program asks the user to select a medium
**                  (air, water, or steel) and to input the number of
**                  feet a sound wave will travel and will display
**                  the amount of time it will take in seconds.
***********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void airTime(double);
void waterTime(double);
void steelTime(double);

int main()
{
    int choice;
    double distance;

//Introduces users to the program and medium options to select
    cout << "Welcome to the speed of sound calculator." << endl;
    cout << "Please select what medium the sound will travel through:" << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    cout << "Enter your choice (1-3):" << endl;
    cin >> choice;

    if (choice != 1 && choice !=2 && choice != 3)
    {
        cout << "Invalid selection. Please make a choice between 1-3." << endl;
        return 0;
    }

    cout << "What's the number of feet a sound wave will travel in the medium?" << endl;
    cin >> distance;

    if (choice >=1 && choice <=3)
    {   
        if (distance < 0)
        {
            cout << "The distance cannot be a negative number." << endl;
        }
        if (distance > 0)
        {
            switch (choice)
            {
                case 1:
                    airTime(distance);
                    break;
            
                case 2:
                    waterTime(distance);
                    break;
            
                case 3:
                    steelTime(distance);
                    break;
            }
        }
    }
    
    return 0;
}

void airTime(double distance)
{
    double time;

    time = (distance/ 1100);

    cout << "It takes " << time << " seconds for sound to travel through ";
    cout << distance << " feet of air." << endl;
}

void waterTime(double distance)
{
    double time;

    time = (distance/ 4900);

    cout << "It takes " << time << " seconds for sound to travel through ";
    cout << distance << " feet of water." << endl; 
}

void steelTime(double distance)
{
    double time;

    time = (distance/ 16400);

    cout << "It takes " << time << " seconds for sound to travel through ";
    cout << distance << " feet of steel." << endl; 
}