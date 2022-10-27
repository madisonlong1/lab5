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
    std::cout<<"-------------------------------"<<std::endl;

    return 0;
}