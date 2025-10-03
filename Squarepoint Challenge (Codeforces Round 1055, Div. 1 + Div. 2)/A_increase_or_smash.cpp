#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    set<int> s;
	    for(int i=0;i<n;i++){
	        int value;
	        cin>>value;
	        s.insert(value);
	    }
	    int m=s.size();
	    cout<<2*m-1<<endl;
	    
	}

}
