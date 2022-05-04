//May 2 2022
//Dr. Tyson
// a recursive function factorial R that will generate factorials based upon the user starting point (validated) input from the keyboard
//The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.
//recursive tower of Hanoi program 

#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char from_rod,char to_rod, char aux_rod)
{
    if(n == 1)
    {
        cout <<"Move disk 1 from rod " << from_rod <<" to rod " << to_rod<<endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod <<" to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 
int main()
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}

