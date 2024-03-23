#include<iostream>
using namespace std;
class stack{
	int size=0;
	int top=-1;
	
	bool isFull(){
		if(top==size-1){
			return true;
		}
		return false;
	}
	bool isEmpty(){
		if(top==-1){
			return true;
		}
		return false;
	}
	public:
		stack(int s){
			size=s;
		}
		void push(int arr[]){
			if(isFull()){
				cout<<"The stack is full."<<endl;
			}else{
				int element;
				cout<<"Enter the element: ";
				cin>>element;
				top++;
				arr[top]=element;
				cout<<"Push successful."<<endl;
			}
		}
		void pop(int arr[]){
			if(isEmpty()){
				cout<<"The stack is empty."<<endl;
			}else{
				int element=arr[top];
				cout<<element<<" has been popped."<<endl;
				top--;
			}
		}
		void display(int arr[]){
			if(isEmpty()){
				cout<<"Stack is empty."<<endl;
			}else{
				cout<<"Stack is:"<<endl;
				for(int i=top;i>=0;i--){
					cout<<arr[i]<<endl;
				}
			}	
		}
};
int main(){
	int size;
	cout<<"Enter the size of the stack: ";
	cin>>size;
	if(size<=0){
		do{
			cout<<"The size of the stack cannot be less than or equal to zero."<<endl<<"Please enter a valid size: ";
			cin>>size;
		}while(size<=0);
	}
	int arr[size];
	stack s(size);
	int choice;
	cout<<"Only a maximum of "<< size <<" elements can be pushed into the stack."<<endl;
	do{
		cout<<endl<<"1. Push an element."<<endl;
		cout<<"2. Pop an element."<<endl;
		cout<<"3. Display the stack."<<endl;
		cout<<"4. Exit."<<endl<<endl;
		cout<<"Choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				s.push(arr);
				break;
			case 2:
				s.pop(arr);	
				break;
			case 3:
				s.display(arr);
				break;
			case 4:
				cout<<"Exited.";
				break;
			default:
				cout<<"Enter your choice from 1 to 4."<<endl;
				break;
		}
	}while(choice!=4);
	return 0;
}
