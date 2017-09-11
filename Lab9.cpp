//Name: Sindhuja Gudi
//Section:01
//Student ID:999992808
//Lab 09


#include <iostream>
#include "Lab9.h"
#include <sstream>
#include <string>
#include <string.h>

//Q1. Include header file named "Lab9A.h"  

#include "Lab9A.h”
using namespace std;

void testCopyConstructor(stackType<int> otherStack);
int main()
{

// Q3. Define stacks 

	stackType<char> stack(50);
	stackType<char> copyStack(50);
	stackType<char> dummyStack(100);

	stackType<char> PostfixStack(50);
	stackType<string> InfixStack(50);
	
	string opr1;
	string opr2;
	string expr;

// Q5. Create two stacks PostfixStack type of char, InfixStack type of string.
	
	PostfixStack.initializeStack();
	InfixStack.initializeStack();

// Q6. Push post fix notation to the stack 
    //A B C * + D E / F * - 
//A+(C*B)-(D/E)*F

  		PostfixStack.push('-');
		PostfixStack.push('*');
		PostfixStack.push('F');
		PostfixStack.push('/');
		PostfixStack.push('E');
		PostfixStack.push('D');
		PostfixStack.push('+');
		PostfixStack.push('*');
		PostfixStack.push('C');
		PostfixStack.push('B');
		PostfixStack.push('A');



// Q8. Function call “isOperator”  
//Q9. Test function call using while loop 
		while (!PostfixStack.isEmptyStack())
		{
      			char c;
			stringstream ss;
			string s;
			//read all contents from the PostfixStack 
			 c = PostfixStack.top();
			cout << " Contents of the Stack are " << c << endl;

			//call function isOperator with actual parameter 
			
			//convert a char to string using stringstream
			
			ss << c;
			ss >> s;

				if (!isOperator(c)) {

					InfixStack.push(s);
					ss.str("");
					ss.clear();
				}
				
				else
				{
					opr1 = InfixStack.top();
					InfixStack.pop();
					opr2 = InfixStack.top();
					InfixStack.pop();
					InfixStack.push("(" + opr2 + s + opr1 + ")");
					
				}//end if 
				
				PostfixStack.pop();
		} // end while 
		
		cout << endl;
		cout << InfixStack.top();

		copyStack = stack; //copy stack into copyStack
	//cout << "The elements of copyStack: ";

	while (!copyStack.isEmptyStack()) //print copyStack
	{
		//cout << copyStack.top() << " ";
		copyStack.pop();
	}
	//cout << endl;
	copyStack = stack;

	//testCopyConstructor(stack); //test the copy constructor

	if (!stack.isEmptyStack())
		//cout << "The original stack is not empty." << endl
		//<< "The top element of the original stack: "
		//<< copyStack.top() << endl;
	dummyStack = stack; //copy stack into dummyStack
	//cout << "The elements of dummyStack: ";
	while (!dummyStack.isEmptyStack()) //print dummyStack
	{
		//cout << dummyStack.top() << " ";
		dummyStack.pop();
	}
	//cout << endl;
	system("pause");

	return 0;
}

void testCopyConstructor(stackType<int> otherStack)
{
	if (!otherStack.isEmptyStack())
	{}
		//cout << "otherStack is not empty." << endl
		//<< "The top element of otherStack: "
		//<< otherStack.top() << endl;
}


