#pragma once
struct custom_hash {
  // https://codeforces.com/blog/entry/62393
  static uint64_t splitmix64(uint64_t x) {
    // http://xorshift.di.unimi.it/splitmix64.c
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};
template<class t> using hashset = unordered_set<t, custom_hash>;
template<class t, class u> using hashmap = unordered_map<t, u, custom_hash>;
/**
* @brief Anti-hash Hashset/Hashmap
*/