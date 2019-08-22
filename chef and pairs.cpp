#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,i,e=0,count=0;
	    cin>>n;
	    int a;
	    for(i=0;i<n;i++)
	    {
	        cin>>a;
	        if(a%2==0)
	        e++;
	        else
	        count=count+e;
	    }

	    cout<<count;
	    cout<<"\n";
	    t--;
	}
	return 0;
}

