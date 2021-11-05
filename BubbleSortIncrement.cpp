#include<iostream>
#include<string>
using namespace std;
int x;
void bubbleSortIncrement(int a[]){
	int i, j, temp;
	for(i=0; i<x; i++){
		for(j=x-1; j>=i+1; j--){
			if (a[j]<a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
void output(int a[]){
	int i;
	for(i=0; i<x; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n, i;
	cout<<"Masukkan Jumlah Data : ";
	cin>>n;
	int a[n];
	x=n;
	for(i=0; i<n; i++){
		cout<<"Data ke-"<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"Data Sebelum diurutkan : ";
	output(a);
	bubbleSortIncrement(a);
	cout<<"\nData Sesudah diurutkan : ";
	output(a);
	
}
