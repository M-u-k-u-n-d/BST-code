#include <bits/stdc++.h>
using namespace std;
int BinSearch(int a[],int n, int key){
    int l =1,h=n;
    while (l<=h)
    {
        int mid = (l+h)/2;
        if(key == a[mid])
        return mid;
        else if(a[mid]>key)
        h=mid-1;
        else
        l=mid+1;
    }
    return 0;
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++) cin>>a[i];
  int key;
  cin>>key;
cout<<BinSearch(a,n,key);
 return 0;
}