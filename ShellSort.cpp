//Shell Sort
#include <iostream>
using namespace std;
void shellSort(int arr[], int n){
	for(int gap = n/2; gap>=1; gap/=2){
		for(int j=gap; j<n; j++){
			for(int i=j-gap; i>=0; i-=gap){
				if(arr[i]>arr[i+gap]){
					int temp = arr[i];
					arr[i] = arr[i+gap];
					arr[i+gap] = temp;
				}
			}
		}
	}
	cout<<"Sorted array is: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n; 
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}shellSort(arr,n);
}
