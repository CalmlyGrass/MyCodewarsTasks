/*
----------------------------------------------------------------
https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
----------------------------------------------------------------
*/


#include<algorithm>
#include<iostream>
#include<string>

using namespace std;

string reverse_words(string str) {
	string answ = "";
	string word = "";

	int i = 0;

	while (true) {
		while (str[i] != ' ' && i < str.size()) {
			word.push_back(str[i]);
			i++;
		}

		reverse(word.begin(), word.end());
		answ += word + ' ';
		word.clear();

		if (i >= str.size()) {
			answ.pop_back();
			break;
		}

		i++;
	}

	return answ;
}
