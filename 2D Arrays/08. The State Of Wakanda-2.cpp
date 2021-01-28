/*

Question

The historic state of Wakanda has various monuments and souveniers which are visited by many travellers every day. The guides follow a prescribed route of visiting the monuments which improves them understand the relevance of each monument. The route of the monument is fixed and expressed in a 2-d matrix where the travellers visit the prescribed next monument. For example
1  2  3
4  5  6
7  8  9
is the prescribed route and the visitors travels this path: 1->2->3->4->5->6->7->8->9

However, a certain visitor decides to travel a different path as follows:
1. The visitor only plans to visit the upper diagonal triangle of the monument list.
2. The visitor travels diagonally till there are no more moves left in the current journey. 
3. He then visits the adjacent monument to the first monument of current diagonal journey. 
4. He continues the same path till all the monuments of the upper half have been travelled.

For Example:

The monuments are named as:
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16

The path followed by the visitor is: 1->6->11->16->2->7->12->3->8->4

You are required to print the path followed by the traveller to visit all the monuments.

1. You are given a number n, representing the number of rows and columns of a square matrix.
2. You are given n * n numbers, representing elements of 2d array a.
3. You are required to diagonally traverse the upper half of the matrix and print the contents.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int monument[n][n];

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> monument[i][j];
        }
    }

    i = n - 1;
    int c = 0;

    while (i >= 0)
    {

        for (int k = 0; k <= i; k++)
        {
            int j = k + c;
            cout << monument[k][j] << endl;
        }

        i--;     // the total size of elements in daigonal line keeps decreasing by 1 as we move left
        c++;     // the diff between i and j for (i,j) keeps increasing as we move left
    }
    return 0;
}