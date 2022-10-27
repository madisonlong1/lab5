# include<iostream>
#include "tddFuncs.h"
#include "WordCount.h"

int main()
{

    WordCount w;


    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"testing Word Count 00"<<std::endl;

    
    ASSERT_EQUALS(true, w.isWordChar('a'));
    ASSERT_EQUALS("testinput", w.makeValidWord("T0estinput"));
    ASSERT_EQUALS("test'input", w.makeValidWord("Test'input"));
    ASSERT_EQUALS("testinput", w.makeValidWord("Testinput12345678910"));
    ASSERT_EQUALS("t-e-s-t-i'n'p'u't", w.makeValidWord("''-t-e-s-t-i'n'p'u't123--'"));
    std::cout<<"-------------------------------"<<std::endl;


    return 0;
}