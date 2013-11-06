/********************************************************  
 COSC 501  
 Lab 3.3  
 Elliott Plack  
 21 SEP 2013           Due date: 23 SEP 2013  
 Problem: Write a C++ program that computes a student's
	total score
 Algorithm:The program will take an input of a student's
	semester grades and calculate their final score
	based on a formula. The formula weights each of the
	two tests at 15%, the final score at 40% and the
	assignments at 30%.
********************************************************/
  
  
#include <iostream>  // for input output  
#include <iomanip>   // to manipulate output  

using namespace std; 
  
int main() 
{
	/* declare all variables used. Input are integers and output is a float */
	int test1_score(0), test2_score(0), final_score(0), assignments_score(0);
	double total_score(0);

	/* get the grades from the user */
	cout << "This program calculates the semester grade for a student.\n";
	cout << "Enter the following scores below. test 1, test 2,\n"
		<< "the final exam and the combined assigments score: \n";
	cin >> test1_score >> test2_score >> final_score >> assignments_score;

	/* assignment statement */
	total_score = (.15 * (double)test1_score + .15 * test2_score + .4 * final_score
		+ .3 * assignments_score);

	/* set the precision for output numbers */
    cout.setf(ios::fixed);  
    cout.setf(ios::showpoint);  
    cout.precision(2); 
	
	/* final output */
	cout << "The student's final grade is: " << total_score << endl;

	return 0;
}