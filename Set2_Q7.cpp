/******************************************************************************
//Devyani Mahale -Set 2
Question 7
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int countRect(int l, int b)
{
    int squareSide = __gcd(l, b);
 
    // Number of squares.
    return (l * b) / (squareSide * squareSide);
}
int main()
{

    int l, b;			//length and breadth of chocolate Bar.
    cout<<"................Progran Of Chocolate Bar............\n";
    cout<<"Enter length: \n";
    cin>>l;
    
    cout<<"Enter breadth: \n";
    cin>>b;

    cout << countRect(l, b) << endl;
    return 0;
}
