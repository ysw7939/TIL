#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{

    int a[] = {1, 2, 3};
    do
    {
        for (int i : a)
            cout << i << " ";
        cout << '\n';
    } while (next_permutation(a, a + 3));

    return 0;
}