>  ## Template CP:

**to compile-run :** `g++ main.cpp -o main.exe && main.exe` _or_ `clang++ main.cpp -o main.exe && main.exe`
  
```cpp
// #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define Txtio   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
using ull = unsigned long long;
const ll LM = LONG_LONG_MAX;
const int N = 2e6 + 5, M = INT32_MAX;
// int arr[N];
int main(void) {
	// Txtio;
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
   }     
	return 0;  
}
```
---


>  ## Problem constraints Hints:

 ![.](./prob%20type%20from%20constrains.png)


---
> ## STD lib functions:

<tbody class="tbody"><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><strong class="ph b">Standard C++ header</strong> </td><td class="entry" valign="top" width="61.53846153846154%"><strong class="ph b">Equivalent in previous versions</strong> </td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/header_bitset.html#header_bitset" data-ur1313m3t="true">&lt;iostream&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/header_bitset.html#header_bitset" data-ur1313m3t="true">&lt;limits&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/header_bitset.html#header_bitset" data-ur1313m3t="true">&lt;utility&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/header_bitset.html#header_bitset" data-ur1313m3t="true">&lt;cmath&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/header_bitset.html#header_bitset" data-ur1313m3t="true">&lt;ctype&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_algorithm.html#stl_algorithm" data-ur1313m3t="true">&lt;algorithm&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/header_bitset.html#header_bitset" data-ur1313m3t="true">&lt;bitset&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_deque.html#stl_deque" data-ur1313m3t="true">&lt;deque&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_iterator.html#stl_iterator" data-ur1313m3t="true">&lt;iterator&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_list.html#stl_list" data-ur1313m3t="true">&lt;list&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_map.html#stl_map" data-ur1313m3t="true">&lt;map&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_set.html#stl_set" data-ur1313m3t="true">&lt;queue&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_set.html#stl_set" data-ur1313m3t="true">&lt;set&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_stack.html#stl_stack" data-ur1313m3t="true">&lt;stack&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_unordered_map.html#stl_unordered_map" data-ur1313m3t="true">&lt;unordered_map&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_unordered_set.html#stl_unordered_set" data-ur1313m3t="true">&lt;unordered
set&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr><tr class="row"><td class="entry" valign="top" width="38.46153846153847%"><a class="xref" href="/docs/en/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/stl_vector.html#stl_vector" data-ur1313m3t="true">&lt;vector&gt;</a></td><td class="entry" valign="top" width="61.53846153846154%"></td></tr></tbody>

---
>   ## STLs:

 * ### Complexity of stack vs queue vs array :
  ![.](./array_queue_stack_complex.png)

 * ### Bitset `bitset<size> name(init)`

	(note1: container member functions (note: element with index 0 is the RMB)
	(note2 : bistset can be initialized using string of bits "binary string" ):
	`bitset<size> variable_name("BINARY_STRING");`
	<br>
	<section id="functions">
	<p>Bit access</p>
	<dl class="links"><dt><a href="/reference/bitset/bitset/operator[]/" data-ur1313m3t="true"><strong>operator[]</strong></a></dt><dd>Access bit <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/count/" data-ur1313m3t="true"><strong>count</strong></a></dt><dd>Count bits set <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/test/" data-ur1313m3t="true"><strong>test</strong></a></dt><dd>Return bit value <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/any/" data-ur1313m3t="true"><strong>any</strong></a></dt><dd>Test if any bit is set <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/none/" data-ur1313m3t="true"><strong>none</strong></a></dt><dd>Test if no bit is set <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/all/" data-ur1313m3t="true"><strong>all </strong></a></dt><dd>Test if all bits are set <span class="typ">(public member function)</span></dd></dl>
	<br>
	<p>Bit operations</p>
	<dl class="links"><dt><a href="/reference/bitset/bitset/set/" data-ur1313m3t="true"><strong>set</strong></a></dt><dd>Set bits <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/reset/" data-ur1313m3t="true"><strong>reset</strong></a></dt><dd>Reset bits <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/flip/" data-ur1313m3t="true"><strong>flip</strong></a></dt><dd>Flip bits <span class="typ">(public member function)</span></dd></dl>
	<br>
	<p>Bitset operations</p>
	<dl class="links"><dt><a href="/reference/bitset/bitset/to_string/" data-ur1313m3t="true"><strong>to_string</strong></a></dt><dd>Convert to string <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/to_ulong/" data-ur1313m3t="true"><strong>to_ulong</strong></a></dt><dd>Convert to unsigned long integer <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/bitset/bitset/to_ullong/" data-ur1313m3t="true"><strong>to_ullong </strong></a></dt><dd>Convert to unsigned long long <span class="typ">(public member function)</span></dd></dl>
	</section>

* ### Vector

	<section id="functions">
	<b><u>Iterators</u></b>:<br>
	<dl class="links"><dt><a href="/reference/vector/vector/begin/" data-ur1313m3t="true"><strong>begin</strong></a></dt><dd>Return iterator to beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/end/" data-ur1313m3t="true"><strong>end</strong></a></dt><dd>Return iterator to end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/rbegin/" data-ur1313m3t="true"><strong>rbegin</strong></a></dt><dd>Return reverse iterator to reverse beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/rend/" data-ur1313m3t="true"><strong>rend</strong></a></dt><dd>Return reverse iterator to reverse end <span class="typ">(public member function)</span></dd></dl>
	<b>Capacity</b>:<br>
	<dl class="links"><dt><a href="/reference/vector/vector/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/max_size/" data-ur1313m3t="true"><strong>max_size</strong></a></dt><dd>Return maximum no. of elements vector can ever hold (effected by machine and ram) <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/resize/" data-ur1313m3t="true"><strong>resize</strong></a></dt><dd>Change size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/capacity/" data-ur1313m3t="true"><strong>capacity</strong></a></dt><dd>Return size of allocated storage capacity <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/empty/" data-ur1313m3t="true"><strong>empty</strong></a></dt><dd>Test whether vector is empty <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/reserve/" data-ur1313m3t="true"><strong>reserve</strong></a></dt><dd>Request a change in capacity <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/shrink_to_fit/" data-ur1313m3t="true"><strong>shrink_to_fit </strong></a></dt><dd>Shrink to fit <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Element access</b>:<br>
	<dl class="links"><dt><a href="/reference/vector/vector/operator[]/" data-ur1313m3t="true"><strong>operator[]</strong></a></dt><dd>Access element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/at/" data-ur1313m3t="true"><strong>at</strong></a></dt><dd>Access element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/front/" data-ur1313m3t="true"><strong>front</strong></a></dt><dd>Access first element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/back/" data-ur1313m3t="true"><strong>back</strong></a></dt><dd>Access last element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/data/" data-ur1313m3t="true"><strong>data </strong></a></dt><dd>Access data <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Modifiers</b>:<br>
	<dl class="links"><dt><a href="/reference/vector/vector/assign/" data-ur1313m3t="true"><strong>assign</strong></a></dt><dd>Assign vector content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/push_back/" data-ur1313m3t="true"><strong>push_back</strong></a></dt><dd>Add element at the end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/pop_back/" data-ur1313m3t="true"><strong>pop_back</strong></a></dt><dd>Delete last element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/insert/" data-ur1313m3t="true"><strong>insert</strong></a></dt><dd>Insert elements <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/erase/" data-ur1313m3t="true"><strong>erase</strong></a></dt><dd>Erase elements <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/swap/" data-ur1313m3t="true"><strong>swap</strong></a></dt><dd>Swap content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/clear/" data-ur1313m3t="true"><strong>clear</strong></a></dt><dd>Clear content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/emplace/" data-ur1313m3t="true"><strong>emplace </strong></a></dt><dd>Construct and insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/vector/vector/emplace_back/" data-ur1313m3t="true"><strong>emplace_back </strong></a></dt><dd>Construct and insert element at the end <span class="typ">(public member function)</span></dd></dl>
	</section>

* ### Stack
	<section id="functions">
	<dl class="links"><dt><a href="/reference/stack/stack/empty/" data-ur1313m3t="true"><strong>empty</strong></a></dt><dd>Test whether container is empty <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/stack/stack/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/stack/stack/top/" data-ur1313m3t="true"><strong>top</strong></a></dt><dd>Access next element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/stack/stack/push/" data-ur1313m3t="true"><strong>push</strong></a></dt><dd>Insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/stack/stack/emplace/" data-ur1313m3t="true"><strong>emplace </strong></a></dt><dd>Construct and insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/stack/stack/pop/" data-ur1313m3t="true"><strong>pop</strong></a></dt><dd>Remove top element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/stack/stack/swap/" data-ur1313m3t="true"><strong>swap </strong></a></dt><dd>Swap contents <span class="typ">(public member function)</span></dd></dl>
	<br>
	<p>Non-member function overloads</p>
	<dl class="links"><dt><a href="/reference/stack/stack/operators/" data-ur1313m3t="true"><strong>relational operators</strong></a></dt><dd>Relational operators for stack <span class="typ">(function)</span></dd></dl><dl class="links"><dt><a href="/reference/stack/stack/swap-free/" data-ur1313m3t="true"><strong>swap (stack) </strong></a></dt><dd>Exchange contents of stacks <span class="typ">(public member function)</span></dd></dl>
	<br>
	</section>

* ### Queue

	<section id="functions">
	<dl class="links"><dt><a href="/reference/queue/queue/empty/" data-ur1313m3t="true"><strong>empty</strong></a></dt><dd>Test whether container is empty <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/front/" data-ur1313m3t="true"><strong>front</strong></a></dt><dd>Access next element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/back/" data-ur1313m3t="true"><strong>back</strong></a></dt><dd>Access last element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/push/" data-ur1313m3t="true"><strong>push</strong></a></dt><dd>Insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/emplace/" data-ur1313m3t="true"><strong>emplace </strong></a></dt><dd>Construct and insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/pop/" data-ur1313m3t="true"><strong>pop</strong></a></dt><dd>Remove next element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/swap/" data-ur1313m3t="true"><strong>swap </strong></a></dt><dd>Swap contents <span class="typ">(public member function)</span></dd></dl>
	<br>
	<p>Non-member function overloads</p>
	<dl class="links"><dt><a href="/reference/queue/queue/operators/" data-ur1313m3t="true"><strong>relational operators</strong></a></dt><dd>Relational operators for queue <span class="typ">(function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/queue/swap-free/" data-ur1313m3t="true"><strong>swap (queue) </strong></a></dt><dd>Exchange contents of queues <span class="typ">(public member function)</span></dd></dl>
	<br>
	</section>

* ### Deque

	<section id="functions">
	<b>Iterators</b>:<br>
	<dl class="links"><dt><a href="/reference/deque/deque/begin/" data-ur1313m3t="true"><strong>begin</strong></a></dt><dd>Return iterator to beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/end/" data-ur1313m3t="true"><strong>end</strong></a></dt><dd>Return iterator to end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/rbegin/" data-ur1313m3t="true"><strong>rbegin</strong></a></dt><dd>Return reverse iterator to reverse beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/rend/" data-ur1313m3t="true"><strong>rend</strong></a></dt><dd>Return reverse iterator to reverse end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/cbegin/" data-ur1313m3t="true"><strong>cbegin </strong></a></dt><dd>Return const_iterator to beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/cend/" data-ur1313m3t="true"><strong>cend </strong></a></dt><dd>Return const_iterator to end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/crbegin/" data-ur1313m3t="true"><strong>crbegin </strong></a></dt><dd>Return const_reverse_iterator to reverse beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/crend/" data-ur1313m3t="true"><strong>crend </strong></a></dt><dd>Return const_reverse_iterator to reverse end <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Capacity</b>:<br>
	<dl class="links"><dt><a href="/reference/deque/deque/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/max_size/" data-ur1313m3t="true"><strong>max_size</strong></a></dt><dd>Return maximum size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/resize/" data-ur1313m3t="true"><strong>resize</strong></a></dt><dd>Change size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/empty/" data-ur1313m3t="true"><strong>empty</strong></a></dt><dd>Test whether container is empty <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/shrink_to_fit/" data-ur1313m3t="true"><strong>shrink_to_fit </strong></a></dt><dd>Shrink to fit <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Element access</b>:<br>
	<dl class="links"><dt><a href="/reference/deque/deque/operator[]/" data-ur1313m3t="true"><strong>operator[]</strong></a></dt><dd>Access element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/at/" data-ur1313m3t="true"><strong>at</strong></a></dt><dd>Access element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/front/" data-ur1313m3t="true"><strong>front</strong></a></dt><dd>Access first element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/back/" data-ur1313m3t="true"><strong>back</strong></a></dt><dd>Access last element <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Modifiers</b>:<br>
	<dl class="links"><dt><a href="/reference/deque/deque/assign/" data-ur1313m3t="true"><strong>assign</strong></a></dt><dd>Assign container content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/push_back/" data-ur1313m3t="true"><strong>push_back</strong></a></dt><dd>Add element at the end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/push_front/" data-ur1313m3t="true"><strong>push_front</strong></a></dt><dd>Insert element at beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/pop_back/" data-ur1313m3t="true"><strong>pop_back</strong></a></dt><dd>Delete last element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/pop_front/" data-ur1313m3t="true"><strong>pop_front</strong></a></dt><dd>Delete first element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/insert/" data-ur1313m3t="true"><strong>insert</strong></a></dt><dd>Insert elements <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/erase/" data-ur1313m3t="true"><strong>erase</strong></a></dt><dd>Erase elements <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/swap/" data-ur1313m3t="true"><strong>swap</strong></a></dt><dd>Swap content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/clear/" data-ur1313m3t="true"><strong>clear</strong></a></dt><dd>Clear content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/emplace/" data-ur1313m3t="true"><strong>emplace </strong></a></dt><dd>Construct and insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/emplace_front/" data-ur1313m3t="true"><strong>emplace_front </strong></a></dt><dd>Construct and insert element at beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/emplace_back/" data-ur1313m3t="true"><strong>emplace_back </strong></a></dt><dd>Construct and insert element at the end <span class="typ">(public member function)</span></dd></dl>
	<br>
	<p>Non-member functions overloads</p>
	<dl class="links"><dt><a href="/reference/deque/deque/operators/" data-ur1313m3t="true"><strong>relational operators</strong></a></dt><dd>Relational operators for deque <span class="typ">(function)</span></dd></dl><dl class="links"><dt><a href="/reference/deque/deque/swap-free/" data-ur1313m3t="true"><strong>swap</strong></a></dt><dd>Exchanges the contents of two deque containers <span class="typ">(function template)</span></dd></dl>
	</section>

* ### Priority_Queue

	<section id="functions">
	<dl class="links"><dt><a href="/reference/queue/priority_queue/empty/" data-ur1313m3t="true"><strong>empty</strong></a></dt><dd>Test whether container is empty <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/priority_queue/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/priority_queue/top/" data-ur1313m3t="true"><strong>top</strong></a></dt><dd>Access top element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/priority_queue/push/" data-ur1313m3t="true"><strong>push</strong></a></dt><dd>Insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/priority_queue/emplace/" data-ur1313m3t="true"><strong>emplace </strong></a></dt><dd>Construct and insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/priority_queue/pop/" data-ur1313m3t="true"><strong>pop</strong></a></dt><dd>Remove top element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/queue/priority_queue/swap/" data-ur1313m3t="true"><strong>swap </strong></a></dt><dd>Swap contents <span class="typ">(public member function)</span></dd></dl>
	<br>
	<p>Non-member function overloads</p>
	<dl class="links"><dt><a href="/reference/queue/priority_queue/swap-free/" data-ur1313m3t="true"><strong>swap (queue) </strong></a></dt><dd>Exchange contents of priority queues <span class="typ">(public member function)</span></dd></dl>
	<br>
	</section>

* ### Map <sub>( multimap , unordered_map , unordered_multimap )ordered search : O(log n)   unordered search: O(1)</sub>

	<section id="functions">
	<b>Iterators</b>:<br>
	<dl class="links"><dt><a href="/reference/map/map/begin/" data-ur1313m3t="true"><strong>begin</strong></a></dt><dd>Return iterator to beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/end/" data-ur1313m3t="true"><strong>end</strong></a></dt><dd>Return iterator to end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/rbegin/" data-ur1313m3t="true"><strong>rbegin</strong></a></dt><dd>Return reverse iterator to reverse beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/rend/" data-ur1313m3t="true"><strong>rend</strong></a></dt><dd>Return reverse iterator to reverse end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/cbegin/" data-ur1313m3t="true"><strong>cbegin </strong></a></dt><dd>Return const_iterator to beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/cend/" data-ur1313m3t="true"><strong>cend </strong></a></dt><dd>Return const_iterator to end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/crbegin/" data-ur1313m3t="true"><strong>crbegin </strong></a></dt><dd>Return const_reverse_iterator to reverse beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/crend/" data-ur1313m3t="true"><strong>crend </strong></a></dt><dd>Return const_reverse_iterator to reverse end <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Capacity</b>:<br>
	<dl class="links"><dt><a href="/reference/map/map/empty/" data-ur1313m3t="true"><strong>empty</strong></a></dt><dd>Test whether container is empty <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return container size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/max_size/" data-ur1313m3t="true"><strong>max_size</strong></a></dt><dd>Return maximum size <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Element access</b>:<br>
	<dl class="links"><dt><a href="/reference/map/map/operator[]/" data-ur1313m3t="true"><strong>operator[]</strong></a></dt><dd>Access element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/at/" data-ur1313m3t="true"><strong>at </strong></a></dt><dd>Access element <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Modifiers</b>:<br>
	<dl class="links"><dt><a href="/reference/map/map/insert/" data-ur1313m3t="true"><strong>insert</strong></a></dt><dd>Insert elements <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/erase/" data-ur1313m3t="true"><strong>erase</strong></a></dt><dd>Erase elements <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/swap/" data-ur1313m3t="true"><strong>swap</strong></a></dt><dd>Swap content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/clear/" data-ur1313m3t="true"><strong>clear</strong></a></dt><dd>Clear content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/emplace/" data-ur1313m3t="true"><strong>emplace </strong></a></dt><dd>Construct and insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/emplace_hint/" data-ur1313m3t="true"><strong>emplace_hint </strong></a></dt><dd>Construct and insert element with hint <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Operations</b>:<br>
	<dl class="links"><dt><a href="/reference/map/map/find/" data-ur1313m3t="true"><strong>find</strong></a></dt><dd>Get iterator to element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/count/" data-ur1313m3t="true"><strong>count</strong></a></dt><dd>Count elements with a specific key <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/lower_bound/" data-ur1313m3t="true"><strong>lower_bound</strong></a></dt><dd>Return iterator to lower bound <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/upper_bound/" data-ur1313m3t="true"><strong>upper_bound</strong></a></dt><dd>Return iterator to upper bound <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/map/map/equal_range/" data-ur1313m3t="true"><strong>equal_range</strong></a></dt><dd>Get range of equal elements <span class="typ">(public member function)</span></dd></dl>
	</section>

* ### Set <sub>( multiset , unordered_set , unordered_multiset ) ordered search : O(log n)   unordered search: O(1)</sub>

	<section id="functions">
	<b>Iterators</b>:<br>
	<dl class="links"><dt><a href="/reference/set/set/begin/" data-ur1313m3t="true"><strong>begin</strong></a></dt><dd>Return iterator to beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/end/" data-ur1313m3t="true"><strong>end</strong></a></dt><dd>Return iterator to end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/rbegin/" data-ur1313m3t="true"><strong>rbegin</strong></a></dt><dd>Return reverse iterator to reverse beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/rend/" data-ur1313m3t="true"><strong>rend</strong></a></dt><dd>Return reverse iterator to reverse end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/cbegin/" data-ur1313m3t="true"><strong>cbegin </strong></a></dt><dd>Return const_iterator to beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/cend/" data-ur1313m3t="true"><strong>cend </strong></a></dt><dd>Return const_iterator to end <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/crbegin/" data-ur1313m3t="true"><strong>crbegin </strong></a></dt><dd>Return const_reverse_iterator to reverse beginning <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/crend/" data-ur1313m3t="true"><strong>crend </strong></a></dt><dd>Return const_reverse_iterator to reverse end <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Capacity</b>:<br>
	<dl class="links"><dt><a href="/reference/set/set/empty/" data-ur1313m3t="true"><strong>empty</strong></a></dt><dd>Test whether container is empty <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/size/" data-ur1313m3t="true"><strong>size</strong></a></dt><dd>Return container size <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/max_size/" data-ur1313m3t="true"><strong>max_size</strong></a></dt><dd>Return maximum size <span class="typ">(public member function)</span></dd></dl>
	<br>
	<b>Modifiers</b>:<br>
	<dl class="links"><dt><a href="/reference/set/set/insert/" data-ur1313m3t="true"><strong>insert</strong></a></dt><dd>Insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/erase/" data-ur1313m3t="true"><strong>erase</strong></a></dt><dd>Erase elements <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/swap/" data-ur1313m3t="true"><strong>swap</strong></a></dt><dd>Swap content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/clear/" data-ur1313m3t="true"><strong>clear</strong></a></dt><dd>Clear content <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/emplace/" data-ur1313m3t="true"><strong>emplace </strong></a></dt><dd>Construct and insert element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/emplace_hint/" data-ur1313m3t="true"><strong>emplace_hint </strong></a></dt><dd>Construct and insert element with hint <span class="typ">(public member function)</span></dd></dl>
	<br>
	
	<b>Operations</b>:<br>
	<dl class="links"><dt><a href="/reference/set/set/find/" data-ur1313m3t="true"><strong>find</strong></a></dt><dd>Get iterator to element <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/count/" data-ur1313m3t="true"><strong>count</strong></a></dt><dd>Count elements with a specific value <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/lower_bound/" data-ur1313m3t="true"><strong>lower_bound</strong></a></dt><dd>Return iterator to lower bound <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/upper_bound/" data-ur1313m3t="true"><strong>upper_bound</strong></a></dt><dd>Return iterator to upper bound <span class="typ">(public member function)</span></dd></dl><dl class="links"><dt><a href="/reference/set/set/equal_range/" data-ur1313m3t="true"><strong>equal_range</strong></a></dt><dd>Get range of equal elements <span class="typ">(public member function)</span></dd></dl>
	</section>

---
>  ## Algorithm lib functions:

<div class="C_doc"><div id="I_type"></div>
<b>Non-modifying sequence operations</b>:<br>
<dl class="links"><dt><a href="/reference/algorithm/find/" data-ur1313m3t="true"><strong>find</strong></a></dt><dd>Find value in range <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/count/" data-ur1313m3t="true"><strong>count</strong></a></dt><dd>Count appearances of value in range <span class="typ">(function template)</span></dd></dl>
<br>
<b>Modifying sequence operations</b>:<br>
<dl class="links"><dt><a href="/reference/algorithm/copy/" data-ur1313m3t="true"><strong>copy</strong></a></dt><dd>Copy range of elements <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/swap/" data-ur1313m3t="true"><strong>swap</strong></a></dt><dd>Exchange values of two objects <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/fill/" data-ur1313m3t="true"><strong>fill</strong></a></dt><dd>Fill range with value <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/remove/" data-ur1313m3t="true"><strong>remove</strong></a></dt><dd>Remove value from range <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/reverse/" data-ur1313m3t="true"><strong>reverse</strong></a></dt><dd>Reverse range <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/rotate/" data-ur1313m3t="true"><strong>rotate</strong></a></dt><dd>Rotate left the elements in range <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/shuffle/" data-ur1313m3t="true"><strong>shuffle </strong></a></dt><dd>Randomly rearrange elements in range using generator <span class="typ">(function template)</span></dd></dl>
<br>
<b>Sorting</b>:<br>
<dl class="links"><dt><a href="/reference/algorithm/sort/" data-ur1313m3t="true"><strong>sort</strong></a></dt><dd>Sort elements in range <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/is_sorted/" data-ur1313m3t="true"><strong>is_sorted </strong></a></dt><dd>Check whether range is sorted <span class="typ">(function template)</span></dd></dl>
<br>
<dl class="links"><dt><a href="/reference/algorithm/lower_bound/" data-ur1313m3t="true"><strong>lower_bound</strong></a></dt><dd>Return iterator to lower bound <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/upper_bound/" data-ur1313m3t="true"><strong>upper_bound</strong></a></dt><dd>Return iterator to upper bound <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/includes/" data-ur1313m3t="true"><strong>includes</strong></a></dt><dd>Test whether sorted range includes another sorted range <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/set_union/" data-ur1313m3t="true"><strong>set_union</strong></a></dt><dd>Union of two sorted ranges <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/set_intersection/" data-ur1313m3t="true"><strong>set_intersection</strong></a></dt><dd>Intersection of two sorted ranges <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/set_difference/" data-ur1313m3t="true"><strong>set_difference</strong></a></dt><dd>Difference of two sorted ranges <span class="typ">(function template)</span></dd></dl>
<br>
<b>Min/max</b>:<br>
<dl class="links"><dt><a href="/reference/algorithm/min/" data-ur1313m3t="true"><strong>min</strong></a></dt><dd>Return the smallest <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/max/" data-ur1313m3t="true"><strong>max</strong></a></dt><dd>Return the largest <span class="typ">(function template)</span></dd></dl>
<br>
<b>Other</b>:<br>
<dl class="links"><dt><a href="/reference/algorithm/lexicographical_compare/" data-ur1313m3t="true"><strong>lexicographical_compare</strong></a></dt><dd>Lexicographical less-than comparison <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/next_permutation/" data-ur1313m3t="true"><strong>next_permutation</strong></a></dt><dd>Transform range to next permutation <span class="typ">(function template)</span></dd></dl><dl class="links"><dt><a href="/reference/algorithm/prev_permutation/" data-ur1313m3t="true"><strong>prev_permutation</strong></a></dt><dd>Transform range to previous permutation <span class="typ">(function template)</span></dd></dl></div>

---
>  ## String functions  and member functions:

![.](./string.png)
![.](./char_type_check.png)

---
>  ## Seive code  O( nLog(Log(n)) )
```cpp
int N = 1e6 + 5;
vector<bool> is_prime(N, true);

void sieve(ll sz){

	is_prime[0] = is_prime[1] = false; //not primes ( 1 is rarely  considered prime )

	for (int i = 2; i * i <= n; i++) { // or 'i <= i/n' if 'i' could OF
		if (is_prime[i]) {
			for (int j = i * i; j <= n; j += i)
				is_prime[j] = false;
		}
	}
}
```
---
> ## Check  if specific number is prime ( not seive ) 
```cpp
bool isPrime(int n) { // O(sqrt(n))
    if (n == 2) return true;
    if (n < 2 || !(n & 1)) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
```
---
> ##  Bitmasking
```cpp
//Even test
	if( (n%2) == 9)	// works for +ve values ONLY!
	if( (n&1) == 1)	// works for -ve an +ve values!

//print number in binary ( can also use it to count bits )
void printNumber(int n, int len)
{
	if(!len)
		return ;

	printNumber(n>>1, len-1);	// remove last bit
	cout<<(n&1);				// print last bit
	cnt++; 						//count bits
}

//print number in binary (method 2) -> you also can save it as binary in bitset 

int val = 10;
cout << bitset<bits_no>(val);


// Get bit
int getBit(int num, int idx) {
  return ((num >> idx) & 1) == 1;		// 110100, idx = 4  -->  110 & 1 = 0
}

//Set bit
int setBit1(int num, int idx) {
	return num | (1<<idx);
}

//Reset bit
int setBit0(int num, int idx) {
	return num & ~(1<<idx);				// 110100, idx = 3  -->  110100 & ~000100 = 110100 & 111011
}


//Flip Bit
int flipBit(int num, int idx) {
	return num ^ (1<<idx);
}

//used in Gettig mask subsets + Counting 1 bits + Getting first 1 bit from  right (LSB)
/*
X-1 is very important!

X 	= 840 	= 01101001000
X-1 = 839 	= 01101000111		

X & (X-1) 	= 01101000000		first bit from right removed

X & ~(X-1) 	= 01101001000 & 10010111000 = 00000001000	//get 1st 1 bit from (lsb)
*/

int countNumBits2(int mask) {	//	O(bits Count)		// you also can use '__builtin_popcount()'
	int ret = 0;
	while (mask) 	{
		mask &= (mask-1);
		++ret;	// Simply remove the last bit and so on
	}
	return ret;
}

//GET   subsets  of specific mask
//we know subsets of 101: 101, 100, 001, 000 
void getAllSubMasks(int mask) {

	for(int subMask = mask ; subMask ; subMask = (subMask - 1) & mask)
		printNumber(subMask, 32);	// this code doesn't print 0

	// For reverse: ~subMask&mask = subMask^mask
}


//GET all subsets of length 'X'
// len = 3: 000, 001, 010, 011, 100, 101, 110, 111

void printAllSubsets(int len)	// Remember we did it recursively! This is much SIMPLER!
{
	for (int i = 0; i < (1<<len); ++i)
		printNumber(i, len);

	// For reversed order. Either reverse each item or work from big to small
	//for (int i = (1<<len); i >= 0 ; --i)
	//	printNumber(i, len);
}
```
---
> ##  nPr , nCr :

* ### in nPr ( any re-order of same choosen elements increases all nPr count )

* ### nCr is alwyas less than nPr (diffrent arrangement of same choosen elements does not increase nCr counter more than once for same elements)

![.](./phpMxy60F.png)

---
 > ## next_permutation(start,end) 
 
 array must be sorted inc. to get  all permutations count  and arrangment (summary: to get all permutaion start from smallest arrangement in lexical order)

---
> ## Inclusion Exclusion: |A ∪ B ∪ C| = |A| + |B| + |C| - |A ∩ B| - |B ∩ C| - |A ∩ C| + |A ∩ B ∩ C|
---

> ## Mod properties :

	( a + b) % c = ( ( a % c ) + ( b % c ) ) % c
	( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
	( a – b) % c = ( ( a % c ) – ( b % c ) ) % c
	
---
> ##  2D prefix sum code 

```cpp
int arr[N+1][M+1]={0}, prefixSum[N+1][M+1];
  int n,m;
  cin>>n>>m;
  for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
      cin>>arr[i][j];
 
  for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
      prefixSum[i][j]=arr[i][j] + prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1];
 
 
  int r1,c1, r2,c2;
  cin>>r1>>c1>>r2>>c2; // one-based
  cout<<prefixSum[r2][c2] - prefixSum[r1-1][c2] - prefixSum[r2][c1-1] + prefixSum[r1-1][c1-1]<<'\n';
```

![.](./2d_prefix_sum.png)

---
> ## Summation formulas

![.](./B0CAG.png)

---
> ## Fast power code 

```cpp
// in iterative style
ll fastPow(ll base, ll power /*, ll m*/) { // O(log[power])
  ll ans = 1;
  while (power) {
    if (power & 1)
      ans = (ans * base); // if we have mod => ans = (ans * base) % m
    base = (base * base); // base = (base * base) % m
    power >>= 1;
  }
  return ans;
}
//in RECURSIVE style
int fast_pow(int x,int n) {
    if(n==0) return 1;
    //n is even
    else if(n%2 == 0)        
        return fast_pow(x*x,n/2);
    //n is odd
    else                             
        return x * fast_pow(x*x,(n-1)/2);
}
```
---
> ## sqrt(), sqrtl(), sqrtf(), log(), logf(), logl():

	may have accuracy and approximation issues at very big or small numbers (hard to predict when it will be off by +1 or -1   so you can handle its errors)
---


> ## log for counting number of bits or digits :
```cpp
int n = 124123123;
int no_bits = floor( log2(n) ) + 1; //  gets no of bits 


int no_dig = floor( log10(n) ) + 1; // get no of digits
```


---

> ## gcd and lcm
```cpp
gcd <data_type> (x,y);
__gcd(x,y);
 int lcm = (x * y) / gcd(x,y); 
```

---
> ## Prime factorization  (to get all prime factors of a number)
```cpp
vector<int> v;
vector<int> prime_factors(int n){

	while ( (n & 1) == 0 ){//if even  note: '==' has higher precedence than '&'  
		v.push_back(2);
		n >>= 1;
	}

	// n must be odd at this point. So we can skip
    // one element (Note i = i +2)
	for(int i = 3; i <= n / i; i += 2){
		// While i divides n, print i and divide n
		while (n % i == 0){
			v.push_back(i);
			n /= i;
		}
	}

	// This condition is to handle the case when n
    // is a prime number greater than 2
	if (n > 2) v.push_back(n); 

	return v;
}
```
---
> ## Factors of a number 
```cpp
void printDivisors(int n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one(case of n being complete square)
            if (n/i == i)
                cout <<" "<< i;
  
            else // Otherwise print both
                cout << " "<< i << " " << n/i;
        }
    }
}
```
---
> ## Quadratic function solver code
```cpp
// x = (-b ± sqrt(b^2 - 4ac) ) / 2a;
float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
    }
    
    else if (discriminant == 0) {
        x1 = -b/(2*a);
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
    }
```
---
> ## Compare function example code 
```cpp
//lamda function (sort vector of pairs)
vector<pair<int, stack<int>>> arr(mp.begin() , mp.end());
sort(arr.begin(), arr.end(), [](const auto& a, const auto& b) { return a.first > b.first;});

//compare function ( sort  desc. by first  if equal sort desc. by second)
bool comp (  pair<int, int> &a , pair<int,int> &b){
	if ( a.F != b.F ){
		return a.F > b.F;
	}else{
		return a.S > b.S;
	}
}
```
---
> ## Binary-search on int code 


**polarity method** : if low starts at highly possible case it ends at opposite polarity (first impossiple case )  high the same ends at first possible case (high is answer!)

```cpp

//only edit mid
int ans = 1;
		int l = 1;//re-assure from input ranges
		int h = arr[n - 1] - arr[0];
		
		while ( l < h ){
			int m = (l + h + 1) / 2;
			
			if ( h - l <= 4){
				for (int i = l; i <= h; i++)
					if ( ok(arr , c , i) )
						ans = i;
				break;
			}

			if ( !ok(arr , c , m) ) h = m - 1;
			else{
				ans = m;
				l = m + 1;
			}
		}
```
---
> ## Binary-search on float code
```cpp
 double binarySearch(double st, double en){
    double L = 0 , R = en, mid;
    while(R - L > eps){ // eps: some very small value (dependent on the problem)
      mid = L + (R - L) / 2;
      if(valid(mid))
        L = mid;
      else
        R = mid;
    }
    return L + (R - L) / 2; // mid
 }
```

---
> ## Backtracing code rules


 ( maze  and the general code template of backtracking ) :
 ```cpp

 // Typical backtracking procedure ( base case - state - transition )
void recursion(state s)
{
	if( base(s) )
		return ;

	for each substate ss
		mark ss

		recursion (ss)

		unmark ss
}


//example : maze
char maze(MAX , MAX){
//.SX..
//..X.E
//....X
//X.XX.
}
bool vis[MAX][MAX];
bool findEnd2(int r, int c)	// Recursion State: r, c	and FULL visted array
{
    if( !valid(r, c) || maze[r][c] == 'X' || vis[r][c] == 1)
		return false;		// invalid position or block position


	vis[r][c] = 1;	// we just visited it, don't allow any one back to it

    if( maze[r][c] =='E')
		return true;	// we found End

	// Try the 4 neighbor cells
	 if(findEnd2(r, c-1)) return true;  	// search up
    if(findEnd2(r, c+1)) return true; 	// search down
    if(findEnd2(r-1, c)) return true;  	// search left
    if(findEnd2(r+1, c)) return true;  	// search right

	vis[r][c] = 0;	// undo marking, other paths allowed to use it now

	// Can't find a way for it!
    return false;
}

 ```

 	example of backtraking that i studied before:  
	https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

---

> ## Substring vs subsequence vs subarray
![.](./SUBSEQvsSUBSTRvsSUBARRAY.png)

---
> ## Diagonally navigation 2D array  :
```cpp
//traverse and print all zeroes in main diagonal 
for (int step = 0 ; step < row; step++)
cout << arr[step][step]; 

//traverse and print all zeroes in anti diagonal 
for (int step = 0 ; step < row; step++)
cout << arr[step][colm - 1 - step];
```
---
> ## Dijkestra code ( if i studied it)
---
> ## Setprecision 

`cout << fixed << setprecision(num_after_point) << float_val;`
---
> ## Cout formating

Hex output `cout <<hex << number << dec;` , Binary output `cout << bitset<sz>number;` 
---
> ## printf() and scanf() specially with floating point fixed precision
```cpp
scanf("%d", &testInteger);
printf("Number = %d", testInteger); //%f for float  %lf for double %c for char 

//control floating point 
//9dig before the point + the point then 6dig after the point) -> 123456789.123456
printf("%10.6lf",myDoubleNum);
```
---



> ## First 1000 primes (converte to pdf to show the primes table)


<table class="indexed table-bordered table-condensed"><thead><tr><th>&nbsp;</th><th>1</th><th>2</th><th>3</th><th>4</th><th>5</th><th>6</th><th>7</th><th>8</th><th>9</th><th>10</th></tr></thead><tbody>
<tr><th>1&nbsp;-&nbsp;10</th><td><a href="/number/1st-prime" title="1st prime" data-ur1313m3t="true">2</a></td><td><a href="/number/2nd-prime" title="2nd prime" data-ur1313m3t="true">3</a></td><td><a href="/number/3rd-prime" title="3rd prime" data-ur1313m3t="true">5</a></td><td><a href="/number/4th-prime" title="4th prime" data-ur1313m3t="true">7</a></td><td><a href="/number/5th-prime" title="5th prime" data-ur1313m3t="true">11</a></td><td><a href="/number/6th-prime" title="6th prime" data-ur1313m3t="true">13</a></td><td><a href="/number/7th-prime" title="7th prime" data-ur1313m3t="true">17</a></td><td><a href="/number/8th-prime" title="8th prime" data-ur1313m3t="true">19</a></td><td><a href="/number/9th-prime" title="9th prime" data-ur1313m3t="true">23</a></td><td><a href="/number/10th-prime" title="10th prime" data-ur1313m3t="true">29</a></td></tr><tr><th>11&nbsp;-&nbsp;20</th><td><a href="/number/11th-prime" title="11th prime" data-ur1313m3t="true">31</a></td><td><a href="/number/12th-prime" title="12th prime" data-ur1313m3t="true">37</a></td><td><a href="/number/13th-prime" title="13th prime" data-ur1313m3t="true">41</a></td><td><a href="/number/14th-prime" title="14th prime" data-ur1313m3t="true">43</a></td><td><a href="/number/15th-prime" title="15th prime" data-ur1313m3t="true">47</a></td><td><a href="/number/16th-prime" title="16th prime" data-ur1313m3t="true">53</a></td><td><a href="/number/17th-prime" title="17th prime" data-ur1313m3t="true">59</a></td><td><a href="/number/18th-prime" title="18th prime" data-ur1313m3t="true">61</a></td><td><a href="/number/19th-prime" title="19th prime" data-ur1313m3t="true">67</a></td><td><a href="/number/20th-prime" title="20th prime" data-ur1313m3t="true">71</a></td></tr><tr><th>21&nbsp;-&nbsp;30</th><td><a href="/number/21st-prime" title="21st prime" data-ur1313m3t="true">73</a></td><td><a href="/number/22nd-prime" title="22nd prime" data-ur1313m3t="true">79</a></td><td><a href="/number/23rd-prime" title="23rd prime" data-ur1313m3t="true">83</a></td><td><a href="/number/24th-prime" title="24th prime" data-ur1313m3t="true">89</a></td><td><a href="/number/25th-prime" title="25th prime" data-ur1313m3t="true">97</a></td><td><a href="/number/26th-prime" title="26th prime" data-ur1313m3t="true">101</a></td><td><a href="/number/27th-prime" title="27th prime" data-ur1313m3t="true">103</a></td><td><a href="/number/28th-prime" title="28th prime" data-ur1313m3t="true">107</a></td><td><a href="/number/29th-prime" title="29th prime" data-ur1313m3t="true">109</a></td><td><a href="/number/30th-prime" title="30th prime" data-ur1313m3t="true">113</a></td></tr><tr><th>31&nbsp;-&nbsp;40</th><td><a href="/number/31st-prime" title="31st prime" data-ur1313m3t="true">127</a></td><td><a href="/number/32nd-prime" title="32nd prime" data-ur1313m3t="true">131</a></td><td><a href="/number/33rd-prime" title="33rd prime" data-ur1313m3t="true">137</a></td><td><a href="/number/34th-prime" title="34th prime" data-ur1313m3t="true">139</a></td><td><a href="/number/35th-prime" title="35th prime" data-ur1313m3t="true">149</a></td><td><a href="/number/36th-prime" title="36th prime" data-ur1313m3t="true">151</a></td><td><a href="/number/37th-prime" title="37th prime" data-ur1313m3t="true">157</a></td><td><a href="/number/38th-prime" title="38th prime" data-ur1313m3t="true">163</a></td><td><a href="/number/39th-prime" title="39th prime" data-ur1313m3t="true">167</a></td><td><a href="/number/40th-prime" title="40th prime" data-ur1313m3t="true">173</a></td></tr><tr><th>41&nbsp;-&nbsp;50</th><td><a href="/number/41st-prime" title="41st prime" data-ur1313m3t="true">179</a></td><td><a href="/number/42nd-prime" title="42nd prime" data-ur1313m3t="true">181</a></td><td><a href="/number/43rd-prime" title="43rd prime" data-ur1313m3t="true">191</a></td><td><a href="/number/44th-prime" title="44th prime" data-ur1313m3t="true">193</a></td><td><a href="/number/45th-prime" title="45th prime" data-ur1313m3t="true">197</a></td><td><a href="/number/46th-prime" title="46th prime" data-ur1313m3t="true">199</a></td><td><a href="/number/47th-prime" title="47th prime" data-ur1313m3t="true">211</a></td><td><a href="/number/48th-prime" title="48th prime" data-ur1313m3t="true">223</a></td><td><a href="/number/49th-prime" title="49th prime" data-ur1313m3t="true">227</a></td><td><a href="/number/50th-prime" title="50th prime" data-ur1313m3t="true">229</a></td></tr><tr><th>51&nbsp;-&nbsp;60</th><td><a href="/number/51st-prime" title="51st prime" data-ur1313m3t="true">233</a></td><td><a href="/number/52nd-prime" title="52nd prime" data-ur1313m3t="true">239</a></td><td><a href="/number/53rd-prime" title="53rd prime" data-ur1313m3t="true">241</a></td><td><a href="/number/54th-prime" title="54th prime" data-ur1313m3t="true">251</a></td><td><a href="/number/55th-prime" title="55th prime" data-ur1313m3t="true">257</a></td><td><a href="/number/56th-prime" title="56th prime" data-ur1313m3t="true">263</a></td><td><a href="/number/57th-prime" title="57th prime" data-ur1313m3t="true">269</a></td><td><a href="/number/58th-prime" title="58th prime" data-ur1313m3t="true">271</a></td><td><a href="/number/59th-prime" title="59th prime" data-ur1313m3t="true">277</a></td><td><a href="/number/60th-prime" title="60th prime" data-ur1313m3t="true">281</a></td></tr><tr><th>61&nbsp;-&nbsp;70</th><td><a href="/number/61st-prime" title="61st prime" data-ur1313m3t="true">283</a></td><td><a href="/number/62nd-prime" title="62nd prime" data-ur1313m3t="true">293</a></td><td><a href="/number/63rd-prime" title="63rd prime" data-ur1313m3t="true">307</a></td><td><a href="/number/64th-prime" title="64th prime" data-ur1313m3t="true">311</a></td><td><a href="/number/65th-prime" title="65th prime" data-ur1313m3t="true">313</a></td><td><a href="/number/66th-prime" title="66th prime" data-ur1313m3t="true">317</a></td><td><a href="/number/67th-prime" title="67th prime" data-ur1313m3t="true">331</a></td><td><a href="/number/68th-prime" title="68th prime" data-ur1313m3t="true">337</a></td><td><a href="/number/69th-prime" title="69th prime" data-ur1313m3t="true">347</a></td><td><a href="/number/70th-prime" title="70th prime" data-ur1313m3t="true">349</a></td></tr><tr><th>71&nbsp;-&nbsp;80</th><td><a href="/number/71st-prime" title="71st prime" data-ur1313m3t="true">353</a></td><td><a href="/number/72nd-prime" title="72nd prime" data-ur1313m3t="true">359</a></td><td><a href="/number/73rd-prime" title="73rd prime" data-ur1313m3t="true">367</a></td><td><a href="/number/74th-prime" title="74th prime" data-ur1313m3t="true">373</a></td><td><a href="/number/75th-prime" title="75th prime" data-ur1313m3t="true">379</a></td><td><a href="/number/76th-prime" title="76th prime" data-ur1313m3t="true">383</a></td><td><a href="/number/77th-prime" title="77th prime" data-ur1313m3t="true">389</a></td><td><a href="/number/78th-prime" title="78th prime" data-ur1313m3t="true">397</a></td><td><a href="/number/79th-prime" title="79th prime" data-ur1313m3t="true">401</a></td><td><a href="/number/80th-prime" title="80th prime" data-ur1313m3t="true">409</a></td></tr><tr><th>81&nbsp;-&nbsp;90</th><td><a href="/number/81st-prime" title="81st prime" data-ur1313m3t="true">419</a></td><td><a href="/number/82nd-prime" title="82nd prime" data-ur1313m3t="true">421</a></td><td><a href="/number/83rd-prime" title="83rd prime" data-ur1313m3t="true">431</a></td><td><a href="/number/84th-prime" title="84th prime" data-ur1313m3t="true">433</a></td><td><a href="/number/85th-prime" title="85th prime" data-ur1313m3t="true">439</a></td><td><a href="/number/86th-prime" title="86th prime" data-ur1313m3t="true">443</a></td><td><a href="/number/87th-prime" title="87th prime" data-ur1313m3t="true">449</a></td><td><a href="/number/88th-prime" title="88th prime" data-ur1313m3t="true">457</a></td><td><a href="/number/89th-prime" title="89th prime" data-ur1313m3t="true">461</a></td><td><a href="/number/90th-prime" title="90th prime" data-ur1313m3t="true">463</a></td></tr><tr><th>91&nbsp;-&nbsp;100</th><td><a href="/number/91st-prime" title="91st prime" data-ur1313m3t="true">467</a></td><td><a href="/number/92nd-prime" title="92nd prime" data-ur1313m3t="true">479</a></td><td><a href="/number/93rd-prime" title="93rd prime" data-ur1313m3t="true">487</a></td><td><a href="/number/94th-prime" title="94th prime" data-ur1313m3t="true">491</a></td><td><a href="/number/95th-prime" title="95th prime" data-ur1313m3t="true">499</a></td><td><a href="/number/96th-prime" title="96th prime" data-ur1313m3t="true">503</a></td><td><a href="/number/97th-prime" title="97th prime" data-ur1313m3t="true">509</a></td><td><a href="/number/98th-prime" title="98th prime" data-ur1313m3t="true">521</a></td><td><a href="/number/99th-prime" title="99th prime" data-ur1313m3t="true">523</a></td><td><a href="/number/100th-prime" title="100th prime" data-ur1313m3t="true">541</a></td></tr><tr><th>101&nbsp;-&nbsp;110</th><td><a href="/number/101st-prime" title="101st prime" data-ur1313m3t="true">547</a></td><td><a href="/number/102nd-prime" title="102nd prime" data-ur1313m3t="true">557</a></td><td><a href="/number/103rd-prime" title="103rd prime" data-ur1313m3t="true">563</a></td><td><a href="/number/104th-prime" title="104th prime" data-ur1313m3t="true">569</a></td><td><a href="/number/105th-prime" title="105th prime" data-ur1313m3t="true">571</a></td><td><a href="/number/106th-prime" title="106th prime" data-ur1313m3t="true">577</a></td><td><a href="/number/107th-prime" title="107th prime" data-ur1313m3t="true">587</a></td><td><a href="/number/108th-prime" title="108th prime" data-ur1313m3t="true">593</a></td><td><a href="/number/109th-prime" title="109th prime" data-ur1313m3t="true">599</a></td><td><a href="/number/110th-prime" title="110th prime" data-ur1313m3t="true">601</a></td></tr><tr><th>111&nbsp;-&nbsp;120</th><td><a href="/number/111th-prime" title="111th prime" data-ur1313m3t="true">607</a></td><td><a href="/number/112th-prime" title="112th prime" data-ur1313m3t="true">613</a></td><td><a href="/number/113th-prime" title="113th prime" data-ur1313m3t="true">617</a></td><td><a href="/number/114th-prime" title="114th prime" data-ur1313m3t="true">619</a></td><td><a href="/number/115th-prime" title="115th prime" data-ur1313m3t="true">631</a></td><td><a href="/number/116th-prime" title="116th prime" data-ur1313m3t="true">641</a></td><td><a href="/number/117th-prime" title="117th prime" data-ur1313m3t="true">643</a></td><td><a href="/number/118th-prime" title="118th prime" data-ur1313m3t="true">647</a></td><td><a href="/number/119th-prime" title="119th prime" data-ur1313m3t="true">653</a></td><td><a href="/number/120th-prime" title="120th prime" data-ur1313m3t="true">659</a></td></tr><tr><th>121&nbsp;-&nbsp;130</th><td><a href="/number/121st-prime" title="121st prime" data-ur1313m3t="true">661</a></td><td><a href="/number/122nd-prime" title="122nd prime" data-ur1313m3t="true">673</a></td><td><a href="/number/123rd-prime" title="123rd prime" data-ur1313m3t="true">677</a></td><td><a href="/number/124th-prime" title="124th prime" data-ur1313m3t="true">683</a></td><td><a href="/number/125th-prime" title="125th prime" data-ur1313m3t="true">691</a></td><td><a href="/number/126th-prime" title="126th prime" data-ur1313m3t="true">701</a></td><td><a href="/number/127th-prime" title="127th prime" data-ur1313m3t="true">709</a></td><td><a href="/number/128th-prime" title="128th prime" data-ur1313m3t="true">719</a></td><td><a href="/number/129th-prime" title="129th prime" data-ur1313m3t="true">727</a></td><td><a href="/number/130th-prime" title="130th prime" data-ur1313m3t="true">733</a></td></tr><tr><th>131&nbsp;-&nbsp;140</th><td><a href="/number/131st-prime" title="131st prime" data-ur1313m3t="true">739</a></td><td><a href="/number/132nd-prime" title="132nd prime" data-ur1313m3t="true">743</a></td><td><a href="/number/133rd-prime" title="133rd prime" data-ur1313m3t="true">751</a></td><td><a href="/number/134th-prime" title="134th prime" data-ur1313m3t="true">757</a></td><td><a href="/number/135th-prime" title="135th prime" data-ur1313m3t="true">761</a></td><td><a href="/number/136th-prime" title="136th prime" data-ur1313m3t="true">769</a></td><td><a href="/number/137th-prime" title="137th prime" data-ur1313m3t="true">773</a></td><td><a href="/number/138th-prime" title="138th prime" data-ur1313m3t="true">787</a></td><td><a href="/number/139th-prime" title="139th prime" data-ur1313m3t="true">797</a></td><td><a href="/number/140th-prime" title="140th prime" data-ur1313m3t="true">809</a></td></tr><tr><th>141&nbsp;-&nbsp;150</th><td><a href="/number/141st-prime" title="141st prime" data-ur1313m3t="true">811</a></td><td><a href="/number/142nd-prime" title="142nd prime" data-ur1313m3t="true">821</a></td><td><a href="/number/143rd-prime" title="143rd prime" data-ur1313m3t="true">823</a></td><td><a href="/number/144th-prime" title="144th prime" data-ur1313m3t="true">827</a></td><td><a href="/number/145th-prime" title="145th prime" data-ur1313m3t="true">829</a></td><td><a href="/number/146th-prime" title="146th prime" data-ur1313m3t="true">839</a></td><td><a href="/number/147th-prime" title="147th prime" data-ur1313m3t="true">853</a></td><td><a href="/number/148th-prime" title="148th prime" data-ur1313m3t="true">857</a></td><td><a href="/number/149th-prime" title="149th prime" data-ur1313m3t="true">859</a></td><td><a href="/number/150th-prime" title="150th prime" data-ur1313m3t="true">863</a></td></tr><tr><th>151&nbsp;-&nbsp;160</th><td><a href="/number/151st-prime" title="151st prime" data-ur1313m3t="true">877</a></td><td><a href="/number/152nd-prime" title="152nd prime" data-ur1313m3t="true">881</a></td><td><a href="/number/153rd-prime" title="153rd prime" data-ur1313m3t="true">883</a></td><td><a href="/number/154th-prime" title="154th prime" data-ur1313m3t="true">887</a></td><td><a href="/number/155th-prime" title="155th prime" data-ur1313m3t="true">907</a></td><td><a href="/number/156th-prime" title="156th prime" data-ur1313m3t="true">911</a></td><td><a href="/number/157th-prime" title="157th prime" data-ur1313m3t="true">919</a></td><td><a href="/number/158th-prime" title="158th prime" data-ur1313m3t="true">929</a></td><td><a href="/number/159th-prime" title="159th prime" data-ur1313m3t="true">937</a></td><td><a href="/number/160th-prime" title="160th prime" data-ur1313m3t="true">941</a></td></tr><tr><th>161&nbsp;-&nbsp;170</th><td><a href="/number/161st-prime" title="161st prime" data-ur1313m3t="true">947</a></td><td><a href="/number/162nd-prime" title="162nd prime" data-ur1313m3t="true">953</a></td><td><a href="/number/163rd-prime" title="163rd prime" data-ur1313m3t="true">967</a></td><td><a href="/number/164th-prime" title="164th prime" data-ur1313m3t="true">971</a></td><td><a href="/number/165th-prime" title="165th prime" data-ur1313m3t="true">977</a></td><td><a href="/number/166th-prime" title="166th prime" data-ur1313m3t="true">983</a></td><td><a href="/number/167th-prime" title="167th prime" data-ur1313m3t="true">991</a></td><td><a href="/number/168th-prime" title="168th prime" data-ur1313m3t="true">997</a></td><td><a href="/number/169th-prime" title="169th prime" data-ur1313m3t="true">1009</a></td><td><a href="/number/170th-prime" title="170th prime" data-ur1313m3t="true">1013</a></td></tr><tr><th>171&nbsp;-&nbsp;180</th><td><a href="/number/171st-prime" title="171st prime" data-ur1313m3t="true">1019</a></td><td><a href="/number/172nd-prime" title="172nd prime" data-ur1313m3t="true">1021</a></td><td><a href="/number/173rd-prime" title="173rd prime" data-ur1313m3t="true">1031</a></td><td><a href="/number/174th-prime" title="174th prime" data-ur1313m3t="true">1033</a></td><td><a href="/number/175th-prime" title="175th prime" data-ur1313m3t="true">1039</a></td><td><a href="/number/176th-prime" title="176th prime" data-ur1313m3t="true">1049</a></td><td><a href="/number/177th-prime" title="177th prime" data-ur1313m3t="true">1051</a></td><td><a href="/number/178th-prime" title="178th prime" data-ur1313m3t="true">1061</a></td><td><a href="/number/179th-prime" title="179th prime" data-ur1313m3t="true">1063</a></td><td><a href="/number/180th-prime" title="180th prime" data-ur1313m3t="true">1069</a></td></tr><tr><th>181&nbsp;-&nbsp;190</th><td><a href="/number/181st-prime" title="181st prime" data-ur1313m3t="true">1087</a></td><td><a href="/number/182nd-prime" title="182nd prime" data-ur1313m3t="true">1091</a></td><td><a href="/number/183rd-prime" title="183rd prime" data-ur1313m3t="true">1093</a></td><td><a href="/number/184th-prime" title="184th prime" data-ur1313m3t="true">1097</a></td><td><a href="/number/185th-prime" title="185th prime" data-ur1313m3t="true">1103</a></td><td><a href="/number/186th-prime" title="186th prime" data-ur1313m3t="true">1109</a></td><td><a href="/number/187th-prime" title="187th prime" data-ur1313m3t="true">1117</a></td><td><a href="/number/188th-prime" title="188th prime" data-ur1313m3t="true">1123</a></td><td><a href="/number/189th-prime" title="189th prime" data-ur1313m3t="true">1129</a></td><td><a href="/number/190th-prime" title="190th prime" data-ur1313m3t="true">1151</a></td></tr><tr><th>191&nbsp;-&nbsp;200</th><td><a href="/number/191st-prime" title="191st prime" data-ur1313m3t="true">1153</a></td><td><a href="/number/192nd-prime" title="192nd prime" data-ur1313m3t="true">1163</a></td><td><a href="/number/193rd-prime" title="193rd prime" data-ur1313m3t="true">1171</a></td><td><a href="/number/194th-prime" title="194th prime" data-ur1313m3t="true">1181</a></td><td><a href="/number/195th-prime" title="195th prime" data-ur1313m3t="true">1187</a></td><td><a href="/number/196th-prime" title="196th prime" data-ur1313m3t="true">1193</a></td><td><a href="/number/197th-prime" title="197th prime" data-ur1313m3t="true">1201</a></td><td><a href="/number/198th-prime" title="198th prime" data-ur1313m3t="true">1213</a></td><td><a href="/number/199th-prime" title="199th prime" data-ur1313m3t="true">1217</a></td><td><a href="/number/200th-prime" title="200th prime" data-ur1313m3t="true">1223</a></td></tr><tr><th>201&nbsp;-&nbsp;210</th><td><a href="/number/201st-prime" title="201st prime" data-ur1313m3t="true">1229</a></td><td><a href="/number/202nd-prime" title="202nd prime" data-ur1313m3t="true">1231</a></td><td><a href="/number/203rd-prime" title="203rd prime" data-ur1313m3t="true">1237</a></td><td><a href="/number/204th-prime" title="204th prime" data-ur1313m3t="true">1249</a></td><td><a href="/number/205th-prime" title="205th prime" data-ur1313m3t="true">1259</a></td><td><a href="/number/206th-prime" title="206th prime" data-ur1313m3t="true">1277</a></td><td><a href="/number/207th-prime" title="207th prime" data-ur1313m3t="true">1279</a></td><td><a href="/number/208th-prime" title="208th prime" data-ur1313m3t="true">1283</a></td><td><a href="/number/209th-prime" title="209th prime" data-ur1313m3t="true">1289</a></td><td><a href="/number/210th-prime" title="210th prime" data-ur1313m3t="true">1291</a></td></tr><tr><th>211&nbsp;-&nbsp;220</th><td><a href="/number/211th-prime" title="211th prime" data-ur1313m3t="true">1297</a></td><td><a href="/number/212th-prime" title="212th prime" data-ur1313m3t="true">1301</a></td><td><a href="/number/213th-prime" title="213th prime" data-ur1313m3t="true">1303</a></td><td><a href="/number/214th-prime" title="214th prime" data-ur1313m3t="true">1307</a></td><td><a href="/number/215th-prime" title="215th prime" data-ur1313m3t="true">1319</a></td><td><a href="/number/216th-prime" title="216th prime" data-ur1313m3t="true">1321</a></td><td><a href="/number/217th-prime" title="217th prime" data-ur1313m3t="true">1327</a></td><td><a href="/number/218th-prime" title="218th prime" data-ur1313m3t="true">1361</a></td><td><a href="/number/219th-prime" title="219th prime" data-ur1313m3t="true">1367</a></td><td><a href="/number/220th-prime" title="220th prime" data-ur1313m3t="true">1373</a></td></tr><tr><th>221&nbsp;-&nbsp;230</th><td><a href="/number/221st-prime" title="221st prime" data-ur1313m3t="true">1381</a></td><td><a href="/number/222nd-prime" title="222nd prime" data-ur1313m3t="true">1399</a></td><td><a href="/number/223rd-prime" title="223rd prime" data-ur1313m3t="true">1409</a></td><td><a href="/number/224th-prime" title="224th prime" data-ur1313m3t="true">1423</a></td><td><a href="/number/225th-prime" title="225th prime" data-ur1313m3t="true">1427</a></td><td><a href="/number/226th-prime" title="226th prime" data-ur1313m3t="true">1429</a></td><td><a href="/number/227th-prime" title="227th prime" data-ur1313m3t="true">1433</a></td><td><a href="/number/228th-prime" title="228th prime" data-ur1313m3t="true">1439</a></td><td><a href="/number/229th-prime" title="229th prime" data-ur1313m3t="true">1447</a></td><td><a href="/number/230th-prime" title="230th prime" data-ur1313m3t="true">1451</a></td></tr><tr><th>231&nbsp;-&nbsp;240</th><td><a href="/number/231st-prime" title="231st prime" data-ur1313m3t="true">1453</a></td><td><a href="/number/232nd-prime" title="232nd prime" data-ur1313m3t="true">1459</a></td><td><a href="/number/233rd-prime" title="233rd prime" data-ur1313m3t="true">1471</a></td><td><a href="/number/234th-prime" title="234th prime" data-ur1313m3t="true">1481</a></td><td><a href="/number/235th-prime" title="235th prime" data-ur1313m3t="true">1483</a></td><td><a href="/number/236th-prime" title="236th prime" data-ur1313m3t="true">1487</a></td><td><a href="/number/237th-prime" title="237th prime" data-ur1313m3t="true">1489</a></td><td><a href="/number/238th-prime" title="238th prime" data-ur1313m3t="true">1493</a></td><td><a href="/number/239th-prime" title="239th prime" data-ur1313m3t="true">1499</a></td><td><a href="/number/240th-prime" title="240th prime" data-ur1313m3t="true">1511</a></td></tr><tr><th>241&nbsp;-&nbsp;250</th><td><a href="/number/241st-prime" title="241st prime" data-ur1313m3t="true">1523</a></td><td><a href="/number/242nd-prime" title="242nd prime" data-ur1313m3t="true">1531</a></td><td><a href="/number/243rd-prime" title="243rd prime" data-ur1313m3t="true">1543</a></td><td><a href="/number/244th-prime" title="244th prime" data-ur1313m3t="true">1549</a></td><td><a href="/number/245th-prime" title="245th prime" data-ur1313m3t="true">1553</a></td><td><a href="/number/246th-prime" title="246th prime" data-ur1313m3t="true">1559</a></td><td><a href="/number/247th-prime" title="247th prime" data-ur1313m3t="true">1567</a></td><td><a href="/number/248th-prime" title="248th prime" data-ur1313m3t="true">1571</a></td><td><a href="/number/249th-prime" title="249th prime" data-ur1313m3t="true">1579</a></td><td><a href="/number/250th-prime" title="250th prime" data-ur1313m3t="true">1583</a></td></tr><tr><th>251&nbsp;-&nbsp;260</th><td><a href="/number/251st-prime" title="251st prime" data-ur1313m3t="true">1597</a></td><td><a href="/number/252nd-prime" title="252nd prime" data-ur1313m3t="true">1601</a></td><td><a href="/number/253rd-prime" title="253rd prime" data-ur1313m3t="true">1607</a></td><td><a href="/number/254th-prime" title="254th prime" data-ur1313m3t="true">1609</a></td><td><a href="/number/255th-prime" title="255th prime" data-ur1313m3t="true">1613</a></td><td><a href="/number/256th-prime" title="256th prime" data-ur1313m3t="true">1619</a></td><td><a href="/number/257th-prime" title="257th prime" data-ur1313m3t="true">1621</a></td><td><a href="/number/258th-prime" title="258th prime" data-ur1313m3t="true">1627</a></td><td><a href="/number/259th-prime" title="259th prime" data-ur1313m3t="true">1637</a></td><td><a href="/number/260th-prime" title="260th prime" data-ur1313m3t="true">1657</a></td></tr><tr><th>261&nbsp;-&nbsp;270</th><td><a href="/number/261st-prime" title="261st prime" data-ur1313m3t="true">1663</a></td><td><a href="/number/262nd-prime" title="262nd prime" data-ur1313m3t="true">1667</a></td><td><a href="/number/263rd-prime" title="263rd prime" data-ur1313m3t="true">1669</a></td><td><a href="/number/264th-prime" title="264th prime" data-ur1313m3t="true">1693</a></td><td><a href="/number/265th-prime" title="265th prime" data-ur1313m3t="true">1697</a></td><td><a href="/number/266th-prime" title="266th prime" data-ur1313m3t="true">1699</a></td><td><a href="/number/267th-prime" title="267th prime" data-ur1313m3t="true">1709</a></td><td><a href="/number/268th-prime" title="268th prime" data-ur1313m3t="true">1721</a></td><td><a href="/number/269th-prime" title="269th prime" data-ur1313m3t="true">1723</a></td><td><a href="/number/270th-prime" title="270th prime" data-ur1313m3t="true">1733</a></td></tr><tr><th>271&nbsp;-&nbsp;280</th><td><a href="/number/271st-prime" title="271st prime" data-ur1313m3t="true">1741</a></td><td><a href="/number/272nd-prime" title="272nd prime" data-ur1313m3t="true">1747</a></td><td><a href="/number/273rd-prime" title="273rd prime" data-ur1313m3t="true">1753</a></td><td><a href="/number/274th-prime" title="274th prime" data-ur1313m3t="true">1759</a></td><td><a href="/number/275th-prime" title="275th prime" data-ur1313m3t="true">1777</a></td><td><a href="/number/276th-prime" title="276th prime" data-ur1313m3t="true">1783</a></td><td><a href="/number/277th-prime" title="277th prime" data-ur1313m3t="true">1787</a></td><td><a href="/number/278th-prime" title="278th prime" data-ur1313m3t="true">1789</a></td><td><a href="/number/279th-prime" title="279th prime" data-ur1313m3t="true">1801</a></td><td><a href="/number/280th-prime" title="280th prime" data-ur1313m3t="true">1811</a></td></tr><tr><th>281&nbsp;-&nbsp;290</th><td><a href="/number/281st-prime" title="281st prime" data-ur1313m3t="true">1823</a></td><td><a href="/number/282nd-prime" title="282nd prime" data-ur1313m3t="true">1831</a></td><td><a href="/number/283rd-prime" title="283rd prime" data-ur1313m3t="true">1847</a></td><td><a href="/number/284th-prime" title="284th prime" data-ur1313m3t="true">1861</a></td><td><a href="/number/285th-prime" title="285th prime" data-ur1313m3t="true">1867</a></td><td><a href="/number/286th-prime" title="286th prime" data-ur1313m3t="true">1871</a></td><td><a href="/number/287th-prime" title="287th prime" data-ur1313m3t="true">1873</a></td><td><a href="/number/288th-prime" title="288th prime" data-ur1313m3t="true">1877</a></td><td><a href="/number/289th-prime" title="289th prime" data-ur1313m3t="true">1879</a></td><td><a href="/number/290th-prime" title="290th prime" data-ur1313m3t="true">1889</a></td></tr><tr><th>291&nbsp;-&nbsp;300</th><td><a href="/number/291st-prime" title="291st prime" data-ur1313m3t="true">1901</a></td><td><a href="/number/292nd-prime" title="292nd prime" data-ur1313m3t="true">1907</a></td><td><a href="/number/293rd-prime" title="293rd prime" data-ur1313m3t="true">1913</a></td><td><a href="/number/294th-prime" title="294th prime" data-ur1313m3t="true">1931</a></td><td><a href="/number/295th-prime" title="295th prime" data-ur1313m3t="true">1933</a></td><td><a href="/number/296th-prime" title="296th prime" data-ur1313m3t="true">1949</a></td><td><a href="/number/297th-prime" title="297th prime" data-ur1313m3t="true">1951</a></td><td><a href="/number/298th-prime" title="298th prime" data-ur1313m3t="true">1973</a></td><td><a href="/number/299th-prime" title="299th prime" data-ur1313m3t="true">1979</a></td><td><a href="/number/300th-prime" title="300th prime" data-ur1313m3t="true">1987</a></td></tr><tr><th>301&nbsp;-&nbsp;310</th><td><a href="/number/301st-prime" title="301st prime" data-ur1313m3t="true">1993</a></td><td><a href="/number/302nd-prime" title="302nd prime" data-ur1313m3t="true">1997</a></td><td><a href="/number/303rd-prime" title="303rd prime" data-ur1313m3t="true">1999</a></td><td><a href="/number/304th-prime" title="304th prime" data-ur1313m3t="true">2003</a></td><td><a href="/number/305th-prime" title="305th prime" data-ur1313m3t="true">2011</a></td><td><a href="/number/306th-prime" title="306th prime" data-ur1313m3t="true">2017</a></td><td><a href="/number/307th-prime" title="307th prime" data-ur1313m3t="true">2027</a></td><td><a href="/number/308th-prime" title="308th prime" data-ur1313m3t="true">2029</a></td><td><a href="/number/309th-prime" title="309th prime" data-ur1313m3t="true">2039</a></td><td><a href="/number/310th-prime" title="310th prime" data-ur1313m3t="true">2053</a></td></tr><tr><th>311&nbsp;-&nbsp;320</th><td><a href="/number/311th-prime" title="311th prime" data-ur1313m3t="true">2063</a></td><td><a href="/number/312th-prime" title="312th prime" data-ur1313m3t="true">2069</a></td><td><a href="/number/313th-prime" title="313th prime" data-ur1313m3t="true">2081</a></td><td><a href="/number/314th-prime" title="314th prime" data-ur1313m3t="true">2083</a></td><td><a href="/number/315th-prime" title="315th prime" data-ur1313m3t="true">2087</a></td><td><a href="/number/316th-prime" title="316th prime" data-ur1313m3t="true">2089</a></td><td><a href="/number/317th-prime" title="317th prime" data-ur1313m3t="true">2099</a></td><td><a href="/number/318th-prime" title="318th prime" data-ur1313m3t="true">2111</a></td><td><a href="/number/319th-prime" title="319th prime" data-ur1313m3t="true">2113</a></td><td><a href="/number/320th-prime" title="320th prime" data-ur1313m3t="true">2129</a></td></tr><tr><th>321&nbsp;-&nbsp;330</th><td><a href="/number/321st-prime" title="321st prime" data-ur1313m3t="true">2131</a></td><td><a href="/number/322nd-prime" title="322nd prime" data-ur1313m3t="true">2137</a></td><td><a href="/number/323rd-prime" title="323rd prime" data-ur1313m3t="true">2141</a></td><td><a href="/number/324th-prime" title="324th prime" data-ur1313m3t="true">2143</a></td><td><a href="/number/325th-prime" title="325th prime" data-ur1313m3t="true">2153</a></td><td><a href="/number/326th-prime" title="326th prime" data-ur1313m3t="true">2161</a></td><td><a href="/number/327th-prime" title="327th prime" data-ur1313m3t="true">2179</a></td><td><a href="/number/328th-prime" title="328th prime" data-ur1313m3t="true">2203</a></td><td><a href="/number/329th-prime" title="329th prime" data-ur1313m3t="true">2207</a></td><td><a href="/number/330th-prime" title="330th prime" data-ur1313m3t="true">2213</a></td></tr><tr><th>331&nbsp;-&nbsp;340</th><td><a href="/number/331st-prime" title="331st prime" data-ur1313m3t="true">2221</a></td><td><a href="/number/332nd-prime" title="332nd prime" data-ur1313m3t="true">2237</a></td><td><a href="/number/333rd-prime" title="333rd prime" data-ur1313m3t="true">2239</a></td><td><a href="/number/334th-prime" title="334th prime" data-ur1313m3t="true">2243</a></td><td><a href="/number/335th-prime" title="335th prime" data-ur1313m3t="true">2251</a></td><td><a href="/number/336th-prime" title="336th prime" data-ur1313m3t="true">2267</a></td><td><a href="/number/337th-prime" title="337th prime" data-ur1313m3t="true">2269</a></td><td><a href="/number/338th-prime" title="338th prime" data-ur1313m3t="true">2273</a></td><td><a href="/number/339th-prime" title="339th prime" data-ur1313m3t="true">2281</a></td><td><a href="/number/340th-prime" title="340th prime" data-ur1313m3t="true">2287</a></td></tr><tr><th>341&nbsp;-&nbsp;350</th><td><a href="/number/341st-prime" title="341st prime" data-ur1313m3t="true">2293</a></td><td><a href="/number/342nd-prime" title="342nd prime" data-ur1313m3t="true">2297</a></td><td><a href="/number/343rd-prime" title="343rd prime" data-ur1313m3t="true">2309</a></td><td><a href="/number/344th-prime" title="344th prime" data-ur1313m3t="true">2311</a></td><td><a href="/number/345th-prime" title="345th prime" data-ur1313m3t="true">2333</a></td><td><a href="/number/346th-prime" title="346th prime" data-ur1313m3t="true">2339</a></td><td><a href="/number/347th-prime" title="347th prime" data-ur1313m3t="true">2341</a></td><td><a href="/number/348th-prime" title="348th prime" data-ur1313m3t="true">2347</a></td><td><a href="/number/349th-prime" title="349th prime" data-ur1313m3t="true">2351</a></td><td><a href="/number/350th-prime" title="350th prime" data-ur1313m3t="true">2357</a></td></tr><tr><th>351&nbsp;-&nbsp;360</th><td><a href="/number/351st-prime" title="351st prime" data-ur1313m3t="true">2371</a></td><td><a href="/number/352nd-prime" title="352nd prime" data-ur1313m3t="true">2377</a></td><td><a href="/number/353rd-prime" title="353rd prime" data-ur1313m3t="true">2381</a></td><td><a href="/number/354th-prime" title="354th prime" data-ur1313m3t="true">2383</a></td><td><a href="/number/355th-prime" title="355th prime" data-ur1313m3t="true">2389</a></td><td><a href="/number/356th-prime" title="356th prime" data-ur1313m3t="true">2393</a></td><td><a href="/number/357th-prime" title="357th prime" data-ur1313m3t="true">2399</a></td><td><a href="/number/358th-prime" title="358th prime" data-ur1313m3t="true">2411</a></td><td><a href="/number/359th-prime" title="359th prime" data-ur1313m3t="true">2417</a></td><td><a href="/number/360th-prime" title="360th prime" data-ur1313m3t="true">2423</a></td></tr><tr><th>361&nbsp;-&nbsp;370</th><td><a href="/number/361st-prime" title="361st prime" data-ur1313m3t="true">2437</a></td><td><a href="/number/362nd-prime" title="362nd prime" data-ur1313m3t="true">2441</a></td><td><a href="/number/363rd-prime" title="363rd prime" data-ur1313m3t="true">2447</a></td><td><a href="/number/364th-prime" title="364th prime" data-ur1313m3t="true">2459</a></td><td><a href="/number/365th-prime" title="365th prime" data-ur1313m3t="true">2467</a></td><td><a href="/number/366th-prime" title="366th prime" data-ur1313m3t="true">2473</a></td><td><a href="/number/367th-prime" title="367th prime" data-ur1313m3t="true">2477</a></td><td><a href="/number/368th-prime" title="368th prime" data-ur1313m3t="true">2503</a></td><td><a href="/number/369th-prime" title="369th prime" data-ur1313m3t="true">2521</a></td><td><a href="/number/370th-prime" title="370th prime" data-ur1313m3t="true">2531</a></td></tr><tr><th>371&nbsp;-&nbsp;380</th><td><a href="/number/371st-prime" title="371st prime" data-ur1313m3t="true">2539</a></td><td><a href="/number/372nd-prime" title="372nd prime" data-ur1313m3t="true">2543</a></td><td><a href="/number/373rd-prime" title="373rd prime" data-ur1313m3t="true">2549</a></td><td><a href="/number/374th-prime" title="374th prime" data-ur1313m3t="true">2551</a></td><td><a href="/number/375th-prime" title="375th prime" data-ur1313m3t="true">2557</a></td><td><a href="/number/376th-prime" title="376th prime" data-ur1313m3t="true">2579</a></td><td><a href="/number/377th-prime" title="377th prime" data-ur1313m3t="true">2591</a></td><td><a href="/number/378th-prime" title="378th prime" data-ur1313m3t="true">2593</a></td><td><a href="/number/379th-prime" title="379th prime" data-ur1313m3t="true">2609</a></td><td><a href="/number/380th-prime" title="380th prime" data-ur1313m3t="true">2617</a></td></tr><tr><th>381&nbsp;-&nbsp;390</th><td><a href="/number/381st-prime" title="381st prime" data-ur1313m3t="true">2621</a></td><td><a href="/number/382nd-prime" title="382nd prime" data-ur1313m3t="true">2633</a></td><td><a href="/number/383rd-prime" title="383rd prime" data-ur1313m3t="true">2647</a></td><td><a href="/number/384th-prime" title="384th prime" data-ur1313m3t="true">2657</a></td><td><a href="/number/385th-prime" title="385th prime" data-ur1313m3t="true">2659</a></td><td><a href="/number/386th-prime" title="386th prime" data-ur1313m3t="true">2663</a></td><td><a href="/number/387th-prime" title="387th prime" data-ur1313m3t="true">2671</a></td><td><a href="/number/388th-prime" title="388th prime" data-ur1313m3t="true">2677</a></td><td><a href="/number/389th-prime" title="389th prime" data-ur1313m3t="true">2683</a></td><td><a href="/number/390th-prime" title="390th prime" data-ur1313m3t="true">2687</a></td></tr><tr><th>391&nbsp;-&nbsp;400</th><td><a href="/number/391st-prime" title="391st prime" data-ur1313m3t="true">2689</a></td><td><a href="/number/392nd-prime" title="392nd prime" data-ur1313m3t="true">2693</a></td><td><a href="/number/393rd-prime" title="393rd prime" data-ur1313m3t="true">2699</a></td><td><a href="/number/394th-prime" title="394th prime" data-ur1313m3t="true">2707</a></td><td><a href="/number/395th-prime" title="395th prime" data-ur1313m3t="true">2711</a></td><td><a href="/number/396th-prime" title="396th prime" data-ur1313m3t="true">2713</a></td><td><a href="/number/397th-prime" title="397th prime" data-ur1313m3t="true">2719</a></td><td><a href="/number/398th-prime" title="398th prime" data-ur1313m3t="true">2729</a></td><td><a href="/number/399th-prime" title="399th prime" data-ur1313m3t="true">2731</a></td><td><a href="/number/400th-prime" title="400th prime" data-ur1313m3t="true">2741</a></td></tr><tr><th>401&nbsp;-&nbsp;410</th><td><a href="/number/401st-prime" title="401st prime" data-ur1313m3t="true">2749</a></td><td><a href="/number/402nd-prime" title="402nd prime" data-ur1313m3t="true">2753</a></td><td><a href="/number/403rd-prime" title="403rd prime" data-ur1313m3t="true">2767</a></td><td><a href="/number/404th-prime" title="404th prime" data-ur1313m3t="true">2777</a></td><td><a href="/number/405th-prime" title="405th prime" data-ur1313m3t="true">2789</a></td><td><a href="/number/406th-prime" title="406th prime" data-ur1313m3t="true">2791</a></td><td><a href="/number/407th-prime" title="407th prime" data-ur1313m3t="true">2797</a></td><td><a href="/number/408th-prime" title="408th prime" data-ur1313m3t="true">2801</a></td><td><a href="/number/409th-prime" title="409th prime" data-ur1313m3t="true">2803</a></td><td><a href="/number/410th-prime" title="410th prime" data-ur1313m3t="true">2819</a></td></tr><tr><th>411&nbsp;-&nbsp;420</th><td><a href="/number/411th-prime" title="411th prime" data-ur1313m3t="true">2833</a></td><td><a href="/number/412th-prime" title="412th prime" data-ur1313m3t="true">2837</a></td><td><a href="/number/413th-prime" title="413th prime" data-ur1313m3t="true">2843</a></td><td><a href="/number/414th-prime" title="414th prime" data-ur1313m3t="true">2851</a></td><td><a href="/number/415th-prime" title="415th prime" data-ur1313m3t="true">2857</a></td><td><a href="/number/416th-prime" title="416th prime" data-ur1313m3t="true">2861</a></td><td><a href="/number/417th-prime" title="417th prime" data-ur1313m3t="true">2879</a></td><td><a href="/number/418th-prime" title="418th prime" data-ur1313m3t="true">2887</a></td><td><a href="/number/419th-prime" title="419th prime" data-ur1313m3t="true">2897</a></td><td><a href="/number/420th-prime" title="420th prime" data-ur1313m3t="true">2903</a></td></tr><tr><th>421&nbsp;-&nbsp;430</th><td><a href="/number/421st-prime" title="421st prime" data-ur1313m3t="true">2909</a></td><td><a href="/number/422nd-prime" title="422nd prime" data-ur1313m3t="true">2917</a></td><td><a href="/number/423rd-prime" title="423rd prime" data-ur1313m3t="true">2927</a></td><td><a href="/number/424th-prime" title="424th prime" data-ur1313m3t="true">2939</a></td><td><a href="/number/425th-prime" title="425th prime" data-ur1313m3t="true">2953</a></td><td><a href="/number/426th-prime" title="426th prime" data-ur1313m3t="true">2957</a></td><td><a href="/number/427th-prime" title="427th prime" data-ur1313m3t="true">2963</a></td><td><a href="/number/428th-prime" title="428th prime" data-ur1313m3t="true">2969</a></td><td><a href="/number/429th-prime" title="429th prime" data-ur1313m3t="true">2971</a></td><td><a href="/number/430th-prime" title="430th prime" data-ur1313m3t="true">2999</a></td></tr><tr><th>431&nbsp;-&nbsp;440</th><td><a href="/number/431st-prime" title="431st prime" data-ur1313m3t="true">3001</a></td><td><a href="/number/432nd-prime" title="432nd prime" data-ur1313m3t="true">3011</a></td><td><a href="/number/433rd-prime" title="433rd prime" data-ur1313m3t="true">3019</a></td><td><a href="/number/434th-prime" title="434th prime" data-ur1313m3t="true">3023</a></td><td><a href="/number/435th-prime" title="435th prime" data-ur1313m3t="true">3037</a></td><td><a href="/number/436th-prime" title="436th prime" data-ur1313m3t="true">3041</a></td><td><a href="/number/437th-prime" title="437th prime" data-ur1313m3t="true">3049</a></td><td><a href="/number/438th-prime" title="438th prime" data-ur1313m3t="true">3061</a></td><td><a href="/number/439th-prime" title="439th prime" data-ur1313m3t="true">3067</a></td><td><a href="/number/440th-prime" title="440th prime" data-ur1313m3t="true">3079</a></td></tr><tr><th>441&nbsp;-&nbsp;450</th><td><a href="/number/441st-prime" title="441st prime" data-ur1313m3t="true">3083</a></td><td><a href="/number/442nd-prime" title="442nd prime" data-ur1313m3t="true">3089</a></td><td><a href="/number/443rd-prime" title="443rd prime" data-ur1313m3t="true">3109</a></td><td><a href="/number/444th-prime" title="444th prime" data-ur1313m3t="true">3119</a></td><td><a href="/number/445th-prime" title="445th prime" data-ur1313m3t="true">3121</a></td><td><a href="/number/446th-prime" title="446th prime" data-ur1313m3t="true">3137</a></td><td><a href="/number/447th-prime" title="447th prime" data-ur1313m3t="true">3163</a></td><td><a href="/number/448th-prime" title="448th prime" data-ur1313m3t="true">3167</a></td><td><a href="/number/449th-prime" title="449th prime" data-ur1313m3t="true">3169</a></td><td><a href="/number/450th-prime" title="450th prime" data-ur1313m3t="true">3181</a></td></tr><tr><th>451&nbsp;-&nbsp;460</th><td><a href="/number/451st-prime" title="451st prime" data-ur1313m3t="true">3187</a></td><td><a href="/number/452nd-prime" title="452nd prime" data-ur1313m3t="true">3191</a></td><td><a href="/number/453rd-prime" title="453rd prime" data-ur1313m3t="true">3203</a></td><td><a href="/number/454th-prime" title="454th prime" data-ur1313m3t="true">3209</a></td><td><a href="/number/455th-prime" title="455th prime" data-ur1313m3t="true">3217</a></td><td><a href="/number/456th-prime" title="456th prime" data-ur1313m3t="true">3221</a></td><td><a href="/number/457th-prime" title="457th prime" data-ur1313m3t="true">3229</a></td><td><a href="/number/458th-prime" title="458th prime" data-ur1313m3t="true">3251</a></td><td><a href="/number/459th-prime" title="459th prime" data-ur1313m3t="true">3253</a></td><td><a href="/number/460th-prime" title="460th prime" data-ur1313m3t="true">3257</a></td></tr><tr><th>461&nbsp;-&nbsp;470</th><td><a href="/number/461st-prime" title="461st prime" data-ur1313m3t="true">3259</a></td><td><a href="/number/462nd-prime" title="462nd prime" data-ur1313m3t="true">3271</a></td><td><a href="/number/463rd-prime" title="463rd prime" data-ur1313m3t="true">3299</a></td><td><a href="/number/464th-prime" title="464th prime" data-ur1313m3t="true">3301</a></td><td><a href="/number/465th-prime" title="465th prime" data-ur1313m3t="true">3307</a></td><td><a href="/number/466th-prime" title="466th prime" data-ur1313m3t="true">3313</a></td><td><a href="/number/467th-prime" title="467th prime" data-ur1313m3t="true">3319</a></td><td><a href="/number/468th-prime" title="468th prime" data-ur1313m3t="true">3323</a></td><td><a href="/number/469th-prime" title="469th prime" data-ur1313m3t="true">3329</a></td><td><a href="/number/470th-prime" title="470th prime" data-ur1313m3t="true">3331</a></td></tr><tr><th>471&nbsp;-&nbsp;480</th><td><a href="/number/471st-prime" title="471st prime" data-ur1313m3t="true">3343</a></td><td><a href="/number/472nd-prime" title="472nd prime" data-ur1313m3t="true">3347</a></td><td><a href="/number/473rd-prime" title="473rd prime" data-ur1313m3t="true">3359</a></td><td><a href="/number/474th-prime" title="474th prime" data-ur1313m3t="true">3361</a></td><td><a href="/number/475th-prime" title="475th prime" data-ur1313m3t="true">3371</a></td><td><a href="/number/476th-prime" title="476th prime" data-ur1313m3t="true">3373</a></td><td><a href="/number/477th-prime" title="477th prime" data-ur1313m3t="true">3389</a></td><td><a href="/number/478th-prime" title="478th prime" data-ur1313m3t="true">3391</a></td><td><a href="/number/479th-prime" title="479th prime" data-ur1313m3t="true">3407</a></td><td><a href="/number/480th-prime" title="480th prime" data-ur1313m3t="true">3413</a></td></tr><tr><th>481&nbsp;-&nbsp;490</th><td><a href="/number/481st-prime" title="481st prime" data-ur1313m3t="true">3433</a></td><td><a href="/number/482nd-prime" title="482nd prime" data-ur1313m3t="true">3449</a></td><td><a href="/number/483rd-prime" title="483rd prime" data-ur1313m3t="true">3457</a></td><td><a href="/number/484th-prime" title="484th prime" data-ur1313m3t="true">3461</a></td><td><a href="/number/485th-prime" title="485th prime" data-ur1313m3t="true">3463</a></td><td><a href="/number/486th-prime" title="486th prime" data-ur1313m3t="true">3467</a></td><td><a href="/number/487th-prime" title="487th prime" data-ur1313m3t="true">3469</a></td><td><a href="/number/488th-prime" title="488th prime" data-ur1313m3t="true">3491</a></td><td><a href="/number/489th-prime" title="489th prime" data-ur1313m3t="true">3499</a></td><td><a href="/number/490th-prime" title="490th prime" data-ur1313m3t="true">3511</a></td></tr><tr><th>491&nbsp;-&nbsp;500</th><td><a href="/number/491st-prime" title="491st prime" data-ur1313m3t="true">3517</a></td><td><a href="/number/492nd-prime" title="492nd prime" data-ur1313m3t="true">3527</a></td><td><a href="/number/493rd-prime" title="493rd prime" data-ur1313m3t="true">3529</a></td><td><a href="/number/494th-prime" title="494th prime" data-ur1313m3t="true">3533</a></td><td><a href="/number/495th-prime" title="495th prime" data-ur1313m3t="true">3539</a></td><td><a href="/number/496th-prime" title="496th prime" data-ur1313m3t="true">3541</a></td><td><a href="/number/497th-prime" title="497th prime" data-ur1313m3t="true">3547</a></td><td><a href="/number/498th-prime" title="498th prime" data-ur1313m3t="true">3557</a></td><td><a href="/number/499th-prime" title="499th prime" data-ur1313m3t="true">3559</a></td><td><a href="/number/500th-prime" title="500th prime" data-ur1313m3t="true">3571</a></td></tr><tr><th>501&nbsp;-&nbsp;510</th><td><a href="/number/501st-prime" title="501st prime" data-ur1313m3t="true">3581</a></td><td><a href="/number/502nd-prime" title="502nd prime" data-ur1313m3t="true">3583</a></td><td><a href="/number/503rd-prime" title="503rd prime" data-ur1313m3t="true">3593</a></td><td><a href="/number/504th-prime" title="504th prime" data-ur1313m3t="true">3607</a></td><td><a href="/number/505th-prime" title="505th prime" data-ur1313m3t="true">3613</a></td><td><a href="/number/506th-prime" title="506th prime" data-ur1313m3t="true">3617</a></td><td><a href="/number/507th-prime" title="507th prime" data-ur1313m3t="true">3623</a></td><td><a href="/number/508th-prime" title="508th prime" data-ur1313m3t="true">3631</a></td><td><a href="/number/509th-prime" title="509th prime" data-ur1313m3t="true">3637</a></td><td><a href="/number/510th-prime" title="510th prime" data-ur1313m3t="true">3643</a></td></tr><tr><th>511&nbsp;-&nbsp;520</th><td><a href="/number/511th-prime" title="511th prime" data-ur1313m3t="true">3659</a></td><td><a href="/number/512th-prime" title="512th prime" data-ur1313m3t="true">3671</a></td><td><a href="/number/513th-prime" title="513th prime" data-ur1313m3t="true">3673</a></td><td><a href="/number/514th-prime" title="514th prime" data-ur1313m3t="true">3677</a></td><td><a href="/number/515th-prime" title="515th prime" data-ur1313m3t="true">3691</a></td><td><a href="/number/516th-prime" title="516th prime" data-ur1313m3t="true">3697</a></td><td><a href="/number/517th-prime" title="517th prime" data-ur1313m3t="true">3701</a></td><td><a href="/number/518th-prime" title="518th prime" data-ur1313m3t="true">3709</a></td><td><a href="/number/519th-prime" title="519th prime" data-ur1313m3t="true">3719</a></td><td><a href="/number/520th-prime" title="520th prime" data-ur1313m3t="true">3727</a></td></tr><tr><th>521&nbsp;-&nbsp;530</th><td><a href="/number/521st-prime" title="521st prime" data-ur1313m3t="true">3733</a></td><td><a href="/number/522nd-prime" title="522nd prime" data-ur1313m3t="true">3739</a></td><td><a href="/number/523rd-prime" title="523rd prime" data-ur1313m3t="true">3761</a></td><td><a href="/number/524th-prime" title="524th prime" data-ur1313m3t="true">3767</a></td><td><a href="/number/525th-prime" title="525th prime" data-ur1313m3t="true">3769</a></td><td><a href="/number/526th-prime" title="526th prime" data-ur1313m3t="true">3779</a></td><td><a href="/number/527th-prime" title="527th prime" data-ur1313m3t="true">3793</a></td><td><a href="/number/528th-prime" title="528th prime" data-ur1313m3t="true">3797</a></td><td><a href="/number/529th-prime" title="529th prime" data-ur1313m3t="true">3803</a></td><td><a href="/number/530th-prime" title="530th prime" data-ur1313m3t="true">3821</a></td></tr><tr><th>531&nbsp;-&nbsp;540</th><td><a href="/number/531st-prime" title="531st prime" data-ur1313m3t="true">3823</a></td><td><a href="/number/532nd-prime" title="532nd prime" data-ur1313m3t="true">3833</a></td><td><a href="/number/533rd-prime" title="533rd prime" data-ur1313m3t="true">3847</a></td><td><a href="/number/534th-prime" title="534th prime" data-ur1313m3t="true">3851</a></td><td><a href="/number/535th-prime" title="535th prime" data-ur1313m3t="true">3853</a></td><td><a href="/number/536th-prime" title="536th prime" data-ur1313m3t="true">3863</a></td><td><a href="/number/537th-prime" title="537th prime" data-ur1313m3t="true">3877</a></td><td><a href="/number/538th-prime" title="538th prime" data-ur1313m3t="true">3881</a></td><td><a href="/number/539th-prime" title="539th prime" data-ur1313m3t="true">3889</a></td><td><a href="/number/540th-prime" title="540th prime" data-ur1313m3t="true">3907</a></td></tr><tr><th>541&nbsp;-&nbsp;550</th><td><a href="/number/541st-prime" title="541st prime" data-ur1313m3t="true">3911</a></td><td><a href="/number/542nd-prime" title="542nd prime" data-ur1313m3t="true">3917</a></td><td><a href="/number/543rd-prime" title="543rd prime" data-ur1313m3t="true">3919</a></td><td><a href="/number/544th-prime" title="544th prime" data-ur1313m3t="true">3923</a></td><td><a href="/number/545th-prime" title="545th prime" data-ur1313m3t="true">3929</a></td><td><a href="/number/546th-prime" title="546th prime" data-ur1313m3t="true">3931</a></td><td><a href="/number/547th-prime" title="547th prime" data-ur1313m3t="true">3943</a></td><td><a href="/number/548th-prime" title="548th prime" data-ur1313m3t="true">3947</a></td><td><a href="/number/549th-prime" title="549th prime" data-ur1313m3t="true">3967</a></td><td><a href="/number/550th-prime" title="550th prime" data-ur1313m3t="true">3989</a></td></tr><tr><th>551&nbsp;-&nbsp;560</th><td><a href="/number/551st-prime" title="551st prime" data-ur1313m3t="true">4001</a></td><td><a href="/number/552nd-prime" title="552nd prime" data-ur1313m3t="true">4003</a></td><td><a href="/number/553rd-prime" title="553rd prime" data-ur1313m3t="true">4007</a></td><td><a href="/number/554th-prime" title="554th prime" data-ur1313m3t="true">4013</a></td><td><a href="/number/555th-prime" title="555th prime" data-ur1313m3t="true">4019</a></td><td><a href="/number/556th-prime" title="556th prime" data-ur1313m3t="true">4021</a></td><td><a href="/number/557th-prime" title="557th prime" data-ur1313m3t="true">4027</a></td><td><a href="/number/558th-prime" title="558th prime" data-ur1313m3t="true">4049</a></td><td><a href="/number/559th-prime" title="559th prime" data-ur1313m3t="true">4051</a></td><td><a href="/number/560th-prime" title="560th prime" data-ur1313m3t="true">4057</a></td></tr><tr><th>561&nbsp;-&nbsp;570</th><td><a href="/number/561st-prime" title="561st prime" data-ur1313m3t="true">4073</a></td><td><a href="/number/562nd-prime" title="562nd prime" data-ur1313m3t="true">4079</a></td><td><a href="/number/563rd-prime" title="563rd prime" data-ur1313m3t="true">4091</a></td><td><a href="/number/564th-prime" title="564th prime" data-ur1313m3t="true">4093</a></td><td><a href="/number/565th-prime" title="565th prime" data-ur1313m3t="true">4099</a></td><td><a href="/number/566th-prime" title="566th prime" data-ur1313m3t="true">4111</a></td><td><a href="/number/567th-prime" title="567th prime" data-ur1313m3t="true">4127</a></td><td><a href="/number/568th-prime" title="568th prime" data-ur1313m3t="true">4129</a></td><td><a href="/number/569th-prime" title="569th prime" data-ur1313m3t="true">4133</a></td><td><a href="/number/570th-prime" title="570th prime" data-ur1313m3t="true">4139</a></td></tr><tr><th>571&nbsp;-&nbsp;580</th><td><a href="/number/571st-prime" title="571st prime" data-ur1313m3t="true">4153</a></td><td><a href="/number/572nd-prime" title="572nd prime" data-ur1313m3t="true">4157</a></td><td><a href="/number/573rd-prime" title="573rd prime" data-ur1313m3t="true">4159</a></td><td><a href="/number/574th-prime" title="574th prime" data-ur1313m3t="true">4177</a></td><td><a href="/number/575th-prime" title="575th prime" data-ur1313m3t="true">4201</a></td><td><a href="/number/576th-prime" title="576th prime" data-ur1313m3t="true">4211</a></td><td><a href="/number/577th-prime" title="577th prime" data-ur1313m3t="true">4217</a></td><td><a href="/number/578th-prime" title="578th prime" data-ur1313m3t="true">4219</a></td><td><a href="/number/579th-prime" title="579th prime" data-ur1313m3t="true">4229</a></td><td><a href="/number/580th-prime" title="580th prime" data-ur1313m3t="true">4231</a></td></tr><tr><th>581&nbsp;-&nbsp;590</th><td><a href="/number/581st-prime" title="581st prime" data-ur1313m3t="true">4241</a></td><td><a href="/number/582nd-prime" title="582nd prime" data-ur1313m3t="true">4243</a></td><td><a href="/number/583rd-prime" title="583rd prime" data-ur1313m3t="true">4253</a></td><td><a href="/number/584th-prime" title="584th prime" data-ur1313m3t="true">4259</a></td><td><a href="/number/585th-prime" title="585th prime" data-ur1313m3t="true">4261</a></td><td><a href="/number/586th-prime" title="586th prime" data-ur1313m3t="true">4271</a></td><td><a href="/number/587th-prime" title="587th prime" data-ur1313m3t="true">4273</a></td><td><a href="/number/588th-prime" title="588th prime" data-ur1313m3t="true">4283</a></td><td><a href="/number/589th-prime" title="589th prime" data-ur1313m3t="true">4289</a></td><td><a href="/number/590th-prime" title="590th prime" data-ur1313m3t="true">4297</a></td></tr><tr><th>591&nbsp;-&nbsp;600</th><td><a href="/number/591st-prime" title="591st prime" data-ur1313m3t="true">4327</a></td><td><a href="/number/592nd-prime" title="592nd prime" data-ur1313m3t="true">4337</a></td><td><a href="/number/593rd-prime" title="593rd prime" data-ur1313m3t="true">4339</a></td><td><a href="/number/594th-prime" title="594th prime" data-ur1313m3t="true">4349</a></td><td><a href="/number/595th-prime" title="595th prime" data-ur1313m3t="true">4357</a></td><td><a href="/number/596th-prime" title="596th prime" data-ur1313m3t="true">4363</a></td><td><a href="/number/597th-prime" title="597th prime" data-ur1313m3t="true">4373</a></td><td><a href="/number/598th-prime" title="598th prime" data-ur1313m3t="true">4391</a></td><td><a href="/number/599th-prime" title="599th prime" data-ur1313m3t="true">4397</a></td><td><a href="/number/600th-prime" title="600th prime" data-ur1313m3t="true">4409</a></td></tr><tr><th>601&nbsp;-&nbsp;610</th><td><a href="/number/601st-prime" title="601st prime" data-ur1313m3t="true">4421</a></td><td><a href="/number/602nd-prime" title="602nd prime" data-ur1313m3t="true">4423</a></td><td><a href="/number/603rd-prime" title="603rd prime" data-ur1313m3t="true">4441</a></td><td><a href="/number/604th-prime" title="604th prime" data-ur1313m3t="true">4447</a></td><td><a href="/number/605th-prime" title="605th prime" data-ur1313m3t="true">4451</a></td><td><a href="/number/606th-prime" title="606th prime" data-ur1313m3t="true">4457</a></td><td><a href="/number/607th-prime" title="607th prime" data-ur1313m3t="true">4463</a></td><td><a href="/number/608th-prime" title="608th prime" data-ur1313m3t="true">4481</a></td><td><a href="/number/609th-prime" title="609th prime" data-ur1313m3t="true">4483</a></td><td><a href="/number/610th-prime" title="610th prime" data-ur1313m3t="true">4493</a></td></tr><tr><th>611&nbsp;-&nbsp;620</th><td><a href="/number/611th-prime" title="611th prime" data-ur1313m3t="true">4507</a></td><td><a href="/number/612th-prime" title="612th prime" data-ur1313m3t="true">4513</a></td><td><a href="/number/613th-prime" title="613th prime" data-ur1313m3t="true">4517</a></td><td><a href="/number/614th-prime" title="614th prime" data-ur1313m3t="true">4519</a></td><td><a href="/number/615th-prime" title="615th prime" data-ur1313m3t="true">4523</a></td><td><a href="/number/616th-prime" title="616th prime" data-ur1313m3t="true">4547</a></td><td><a href="/number/617th-prime" title="617th prime" data-ur1313m3t="true">4549</a></td><td><a href="/number/618th-prime" title="618th prime" data-ur1313m3t="true">4561</a></td><td><a href="/number/619th-prime" title="619th prime" data-ur1313m3t="true">4567</a></td><td><a href="/number/620th-prime" title="620th prime" data-ur1313m3t="true">4583</a></td></tr><tr><th>621&nbsp;-&nbsp;630</th><td><a href="/number/621st-prime" title="621st prime" data-ur1313m3t="true">4591</a></td><td><a href="/number/622nd-prime" title="622nd prime" data-ur1313m3t="true">4597</a></td><td><a href="/number/623rd-prime" title="623rd prime" data-ur1313m3t="true">4603</a></td><td><a href="/number/624th-prime" title="624th prime" data-ur1313m3t="true">4621</a></td><td><a href="/number/625th-prime" title="625th prime" data-ur1313m3t="true">4637</a></td><td><a href="/number/626th-prime" title="626th prime" data-ur1313m3t="true">4639</a></td><td><a href="/number/627th-prime" title="627th prime" data-ur1313m3t="true">4643</a></td><td><a href="/number/628th-prime" title="628th prime" data-ur1313m3t="true">4649</a></td><td><a href="/number/629th-prime" title="629th prime" data-ur1313m3t="true">4651</a></td><td><a href="/number/630th-prime" title="630th prime" data-ur1313m3t="true">4657</a></td></tr><tr><th>631&nbsp;-&nbsp;640</th><td><a href="/number/631st-prime" title="631st prime" data-ur1313m3t="true">4663</a></td><td><a href="/number/632nd-prime" title="632nd prime" data-ur1313m3t="true">4673</a></td><td><a href="/number/633rd-prime" title="633rd prime" data-ur1313m3t="true">4679</a></td><td><a href="/number/634th-prime" title="634th prime" data-ur1313m3t="true">4691</a></td><td><a href="/number/635th-prime" title="635th prime" data-ur1313m3t="true">4703</a></td><td><a href="/number/636th-prime" title="636th prime" data-ur1313m3t="true">4721</a></td><td><a href="/number/637th-prime" title="637th prime" data-ur1313m3t="true">4723</a></td><td><a href="/number/638th-prime" title="638th prime" data-ur1313m3t="true">4729</a></td><td><a href="/number/639th-prime" title="639th prime" data-ur1313m3t="true">4733</a></td><td><a href="/number/640th-prime" title="640th prime" data-ur1313m3t="true">4751</a></td></tr><tr><th>641&nbsp;-&nbsp;650</th><td><a href="/number/641st-prime" title="641st prime" data-ur1313m3t="true">4759</a></td><td><a href="/number/642nd-prime" title="642nd prime" data-ur1313m3t="true">4783</a></td><td><a href="/number/643rd-prime" title="643rd prime" data-ur1313m3t="true">4787</a></td><td><a href="/number/644th-prime" title="644th prime" data-ur1313m3t="true">4789</a></td><td><a href="/number/645th-prime" title="645th prime" data-ur1313m3t="true">4793</a></td><td><a href="/number/646th-prime" title="646th prime" data-ur1313m3t="true">4799</a></td><td><a href="/number/647th-prime" title="647th prime" data-ur1313m3t="true">4801</a></td><td><a href="/number/648th-prime" title="648th prime" data-ur1313m3t="true">4813</a></td><td><a href="/number/649th-prime" title="649th prime" data-ur1313m3t="true">4817</a></td><td><a href="/number/650th-prime" title="650th prime" data-ur1313m3t="true">4831</a></td></tr><tr><th>651&nbsp;-&nbsp;660</th><td><a href="/number/651st-prime" title="651st prime" data-ur1313m3t="true">4861</a></td><td><a href="/number/652nd-prime" title="652nd prime" data-ur1313m3t="true">4871</a></td><td><a href="/number/653rd-prime" title="653rd prime" data-ur1313m3t="true">4877</a></td><td><a href="/number/654th-prime" title="654th prime" data-ur1313m3t="true">4889</a></td><td><a href="/number/655th-prime" title="655th prime" data-ur1313m3t="true">4903</a></td><td><a href="/number/656th-prime" title="656th prime" data-ur1313m3t="true">4909</a></td><td><a href="/number/657th-prime" title="657th prime" data-ur1313m3t="true">4919</a></td><td><a href="/number/658th-prime" title="658th prime" data-ur1313m3t="true">4931</a></td><td><a href="/number/659th-prime" title="659th prime" data-ur1313m3t="true">4933</a></td><td><a href="/number/660th-prime" title="660th prime" data-ur1313m3t="true">4937</a></td></tr><tr><th>661&nbsp;-&nbsp;670</th><td><a href="/number/661st-prime" title="661st prime" data-ur1313m3t="true">4943</a></td><td><a href="/number/662nd-prime" title="662nd prime" data-ur1313m3t="true">4951</a></td><td><a href="/number/663rd-prime" title="663rd prime" data-ur1313m3t="true">4957</a></td><td><a href="/number/664th-prime" title="664th prime" data-ur1313m3t="true">4967</a></td><td><a href="/number/665th-prime" title="665th prime" data-ur1313m3t="true">4969</a></td><td><a href="/number/666th-prime" title="666th prime" data-ur1313m3t="true">4973</a></td><td><a href="/number/667th-prime" title="667th prime" data-ur1313m3t="true">4987</a></td><td><a href="/number/668th-prime" title="668th prime" data-ur1313m3t="true">4993</a></td><td><a href="/number/669th-prime" title="669th prime" data-ur1313m3t="true">4999</a></td><td><a href="/number/670th-prime" title="670th prime" data-ur1313m3t="true">5003</a></td></tr><tr><th>671&nbsp;-&nbsp;680</th><td><a href="/number/671st-prime" title="671st prime" data-ur1313m3t="true">5009</a></td><td><a href="/number/672nd-prime" title="672nd prime" data-ur1313m3t="true">5011</a></td><td><a href="/number/673rd-prime" title="673rd prime" data-ur1313m3t="true">5021</a></td><td><a href="/number/674th-prime" title="674th prime" data-ur1313m3t="true">5023</a></td><td><a href="/number/675th-prime" title="675th prime" data-ur1313m3t="true">5039</a></td><td><a href="/number/676th-prime" title="676th prime" data-ur1313m3t="true">5051</a></td><td><a href="/number/677th-prime" title="677th prime" data-ur1313m3t="true">5059</a></td><td><a href="/number/678th-prime" title="678th prime" data-ur1313m3t="true">5077</a></td><td><a href="/number/679th-prime" title="679th prime" data-ur1313m3t="true">5081</a></td><td><a href="/number/680th-prime" title="680th prime" data-ur1313m3t="true">5087</a></td></tr><tr><th>681&nbsp;-&nbsp;690</th><td><a href="/number/681st-prime" title="681st prime" data-ur1313m3t="true">5099</a></td><td><a href="/number/682nd-prime" title="682nd prime" data-ur1313m3t="true">5101</a></td><td><a href="/number/683rd-prime" title="683rd prime" data-ur1313m3t="true">5107</a></td><td><a href="/number/684th-prime" title="684th prime" data-ur1313m3t="true">5113</a></td><td><a href="/number/685th-prime" title="685th prime" data-ur1313m3t="true">5119</a></td><td><a href="/number/686th-prime" title="686th prime" data-ur1313m3t="true">5147</a></td><td><a href="/number/687th-prime" title="687th prime" data-ur1313m3t="true">5153</a></td><td><a href="/number/688th-prime" title="688th prime" data-ur1313m3t="true">5167</a></td><td><a href="/number/689th-prime" title="689th prime" data-ur1313m3t="true">5171</a></td><td><a href="/number/690th-prime" title="690th prime" data-ur1313m3t="true">5179</a></td></tr><tr><th>691&nbsp;-&nbsp;700</th><td><a href="/number/691st-prime" title="691st prime" data-ur1313m3t="true">5189</a></td><td><a href="/number/692nd-prime" title="692nd prime" data-ur1313m3t="true">5197</a></td><td><a href="/number/693rd-prime" title="693rd prime" data-ur1313m3t="true">5209</a></td><td><a href="/number/694th-prime" title="694th prime" data-ur1313m3t="true">5227</a></td><td><a href="/number/695th-prime" title="695th prime" data-ur1313m3t="true">5231</a></td><td><a href="/number/696th-prime" title="696th prime" data-ur1313m3t="true">5233</a></td><td><a href="/number/697th-prime" title="697th prime" data-ur1313m3t="true">5237</a></td><td><a href="/number/698th-prime" title="698th prime" data-ur1313m3t="true">5261</a></td><td><a href="/number/699th-prime" title="699th prime" data-ur1313m3t="true">5273</a></td><td><a href="/number/700th-prime" title="700th prime" data-ur1313m3t="true">5279</a></td></tr><tr><th>701&nbsp;-&nbsp;710</th><td><a href="/number/701st-prime" title="701st prime" data-ur1313m3t="true">5281</a></td><td><a href="/number/702nd-prime" title="702nd prime" data-ur1313m3t="true">5297</a></td><td><a href="/number/703rd-prime" title="703rd prime" data-ur1313m3t="true">5303</a></td><td><a href="/number/704th-prime" title="704th prime" data-ur1313m3t="true">5309</a></td><td><a href="/number/705th-prime" title="705th prime" data-ur1313m3t="true">5323</a></td><td><a href="/number/706th-prime" title="706th prime" data-ur1313m3t="true">5333</a></td><td><a href="/number/707th-prime" title="707th prime" data-ur1313m3t="true">5347</a></td><td><a href="/number/708th-prime" title="708th prime" data-ur1313m3t="true">5351</a></td><td><a href="/number/709th-prime" title="709th prime" data-ur1313m3t="true">5381</a></td><td><a href="/number/710th-prime" title="710th prime" data-ur1313m3t="true">5387</a></td></tr><tr><th>711&nbsp;-&nbsp;720</th><td><a href="/number/711th-prime" title="711th prime" data-ur1313m3t="true">5393</a></td><td><a href="/number/712th-prime" title="712th prime" data-ur1313m3t="true">5399</a></td><td><a href="/number/713th-prime" title="713th prime" data-ur1313m3t="true">5407</a></td><td><a href="/number/714th-prime" title="714th prime" data-ur1313m3t="true">5413</a></td><td><a href="/number/715th-prime" title="715th prime" data-ur1313m3t="true">5417</a></td><td><a href="/number/716th-prime" title="716th prime" data-ur1313m3t="true">5419</a></td><td><a href="/number/717th-prime" title="717th prime" data-ur1313m3t="true">5431</a></td><td><a href="/number/718th-prime" title="718th prime" data-ur1313m3t="true">5437</a></td><td><a href="/number/719th-prime" title="719th prime" data-ur1313m3t="true">5441</a></td><td><a href="/number/720th-prime" title="720th prime" data-ur1313m3t="true">5443</a></td></tr><tr><th>721&nbsp;-&nbsp;730</th><td><a href="/number/721st-prime" title="721st prime" data-ur1313m3t="true">5449</a></td><td><a href="/number/722nd-prime" title="722nd prime" data-ur1313m3t="true">5471</a></td><td><a href="/number/723rd-prime" title="723rd prime" data-ur1313m3t="true">5477</a></td><td><a href="/number/724th-prime" title="724th prime" data-ur1313m3t="true">5479</a></td><td><a href="/number/725th-prime" title="725th prime" data-ur1313m3t="true">5483</a></td><td><a href="/number/726th-prime" title="726th prime" data-ur1313m3t="true">5501</a></td><td><a href="/number/727th-prime" title="727th prime" data-ur1313m3t="true">5503</a></td><td><a href="/number/728th-prime" title="728th prime" data-ur1313m3t="true">5507</a></td><td><a href="/number/729th-prime" title="729th prime" data-ur1313m3t="true">5519</a></td><td><a href="/number/730th-prime" title="730th prime" data-ur1313m3t="true">5521</a></td></tr><tr><th>731&nbsp;-&nbsp;740</th><td><a href="/number/731st-prime" title="731st prime" data-ur1313m3t="true">5527</a></td><td><a href="/number/732nd-prime" title="732nd prime" data-ur1313m3t="true">5531</a></td><td><a href="/number/733rd-prime" title="733rd prime" data-ur1313m3t="true">5557</a></td><td><a href="/number/734th-prime" title="734th prime" data-ur1313m3t="true">5563</a></td><td><a href="/number/735th-prime" title="735th prime" data-ur1313m3t="true">5569</a></td><td><a href="/number/736th-prime" title="736th prime" data-ur1313m3t="true">5573</a></td><td><a href="/number/737th-prime" title="737th prime" data-ur1313m3t="true">5581</a></td><td><a href="/number/738th-prime" title="738th prime" data-ur1313m3t="true">5591</a></td><td><a href="/number/739th-prime" title="739th prime" data-ur1313m3t="true">5623</a></td><td><a href="/number/740th-prime" title="740th prime" data-ur1313m3t="true">5639</a></td></tr><tr><th>741&nbsp;-&nbsp;750</th><td><a href="/number/741st-prime" title="741st prime" data-ur1313m3t="true">5641</a></td><td><a href="/number/742nd-prime" title="742nd prime" data-ur1313m3t="true">5647</a></td><td><a href="/number/743rd-prime" title="743rd prime" data-ur1313m3t="true">5651</a></td><td><a href="/number/744th-prime" title="744th prime" data-ur1313m3t="true">5653</a></td><td><a href="/number/745th-prime" title="745th prime" data-ur1313m3t="true">5657</a></td><td><a href="/number/746th-prime" title="746th prime" data-ur1313m3t="true">5659</a></td><td><a href="/number/747th-prime" title="747th prime" data-ur1313m3t="true">5669</a></td><td><a href="/number/748th-prime" title="748th prime" data-ur1313m3t="true">5683</a></td><td><a href="/number/749th-prime" title="749th prime" data-ur1313m3t="true">5689</a></td><td><a href="/number/750th-prime" title="750th prime" data-ur1313m3t="true">5693</a></td></tr><tr><th>751&nbsp;-&nbsp;760</th><td><a href="/number/751st-prime" title="751st prime" data-ur1313m3t="true">5701</a></td><td><a href="/number/752nd-prime" title="752nd prime" data-ur1313m3t="true">5711</a></td><td><a href="/number/753rd-prime" title="753rd prime" data-ur1313m3t="true">5717</a></td><td><a href="/number/754th-prime" title="754th prime" data-ur1313m3t="true">5737</a></td><td><a href="/number/755th-prime" title="755th prime" data-ur1313m3t="true">5741</a></td><td><a href="/number/756th-prime" title="756th prime" data-ur1313m3t="true">5743</a></td><td><a href="/number/757th-prime" title="757th prime" data-ur1313m3t="true">5749</a></td><td><a href="/number/758th-prime" title="758th prime" data-ur1313m3t="true">5779</a></td><td><a href="/number/759th-prime" title="759th prime" data-ur1313m3t="true">5783</a></td><td><a href="/number/760th-prime" title="760th prime" data-ur1313m3t="true">5791</a></td></tr><tr><th>761&nbsp;-&nbsp;770</th><td><a href="/number/761st-prime" title="761st prime" data-ur1313m3t="true">5801</a></td><td><a href="/number/762nd-prime" title="762nd prime" data-ur1313m3t="true">5807</a></td><td><a href="/number/763rd-prime" title="763rd prime" data-ur1313m3t="true">5813</a></td><td><a href="/number/764th-prime" title="764th prime" data-ur1313m3t="true">5821</a></td><td><a href="/number/765th-prime" title="765th prime" data-ur1313m3t="true">5827</a></td><td><a href="/number/766th-prime" title="766th prime" data-ur1313m3t="true">5839</a></td><td><a href="/number/767th-prime" title="767th prime" data-ur1313m3t="true">5843</a></td><td><a href="/number/768th-prime" title="768th prime" data-ur1313m3t="true">5849</a></td><td><a href="/number/769th-prime" title="769th prime" data-ur1313m3t="true">5851</a></td><td><a href="/number/770th-prime" title="770th prime" data-ur1313m3t="true">5857</a></td></tr><tr><th>771&nbsp;-&nbsp;780</th><td><a href="/number/771st-prime" title="771st prime" data-ur1313m3t="true">5861</a></td><td><a href="/number/772nd-prime" title="772nd prime" data-ur1313m3t="true">5867</a></td><td><a href="/number/773rd-prime" title="773rd prime" data-ur1313m3t="true">5869</a></td><td><a href="/number/774th-prime" title="774th prime" data-ur1313m3t="true">5879</a></td><td><a href="/number/775th-prime" title="775th prime" data-ur1313m3t="true">5881</a></td><td><a href="/number/776th-prime" title="776th prime" data-ur1313m3t="true">5897</a></td><td><a href="/number/777th-prime" title="777th prime" data-ur1313m3t="true">5903</a></td><td><a href="/number/778th-prime" title="778th prime" data-ur1313m3t="true">5923</a></td><td><a href="/number/779th-prime" title="779th prime" data-ur1313m3t="true">5927</a></td><td><a href="/number/780th-prime" title="780th prime" data-ur1313m3t="true">5939</a></td></tr><tr><th>781&nbsp;-&nbsp;790</th><td><a href="/number/781st-prime" title="781st prime" data-ur1313m3t="true">5953</a></td><td><a href="/number/782nd-prime" title="782nd prime" data-ur1313m3t="true">5981</a></td><td><a href="/number/783rd-prime" title="783rd prime" data-ur1313m3t="true">5987</a></td><td><a href="/number/784th-prime" title="784th prime" data-ur1313m3t="true">6007</a></td><td><a href="/number/785th-prime" title="785th prime" data-ur1313m3t="true">6011</a></td><td><a href="/number/786th-prime" title="786th prime" data-ur1313m3t="true">6029</a></td><td><a href="/number/787th-prime" title="787th prime" data-ur1313m3t="true">6037</a></td><td><a href="/number/788th-prime" title="788th prime" data-ur1313m3t="true">6043</a></td><td><a href="/number/789th-prime" title="789th prime" data-ur1313m3t="true">6047</a></td><td><a href="/number/790th-prime" title="790th prime" data-ur1313m3t="true">6053</a></td></tr><tr><th>791&nbsp;-&nbsp;800</th><td><a href="/number/791st-prime" title="791st prime" data-ur1313m3t="true">6067</a></td><td><a href="/number/792nd-prime" title="792nd prime" data-ur1313m3t="true">6073</a></td><td><a href="/number/793rd-prime" title="793rd prime" data-ur1313m3t="true">6079</a></td><td><a href="/number/794th-prime" title="794th prime" data-ur1313m3t="true">6089</a></td><td><a href="/number/795th-prime" title="795th prime" data-ur1313m3t="true">6091</a></td><td><a href="/number/796th-prime" title="796th prime" data-ur1313m3t="true">6101</a></td><td><a href="/number/797th-prime" title="797th prime" data-ur1313m3t="true">6113</a></td><td><a href="/number/798th-prime" title="798th prime" data-ur1313m3t="true">6121</a></td><td><a href="/number/799th-prime" title="799th prime" data-ur1313m3t="true">6131</a></td><td><a href="/number/800th-prime" title="800th prime" data-ur1313m3t="true">6133</a></td></tr><tr><th>801&nbsp;-&nbsp;810</th><td><a href="/number/801st-prime" title="801st prime" data-ur1313m3t="true">6143</a></td><td><a href="/number/802nd-prime" title="802nd prime" data-ur1313m3t="true">6151</a></td><td><a href="/number/803rd-prime" title="803rd prime" data-ur1313m3t="true">6163</a></td><td><a href="/number/804th-prime" title="804th prime" data-ur1313m3t="true">6173</a></td><td><a href="/number/805th-prime" title="805th prime" data-ur1313m3t="true">6197</a></td><td><a href="/number/806th-prime" title="806th prime" data-ur1313m3t="true">6199</a></td><td><a href="/number/807th-prime" title="807th prime" data-ur1313m3t="true">6203</a></td><td><a href="/number/808th-prime" title="808th prime" data-ur1313m3t="true">6211</a></td><td><a href="/number/809th-prime" title="809th prime" data-ur1313m3t="true">6217</a></td><td><a href="/number/810th-prime" title="810th prime" data-ur1313m3t="true">6221</a></td></tr><tr><th>811&nbsp;-&nbsp;820</th><td><a href="/number/811th-prime" title="811th prime" data-ur1313m3t="true">6229</a></td><td><a href="/number/812th-prime" title="812th prime" data-ur1313m3t="true">6247</a></td><td><a href="/number/813th-prime" title="813th prime" data-ur1313m3t="true">6257</a></td><td><a href="/number/814th-prime" title="814th prime" data-ur1313m3t="true">6263</a></td><td><a href="/number/815th-prime" title="815th prime" data-ur1313m3t="true">6269</a></td><td><a href="/number/816th-prime" title="816th prime" data-ur1313m3t="true">6271</a></td><td><a href="/number/817th-prime" title="817th prime" data-ur1313m3t="true">6277</a></td><td><a href="/number/818th-prime" title="818th prime" data-ur1313m3t="true">6287</a></td><td><a href="/number/819th-prime" title="819th prime" data-ur1313m3t="true">6299</a></td><td><a href="/number/820th-prime" title="820th prime" data-ur1313m3t="true">6301</a></td></tr><tr><th>821&nbsp;-&nbsp;830</th><td><a href="/number/821st-prime" title="821st prime" data-ur1313m3t="true">6311</a></td><td><a href="/number/822nd-prime" title="822nd prime" data-ur1313m3t="true">6317</a></td><td><a href="/number/823rd-prime" title="823rd prime" data-ur1313m3t="true">6323</a></td><td><a href="/number/824th-prime" title="824th prime" data-ur1313m3t="true">6329</a></td><td><a href="/number/825th-prime" title="825th prime" data-ur1313m3t="true">6337</a></td><td><a href="/number/826th-prime" title="826th prime" data-ur1313m3t="true">6343</a></td><td><a href="/number/827th-prime" title="827th prime" data-ur1313m3t="true">6353</a></td><td><a href="/number/828th-prime" title="828th prime" data-ur1313m3t="true">6359</a></td><td><a href="/number/829th-prime" title="829th prime" data-ur1313m3t="true">6361</a></td><td><a href="/number/830th-prime" title="830th prime" data-ur1313m3t="true">6367</a></td></tr><tr><th>831&nbsp;-&nbsp;840</th><td><a href="/number/831st-prime" title="831st prime" data-ur1313m3t="true">6373</a></td><td><a href="/number/832nd-prime" title="832nd prime" data-ur1313m3t="true">6379</a></td><td><a href="/number/833rd-prime" title="833rd prime" data-ur1313m3t="true">6389</a></td><td><a href="/number/834th-prime" title="834th prime" data-ur1313m3t="true">6397</a></td><td><a href="/number/835th-prime" title="835th prime" data-ur1313m3t="true">6421</a></td><td><a href="/number/836th-prime" title="836th prime" data-ur1313m3t="true">6427</a></td><td><a href="/number/837th-prime" title="837th prime" data-ur1313m3t="true">6449</a></td><td><a href="/number/838th-prime" title="838th prime" data-ur1313m3t="true">6451</a></td><td><a href="/number/839th-prime" title="839th prime" data-ur1313m3t="true">6469</a></td><td><a href="/number/840th-prime" title="840th prime" data-ur1313m3t="true">6473</a></td></tr><tr><th>841&nbsp;-&nbsp;850</th><td><a href="/number/841st-prime" title="841st prime" data-ur1313m3t="true">6481</a></td><td><a href="/number/842nd-prime" title="842nd prime" data-ur1313m3t="true">6491</a></td><td><a href="/number/843rd-prime" title="843rd prime" data-ur1313m3t="true">6521</a></td><td><a href="/number/844th-prime" title="844th prime" data-ur1313m3t="true">6529</a></td><td><a href="/number/845th-prime" title="845th prime" data-ur1313m3t="true">6547</a></td><td><a href="/number/846th-prime" title="846th prime" data-ur1313m3t="true">6551</a></td><td><a href="/number/847th-prime" title="847th prime" data-ur1313m3t="true">6553</a></td><td><a href="/number/848th-prime" title="848th prime" data-ur1313m3t="true">6563</a></td><td><a href="/number/849th-prime" title="849th prime" data-ur1313m3t="true">6569</a></td><td><a href="/number/850th-prime" title="850th prime" data-ur1313m3t="true">6571</a></td></tr><tr><th>851&nbsp;-&nbsp;860</th><td><a href="/number/851st-prime" title="851st prime" data-ur1313m3t="true">6577</a></td><td><a href="/number/852nd-prime" title="852nd prime" data-ur1313m3t="true">6581</a></td><td><a href="/number/853rd-prime" title="853rd prime" data-ur1313m3t="true">6599</a></td><td><a href="/number/854th-prime" title="854th prime" data-ur1313m3t="true">6607</a></td><td><a href="/number/855th-prime" title="855th prime" data-ur1313m3t="true">6619</a></td><td><a href="/number/856th-prime" title="856th prime" data-ur1313m3t="true">6637</a></td><td><a href="/number/857th-prime" title="857th prime" data-ur1313m3t="true">6653</a></td><td><a href="/number/858th-prime" title="858th prime" data-ur1313m3t="true">6659</a></td><td><a href="/number/859th-prime" title="859th prime" data-ur1313m3t="true">6661</a></td><td><a href="/number/860th-prime" title="860th prime" data-ur1313m3t="true">6673</a></td></tr><tr><th>861&nbsp;-&nbsp;870</th><td><a href="/number/861st-prime" title="861st prime" data-ur1313m3t="true">6679</a></td><td><a href="/number/862nd-prime" title="862nd prime" data-ur1313m3t="true">6689</a></td><td><a href="/number/863rd-prime" title="863rd prime" data-ur1313m3t="true">6691</a></td><td><a href="/number/864th-prime" title="864th prime" data-ur1313m3t="true">6701</a></td><td><a href="/number/865th-prime" title="865th prime" data-ur1313m3t="true">6703</a></td><td><a href="/number/866th-prime" title="866th prime" data-ur1313m3t="true">6709</a></td><td><a href="/number/867th-prime" title="867th prime" data-ur1313m3t="true">6719</a></td><td><a href="/number/868th-prime" title="868th prime" data-ur1313m3t="true">6733</a></td><td><a href="/number/869th-prime" title="869th prime" data-ur1313m3t="true">6737</a></td><td><a href="/number/870th-prime" title="870th prime" data-ur1313m3t="true">6761</a></td></tr><tr><th>871&nbsp;-&nbsp;880</th><td><a href="/number/871st-prime" title="871st prime" data-ur1313m3t="true">6763</a></td><td><a href="/number/872nd-prime" title="872nd prime" data-ur1313m3t="true">6779</a></td><td><a href="/number/873rd-prime" title="873rd prime" data-ur1313m3t="true">6781</a></td><td><a href="/number/874th-prime" title="874th prime" data-ur1313m3t="true">6791</a></td><td><a href="/number/875th-prime" title="875th prime" data-ur1313m3t="true">6793</a></td><td><a href="/number/876th-prime" title="876th prime" data-ur1313m3t="true">6803</a></td><td><a href="/number/877th-prime" title="877th prime" data-ur1313m3t="true">6823</a></td><td><a href="/number/878th-prime" title="878th prime" data-ur1313m3t="true">6827</a></td><td><a href="/number/879th-prime" title="879th prime" data-ur1313m3t="true">6829</a></td><td><a href="/number/880th-prime" title="880th prime" data-ur1313m3t="true">6833</a></td></tr><tr><th>881&nbsp;-&nbsp;890</th><td><a href="/number/881st-prime" title="881st prime" data-ur1313m3t="true">6841</a></td><td><a href="/number/882nd-prime" title="882nd prime" data-ur1313m3t="true">6857</a></td><td><a href="/number/883rd-prime" title="883rd prime" data-ur1313m3t="true">6863</a></td><td><a href="/number/884th-prime" title="884th prime" data-ur1313m3t="true">6869</a></td><td><a href="/number/885th-prime" title="885th prime" data-ur1313m3t="true">6871</a></td><td><a href="/number/886th-prime" title="886th prime" data-ur1313m3t="true">6883</a></td><td><a href="/number/887th-prime" title="887th prime" data-ur1313m3t="true">6899</a></td><td><a href="/number/888th-prime" title="888th prime" data-ur1313m3t="true">6907</a></td><td><a href="/number/889th-prime" title="889th prime" data-ur1313m3t="true">6911</a></td><td><a href="/number/890th-prime" title="890th prime" data-ur1313m3t="true">6917</a></td></tr><tr><th>891&nbsp;-&nbsp;900</th><td><a href="/number/891st-prime" title="891st prime" data-ur1313m3t="true">6947</a></td><td><a href="/number/892nd-prime" title="892nd prime" data-ur1313m3t="true">6949</a></td><td><a href="/number/893rd-prime" title="893rd prime" data-ur1313m3t="true">6959</a></td><td><a href="/number/894th-prime" title="894th prime" data-ur1313m3t="true">6961</a></td><td><a href="/number/895th-prime" title="895th prime" data-ur1313m3t="true">6967</a></td><td><a href="/number/896th-prime" title="896th prime" data-ur1313m3t="true">6971</a></td><td><a href="/number/897th-prime" title="897th prime" data-ur1313m3t="true">6977</a></td><td><a href="/number/898th-prime" title="898th prime" data-ur1313m3t="true">6983</a></td><td><a href="/number/899th-prime" title="899th prime" data-ur1313m3t="true">6991</a></td><td><a href="/number/900th-prime" title="900th prime" data-ur1313m3t="true">6997</a></td></tr><tr><th>901&nbsp;-&nbsp;910</th><td><a href="/number/901st-prime" title="901st prime" data-ur1313m3t="true">7001</a></td><td><a href="/number/902nd-prime" title="902nd prime" data-ur1313m3t="true">7013</a></td><td><a href="/number/903rd-prime" title="903rd prime" data-ur1313m3t="true">7019</a></td><td><a href="/number/904th-prime" title="904th prime" data-ur1313m3t="true">7027</a></td><td><a href="/number/905th-prime" title="905th prime" data-ur1313m3t="true">7039</a></td><td><a href="/number/906th-prime" title="906th prime" data-ur1313m3t="true">7043</a></td><td><a href="/number/907th-prime" title="907th prime" data-ur1313m3t="true">7057</a></td><td><a href="/number/908th-prime" title="908th prime" data-ur1313m3t="true">7069</a></td><td><a href="/number/909th-prime" title="909th prime" data-ur1313m3t="true">7079</a></td><td><a href="/number/910th-prime" title="910th prime" data-ur1313m3t="true">7103</a></td></tr><tr><th>911&nbsp;-&nbsp;920</th><td><a href="/number/911th-prime" title="911th prime" data-ur1313m3t="true">7109</a></td><td><a href="/number/912th-prime" title="912th prime" data-ur1313m3t="true">7121</a></td><td><a href="/number/913th-prime" title="913th prime" data-ur1313m3t="true">7127</a></td><td><a href="/number/914th-prime" title="914th prime" data-ur1313m3t="true">7129</a></td><td><a href="/number/915th-prime" title="915th prime" data-ur1313m3t="true">7151</a></td><td><a href="/number/916th-prime" title="916th prime" data-ur1313m3t="true">7159</a></td><td><a href="/number/917th-prime" title="917th prime" data-ur1313m3t="true">7177</a></td><td><a href="/number/918th-prime" title="918th prime" data-ur1313m3t="true">7187</a></td><td><a href="/number/919th-prime" title="919th prime" data-ur1313m3t="true">7193</a></td><td><a href="/number/920th-prime" title="920th prime" data-ur1313m3t="true">7207</a></td></tr><tr><th>921&nbsp;-&nbsp;930</th><td><a href="/number/921st-prime" title="921st prime" data-ur1313m3t="true">7211</a></td><td><a href="/number/922nd-prime" title="922nd prime" data-ur1313m3t="true">7213</a></td><td><a href="/number/923rd-prime" title="923rd prime" data-ur1313m3t="true">7219</a></td><td><a href="/number/924th-prime" title="924th prime" data-ur1313m3t="true">7229</a></td><td><a href="/number/925th-prime" title="925th prime" data-ur1313m3t="true">7237</a></td><td><a href="/number/926th-prime" title="926th prime" data-ur1313m3t="true">7243</a></td><td><a href="/number/927th-prime" title="927th prime" data-ur1313m3t="true">7247</a></td><td><a href="/number/928th-prime" title="928th prime" data-ur1313m3t="true">7253</a></td><td><a href="/number/929th-prime" title="929th prime" data-ur1313m3t="true">7283</a></td><td><a href="/number/930th-prime" title="930th prime" data-ur1313m3t="true">7297</a></td></tr><tr><th>931&nbsp;-&nbsp;940</th><td><a href="/number/931st-prime" title="931st prime" data-ur1313m3t="true">7307</a></td><td><a href="/number/932nd-prime" title="932nd prime" data-ur1313m3t="true">7309</a></td><td><a href="/number/933rd-prime" title="933rd prime" data-ur1313m3t="true">7321</a></td><td><a href="/number/934th-prime" title="934th prime" data-ur1313m3t="true">7331</a></td><td><a href="/number/935th-prime" title="935th prime" data-ur1313m3t="true">7333</a></td><td><a href="/number/936th-prime" title="936th prime" data-ur1313m3t="true">7349</a></td><td><a href="/number/937th-prime" title="937th prime" data-ur1313m3t="true">7351</a></td><td><a href="/number/938th-prime" title="938th prime" data-ur1313m3t="true">7369</a></td><td><a href="/number/939th-prime" title="939th prime" data-ur1313m3t="true">7393</a></td><td><a href="/number/940th-prime" title="940th prime" data-ur1313m3t="true">7411</a></td></tr><tr><th>941&nbsp;-&nbsp;950</th><td><a href="/number/941st-prime" title="941st prime" data-ur1313m3t="true">7417</a></td><td><a href="/number/942nd-prime" title="942nd prime" data-ur1313m3t="true">7433</a></td><td><a href="/number/943rd-prime" title="943rd prime" data-ur1313m3t="true">7451</a></td><td><a href="/number/944th-prime" title="944th prime" data-ur1313m3t="true">7457</a></td><td><a href="/number/945th-prime" title="945th prime" data-ur1313m3t="true">7459</a></td><td><a href="/number/946th-prime" title="946th prime" data-ur1313m3t="true">7477</a></td><td><a href="/number/947th-prime" title="947th prime" data-ur1313m3t="true">7481</a></td><td><a href="/number/948th-prime" title="948th prime" data-ur1313m3t="true">7487</a></td><td><a href="/number/949th-prime" title="949th prime" data-ur1313m3t="true">7489</a></td><td><a href="/number/950th-prime" title="950th prime" data-ur1313m3t="true">7499</a></td></tr><tr><th>951&nbsp;-&nbsp;960</th><td><a href="/number/951st-prime" title="951st prime" data-ur1313m3t="true">7507</a></td><td><a href="/number/952nd-prime" title="952nd prime" data-ur1313m3t="true">7517</a></td><td><a href="/number/953rd-prime" title="953rd prime" data-ur1313m3t="true">7523</a></td><td><a href="/number/954th-prime" title="954th prime" data-ur1313m3t="true">7529</a></td><td><a href="/number/955th-prime" title="955th prime" data-ur1313m3t="true">7537</a></td><td><a href="/number/956th-prime" title="956th prime" data-ur1313m3t="true">7541</a></td><td><a href="/number/957th-prime" title="957th prime" data-ur1313m3t="true">7547</a></td><td><a href="/number/958th-prime" title="958th prime" data-ur1313m3t="true">7549</a></td><td><a href="/number/959th-prime" title="959th prime" data-ur1313m3t="true">7559</a></td><td><a href="/number/960th-prime" title="960th prime" data-ur1313m3t="true">7561</a></td></tr><tr><th>961&nbsp;-&nbsp;970</th><td><a href="/number/961st-prime" title="961st prime" data-ur1313m3t="true">7573</a></td><td><a href="/number/962nd-prime" title="962nd prime" data-ur1313m3t="true">7577</a></td><td><a href="/number/963rd-prime" title="963rd prime" data-ur1313m3t="true">7583</a></td><td><a href="/number/964th-prime" title="964th prime" data-ur1313m3t="true">7589</a></td><td><a href="/number/965th-prime" title="965th prime" data-ur1313m3t="true">7591</a></td><td><a href="/number/966th-prime" title="966th prime" data-ur1313m3t="true">7603</a></td><td><a href="/number/967th-prime" title="967th prime" data-ur1313m3t="true">7607</a></td><td><a href="/number/968th-prime" title="968th prime" data-ur1313m3t="true">7621</a></td><td><a href="/number/969th-prime" title="969th prime" data-ur1313m3t="true">7639</a></td><td><a href="/number/970th-prime" title="970th prime" data-ur1313m3t="true">7643</a></td></tr><tr><th>971&nbsp;-&nbsp;980</th><td><a href="/number/971st-prime" title="971st prime" data-ur1313m3t="true">7649</a></td><td><a href="/number/972nd-prime" title="972nd prime" data-ur1313m3t="true">7669</a></td><td><a href="/number/973rd-prime" title="973rd prime" data-ur1313m3t="true">7673</a></td><td><a href="/number/974th-prime" title="974th prime" data-ur1313m3t="true">7681</a></td><td><a href="/number/975th-prime" title="975th prime" data-ur1313m3t="true">7687</a></td><td><a href="/number/976th-prime" title="976th prime" data-ur1313m3t="true">7691</a></td><td><a href="/number/977th-prime" title="977th prime" data-ur1313m3t="true">7699</a></td><td><a href="/number/978th-prime" title="978th prime" data-ur1313m3t="true">7703</a></td><td><a href="/number/979th-prime" title="979th prime" data-ur1313m3t="true">7717</a></td><td><a href="/number/980th-prime" title="980th prime" data-ur1313m3t="true">7723</a></td></tr><tr><th>981&nbsp;-&nbsp;990</th><td><a href="/number/981st-prime" title="981st prime" data-ur1313m3t="true">7727</a></td><td><a href="/number/982nd-prime" title="982nd prime" data-ur1313m3t="true">7741</a></td><td><a href="/number/983rd-prime" title="983rd prime" data-ur1313m3t="true">7753</a></td><td><a href="/number/984th-prime" title="984th prime" data-ur1313m3t="true">7757</a></td><td><a href="/number/985th-prime" title="985th prime" data-ur1313m3t="true">7759</a></td><td><a href="/number/986th-prime" title="986th prime" data-ur1313m3t="true">7789</a></td><td><a href="/number/987th-prime" title="987th prime" data-ur1313m3t="true">7793</a></td><td><a href="/number/988th-prime" title="988th prime" data-ur1313m3t="true">7817</a></td><td><a href="/number/989th-prime" title="989th prime" data-ur1313m3t="true">7823</a></td><td><a href="/number/990th-prime" title="990th prime" data-ur1313m3t="true">7829</a></td></tr><tr><th>991&nbsp;-&nbsp;1000</th><td><a href="/number/991st-prime" title="991st prime" data-ur1313m3t="true">7841</a></td><td><a href="/number/992nd-prime" title="992nd prime" data-ur1313m3t="true">7853</a></td><td><a href="/number/993rd-prime" title="993rd prime" data-ur1313m3t="true">7867</a></td><td><a href="/number/994th-prime" title="994th prime" data-ur1313m3t="true">7873</a></td><td><a href="/number/995th-prime" title="995th prime" data-ur1313m3t="true">7877</a></td><td><a href="/number/996th-prime" title="996th prime" data-ur1313m3t="true">7879</a></td><td><a href="/number/997th-prime" title="997th prime" data-ur1313m3t="true">7883</a></td><td><a href="/number/998th-prime" title="998th prime" data-ur1313m3t="true">7901</a></td><td><a href="/number/999th-prime" title="999th prime" data-ur1313m3t="true">7907</a></td><td><a href="/number/1000th-prime" title="1000th prime" data-ur1313m3t="true">7919</a></td></tr></tbody></table>

---

> ##  ASCII code table:

<table class="ws-table-all notranslate charset-tryit">
    <tbody><tr>
      <th style="width:10%">Char</th>
      <th style="width:10%">Number</th>
      <th>Description</th>
    </tr>
    <tr>
      <td>&nbsp;</td>
      <td>0 - 31</td>
      <td>Control characters (see below)</td>
    </tr>
    <tr>
      <td>&nbsp;</td>
      <td>32</td>
      <td>space</td>
    </tr>
    <tr>
      <td>!</td>
      <td>33</td>
      <td>exclamation mark</td>
    </tr>
    <tr>
      <td>"</td>
      <td>34</td>
      <td>quotation mark</td>
    </tr>
    <tr>
      <td>#</td>
      <td>35</td>
      <td>number sign</td>
    </tr>
    <tr>
      <td>$</td>
      <td>36</td>
      <td>dollar sign</td>
    </tr>
    <tr>
      <td>%</td>
      <td>37</td>
      <td>percent sign</td>
    </tr>
    <tr>
      <td>&amp;</td>
      <td>38</td>
      <td>ampersand</td>
    </tr>
    <tr>
      <td>'</td>
      <td>39</td>
      <td>apostrophe</td>
    </tr>
    <tr>
      <td>(</td>
      <td>40</td>
      <td>left parenthesis</td>
    </tr>
    <tr>
      <td>)</td>
      <td>41</td>
      <td>right parenthesis</td>
    </tr>
    <tr>
      <td>*</td>
      <td>42</td>
      <td>asterisk</td>
    </tr>
    <tr>
      <td>+</td>
      <td>43</td>
      <td>plus sign</td>
    </tr>
    <tr>
      <td>,</td>
      <td>44</td>
      <td>comma</td>
    </tr>
    <tr>
      <td>-</td>
      <td>45</td>
      <td>hyphen</td>
    </tr>
    <tr>
      <td>.</td>
      <td>46</td>
      <td>period</td>
    </tr>
    <tr>
      <td>/</td>
      <td>47</td>
      <td>slash</td>
    </tr>
    <tr>
      <td>0</td>
      <td>48</td>
      <td>digit 0</td>
    </tr>
    <tr>
      <td>1</td>
      <td>49</td>
      <td>digit 1</td>
    </tr>
    <tr>
      <td>2</td>
      <td>50</td>
      <td>digit 2</td>
    </tr>
    <tr>
      <td>3</td>
      <td>51</td>
      <td>digit 3</td>
    </tr>
    <tr>
      <td>4</td>
      <td>52</td>
      <td>digit 4</td>
    </tr>
    <tr>
      <td>5</td>
      <td>53</td>
      <td>digit 5</td>
    </tr>
    <tr>
      <td>6</td>
      <td>54</td>
      <td>digit 6</td>
    </tr>
    <tr>
      <td>7</td>
      <td>55</td>
      <td>digit 7</td>
    </tr>
    <tr>
      <td>8</td>
      <td>56</td>
      <td>digit 8</td>
    </tr>
    <tr>
      <td>9</td>
      <td>57</td>
      <td>digit 9</td>
    </tr>
    <tr>
      <td>:</td>
      <td>58</td>
      <td>colon</td>
    </tr>
    <tr>
      <td>;</td>
      <td>59</td>
      <td>semicolon</td>
    </tr>
    <tr>
      <td>&lt;</td>
      <td>60</td>
      <td>less-than</td>
    </tr>
    <tr>
      <td>=</td>
      <td>61</td>
      <td>equals-to</td>
    </tr>
    <tr>
      <td>&gt;</td>
      <td>62</td>
      <td>greater-than</td>
    </tr>
    <tr>
      <td>?</td>
      <td>63</td>
      <td>question mark</td>
    </tr>
    <tr>
      <td>@</td>
      <td>64</td>
      <td>at sign</td>
    </tr>
    <tr>
      <td>A</td>
      <td>65</td>
      <td>uppercase A</td>
    </tr>
    <tr>
      <td>B</td>
      <td>66</td>
      <td>uppercase B</td>
    </tr>
    <tr>
      <td>C</td>
      <td>67</td>
      <td>uppercase C</td>
    </tr>
    <tr>
      <td>D</td>
      <td>68</td>
      <td>uppercase D</td>
    </tr>
    <tr>
      <td>E</td>
      <td>69</td>
      <td>uppercase E</td>
    </tr>
    <tr>
      <td>F</td>
      <td>70</td>
      <td>uppercase F</td>
    </tr>
    <tr>
      <td>G</td>
      <td>71</td>
      <td>uppercase G</td>
    </tr>
    <tr>
      <td>H</td>
      <td>72</td>
      <td>uppercase H</td>
    </tr>
    <tr>
      <td>I</td>
      <td>73</td>
      <td>uppercase I</td>
    </tr>
    <tr>
      <td>J</td>
      <td>74</td>
      <td>uppercase J</td>
    </tr>
    <tr>
      <td>K</td>
      <td>75</td>
      <td>uppercase K</td>
    </tr>
    <tr>
      <td>L</td>
      <td>76</td>
      <td>uppercase L</td>
    </tr>
    <tr>
      <td>M</td>
      <td>77</td>
      <td>uppercase M</td>
    </tr>
    <tr>
      <td>N</td>
      <td>78</td>
      <td>uppercase N</td>
    </tr>
    <tr>
      <td>O</td>
      <td>79</td>
      <td>uppercase O</td>
    </tr>
    <tr>
      <td>P</td>
      <td>80</td>
      <td>uppercase P</td>
    </tr>
    <tr>
      <td>Q</td>
      <td>81</td>
      <td>uppercase Q</td>
    </tr>
    <tr>
      <td>R</td>
      <td>82</td>
      <td>uppercase R</td>
    </tr>
    <tr>
      <td>S</td>
      <td>83</td>
      <td>uppercase S</td>
    </tr>
    <tr>
      <td>T</td>
      <td>84</td>
      <td>uppercase T</td>
    </tr>
    <tr>
      <td>U</td>
      <td>85</td>
      <td>uppercase U</td>
    </tr>
    <tr>
      <td>V</td>
      <td>86</td>
      <td>uppercase V</td>
    </tr>
    <tr>
      <td>W</td>
      <td>87</td>
      <td>uppercase W</td>
    </tr>
    <tr>
      <td>X</td>
      <td>88</td>
      <td>uppercase X</td>
    </tr>
    <tr>
      <td>Y</td>
      <td>89</td>
      <td>uppercase Y</td>
    </tr>
    <tr>
      <td>Z</td>
      <td>90</td>
      <td>uppercase Z</td>
    </tr>
    <tr>
      <td>[</td>
      <td>91</td>
      <td>left square bracket</td>
    </tr>
    <tr>
      <td>\</td>
      <td>92</td>
      <td>backslash</td>
    </tr>
    <tr>
      <td>]</td>
      <td>93</td>
      <td>right square bracket</td>
    </tr>
    <tr>
      <td>^</td>
      <td>94</td>
      <td>caret</td>
    </tr>
    <tr>
      <td>_</td>
      <td>95</td>
      <td>underscore</td>
    </tr>
    <tr>
      <td>`</td>
      <td>96</td>
      <td>grave accent</td>
    </tr>
    <tr>
      <td>a</td>
      <td>97</td>
      <td>lowercase a</td>
    </tr>
    <tr>
      <td>b</td>
      <td>98</td>
      <td>lowercase b</td>
    </tr>
    <tr>
      <td>c</td>
      <td>99</td>
      <td>lowercase c</td>
    </tr>
    <tr>
      <td>d</td>
      <td>100</td>
      <td>lowercase d></td>
    </tr>
    <tr>
      <td>e</td>
      <td>101</td>
      <td>lowercase e></td>
    </tr>
    <tr>
      <td>f</td>
      <td>102</td>
      <td>lowercase f></td>
    </tr>
    <tr>
      <td>g</td>
      <td>103</td>
      <td>lowercase g></td>
    </tr>
    <tr>
      <td>h</td>
      <td>104</td>
      <td>lowercase h></td>
    </tr>
    <tr>
      <td>i</td>
      <td>105</td>
      <td>lowercase i></td>
    </tr>
    <tr>
      <td>j</td>
      <td>106</td>
      <td>lowercase j></td>
    </tr>
    <tr>
      <td>k</td>
      <td>107</td>
      <td>lowercase k></td>
    </tr>
    <tr>
      <td>l</td>
      <td>108</td>
      <td>lowercase l></td>
    </tr>
    <tr>
      <td>m</td>
      <td>109</td>
      <td>lowercase m></td>
    </tr>
    <tr>
      <td>n</td>
      <td>110</td>
      <td>lowercase n></td>
    </tr>
    <tr>
      <td>o</td>
      <td>111</td>
      <td>lowercase o></td>
    </tr>
    <tr>
      <td>p</td>
      <td>112</td>
      <td>lowercase p></td>
    </tr>
    <tr>
      <td>q</td>
      <td>113</td>
      <td>lowercase q></td>
    </tr>
    <tr>
      <td>r</td>
      <td>114</td>
      <td>lowercase r></td>
    </tr>
    <tr>
      <td>s</td>
      <td>115</td>
      <td>lowercase s></td>
    </tr>
    <tr>
      <td>t</td>
      <td>116</td>
      <td>lowercase t></td>
    </tr>
    <tr>
      <td>u</td>
      <td>117</td>
      <td>lowercase u></td>
    </tr>
    <tr>
      <td>v</td>
      <td>118</td>
      <td>lowercase v></td>
    </tr>
    <tr>
      <td>w</td>
      <td>119</td>
      <td>lowercase w></td>
    </tr>
    <tr>
      <td>x</td>
      <td>120</td>
      <td>lowercase x></td>
    </tr>
    <tr>
      <td>y</td>
      <td>121</td>
      <td>lowercase y></td>
    </tr>
    <tr>
      <td>z</td>
      <td>122</td>
      <td>lowercase z></td>
    </tr>
    <tr>
      <td>{</td>
      <td>123</td>
      <td>left curly brace></td>
    </tr>
    <tr>
      <td>|</td>
      <td>124</td>
      <td>vertical bar></td>
    </tr>
    <tr>
      <td>}</td>
      <td>125</td>
      <td>right curly brace></td>
    </tr>
    <tr>
      <td>~</td>
      <td>126</td>
      <td>tilde></td>
    </tr>
</tbody></table>

---

> ## Binary numbers table (1-256):

<table class="alt">
<tbody><tr><th>No.</th><th>Binary Number</th></tr>
<tr><td>101</td><td>1100101</td></tr>
<tr><td>102</td><td>1100110</td></tr>
<tr><td>103</td><td>1100111</td></tr>
<tr><td>104</td><td>1101000</td></tr>
<tr><td>105</td><td>1101001</td></tr>
<tr><td>106</td><td>1101010</td></tr>
<tr><td>107</td><td>1101011</td></tr>
<tr><td>108</td><td>1101100</td></tr>
<tr><td>109</td><td>1101101</td></tr>
<tr><td>110</td><td>1101110</td></tr>
<tr><td>111</td><td>1101111</td></tr>
<tr><td>112</td><td>1110000</td></tr>
<tr><td>113</td><td>1110001</td></tr>
<tr><td>114</td><td>1110010</td></tr>
<tr><td>115</td><td>1110011</td></tr>
<tr><td>116</td><td>1110100</td></tr>
<tr><td>117</td><td>1110101</td></tr>
<tr><td>118</td><td>1110110</td></tr>
<tr><td>119</td><td>1110111</td></tr>
<tr><td>120</td><td>1111000</td></tr>
<tr><td>121</td><td>1111001</td></tr>
<tr><td>122</td><td>1111010</td></tr>
<tr><td>123</td><td>1111011</td></tr>
<tr><td>124</td><td>1111100</td></tr>
<tr><td>125</td><td>1111101</td></tr>
<tr><td>126</td><td>1111110</td></tr>
<tr><td>127</td><td>1111111</td></tr>
<tr><td>128</td><td>10000000</td></tr>
<tr><td>129</td><td>10000001</td></tr>
<tr><td>130</td><td>10000010</td></tr>
<tr><td>131</td><td>10000011</td></tr>
<tr><td>132</td><td>10000100</td></tr>
<tr><td>133</td><td>10000101</td></tr>
<tr><td>134</td><td>10000110</td></tr>
<tr><td>135</td><td>10000111</td></tr>
<tr><td>136</td><td>10001000</td></tr>
<tr><td>137</td><td>10001001</td></tr>
<tr><td>138</td><td>10001010</td></tr>
<tr><td>139</td><td>10001011</td></tr>
<tr><td>140</td><td>10001100</td></tr>
<tr><td>141</td><td>10001101</td></tr>
<tr><td>142</td><td>10001110</td></tr>
<tr><td>143</td><td>10001111</td></tr>
<tr><td>144</td><td>10010000</td></tr>
<tr><td>145</td><td>10010001</td></tr>
<tr><td>146</td><td>10010010</td></tr>
<tr><td>147</td><td>10010011</td></tr>
<tr><td>148</td><td>10010100</td></tr>
<tr><td>149</td><td>10010101</td></tr>
<tr><td>150</td><td>10010110</td></tr>
<tr><td>151</td><td>10010111</td></tr>
<tr><td>152</td><td>10011000</td></tr>
<tr><td>153</td><td>10011001</td></tr>
<tr><td>154</td><td>10011010</td></tr>
<tr><td>155</td><td>10011011</td></tr>
<tr><td>156</td><td>10011100</td></tr>
<tr><td>157</td><td>10011101</td></tr>
<tr><td>158</td><td>10011110</td></tr>
<tr><td>159</td><td>10011111</td></tr>
<tr><td>160</td><td>10100000</td></tr>
<tr><td>161</td><td>10100001</td></tr>
<tr><td>162</td><td>10100010</td></tr>
<tr><td>163</td><td>10100011</td></tr>
<tr><td>164</td><td>10100100</td></tr>
<tr><td>165</td><td>10100101</td></tr>
<tr><td>166</td><td>10100110</td></tr>
<tr><td>167</td><td>10100111</td></tr>
<tr><td>168</td><td>10101000</td></tr>
<tr><td>169</td><td>10101001</td></tr>
<tr><td>170</td><td>10101010</td></tr>
<tr><td>171</td><td>10101011</td></tr>
<tr><td>172</td><td>10101100</td></tr>
<tr><td>173</td><td>10101101</td></tr>
<tr><td>174</td><td>10101110</td></tr>
<tr><td>175</td><td>10101111</td></tr>
<tr><td>176</td><td>10110000</td></tr>
<tr><td>177</td><td>10110001</td></tr>
<tr><td>178</td><td>10110010</td></tr>
<tr><td>179</td><td>10110011</td></tr>
<tr><td>180</td><td>10110100</td></tr>
<tr><td>181</td><td>10110101</td></tr>
<tr><td>182</td><td>10110110</td></tr>
<tr><td>183</td><td>10110111</td></tr>
<tr><td>184</td><td>10111000</td></tr>
<tr><td>185</td><td>10111001</td></tr>
<tr><td>186</td><td>10111010</td></tr>
<tr><td>187</td><td>10111011</td></tr>
<tr><td>188</td><td>10111100</td></tr>
<tr><td>189</td><td>10111101</td></tr>
<tr><td>190</td><td>10111110</td></tr>
<tr><td>191</td><td>10111111</td></tr>
<tr><td>192</td><td>11000000</td></tr>
<tr><td>193</td><td>11000001</td></tr>
<tr><td>194</td><td>11000010</td></tr>
<tr><td>195</td><td>11000011</td></tr>
<tr><td>196</td><td>11000100</td></tr>
<tr><td>197</td><td>11000101</td></tr>
<tr><td>198</td><td>11000110</td></tr>
<tr><td>199</td><td>11000111</td></tr>
<tr><td>200</td><td>11001000</td></tr>
<tr><td>201</td><td>11001001</td></tr>
<tr><td>202</td><td>11001010</td></tr>
<tr><td>203</td><td>11001011</td></tr>
<tr><td>204</td><td>11001100</td></tr>
<tr><td>205</td><td>11001101</td></tr>
<tr><td>206</td><td>11001110</td></tr>
<tr><td>207</td><td>11001111</td></tr>
<tr><td>208</td><td>11010000</td></tr>
<tr><td>209</td><td>11010001</td></tr>
<tr><td>210</td><td>11010010</td></tr>
<tr><td>211</td><td>11010011</td></tr>
<tr><td>212</td><td>11010100</td></tr>
<tr><td>213</td><td>11010101</td></tr>
<tr><td>214</td><td>11010110</td></tr>
<tr><td>215</td><td>11010111</td></tr>
<tr><td>216</td><td>11011000</td></tr>
<tr><td>217</td><td>11011001</td></tr>
<tr><td>218</td><td>11011010</td></tr>
<tr><td>219</td><td>11011011</td></tr>
<tr><td>220</td><td>11011100</td></tr>
<tr><td>221</td><td>11011101</td></tr>
<tr><td>222</td><td>11011110</td></tr>
<tr><td>223</td><td>11011111</td></tr>
<tr><td>224</td><td>11100000</td></tr>
<tr><td>225</td><td>11100001</td></tr>
<tr><td>226</td><td>11100010</td></tr>
<tr><td>227</td><td>11100011</td></tr>
<tr><td>228</td><td>11100100</td></tr>
<tr><td>229</td><td>11100101</td></tr>
<tr><td>230</td><td>11100110</td></tr>
<tr><td>231</td><td>11100111</td></tr>
<tr><td>232</td><td>11101000</td></tr>
<tr><td>233</td><td>11101001</td></tr>
<tr><td>234</td><td>11101010</td></tr>
<tr><td>235</td><td>11101011</td></tr>
<tr><td>236</td><td>11101100</td></tr>
<tr><td>237</td><td>11101101</td></tr>
<tr><td>238</td><td>11101110</td></tr>
<tr><td>239</td><td>11101111</td></tr>
<tr><td>240</td><td>11110000</td></tr>
<tr><td>241</td><td>11110001</td></tr>
<tr><td>242</td><td>11110010</td></tr>
<tr><td>243</td><td>11110011</td></tr>
<tr><td>244</td><td>11110100</td></tr>
<tr><td>245</td><td>11110101</td></tr>
<tr><td>246</td><td>11110110</td></tr>
<tr><td>247</td><td>11110111</td></tr>
<tr><td>248</td><td>11111000</td></tr>
<tr><td>249</td><td>11111001</td></tr>
<tr><td>250</td><td>11111010</td></tr>
<tr><td>251</td><td>11111011</td></tr>
<tr><td>252</td><td>11111100</td></tr>
<tr><td>253</td><td>11111101</td></tr>
<tr><td>254</td><td>11111110</td></tr>
<tr><td>255</td><td>11111111</td></tr>
<tr><td>256</td><td>100000000</td></tr>

</tbody></table>

---

> ## Ranges of int and double types : 

	(use `sizeof(var)` to know exact size in your machine in bytes)

<table class="table table-bordered" style="text-align:center;">
<tbody><tr>
<th style="text-align:center;">Type</th>
<th style="text-align:center;">Typical Bit Width</th>
<th style="text-align:center;">Typical Range</th>
</tr>
<tr>
<td>char</td>
<td>1byte</td>
<td>-127 to 127 or 0 to 255</td>
</tr>
<tr>
<td>unsigned char</td>
<td>1byte</td>
<td>0 to 255</td>
</tr>
<tr>
<td>signed char</td>
<td>1byte</td>
<td>-127 to 127</td>
</tr>
<tr>
<td>int</td>
<td>4bytes</td>
<td>-2147483648 to 2147483647  <em>[~10e9]</em></td>
</tr>
<tr>
<td>unsigned int</td>
<td>4bytes</td>
<td>0 to 4294967295</td>
</tr>
<tr>
<td>signed int</td>
<td>4bytes</td>
<td>-2147483648 to 2147483647</td>
</tr>
<tr>
<td>short int</td>
<td>2bytes</td>
<td>-32768 to 32767</td>
</tr>
<tr>
<td>unsigned short int</td>
<td>2bytes</td>
<td>0 to 65,535</td>
</tr>
<tr>
<td>signed short int</td>
<td>2bytes</td>
<td>-32768 to 32767</td>
</tr>
<tr>
<td>long int</td>
<td>8bytes</td>
<td>-9223372036854775808 to 9223372036854775807</td>
</tr>
<tr>
<td>signed long int</td>
<td>8bytes</td>
<td>same as long int</td>
</tr>
<tr>
<td>unsigned long int</td>
<td>8bytes</td>
<td>0 to 18446744073709551615</td>
</tr>
<tr>
<td>long long int</td>
<td>8bytes</td>
<td>-(2^63) to (2^63)-1  <em>[~10e19]</em></td>
</tr>
<tr>
<td>unsigned long long int</td>
<td>8bytes</td>
<td>0 to 18,446,744,073,709,551,615</td>
</tr>
<tr>
<td>float</td>
<td>4bytes</td>
<td></td>
</tr>
<tr>
<td>double</td>
<td>8bytes</td>
<td></td>
</tr>
<tr>
<td>long double</td>
<td>12bytes</td>
<td></td>
</tr>
<tr>
<td>wchar_t</td>
<td>2 or 4 bytes</td>
<td>1 wide character</td>
</tr>
</tbody></table>

---