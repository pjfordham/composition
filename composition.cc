//add a map (dictionary ) to each class with a string to function pointer mapping,
//   mabye variadic, maybe inheritance and composition through this dictionary, try to make it constexpr to make it compilse time bound.

#include <string> // mayeb string buffer, or char*?
#include <map>
#include <iostream>
#include <functional>

std::map<std::string, std::function<void()> > dictionary;

int main( int argc, const char**argv ) {
   
   return 0;
}

