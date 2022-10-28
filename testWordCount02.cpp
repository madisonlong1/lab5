# include<iostream>
#include "tddFuncs.h"
#include "WordCount.h"

int main()
{

   WordCount w;

    w.incrWordCount("orange");

    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"testing Word Count 02"<<std::endl;

    
    ASSERT_EQUALS(0 , w.getWordCount("apple"));
    ASSERT_EQUALS(1 , w.getWordCount("orange"));
    
    std::cout<<"-------------------------------"<<std::endl;


    return 0;
}