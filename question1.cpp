#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    char event1[5][30];
    int n, m;
    cout << "Enter the number of participants in event 1: ";
    cin >> n;
    if (n > 5)
    {
        cout << "The maximum number of participants for the event is 5.";
    }
    else
    {
        cout << "Enter the " << n << " names for event 1: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> event1[i];
        }
    }
    char event2[5][30];
    cout << "Enter the number of participants in event 2: ";
    cin >> m;
    if (m > 5)
    {
        cout << "The maximum number of participants for the event is 5.";
    }
    else
    {
        cout << "Enter the " << m << " names for event 2: " << endl;
        for (int i = 0; i < m; i++)
        {
            cin >> event2[i];
        }
    }
    cout << "for event 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "name#" << i + 1 << ": " << event1[i] << endl;
    }
    cout << "for event 2: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "name#" << i + 1 << ": " << event2[i] << endl;
    }
    char search[50];
    cout << "Enter the Name that you want to search :";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(search, event1[i]) == 0)
        {
            cout << "The name is in event 1." << endl;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (strcmp(search, event2[i]) == 0)
        {
            cout << "The name is in event 2." << endl;
        }
    }
    int evd1, evd2;
    evd1 = n * 10;
    evd2 = m * 10;
    cout << "The Total Donation Amount for event 1 is: " << evd1 << endl;
    cout << "The Total Donation Amount for event 2 is: " << evd2 << endl;
    int tevd;
    tevd = evd1 + evd2;
    cout << "The Total Donation Amount collected from both events is: " << tevd << endl;
    for (int i = 0; i < n; i++)
    {
        int length = strlen(event1[i]);
        for (int j = 0; j < length / 2; j++)
        {
            char temp = event1[i][j];
            event1[i][j] = event1[i][length - 1 - j];
            event1[i][length - 1 - j] = temp;
        }
    }
    cout << "The Reversed names for event 1 are:\n ";
    for (int i = 0; i < n; i++)
    {
        cout << "Name#" << i + 1 << " " << event1[i] << endl;
    }

    for (int i = 0; i < m; i++)
    {
        int length = strlen(event2[i]);
        for (int j = 0; j < length / 2; j++)
        {
            char temp = event2[i][j];
            event2[i][j] = event2[i][length - 1 - j];
            event2[i][length - 1 - j] = temp;
        }
    }
    cout << "The Reversed names for event 2 are:\n ";
    for (int i = 0; i < m; i++)
    {
        cout << "Name#" << i + 1 << " " << event2[i] << endl;
    }

    cout << "\nBar Chart for Number of Participants:\n";
    cout << "Event 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << " (" << n << ")" << endl;

    cout << "Event 2: ";
    for (int i = 0; i < m; i++)
    {
        cout << "*";
    }
    cout << " (" << m << ")" << endl;

    return 0;
}
