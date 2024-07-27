#include<iostream>
using namespace std;
void input();
void insert();
void index();
int arr[10],n,i,j,temp;
int main(){

void input();
void insert();
void index();
void display();
}
	void input(){
	cout<<"enter elment in array"<<endl;
	cin>>n;
	for(i=0 ;i<n ;i++)
	cin>>arr[i];
	cout<<"array before sorting"<<endl;
	for(i=0 ;i<n ;i++)
	cout<<arr[i]<<"\n";
	}
	void insert()
	{
	for(i=1 ;i<n ;i++){
	temp =arr[i];
	j=i-1;
	while(arr[j]>temp && j>=0 )
	{                          // 2  4  8 10 12
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}
	}
	void index(int arr[10],int size ,int capacity,int element ,int index)
	{
		
		if(size>=capacity)
		{
			cout<<"full";
		}
		for(i=size-1 ;i>=index;i-- )
		{
			arr[i+1]=arr[i];
		}
		arr[index]=element;
		cout<<"true";
	}
void display(){
		cout<<"\n array after sorting"<<endl;
        for(i=0 ;i<n ;i++)
{
	cout<<arr[i]<<"\n";
}
}


	
