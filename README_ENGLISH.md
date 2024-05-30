## lyhheader
Use
```cpp
#include "lyh.h"
using namespace lyh;
```
to use the header file

---
vector.h
to use the header file --- vector.h
```cpp
vector<typename> v;
```
vector functions and pointers.
```cpp
tn & operator [](unsigned long long i)
void push_back(tn x)
bool pop_back()
void erase(unsigned long long x)
unsigned long long size()
bool empty()
void clear()
iterator
iterator & begin()
iterator & end()
```
---
priority_queue.h
Using priority_queue
``` cpp
Bigger root heap: priority_queue<typename,vector<typename>,use_bigger_root> q;
Small root heap: priority_queue<typename,vector<typename>,use_lower_root> q;
```
Priority_queue function and pointer (requires overloading of the greater-than operator):.
```cpp
void push(tn x)
tn top()
bool pop()
unsigned long long size()
bool empty()
void clear()
```
---
io.h

cin,cout can be input and output:
```cpp
short,int,long long
unsigned short,unsigned int,unsigned long long
float,double,long double
char,char*
```
cout retains decimals to 6 digits by default.

use
```cpp
cout<<fix(x); 
```
to Change

---
algorithm.h only swap
```cpp
void swap(a,b)
```
---
math.h

Functions
```cpp
double & abs(double a) absolute value
double & floor(double a) round down to the nearest whole number
int d_intpow(int a,int n,int mod=0) recursive int integer power (mod is modulus, do not need modulus when not filled, the same below)
long long d_llpow(long long a,long long n,long long mod=0) recursive long long integer power
unsigned int d_uipow(unsigned int a,unsigned int n) recursive unsigned int integer power
unsigned long long d_ullpow(unsigned long long a,unsigned long long n) recursive unsigned long long powers of integers
long long zpow(long long a,long long n,long long mod=0) Simplified long long powers
unsigned long long uzpow(unsigned long long a,unsigned long long n) simplified version unsigned long long power
```
---
array.h
Fixed-Length Arrays
The array of fixed-length arrays is created using the
```cpp
array<typename,size> v;
```
array functions and pointers.
```cpp
tn & operator [](unsigned long long i)
void push_back(tn x)
void pop()
unsigned long long size()
void clear()
void clear_val()
```
Translated with DeepL.com (free version)
