#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"
#include <string>
#include <list>
using std::string;
using std::list;

template <typename V>
class Hash {
 private:
  int height;
  list< Entry<V> >* table;
  int hash(string key);
 public:
  Hash<V>(int size = 32);
  ~Hash();
  void insert(string key, V v);
  void remove(string key);
  V get(string key);
};

#endif
