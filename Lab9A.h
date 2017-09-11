

#ifndef LAB9A_H_
#define LAB9A_H_


bool isOperator(const char c)
{

	if ((c == '+') || (c == '-') || (c == '*') || (c == '=') || (c == '/'))
	{
		return true;
	}
	return false;
}

#endif
// Q7.Create a function that identifies the operator 
   // Name of the function isOperator
   // Formal parameter char
   // return type bool 
   // 0~9, a ~z, A ~ Z return true;
