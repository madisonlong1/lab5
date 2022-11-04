# include<iostream>
#include "tddFuncs.h"
#include "WordCount.h"

int main()
{

    WordCount w;
    WordCount wc2;

    w.incrWordCount("orange");
    w.incrWordCount("mango");
    w.incrWordCount("mango");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.incrWordCount("grape");
    w.decrWordCount("grape");

    //w.incrWordCount("--$$--");
    
    //w.decrWordCount("foo");

    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"testing Word Count 02"<<std::endl;

    
    ASSERT_EQUALS("monkeys", w.makeValidWord("12mOnkEYs-$"));
    ASSERT_EQUALS("paive", w.makeValidWord("Pa55ive"));
    ASSERT_EQUALS("abc", w.makeValidWord("abc---"));
    ASSERT_EQUALS("it---s", w.makeValidWord("it---s"));
    ASSERT_EQUALS("", w.makeValidWord(""));
    ASSERT_EQUALS("", w.makeValidWord("123()-*^$"));
    ASSERT_EQUALS(-1, w.decrWordCount("foo"));
    ASSERT_EQUALS(5, w.incrWordCount("grape"));


    //ASSERT_EQUALS(0, w.incrWordCount("--$$--"));

    // ASSERT_EQUALS(1,wc2.incrWordCount("foO"));
    // ASSERT_EQUALS(2,wc2.incrWordCount("foo"));
    // ASSERT_EQUALS(1,wc2.incrWordCount("bAr"));
    // ASSERT_EQUALS(2,wc2.incrWordCount("BaR"));
    // ASSERT_EQUALS(1,wc2.incrWordCount("foo#bar"));
    // ASSERT_EQUALS(2,wc2.incrWordCount("foo_bar-"));
    // ASSERT_EQUALS(1,wc2.incrWordCount("'foo-bar-"));
    // ASSERT_EQUALS(0,wc2.incrWordCount("--$$--"));
    // ASSERT_EQUALS(7,wc2.getTotalWords());
    // ASSERT_EQUALS(4,wc2.getNumUniqueWords());
    
    std::cout<<"-------------------------------"<<std::endl;

    return 0;
}