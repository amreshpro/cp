# cp
Searching in Cpp

### Linear Search
```c
bool linearSearch(int *arr , int n,int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key) return true;
    }
    return false;
}
```

### Binary Search 

```c
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

```

