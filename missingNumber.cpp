#include <iostream>
using namespace std;
int sumOf(int n) {
    int res=0;
    for (int i=1; i<=n; i++) {
        res+=i;
    }
    return res;
}

int main() {
	//code
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        int n;
        cin >> n;
        int goal = sumOf(n);
        int sum = 0;
        for (int j=1; j<n; j++) {
            int x;
            cin >> x;
            sum += x;
        }
        cout << goal-sum << endl;
    }
	return 0;
}