# include<iostream>
#include "tddFuncs.h"
#include "WordCount.h"

int main()
{

    WordCount w;


    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"testing Word Count 01"<<std::endl;

    
    ASSERT_EQUALS("monkeys", w.makeValidWord("12mOnkEYs-$"));
    ASSERT_EQUALS("paive", w.makeValidWord("Pa55ive"));
    ASSERT_EQUALS("abc", w.makeValidWord("abc---"));
    ASSERT_EQUALS("it---s", w.makeValidWord("it---s"));
    ASSERT_EQUALS("", w.makeValidWord(""));
    ASSERT_EQUALS("", w.makeValidWord("123()-*^$"));
    
    std::cout<<"-------------------------------"<<std::endl;

    return 0;
}