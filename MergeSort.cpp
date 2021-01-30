//Merge Sort
#include <iostream>
using namespace std;
int* merge(int arr[], int lb, int mid, int ub){
	int i = lb, j = mid+1, k = lb;
	int arr1[ub+1];
	while(i<=mid && j<ub+1){
		if(arr[i]>arr[j]){
			arr1[k] = arr[j];
			j++;
			k++;
		}else{
			arr1[k] = arr[i];
			i++;
			k++;
		}
	}
	if(i>mid){
		while(j<=ub){
			arr1[k] = arr[j];
			j++;
			k++;
		}
	}
	if(j>ub){
		while(i<=mid){
			arr1[k] = arr[i];
			i++;
			k++;
		}
	}
	return arr1;
}
int* mergeSort(int arr[], int lb, int ub){
	if(lb<ub){
		int mid = (lb+ub)/2;
		mergeSort(arr,lb,mid);
		mergeSort(arr,mid+1,ub);
		arr = merge(arr,lb,mid,ub);
	}
	return arr;
}
int main(){
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n; 
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int *arr1 = mergeSort(arr,0,n-1);
	cout<<"Sorted array is: ";
	for(int l=0; l<n; l++){
		cout<<arr1[l]<<" ";
	}
}
