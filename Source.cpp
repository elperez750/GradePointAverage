#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Capitalize first letters of words
string capitalize(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

//Constant
const double DEAN_LIST = 3.70;

int main()
{
	// Define variable for program
	string course_one;
	string course_two;
	string course_three;
	int credits_one;
	int credits_two;
	int credits_three;
	double gpa_one;
	double gpa_two;
	double gpa_three;
	double gpa;
	string str;

	cout << "~This program will calculate the gpa for three classes~\n\n";

	//Ask user for course one related inputs
	cout << "Enter the name of course one: ";
	getline(cin, course_one);
	cout << fixed << setprecision(1);
	std::cout << "Enter the amount of credits for " << capitalize(course_one) << ": ";
	cin >> credits_one;
	cout << fixed << setprecision(2);
	std::cout << "Enter your gpa for " << capitalize(course_one) << ": ";
	cin >> gpa_one;
	cout << "\n\n";

	//Ask user for course 2 related inputs
	std::cout << "Enter the name of course two: ";
	cin.ignore();
	getline(cin, course_two);
	cout << fixed << setprecision(1);
	std::cout << "Enter the amount of credits for " << capitalize(course_two) << ": ";
	cin >> credits_two;
	cout << fixed << setprecision(2);
	std::cout << "Enter your gpa for " << capitalize(course_two) << ": ";
	cin >> gpa_two;
	cout << "\n\n";

	//Ask user for course 3 related inputs
	cout << "Enter the name of course three: ";
	cin.ignore();
	getline(cin, course_three);
	cout << fixed << setprecision(1);
	cout << "Enter the amount of credits for " << capitalize(course_three) << ": ";
	cin >> credits_three;
	cout << fixed << setprecision(2);
	cout << "Enter your gpa for " << capitalize(course_three) << ": ";
	cin >> gpa_three;
	cout << "\n\n";


	//Calculate GPA
	gpa = ((credits_one * gpa_one) + (credits_two * gpa_two) + (credits_three * gpa_three)) / (credits_one + credits_two + credits_three);
	
	//Display header rows
	cout << left << endl; 
	cout << setw(25) << "Course" << setw(25) << "Credits" << setw(25) << "Grade Earned" << endl; str.assign(70, '-'); 
	cout << str << endl;

	//display info provided by user
	cout << setw(25) << capitalize(course_one) << setw(25) << credits_one << setw(20) << gpa_one << endl;
	cout << setw(25) << capitalize(course_two) << setw(25) << credits_two << setw(20) << gpa_two << endl;
	cout << setw(25) << capitalize(course_three) << setw(25) << credits_three << setw(20) << gpa_three << endl;
	cout << "\n";
	cout << "Your GPA is: " << gpa << endl;
	

	//Determine if user GPA is high enough for dean list
	if (gpa < DEAN_LIST)
	{
		cout << "Oh well, keep trying!";
	}
	else if (gpa > DEAN_LIST)
	{
		cout << "Congratulations, you made the dean's list!!";
	}
	return 0;

}

