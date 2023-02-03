#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Program for Event 1
int *event1()
{
    bool HT = false;
    int numHeads = 0;
    int numTails = 0;
    string prev = "x";
    static int result[2];

    while (HT == false)
    {
        int randomNum = rand() % 2;
        if (randomNum == 0)
        {
            numHeads = numHeads + 1;
            prev = "H";
            // cout << "H" << endl;
        }
        else
        {
            numTails = numTails + 1;
            // cout << "T" << endl;
            if (prev == "H")
            {
                HT = true;
            }
            prev = "T";
        }
    }

    result[0] = numHeads;
    result[1] = numTails;
    return result;
}

// Program for Event 2
int *event2()
{
    bool TT = false;
    int numHeads = 0;
    int numTails = 0;
    string prev = "x";
    static int result[2];

    while (TT == false)
    {
        int randomNum = rand() % 2;
        if (randomNum == 0)
        {
            numHeads = numHeads + 1;
            prev = "H";
            // cout << "H" << endl;
        }
        else
        {
            numTails = numTails + 1;
            // cout << "T" << endl;
            if (prev == "T")
            {
                TT = true;
            }
            prev = "T";
        }
    }

    result[0] = numHeads;
    result[1] = numTails;
    return result;
}

// Main Function to Test 2311 Trials for Each Event
int main()
{
    srand(time(0));

    // Event 1 Repeated 2311 Times
    int totalHeads1 = 0;
    int totalTails1 = 0;
    for (int i = 0; i < 2311; i++)
    {
        int *ptr1;
        ptr1 = event1();
        totalHeads1 = totalHeads1 + ptr1[0];
        totalTails1 = totalTails1 + ptr1[1];
    }
    cout << "After 2311 Trials for Event 1, the total number of heads is " << totalHeads1 << " and the total number of tails is " << totalTails1 << endl;
    cout << "Total Heads: " << totalHeads1 << endl;
    cout << "Total Tails: " << totalTails1 << endl;
    cout << endl;

    // Event 2 Repeated 2311 Times
    int totalHeads2 = 0;
    int totalTails2 = 0;
    for (int i = 0; i < 2311; i++)
    {
        int *ptr2;
        ptr2 = event2();
        totalHeads2 = totalHeads2 + ptr2[0];
        totalTails2 = totalTails2 + ptr2[1];
    }
    cout << "After 2311 Trials for Event 2, the total number of heads is " << totalHeads2 << " and the total number of tails is " << totalTails2 << endl;
    cout << "Total Heads: " << totalHeads2 << endl;
    cout << "Total Tails: " << totalTails2 << endl;
    cout << endl;
    return 0;
}