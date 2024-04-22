## lyhheader
用
```cpp
#include"lyh.h"
using namespace lyh;
```
来使用头文件

---
vector.h
使用
```cpp
vector<typename> v;
```
vector函数及指针:
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
priority_queue 使用
```cpp
大根堆：priority_queue<typename,vector<typename>,use_bigger_root> q;
小根堆：priority_queue<typename,vector<typename>,use_lower_root> q;
```
priority_queue函数及指针（需重载大于运算符）:
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

cin,cout可输入输出
```cpp
short,int,long long
unsigned short,unsigned int,unsigned long long
float,double,long double
char,char*
```
cout保留小数默认为6位，可用
```cpp
cout<<fix(x);
```
更改

---
algorithm.h 仅有swap
```cpp
void swap(a,b)
```
---
math.h

函数
```cpp
double & abs(double a) 绝对值
double & floor(double a) 向下取整
int d_intpow(int a,int n,int mod=0) 递归 int 整数幂 (mod 为模数，不需模时不填，下同)
long long d_llpow(long long a,long long n,long long mod=0) 递归 long long 整数幂
unsigned int d_uipow(unsigned int a,unsigned int n) 递归 unsigned int 整数幂
unsigned long long d_ullpow(unsigned long long a,unsigned long long n) 递归 unsigned long long 整数幂
long long zpow(long long a,long long n,long long mod=0) 简化版 long long 幂
unsigned long long uzpow(unsigned long long a,unsigned long long n) 简化版 unsigned long long 幂
```
