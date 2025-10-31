 #include <iostream>
 using namespace std;
 int main() {
 int num1, num2;
 char op;
 char again;
 cout << "-_-_-_-_-_-_-_-_-_-_-_-" << endl;
 cout << " Simple Calculator" << endl;
 cout << "-_-_-_-_-_-_-_-_-_-_-_-" << endl;

 string name;

 cout << "Enter your name : ";

 cin >> name;

 cout << "HELLO _ " << name << endl;

 do {
 cout << "Enter the first number : ";

 cin >> num1;

 cout << "CHOOSE OPERATOR (+, -, *, /): ";

 cin >> op;

 cout << "Enter second number : ";

 cin >> num2;


 switch (op) {

case '+':
cout << "The_Result = " << num1 + num2 << endl;

break;


case '-':
cout << "The_Result = " << num1 - num2 << endl;
break;

case '*':
cout << "The_Result = " << num1 * num2 << endl;
break;

case '/':
if (num2 != 0)
cout << "The_Result = " << num1 / num2 << endl;

else
cout << " NO SOLUTION " << endl;
break;

default: 
cout <<" INVALID OPERATOR " << endl;

}
cout << "DO YOU WANT CALCULATE AGAIN ?  (y/n):";
cin >> again;

 } while ( again == 'y' || again == 'y');

 cout << "==============================" << endl;
 cout << "GOOD_BYE, " << name << "!" << endl;
 return 0;
}