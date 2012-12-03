#include "Hash.h"
#include <iostream>

using std::string;
using std::list;

template <typename V>
Hash<V>::Hash(int size) {
 height = size;
 table = new list< Entry<V> >[size];
}

template <typename V>
Hash<V>::~Hash() {
 delete[] table;
}

template <typename V>
void Hash<V>::insert(string key, V v) {
 if(table[hash(key)].empty()) //empty spot
  table[hash(key)].push_back(Entry<V>(key,v));
 else{ //non-empty spot
  typename list< Entry<V> >::iterator it;
  bool inserted = false;
  for(it = table[hash(key)].begin(); it != table[hash(key)].end() && inserted == false; it++) {
   if(it->getKey() == key){
    it->setValue(v);
    inserted = true;
   }
  }
  if(inserted == false) {
   table[hash(key)].push_back(Entry<V>(key,v));
  }
 }
}

template <typename V>
V Hash<V>::get(string key) {
 int hashed = hash(key);
 if(!table[hashed].empty()) {                                       // If the spot in the table is not empty...
  typename list< Entry<V> >::iterator it;                             //
  for(it = table[hashed].begin(); it != table[hashed].end(); it++) {  //
   std::cout << it->getKey() << std::endl;                            //
   if(it->getKey() == key)                                          // And the key is the same...
    return it->getValue();                                          // return the value.
  }
 }                                                                  //else the key was not present in the table
 return 0;
}

template <typename V>
int Hash<V>::hash(string key) {
 int value = 0;
 for(int i = 0; i < (int)key.length(); i++) {
  value += key[i];
 }
 value = value%height;
 return value;
}

template class Hash<int>;
template class Hash<string>;
template class Hash<double>;
