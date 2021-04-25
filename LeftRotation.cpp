#include <iostream>
using namespace std;
int arr[100000];
int main() {
    
    int n,d,rotationNumber;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotationNumber=d%n;
    for(int i=rotationNumber;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<rotationNumber;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}
