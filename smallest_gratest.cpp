#include <iostream>
using namespace std;
//int main(){
//	int marks[] = {90,56,45,67,78,89,34,-23,101};
//	int size = sizeof(marks)/sizeof(int);
//	
//	int smallest = INT_MAX;
//	int greatest = INT_MIN;
//	
//	for(int i=0; i<size; i++){
//		smallest  = min(marks[i], smallest);
//		greatest  = max(marks[i], greatest);
//	}
//	
//	cout<<"Smallest "<< smallest<<endl;
//	cout<<"Greatest "<<greatest;
	
	
	
//int linearSearch(int arr[], int size, int target){
//	for(int i=0; i<size; i++){
//		if(arr[i]==target){
//			return i;
//		}
//	}
//	return -1;
//	}
//int main(){
//
//	int arr[] = {1,2,3,4,4,5,5,6,78,56};
//	int size = sizeof(arr)/sizeof(int);
//	int target = 178;
//	
//	cout<<linearSearch(arr,size,target);
//	return 0;
//	
//}

void arraySwapping(int arr[], int size){
	int start = 0, end = size-1;
	
	while(start < end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	int size = sizeof(arr)/sizeof(int);
	
	cout<<"Before Swapping"<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
	cout<<endl;
	arraySwapping(arr,size);
	cout<<"After Swapping"<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
	
}
