# include<iostream>
#include "tddFuncs.h"
#include "WordCount.h"

int main()
{

    WordCount w;

    w.incrWordCount("orange");
    w.incrWordCount("mango");
    w.incrWordCount("mango");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.decrWordCount("grape");

    w.incrWordCount("--$$--");
    
    w.decrWordCount("foo");

    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"testing Word Count 02"<<std::endl;

    
    ASSERT_EQUALS("monkeys", w.makeValidWord("12mOnkEYs-$"));
    ASSERT_EQUALS("paive", w.makeValidWord("Pa55ive"));
    ASSERT_EQUALS("abc", w.makeValidWord("abc---"));
    ASSERT_EQUALS("it---s", w.makeValidWord("it---s"));
    ASSERT_EQUALS("", w.makeValidWord(""));
    ASSERT_EQUALS("", w.makeValidWord("123()-*^$"));
    ASSERT_EQUALS(-1, w.decrWordCount("foo"));

    //ASSERT_EQUALS(0, w.incrWordCount("--$$--"));
    
    std::cout<<"-------------------------------"<<std::endl;

    return 0;
}