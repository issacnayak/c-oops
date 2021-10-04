#include <iostream>
using namespace std;
int delete_element(int arr[], int size, int elem)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            break;
        }
    }
    if (i == size)
    {
        return -1;
    }
    for (int j = i; j < size - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return size - 1;
}
int main()
{
    int arr[] = {1, 2, 5, 7};
    int elem;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "enter element you want to delete :" << endl;
    cin >> elem;
    int a=delete_element(arr, n, elem);
    if(a<0)
    {
      cout<<"not possible";
    }
    else
    {
      cout<<"result array:";
      for (int i = 0; i < a; i++)
      {
          cout<<arr[i];
      }
      
    }
    return 0;
}
