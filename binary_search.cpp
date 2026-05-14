#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;

    cout<<"Enter size: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter sorted array:\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;

    cout<<"Enter target: ";
    cin>>target;

    int start = 0;
    int end = n-1;

    int pos = -1;

    while(start <= end){

        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            pos = mid;
            break;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    if(pos == -1){
        cout<<"Not found";
    }
    else{
        cout<<"Found at index "<<pos;
    }
}
