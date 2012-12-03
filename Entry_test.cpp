#include "Entry.h"
#include <iostream>
#include <string>

using std::string;

int main(){
 Entry<int>* e = new Entry<int>("one", 1);
 std::cout << e->getKey() << ", " << e->getValue() << std::endl;

 e->setKey("two");
 std::cout << e->getKey() << ", " << e->getValue() << std::endl;

 e->setValue(2);
 std::cout << e->getKey() << ", " << e->getValue() << std::endl;

 return 0;
}
