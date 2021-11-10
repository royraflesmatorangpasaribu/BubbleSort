#include <iostream>
using namespace std;

int main(){
	int arr[5]={5,2,4,3,6};
	bool swapped;
	int temp;
	int indexOfLastUnsortedElement = 4;
	
	do{
		swapped=false;
		for(int i=0; i<indexOfLastUnsortedElement; i++){
			if(arr[i]<arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swapped = true;
						
			}
		}
	}while(swapped);
	
	for(int i=0; i<5;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;	
}
