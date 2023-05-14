# 初识C语言

## 1. 什么是C语言

C语言是一门通用计算机编程语言，广泛应用于底层开发。C语言的设计目标是提供一种能以简易的方式编译、处理低级存储器、产生少量的机器码以及不需要任何运行环境支持便能运行的编程语言。

尽管C语言提供了许多低级处理的功能，但仍然保持着良好跨平台的特性，以一个标准规格写出的C语言程序可在许多电脑平台上进行编译，甚至包含一些嵌入式处理器（单片机或称MCU）以及超级电脑等作业平台。

二十世纪八十年代，为了避免各开发厂商用的C语言语法产生差异，由美国国家标准局为C语言制定了一套完整的美国国家标准语法，称为ANSI C，作为C语言最初的标准。

C语言是一门面向过程的计算机编程语言，与C++、Java等面向对象的编程语言有所不同。

其编译器主要有Clang、GCC、WIN-TC、SUBLIME、MSVC、Turbo C等。

## 2. 第一个C语言程序

```C{.line-numbers}
#include<stdio.h>
int main()
{
    printf("Hello World\n");
    return 0;
}
//解释：
//main函数是程序的入口
//一个工程中main函数有且仅有一个
```

**#include指令和头文件**

\#include<stdio.h>的作用相当于把stdio.h文件中的所有内容都输入该行所在的位置。

\#include这行代码是一条C预处理器指令（preprocessor directive）。

一般而言，C把函数库中相关的函数归为一类，并为每类函数提供了一个头文件。例如，printf()和scanf()都隶属于标准输入和输出函数，使用stdio.h头文件。

**main()函数**

main()总是第一个被调用的函数（不考虑例外的情况）。

除了main()函数，可以任意命名其它函数。

main()函数必须是开始的函数。

圆括号()用于识别main()是一个函数。

**int**

int是main()函数的返回类型。这表明main()函数返回的值是整数。

int是C语言的一个关键字（keyword），表示一种基本的C语言数据类型——整型。

关键字是语言定义的单词，不能作其它用途。

**花括号、函数体、和块**

一般而言，所有的C函数都使用花括号标记函数体的开始和结束。

花括号还可用于把函数中的多条语句合并为一个单元或块。

**printf()函数**

圆括号表明printf是一个函数名。

圆括号中的内容是从main()函数传递给printf()函数的信息。

该信息是函数的实际参数（actual argument），是传给函数的特定值，形式参数（Formal Parameter）是函数中用于存储值的变量。

printf()函数会查看双引号中的内容，并将其打印在屏幕上。

## 3. 数据类型

```C{.line-numbers}
char          //字符数据类型
short         //短整型
int           //整型
long          //长整型
long long     //超长整型
float         //单精度浮点数
double        //双精度
```

类型的使用：

```C{.line-numbers}
char ch='A';
int weight=120;
int salary=20000;
```

```C{.line-numbers}
#include<stdio.h>
int main()
{
    printf("sizeof char = %d\n",sizeof(char));
    printf("sizeof short = %d\n",sizeof(short));
    printf("sizeof int = %d\n",sizeof(int));
    printf("sizeof long = %d\n",sizeof(long));
    printf("sizeof long long = %d\n",sizeof(long long));
    printf("sizeof float = %d\n",sizeof(float));
    printf("sizeof double = %d\n",sizeof(double));
    printf("sizeof long double = %d\n",sizeof(long double));
    return 0;
}
```

> sizeof char = 1  
> sizeof short =2  
> sizeof int = 4  
> sizeof long = 4  
> sizeof long long = 8  
> sizeof float = 4  
> sizeof double = 8  
> sizeof long double = 8  

**sizeof运算符**

sizeof运算符以字节为单位返回运算对象的大小，运算对象可以是具体的数据对象或类型。

如果运算对象是类型，则必须用圆括号将其括起来。

**计算机中的单位**

bit-比特 存放一位二进制数，即0或1，最小的存储单位

byte-字节（B） 最常用的单位，一个英文字母、标点占一个字节，一个中文汉字、标点占两个字节。

KB-千字节 1KB=1024B

GB-吉字节 1MB=1024KB

TB-太字节 1TB=1024GB

**typedef**

typedef是C语言中的一个关键字，作用是为现有的数据类型创建一个新的名字，目的是为了使代码方便阅读和理解。

1. 对于数据类型的使用
   ```C{.line-numbers}
   typedef int new_int;
   new_int num=10;
   ```
2. 对于指针的使用
   ```C{.line-numbers}
   typedef int* pint;
   pint p;
   ```
3. 对于结构体的使用
   ```C{.line-numbers}
   typedef struct NUM
   {
      int a;
   }NUM,*pNUM;
   NUM num;
   pNUM pnum;
   ```

## 4. 变量、常量

**常量（constant）**

有些数据类型在程序使用之前已经预先设定好了，在整个程序的运行过程中没有变化，这些称为常量。

**变量（variable）**

有些数据类型在程序运行期间可能会改变或被赋值，这些称为变量。

### 4.1 定义变量的方法

```C{.line-numbers}
int age=150;
float weight=45.5f;
char ch='w';
```

### 4.2 变量的分类

* 局部变量
* 全局变量

```C{.line-numbers}
#include<stdio.h>
int global=2019;//全局变量
int main()
{
    int local=2018;//局部变量
    int global =2020;//局部变量
    printf("global = %d\n",global);
    return 0;
}
```

> global = 2020  

**总结**

上面的局部变量global变量的定义没有问题。

当局部变量和全局变量同名时，局部变量优先使用。

### 4.3 变量的使用

```C{.line-numbers}
#include<stdio.h>
int main()
{
    int num1=0;
    int num2=0;
    int sum=0;
    printf("输入两个操作数:>")；
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("sum=%d\n",sum);
    return 0;
}
```

### 4.4 变量的作用域和生命周期

**作用域**

作用域描述程序中可访问标识符的区域。

一个C变量的作用域可以是块作用域、函数作用域、函数原型作用域或文件作用域。

块是一对花括号括起来的代码区域。

局部变量的作用域是变量所在的局部范围。

全局变量的作用域是整个工程。

**生命周期**

变量的生命周期指的是变量的创建到销毁的一个时间段。

局部变量的生命周期是进入作用域生命周期开始，出作用域生命周期结束。

全局变量的生命周期是整个程序的生命周期。

### 4.5 常量

C语言中的常量分为以下几种：

* 字面常量
* const修饰的常变量
* #define定义的标识符常量
* 枚举常量

**字面常量：**指的是直接输入到程序中的值。

**const修饰的常变量：**const修饰的变量具有常量属性，本质上依然是变量。

```C{.line-numbers}
#include<stdio.h>
int main()
{
    const int num=10;
    num=20;//错误
}
```

num被称为const修饰的常变量，const修饰的常变量在C语言中只是在语法层面限制了变量num不能直接被改变，但是num本质上还是一个变量，所以叫常变量。

**define定义的常量标识符**

```C{.line-numbers}
#include<stdio.h>
#define N 100
int main()
{
    int n=N;
    printf("%d\n",n);
    return 0;
}
```

**枚举常量（enumerated type）：**可以一一列举的常量。

```C{.line-numbers}
#include<stdio.h>
enum SEX
{
    Male,
    Female,
    Secret
};
int main()
{
    enum SEX M=Male;
    enum SEX F=Female;
    enum SEX S=Secret;
    printf("%d\n",M);
    printf("%d\n",Male);
    printf("%d\n",F);
    printf("%d\n",Female);
    printf("%d\n",S);
    printf("%d\n",Secret);
    return 0;
}
```

> 0  
> 0  
> 1  
> 1  
> 2  
> 2  

枚举常量的值默认从0开始，依次加1。

## 5. 字符串+转义字符+注释