#include <iostream>
//preprocess directive

#include "class.h"

using namespace std;
//namespace: a library of common functionality
//as you become more experienced programmers you will not use this as often
// std::(will access the members of that namespace


//We'll talk more about the above lines of code later in the course.

int main() {


	bool cont = false;
	//do{

		//this is a body
		/*in a body, is where we put the logic that the program processes*/
		int num1 = 1;
		int num2 = 2;

		cout << num1 + num2 << "\n" << endl;
		//a console out and stream incertion operator will allow us to output data to the console
		//a \n will drop the output down to a new line
		// endl will also end the line and drop it down.
		// in the case of the above line of code, it will stack - dropping the output down 2 lines


		std::cout << "Hello world" << endl;
		//outputing a string in " " allows the program to know that it's a string
		//notice in the above line of code the std::cout
		// the std namespace is where the cout operation is located and we can access that operation

		//to test this - comment out line 4
		// did it break on 17?
		//if you notice those red squiggles those are the typical indicator in most IDE's that there is an error.

		//hovering over the squiggle will usually tell you why the problem is
		//right clicking there will be a light bulb with some "quick actions you can take to resolve the problem

		//Now lets talk about this green text (depending on the theme of your editor). 
		//the // lets the compiler know there is a COMMENT and will skip over it

		/*there are other ways to initiate a comment
		Notice that before I had to put // on each line. Those are single line comments

		with this BLOCK COMMENT we can comment out multiple lines of code.

		Then ending with the same notation in reverse.
		*/
		int looper = 0;

		string name = "Cory";

		bool b1 = true;

		int i1 = 2;

		float f1 = 5.6f;

		double d1 = 1.2;

		char grade = 'F';
		cout << "***************";
		cout << Tip(200, .2, 5) << endl;
		cout << Tip(100, .5, 1) << endl;
		cout << "***************";
		

		//returns the first char in the array of string 'name'
		cout << name[0] << endl;  

		switch (grade)
		{
		case 'A':
			cout << "Good Job";
			break;
		case 'B':
			break;
		case 'C':
			break;
		case 'D':
			break;
		case 'F':
			cout << Add(4, 5);
			break;
		}

		if (b1 == true)
		{
			//do this
		}
		else {
			//do this
		}


		if (b1 != false || b1 == true && looper == 4)
		{
			//do this if true
		}
		else if (b1 == true)
		{
			//do this instead
		}


		for (int i = 0; i < 101; ++i)
		{
			cout << looper++ << endl;
		}


		system("Pause");
	//} while (cont);
	return 0;



}