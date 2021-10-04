                                                                     //find the largest element
#include <iostream>
using namespace std;
int largest_elem(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag=true;
        for (int j = 0; j < n; j++)
        {
          if(arr[j]>arr[i])
          {
            flag=false;
            break;
          }
        }
        if(flag==true)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int *a = new int[5];
    cout << "enter element :";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout<<"largest element is :"<<a[largest_elem(a,5)];
    return 0;
}
