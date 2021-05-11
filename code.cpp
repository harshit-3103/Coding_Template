// Welcome to this coding template 

/* Reverse the elements of array */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        reverse(a,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}

//T.C = O(n)
//S.C = O(n)


/* Calculate the sum by the given condition
    sum = a[n-1]*a[n-1] - a[n-2]*a[n-2]	+ a[n-3]*a[n-3] - a[n-4]*a[n-4] + .................... */


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i] = a[i]*a[i];
        }
        reverse(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(i%2==0){
                sum += a[i];
            }
            else{
                sum -= a[i];
            }
        }
        cout<<sum<<endl;
    }
	
	return 0;
}

//T.C = O(n)
//S.C = O(n)

/* Frequency of the elements of an array */

#include <iostream>
using namespace std;
int main()
{
	int n,m,max=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	//cout<<max<<endl;
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}													
	}								//a[5] = 1 2 1 3 4   
	m=max+1;							//b[5] = 0 1 2 3 4 	
	//cout<<m<<endl;								   
	int b[m];
	for(int i=0;i<m;i++)
	{
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		b[a[i]] += 1;
	}
	for(int i=0;i<m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}


// Thankyou guys
