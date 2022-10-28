// WordCount.cpp

#include "WordCount.h"
#include <string>
#include <cstring>

using namespace std;

// Default constructor
WordCount::WordCount() {}

// Simple hash function. Do not modify.
size_t WordCount::hash(const std::string & word) const 
{
	size_t accumulator = 0;
	for (size_t i = 0; i < word.size(); i++) 
	{
		accumulator += word.at(i);
	}
	return accumulator % CAPACITY;
}

int WordCount::getTotalWords() const 
{
	// STUB.

	int total = 0;
	for(size_t i = 0; i < CAPACITY; i++)
	{
		for(size_t j =0; j< table[i].size(); j++)
		{
			total = total + table[i].at(j).second;   //alternativly, we could use table[i][j]     second returns the number of repetative occurances
		}
	}

	return total;
}

int WordCount::getNumUniqueWords() const 
{
	// STUB

	int total = 0;
	for(size_t i = 0; i < CAPACITY; i++)
	{
		total += table[i].size();  
	}
	return total;

}

int WordCount::getWordCount(const std::string & word) const 
{
	// STUB

	std::string word1;
	word1 = this->makeValidWord(word);


	// std::vector<pair<std::string, int> > a;
	// a.push_back(std::pair<word, 0>);
	
	size_t i = hash(word1);
	
	//table[i] = a;

	for(int j = 0; j < table[i].size(); j++)
	{
		if(table[i].at(j).first == word1)
		{
			return table[i].at(j).second;
		}
		else
		{
			return 0;
			
		}
	}

	return counter;
}
	
int WordCount::incrWordCount(const std::string & word) 
{
	// STUB

	std::string word1;
	word1 = this->makeValidWord(word);

	size_t i = hash(word1);

	std::pair<std::string, int> p1(word1, 1);    //will be useful later

	table[i].push_back(p1);
	
	
	return -1;
}

int WordCount::decrWordCount(const std::string & word) 
{
	// STUB
	return -2;
}

bool WordCount::isWordChar(char c) 
{
	// STUB
	return isalpha(c);
}

std::string WordCount::makeValidWord(const std::string & word) 
{
	// STUB
	std::string s = "";


	int len = word.length();
	
	for(int i =0; i < len; i++)
	{
		if( isWordChar(word[i]) )
		{
			char temp = tolower(word[i]);
				s = s + temp;
		}
		else if( word[i] == '-' || word[i] == '\'' )   // we need the \ to make sure the  ' ' does not terminate early
		{
			char temp = word[i];
			//check the ends
			s = s + temp;

		}
		else
		{
			//do nothing	
		}

	}

	int firstIndex;
	int lastIndex;
	for(size_t i = 0; i < s.size(); i++)
	{
		if(isWordChar(s[i]))
		{
			firstIndex = i;
			break;
		}
	}

	for(size_t j = s.size(); j > 0; j--)
	{
		if(isWordChar(s[j]))
		{
			lastIndex = j;
			break;
		}
	}

	string s1 = "";
	for(int iterator = firstIndex; iterator <= lastIndex; iterator++ )
	{
		s1 = s1 + s[iterator];
	}


	return s1;
}
