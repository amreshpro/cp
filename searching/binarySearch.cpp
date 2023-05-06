#include <bits/stdc++.h>

using namespace std;

void display(int *arr,int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

int  binarySearch(int *arr , int n,int key){
int start = 0;int end = n-1; int mid = (start + end )/2;
for (int i = start; i <=end; i++)
{   if(arr[i]==key) return i;
	if(arr[mid] == key) return mid;
	if(arr[mid]>key)
		end = mid;
	else start = mid;
	
}



    return -1;
    
}

int main()
{
	
#ifndef Online_judge
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif




int t;cin>>t;
while(t--){
int n;cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


display(arr,n);
int key; cin>>key;
int result = binarySearch(arr,n,key);
if(result!=-1) cout<<"Found at index "<<result<<endl;
else cout<<"Not Found"<<endl;



}


	return 0;
}