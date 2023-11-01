//Problem No.1: Write a program to print in the descending order first twenty natural numbers on the computer screen by using “do - while” loop
/*#include<iostream>
using namespace std;
int main()
{
	int number = 20;
	do
	{
		cout << number << endl;
		--number;
	} while (number >= 0);
	{
		//--number;
		cout << "number" << endl;
	}
	system("pause");
	return 0;
}



//Problem No.2: Write a program to compute and print the factorial of the given number using the “do-while” loop.
#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "Enter your Number to calculate Factorial: " << endl;
    cin >> x;
    int i = x - 1;
    do
    {
        x = x * i;
        i--;
    } while (i >= 1);

    cout << "Your factorial is: " << x << endl;
    system("pause");
    return 0;
}



//problem no.3: Write a program to convert the given decimal number into octal number using the “do-while” loop.
#include <iostream>
#include<string>
using namespace std;
int main()
{
    //Declaring a variable to store a decimal number
    int number;

    //Declaring a variable as type string to store the octal value
    string octal = "";

    //Taking input from the user
    cout << "Enter the number = ";
    cin >> number;

    //Applying the condition for the loop to iterate until number reaches 0 
    do
    {
        octal += to_string(number % 8);     //calculating the remainder of your number then converting it to a string using the to_string() function and storing it in our string variable
        number = number / 8;       //keep dividing the number for the loop to iterate till given condition
    } while (number != 0);

    //the str.length()-1 is used to reverse the order of our octal value
    int i = octal.length() - 1;

    //Apply a conditon to print the octal value
    while (i >= 0)
    {
        cout << octal[i];
        --i;
    }
    cout << endl;
    system("pause");
    return 0;
}



//Problem No.4: Four-Function Calculator
#include <iostream>
using namespace std;
int main()
{
    int number1, number2, operation;
    char OPERATOR, decision;

    do
    {
        cout << "Enter first number, operator and second number: ";
        cin >> number1 >> OPERATOR >> number2;
        switch (OPERATOR)
        {
        case '+':
            cout << "Answer = " << number1 + number2;
            break;
        case '-':
            cout << "Answer = " << number1 - number2;
            break;
        case '*':
            cout << "Answer = " << number1 * number2;
            break;
        case '/':
            cout << "Answer = " << number1 / number2;
            break;
        case '%':
            cout << "Mod = " << number1 % number2;
            break;
        default:
            cout << "Invalid";
        }
        cout << endl << "Do another (y/n)?";
        cin >> decision;

    } while (decision == 'y');
    cout << "End" << endl;
    system("pause");
    return 0;
}




//Extra Task 1: printing sequence using do-while

#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    do
    {
        cout << 7 * number << " ";
        number++;
    } while (number <= 14);

    cout << endl;
    system("pause");
    return 0;
}



//Extra Task 2: printing sequence using do-while
#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    cout << number << " ";
    do
    {


        number = 2 * number;
        cout << number << " ";
    } while (number <= 300);

    cout << endl;
    system("pause");
    return 0;
}*/