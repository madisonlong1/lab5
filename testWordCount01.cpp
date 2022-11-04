#include<iostream>
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

    w.incrWordCount("bc");
    w.incrWordCount("ad");
    w.incrWordCount("ad");
    w.decrWordCount("ad");
    w.decrWordCount("ad");

    



    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"testing Word Count 01"<<std::endl;

    
    ASSERT_EQUALS(0 , w.getWordCount("apple"));
    ASSERT_EQUALS(1 , w.getWordCount("orange"));
    ASSERT_EQUALS(2 , w.getWordCount("mango"));
    ASSERT_EQUALS(4 , w.getWordCount("grape"));
    ASSERT_EQUALS(1 , w.getWordCount("bc"));
    ASSERT_EQUALS(0 , w.getWordCount("ad"));
    

    std::cout<<std::endl<<"Total number of words is : "<<w.getTotalWords()<<std::endl;
    std::cout<<"Total unique words is : "<<w.getNumUniqueWords()<<std::endl;
    

    std::cout<<"-------------------------------"<<std::endl;


    return 0;
}