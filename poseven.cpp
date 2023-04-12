//quick code and implementation
//mplement the following function:you may assume that#include <list>and using namespace std;
//appear in the code already but nothing else is included.
// Returns the number of links in the list at address mylist
// that hold a positive even number.
//unsigned int countPositiveEven(list<int> *mylist) 

#include<list>
using namespace std;
unsigned int countPositiveEven(list<int> *mylist) 
{
    unsigned int count = 0;
    for (auto  it = mylist->begin(); it != mylist->end();it++)
     {if (*it > 0 && *it % 2 == 0) {
            ++count;
        }
    }
    return count; 
}