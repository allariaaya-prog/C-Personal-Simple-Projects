/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int N;//input N where N is the number of integers(size)
    cin >> N;
    //cout<<endl;// The next line contains N space-separated integers.
    if (N >= 1 && N <= 1000)
    {

        int A[N];
        for (int i = 0; i < N; i++) //because N is the number of integers(size)
        {
            cin >> A[i];// A[i] is element of the array

        }

        for (int i = N - 1; i >= 0; i--)//decrease; because it is from the end to the beganning 
        {
            cout << A[i];//Print the N integers of the array in the reverse order
            if (i > 0) cout << " ";
        }


    }


    return 0;
}
*/
