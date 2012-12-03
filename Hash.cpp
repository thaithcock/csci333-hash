#include "Hash.h"
#include <iostream>
#include <assert.h>

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
void Hash<V>::insert(Entry<V>* entry) {
 table[hash(entry->getKey())]->push_back(*entry);
}

template <typename V>
V Hash<V>::get(string key) {
 int hashed = hash(key);
 if(table[hashed]!=0) { // If the spot in the table is not empty...
  typename list< Entry<V> >::iterator it;
  for(it = table[hashed].begin(); it != table[hashed].end(); it++) {
   if(it->getKey() == key) // And the key is the same...
    return it->getValue(); // return the value.
  }
 }  //else the key was not present in the table
 return 0;
}

template <typename V>
int Hash<V>::hash(string key) {
 int value = 0;
 for(int i = 0; i < key.length(); i++) {
  value += key[i];
 }
 value = value%height;
 return value;
}

template class Hash<int>;
template class Hash<string>;
template class Hash<double>;
