#include "Entry.h"
#include "Hash.h"
#include <iostream>
#include <string>

using std::string;

int main(){
 Hash<int>* h = new Hash<int>();

 h->insert(new Entry<int>("one", 1));

 std::cout << "inserted (\"one\", 1)" << std::endl;

 std::cout << "result: " << h->get("one") << std::endl;

 h->insert(new Entry<int>("ZZZZZZzZzZzZzzzZUHcuhu", 239));
 std::cout << h->get("ZZZZZZzZzZzZzzzZUHcuhu") << std::endl;
 return 0;
}