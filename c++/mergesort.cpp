#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100], temp[100];

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    // Start with subarrays of size 1
    for(int size = 1; size < n; size *= 2) {

        for(int left = 0; left < n; left += 2 * size) {

            int mid = left + size;
            int right = left + 2 * size;

            if(mid > n)
              mid = n;
            if(right > n) 
              right = n;

            int i = left, j = mid, k = left;

            // Merge
            while(i < mid && j < right) {
                if(arr[i] < arr[j])
                    temp[k++] = arr[i++];
                else
                    temp[k++] = arr[j++];
            }

            while(i < mid)
                temp[k++] = arr[i++];

            while(j < right)
                temp[k++] = arr[j++];

            // Copy back
            for(int p = left; p < right; p++)
                arr[p] = temp[p];
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}