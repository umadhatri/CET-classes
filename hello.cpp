#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n";

    int n, max, min;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    max  =arr[0];
    min = arr[0];
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]>arr[i])
            max = arr[i+1];
    }
    cout << max << endl;

    return 0;
}
