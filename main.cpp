/*
Name:			Matthew Wilson
Course:			CSCE 2110.002
Date: 			11/30/21
Description:	This program converts input sentences from english into piglatin.
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isVowel(char c);

string to_piglat(string str);

int main()
{
	string input;
	
	while(input != "quit")
	{
		cout << "Enter a sentence to convert to piglatin or 'quit' to quit: " << endl;
		getline(cin, input);
		
		if(input != "quit")
		{
			char temp = ' ';
			
			cout << endl;
			
			istringstream ss(input);
			string word;
			
			while(ss >> word)
			{
				for(int i = 0; i < word.length(); i++)
				{
					if(ispunct(word[i]))
					{
						temp = word[i];
						
						word.erase(word.begin() + i);
						
					//	word[i] = ' ';
					}
				}
				
				if(temp != ' ')
				{
					cout << to_piglat(word) << temp << " ";
				}
				
				else
				{
					cout << to_piglat(word) << temp;
				}
				
				temp = ' ';
			}
			
			cout << endl << endl;
		}
	}
		
	return 0;
}

bool isVowel(char c)
{
	return (c == 'A' || c == 'E' || c == 'I' ||
            c == 'O' || c == 'U' || c == 'a' ||
            c == 'e' || c == 'i' || c == 'o' ||
            c == 'u');
}

string to_piglat(string str)
{
	int size = str.length();
	int index = -1;
	 
	for (int i = 0; i < size; i++) 
	{
        if(isVowel(str[i])) 
		{
            index = i;
            break;
        }
    }
	
	if (index == -1)
	{
        index = size - 1;
	}
	
	return str.substr(index) + str.substr(0, index) + "ay";
}