#include "Entry.h"
#include "Hash.h"
#include <iostream>
#include <string>

using std::string;

int main(){
 Hash<int>* h = new Hash<int>();

 h->insert("one", 1);

 std::cout << "inserted (\"one\", 1)\nresult: " << h->get("one") << std::endl;

 h->insert("one", 2);

 std::cout << "replaced 1 with 2\n" << h->get("one") << std::endl;

 h->insert("noe", 3);
 
 std::cout << "inserted (\"noe\", 3) (should create the same hash as \"one\", but with value of 3)\nresult: " << h->get("noe") << std::endl;

 h->insert("ZZZZZZzZzZzZzzzZUHcuhu", 239);

 std::cout << "inserted (\"ZZZZZZzZzZzZzzzZUHcuhu\", 239)\n" << h->get("ZZZZZZzZzZzZzzzZUHcuhu") << std::endl;

 return 0;
}
