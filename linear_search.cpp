#include <iostream>
using namespace std;
 /* we have to search the taget value inside the array
        & we have to print the value's index
    */


int lineaSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
            break;
        }
        
    }
    return -1;
    
}

int main()
{
    int size = 7;
    int target = 8;
    int arr[]= {4,2,7,8,1,2,5};

    cout << "we found the target " << target << " on "<<  lineaSearch(arr, size, target)
     <<" index" <<endl;

    // if we try to search any other number which is not in array than we get -1 means invalid

    
}
