//Bubble Sort
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}cout<<"Sorted aray is: ";
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
	}bubbleSort(arr,n);
}
