//namesio.h
//Trey Chiu
//20 Sep 2020
//CS201
//Header for names I/O package

#include<vector>
#include<string>

using std::vector;
using std::string;

#ifndef FILE_NAMESIO_H_INCLUDED
#define FILE_NAMESIO_H_INCLUDED

void InputNames(vector<string> & names);

bool DoesNameExist(const string& nameToFind, const vector<string>& names);

void PrintNames(const vector<string>& names);

void ReverseNames(const vector<string>& names);

#endif
