#include<iostream>
using namespace std;
}
int evalPostfix(char postfix[], int size) {
   stack<int> s;
   int i = 0;
   char ch;
   int val;
   while (i < size) {
      ch = postfix[i];
      if (isdigit(ch)) {
         // we saw an operand
         // push the digit onto stack
         s.push(ch-'0');
      }
      else {
         // we saw an operator
         // pop off the top two operands from the
         // stack and evalute them using the current
         // operator
         int op1 = s.top();
         s.pop();
         int op2 = s.top();
         s.pop();
         val = eval(op1, op2, ch);
         // push the value obtained after evaluating
         // onto the stack
         s.push(val);
      }
      i++;
   }
   return val;
}
int main() {
   char postfix[] = {'5','6','8','+','*','2','/'};
   int size = sizeof(postfix);
   int val = evalPostfix(postfix, size);
   cout<<"\nExpression evaluates to "<<val;
   cout<<endl;
   return 0;
}
