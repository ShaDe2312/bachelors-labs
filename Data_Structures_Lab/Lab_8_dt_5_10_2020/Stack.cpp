#include <bits/stdc++.h> 

using namespace std; 

class Stack { 
	int top; 

public: 
	int a[500]; // Maximum size of Stack is 500 

	Stack() { top = -1; } //Setting constructor: top=-1 (Stack is empty)

	void push(int x)  //Push a variable onto the stack
    {
    if (top >= (500 - 1)) { 
		cout << "Stack Overflow";  
	} 
	else { 
		a[++top] = x; 
		cout << x << " pushed into stack\n"; 
	} 
    }

	int pop() //Pop a variable from the stack
    { 
	if (top < 0) { 
		cout << "Stack Underflow"; 
		return 0; 
	} 
	else { 
		int x = a[top--]; 
		return x; 
	} 
    }

	int peek() //Returns the variable at the top of the stack
    { 
	if (top < 0) { 
		cout << "Stack is Empty"; 
		return 0; 
	} 
	else { 
		int x = a[top]; 
		return x; 
	} 
    } 

	bool isEmpty() //Checks if stack is empty
    { 
	return (top < 0); 
    }  
}; 


int main() 
{ 
	class Stack Stack1; 
    int n,temp;
	printf("\n\nPlease enter the number of variables you want to push onto the stack:\n");
    cin>>n;
    cout<<endl<<endl; 

    for(int i=0; i<n ; i++)
    {
        cin>>temp;
        Stack1.push(temp);
        cout<<endl;
    }

    cout<<"Stack is :\n";
    for(int i=0; i<n; i++)
        cout<<Stack1.a[i]<<"\n";

    Stack1.pop();

    cout<<"\nStack was popped once. Now variable at the top of the stack is:\n";
        cout<<Stack1.peek();

	return 0; 
} 
