#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int maxDiff=0;
        
        for (int i = 0; i < n; i += 2) {
            int currentDiff = abs(v[i + 1] - v[i]);
            if (currentDiff > maxDiff) {
                maxDiff = currentDiff;
            }
        }
        
        cout << maxDiff << endl;
    }
	

}
