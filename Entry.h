#ifndef __ENTRY_H__
#define __ENTRY_H__

#include <string>

using std::string;

template <typename V>
class Entry {
 private:
  string key;
  V value;
 public:
  Entry(string k, V v);
  //Entry<V>::~Entry();
  void setKey(string k);
  string getKey();
  void setValue(V v);
  V getValue();
};

#endif
