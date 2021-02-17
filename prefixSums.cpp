#include <iostream>
using namespace std;
#include <algorithm>
void update(int a[], int n, int updates[], int k)
{
    sort(updates, updates+k);
    for (int j=0; j<k; j++) {
        int start = updates[j]-1;
        int end;
        if (j<k-1) {
            end = updates[j+1]-1;
        }
        else {
            end = n;
        }
        for (int i=start; i<end; i++) {
            a[i] += (j+1);
        }
    }
}