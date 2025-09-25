#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a;
	    int count=0;
	    int total=0;
	    int count_of_minus=0;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        if(a==0){
	           count++;
	        }
	        else if(a==-1) count_of_minus++;
	    }
	    if (count_of_minus%2==0){
	        total=count;
	    }
	    else{
	        total=2+count;
	    }
	    cout<<total<<'\n';
	}

}
