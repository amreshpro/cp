#include <bits/stdc++.h>

using namespace std;

void display(int *arr,int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

bool linearSearch(int *arr , int n,int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key) return true;
    }
    return false;
    
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
cout<<"-------------------"<<endl;
cout<<endl;
display(arr,n);
int key; cin>>key;
if(key){cout<<"Found"<<endl;} else cout<<"Not Found"<<endl;
display(arr,n);
cout<<endl;
cout<<"-------------------"<<endl;
}


	return 0;
}