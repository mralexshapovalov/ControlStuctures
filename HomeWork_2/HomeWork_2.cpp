// HomeWork_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <math.h>
#include <Windows.h>

#include<conio.h>
#include<stdio.h>
#include<math.h>

using namespace std;


#define UPPER_LEFT_ANGLE (char)218

#define UPPER_RIGHT_ANGLE (char)191

#define LOWER_LEFT_ANGLE (char)192

#define LOWER_RIGHT_ANGLE (char)217

#define HORIZONTAL_LINE (char)196

#define VERTICAL_LINE (char)179

#define WHITE_BOX  (char)219

#define BLACK_BOX  ' '


void  null()
{
    
   


    for (int i = 0; i < 5; i++) 
    {

        for (int j = 0; j < 5; j++) 
        {

            cout << "*";
        }
        cout << endl;
    }


}




void one()
{



    for (int i = 1; i <= 5; i++) 
    {
        
        for (int j = 1; j <= i; j++) 
        {
         
            cout << "* ";
        
        }
        cout << endl;

    }
}

void two()
{
                for (int i = 1; i <= 5; i++) 
                {
                    
                    for (int j = i; j <= 5; j++) 
                    {
                     
                        cout << "* ";
                    
                    }
                    cout << endl;

                }
}

void three()
{

            for (int i = 0; i <= 5; i++)
            {

                 for (int j = 0; j <= 5; j++)
                 {

                     if (j < i)
                     {
                         cout << " ";
                     }
                     else
                     {
                         cout << "*";
                     }


                 }
                 cout << endl;


            }
}

void four()
{

    int values = 5;

    int row = values - 1;


    for (int i = 0; i < values; i++)
    {
        char ch = ' ';

        for (int j = 0; j < values; j++)
        {

            if (j >= row)

                ch = ' *';

            cout << ch;
        }
        cout << endl;
        row = values - (i + 2);

    }
  
}

void five()
{

   
    for (int i = 0; i <= 10; i++)
    {
        cout << "\t";
        for (int j = 0; j <=10; j++)
        {

            if ( i == 1 && j == 4 || i == 2 && j == 5 || i == 3 && j == 6) {
                
                cout << "\\";
            }

            if (i == 4 && j == 6 || i == 5 && j == 5 || i == 6 && j == 4 ) {

                cout << "/";
            }
            if (
                i == 6 && j == 2 || i == 5 && j == 1 || i == 4 && j == 0) {

                cout << "\\";
            }
            if (i == 3 && j == 0 || i == 2 && j == 1 || i == 1 && j == 2 )
            {
                cout << "/";

            }
            if (i == 7 && j == 3) 
            {
                cout << "\\/";
            }
            if (i == 0 && j == 3 )
            {
                cout << "/\\";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;

    }


}



void six() 
{

        int a = 0;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {

                if (a % 2 == 0) cout << "+ ";
                else cout << "- ";
                a++;

            }
            cout << endl;
        }

}


void shahmat_doska_figura() 
{

    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size; k++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int l = 0; l < size; l++)
                {
                    if ((i + j) % 2)
                    {
                        cout << ' ';
                    }
                    else
                    {
                        cout << '*';
                    }

                }

            }
            cout << endl;
        }


    }

}








void  shahmat_doska_figura_BOX()
{

    int n;
    cout << " Введите размер доски: "; cin >> n;

    setlocale(LC_ALL, "C");
    n++;
    for (int i = 0; i <= n; i++) 
    {
    
        for(int j=0;j<=n;j++)
        {
        
            if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
            else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
            else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
            else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
            else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
            else if (j == 0 || j == n)cout << VERTICAL_LINE;
            else 
            {

                if ((i + j) % 2 == 0) cout << WHITE_BOX << WHITE_BOX;
                else cout << BLACK_BOX << BLACK_BOX;
                              
            }
        }
        cout << endl;
           
    }

}



void Pifagor_table()
{

   for (int i = 1; i <= 9; i++)
   {
      for (int j = 1; j <= 9; j++)

      cout << i * j << '\t';
      cout << endl;
   }
}

int main()
{
    setlocale(LC_ALL, "Rus");


    int number;
    cout << "По заданию из файла " << endl;
    cout << "0. " << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cout << "4. " << endl;
    cout << "5. " << endl;
    cout << "6. " << endl;
    cout << "7.Шахматная доска из звезд  " << endl;
    cout << "8.Шахматная доска из фигур  " << endl;
    cout << "Выбирете необходимое число";



    cin >> number;


    switch (7)
    {

    case 0:

        null();
        break;

    case 1:
         one();

        break;

    case 2:
         two();

        break;
    case 3:
        three();

        break;
    case 4:
        four();

        break;

    case 5:
        five();

        break;

    case 6:
        six();

        break;

    case 7:
        shahmat_doska_figura();
        break;

    case 8:
        shahmat_doska_figura_BOX();
        break;

    case 9:
        Pifagor_table();
        break;

    default:
        cout << "ERROR";
        break;
    }




}
