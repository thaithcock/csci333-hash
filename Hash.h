#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"
#include <string>
using std::string;

template <typename V>
class Hash {
 private:
  
  
 public:
  Hash<V>();
  Hash<V>::~Hash();
  void hash(Entry<V> entry);
};

#endif
