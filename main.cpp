#include <iostream>
using namespace std;

int main() {
	//code
    cout << "Versuche: ";
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    cin >> N;
	    if(N % 2 == 0) {
	        cout << N << "\t" << "gerade" << endl;
	    }
	    else {
	        cout << N << "\t" << "ungerade" << endl;
	    } 
	}
	return 0;
}
