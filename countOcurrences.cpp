#include <iostream>
using namespace std;
#include <algorithm>
int main() {
	int arr[] = {1,2,2,2,23,24,2,5,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr+n);
	int previous = arr[0];
	int counter = 0;
	for (int i=0; i<n; i++) {
	    if (arr[i]==previous) {
	        counter++;
	    }
	    else {
	        cout << previous <<" "<< counter << endl;
	        previous=arr[i];
	        counter=1;
	    }
	}
	cout << previous <<" "<< counter << endl;
	return 0;
}