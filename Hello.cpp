#include <iostream>
#include <vector>
#include "Hello.h"

using namespace std;

void Hello::speak()
{
    std::vector<std::string> words{"Hello", "CIS-2031"};
    for ( auto s : words )
        std::cout << s << " ";
    std::cout << std::endl;
}
