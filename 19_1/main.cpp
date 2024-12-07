//#include "Ihuman.h"
//#include "kid.h"
//#include "adult.h"

#include "teenager.h"
#include <iostream>
#include <fstream>
#include <cstdlib>//не для задачи
using namespace std;

int main()
{
    //options
    //("Dinamic", "OneKid", themeAge::Glaustoma, 34, 120, 18);
    //("Dinamic", "OneAdult", themeAge::Tomas, 67, 170, 30);
    //("Static", "TwoKid", themeAge::Glaustoma, 34, 120, 20);
    //("Static", "TwoAdult", themeAge::Tomas, 67, 170, 32);
    Kid* d1 = new Kid;
    cout << "before\n";
    d1->display();
    cout << "before\n";
    Kid* d2 = new Kid;
    Adult* d3 = new Adult;
    Adult* d4 = new Adult;
    Teenager* d5 = new Teenager;
    
    IHuman** a = new IHuman * [5] {d1, d2, d3, d4, d5};

    bool start = true;
    do
    {
        cout << "Select a user: \n"
            << " 1 - first kid; \n 2 - second kid;\n 3 - firsl adult; \n 4 - second adult;\n 5 - teenager;\n 0 - program exit\n"
            << "-------------------------------\nSelect: ";
        char choice;
        cin >> choice;
        switch (choice)
        {
        case '1':
            a[0]->readFromConsole();
            break;
        case '2':
            a[1]->readFromConsole();
            break;
        case '3':
            a[2]->readFromConsole();
            break;
        case '4':
            a[3]->readFromConsole();
            break;
        case '5':
            a[4]->readFromConsole();
            break;
        case '0':
            for (int i = 0; i < 5; i++)
            {
                a[i]->display();
                cout << "-------------------------------\n";
            }
            start = false;
            break;
        default: break;
        }
    } 
    while (start);

    ofstream out("Human.txt", ios::out | ios::trunc);
    out.close();

    for (int i = 0; i < 5; ++i)
    {
        a[i]->writeToFile();
        cout << "Human \"" << a[i]->getName() << "\" successfully written to file" << endl;
    }
    delete d1;
    delete d2;
    delete d3;
    delete d4;
    delete d5;
    delete[] a;
    return 0;
}