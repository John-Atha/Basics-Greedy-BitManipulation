#include <iostream>
using namespace std;
#include <vector>
#include <queue>

/* global variables */
int T, N, K;
/* vector for the array */
vector<int> A;
/*  min heap (implemented with priority queue) for storing the indexes of the even numbers which
    will be used when the limit K is reached */
priority_queue<int> evenIndexes;

/*initialize the current vector*/
void init() {
    //cout << "I am init" << endl;
    A.clear();
    while(!evenIndexes.empty()) {
        evenIndexes.pop();
    }
    cin >> N;
    //cout << "N: " << N << endl;
    cin >> K;
    //cout << "K: " << K << endl;
    for (int i=0; i<N; i++) {
        int x;
        cin >> x;
        A.push_back(x);
    }
}

/* solve each sub-problem */
int decide() {
    //cout << "Solving " << T << "th problem:" << endl;
    init();
    int counter=0;  // number of even seen till now
    int currLength = 0;
    int maxLength = 0;
    for (int i=0; i<int(A.size()); i++) {
        //cout << "-----" << endl;
        //cout << "maxLength: " << maxLength << endl;
        //cout << "CurrLength: " << currLength << endl;
        //cout << "counter: " << counter << endl;

        //cout << "I see " << A[i] << " : ";
        if (A[i]%2!=0) {
            //cout << "odd" << endl;
            currLength++;
            maxLength = currLength>maxLength ? currLength : maxLength;
        }
        else {
            //cout << "even" << endl;
            if (counter==K) {
                maxLength = currLength>maxLength ? currLength : maxLength;
                currLength = i - ((-1) * evenIndexes.top());
                // counter = K;  // already there
                evenIndexes.pop();
            }
            else {
                currLength++;
                counter++;
                maxLength = currLength>maxLength ? currLength : maxLength;
            }
            evenIndexes.push((-1) * i);
        }
    }
    return maxLength;
}

int main() {
	cin >> T;
    //cout << "T: " << T << endl;
    for (int i=0; i<T; i++) {
        int res = decide();
        cout << res << endl;
    }
	return 0;
}