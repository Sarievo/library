---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Tree Policy
    links: []
  bundledCode: '#line 2 "data-structure/tree-policy.hpp"

    #include <ext/pb_ds/assoc_container.hpp>

    #include <ext/pb_ds/tree_policy.hpp>

    using namespace __gnu_pbds;

    // find_by_order() - returns an iterator to the kth-largest element (counting
    from zero)

    // order_of_key()  - the number of items in a set that are strictly smaller than
    our item

    template<class T> using indexed_set = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;

    template<class T> using indexed_multiset = tree<T, null_type, less_equal<T>,

    rb_tree_tag,

    tree_order_statistics_node_update>;

    /**

    * @brief Tree Policy

    */

    '
  code: '#pragma once

    #include <ext/pb_ds/assoc_container.hpp>

    #include <ext/pb_ds/tree_policy.hpp>

    using namespace __gnu_pbds;

    // find_by_order() - returns an iterator to the kth-largest element (counting
    from zero)

    // order_of_key()  - the number of items in a set that are strictly smaller than
    our item

    template<class T> using indexed_set = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;

    template<class T> using indexed_multiset = tree<T, null_type, less_equal<T>,

    rb_tree_tag,

    tree_order_statistics_node_update>;

    /**

    * @brief Tree Policy

    */'
  dependsOn: []
  isVerificationFile: false
  path: data-structure/tree-policy.hpp
  requiredBy: []
  timestamp: '2022-12-11 16:58:12+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/tree-policy.hpp
layout: document
redirect_from:
- /library/data-structure/tree-policy.hpp
- /library/data-structure/tree-policy.hpp.html
title: Tree Policy
---
