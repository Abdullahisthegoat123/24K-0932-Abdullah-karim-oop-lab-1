#include <iostream>
using namespace std;
int main()
{
    int aqi[4][7];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the 7 AQI values for city " << i + 1 << ": " << endl;
        for (int j = 0; j < 7; j++)
        {   
            cout<<"Day "<<j+1<<": ";
            cin >> aqi[i][j];
        }
    }
    float highestavg = 0;
    int highestcity = 0;

    for (int i = 0; i < 4; i++)
    {
        float temp = 0;
        for (int j = 0; j < 7; j++)
        {
            temp += aqi[i][j];
        }
        float average = temp / 7;
        cout << "Average AQI for City " << i + 1 << " is: " << average << endl;
        if (average > highestavg)
        {
            highestavg = average;
            highestcity = i + 1;
        }
    }
    cout << "\nCity with the worst Air Quality is City " << highestcity << endl;

    cout << "\nCities that exceeded an AQI of 150:\n";
    for (int i = 0; i < 4; i++)
    {
        cout<<"City "<<i+1<<": ";
        bool found = false;
        for (int j = 0; j < 7; j++)
        {
            if (aqi[i][j] > 150)
            {
               cout<<j+1<<" ";
               found = true;
            }
        }
        if (!found)
            cout << "None";
            cout<<"\n";
    }
}