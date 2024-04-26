// util.h

#ifndef GUARD_util_h
#define GUARD_util_h

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

#include "analysis.h"
#include "Student_info.h"

int printGreeting();
void printMenu();

void loadGrades(ifstream&, 
	vector<Student_info>&,
	vector<Student_info>&, 
	vector<Student_info>&,
	string::size_type&
);

void fileSelect(int,
	vector<Student_info>&,
	vector<Student_info>&,
	vector<Student_info>&,
	string::size_type&
);

int checkHw(vector<Student_info>&, vector<Student_info>&);

// Overloaded from analysis.h - to handle a single vector<Student_info> (not two)
void write_analysis(ostream&, const string&,
	double analysis(const vector<Student_info>&),
	const vector<Student_info>&,
	string);

void analyzeGrades(vector<Student_info>&, vector<Student_info>&);
void showScores(vector<Student_info>&, string::size_type&);

#endif