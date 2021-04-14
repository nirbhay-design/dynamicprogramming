#include<bits/stdc++.h>
using namespace std;

void swap(int * arr,int i,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int Partition(int *arr,int left,int right){
	int pivot = arr[right];
	int i = left;
	int j = right-1;
	while(i<=j){
		while(arr[i] < pivot){
			i++;
		}
		while(arr[j] > pivot){
			j--;
		}

		if(i<=j){
			swap(arr,i,j);
			i++;
			j--;
		}
	}
	swap(arr,i,right);
	return i;
}


void qsort(int * arr,int left,int right){
	if(left<right){
		int part = Partition(arr,left,right);
		qsort(arr,left,part-1);
		qsort(arr,part+1,right);
	}
}



int main(){
	int n ; cin >> n;
	int * arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	qsort(arr,0,n-1);
	for(int i =0;i<n;i++){
		cout << arr[i] << " " ;
	}

	return 0;
}