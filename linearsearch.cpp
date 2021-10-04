#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int elem)
{
  for(int i=0;i<n;i++)
  {
  if(arr[i]==elem)
  {
      return i;
  }
  }
  return -1;
}
int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    int key;
    cout<<"enter element you wanrt search";
    cin>>key;
   cout<<"search index is :"<<linearsearch(arr,n,key)<<endl;


    return 0;

}
