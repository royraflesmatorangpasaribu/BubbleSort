#include <iostream>
using namespace std;
// descending = besar ke kecil
int main(){
	//variabel yang digunakan
	int arr[5]={1,2,3,4,5};
	bool swapped;
	//menyimpan data sementara
	int temp; 
	int indexOfLastUnsortedElement = 4;
	
	do{
		swapped=false;
		for(int i=0; i<indexOfLastUnsortedElement; i++){
			if(arr[i]<arr[i+1]){
				//proses pengurutan data
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swapped = true;
						
			}
		}
		indexOfLastUnsortedElement--;
	}while(swapped);
	
	//output
	cout<<"Data Setelah Diurutkan : ";
	for(int i=0; i<5;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;	
}
