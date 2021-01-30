//Selection Sort
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
	for(int j=0; j<n; j++){
		int min = j;
		for(int i=j+1; i<n; i++){
			if(arr[min]>arr[i]){
				min = i;
			}
		}
		if(min!=j){
			int temp;
			temp = arr[j];
			arr[j] = arr[min]; 
			arr[min] = temp;
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
	}selectionSort(arr,n);
}
