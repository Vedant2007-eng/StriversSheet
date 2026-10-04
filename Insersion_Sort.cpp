#include <iostream>
using namespace std;
insersionSort(int n, int arr[]){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
}
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of arr[n] : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insersionSort(n, arr);
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    return 0;
}
