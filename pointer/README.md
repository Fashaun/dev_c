# Pointer

## Introduction
 變數（Variable）提供具名稱的記憶體儲存空間，一個變數關聯一個資料型態、儲存的值與儲存空間的位址值
 
 變數的資料型態決定了變數分配到的記憶體大小；變數本身的值是指儲存於記憶體中的某個數值，可以透過變數名稱取得這個數值，這個數值又稱為 rvalue 或 read value；而變數的位址值則是指變數所分配到的記憶體之位置，變數本身又稱為 lvalue或 location value。
 
 * How to get address value of variable '&' (Address-of operator) ?
 ```
#include <stdio.h>

int main(void) {

    int var = 10;
    printf("memory address of var：%p\n", &var); // So each time you see the this line will get different value
    printf("value of var：%d\n", var); // The value you store in previos address
    return 0;
}
```

* Declare of pointer
```
int *ptr1; // Better for preventing from following error
int* ptr2;
void* ptr; // When encounter the case we care memory address only.
```

```
int* ptr1, ptr2; //ptr2 is not a pointer
```

* Initialization of pointer
- 若並未初始指標就指定值給 *ptr，所以會造成不可預知的結果（通常是記憶體區段錯誤），最好為指標 設定初值，如果指標一開始不指向任何的位址，則可設定初值為 0，表示不指向任何位址

```
// Not good style
int *ptr; 
*ptr = 10;

// Correct style
int *iptr = 0;
```
* Type Casting of pointer
```
void *vptr = &var ;
int *iptr = (int*) vptr;
```

* Change the value of const
```
const int var1 = 10;
int *vptr1 = &var1; // 在 Ubuntu 16.04 的 gcc 會產生警訊
*vptr1 = 20;
printf("%d\n", var1);

// If u dont wanna change the memory address also

//Solution 1
const int var2 = 10;
const int *vptr = &var2;
*vptr = 20; // error, assignment of read-only location 

//Solution 2
int x = 10;
int y = 20;
int* const vptr = &x;
vptr = &y;  // error,  assignment of read-only variable `vptr'
```

## Pointer Operation

* Double Pointer (Pointer to Pointer) 
```
int p = 10;
int *ptr1 = &p;
int **ptr2 = &ptr1;
```
ptr1 儲存了 p 變數佔有的位址，而 ptr2 則儲存了 ptr1 佔有的位址，所以使用 * 取值運算子時，*ptr2 取出的是 ptr1 儲存的值，也就是 &p，而再使用一次 * 運算子時，也就是 **ptr2 時，因為 *ptr2 == ptr1，所以 *(*ptr2 ) == *ptr1，而 *ptr1 == p，所以也就是取出了 p 的值了。

* Access char by pointer

好處: 可以直接 assign value, 不用再用 string function (stcpy ...)
```
char *str = "hello";
str = "world";

char str[] = "hello"; // 
str = "world";  // error, incompatible types in assignment
```
* Function Pointer

函式本身在記憶體中也佔有一個空間, 用變數的概念去想 ... 所以就可以用一個 pointer access

returnval_type (*pointer_name)(args) = func_name(); 

And the pointer to the memory address of function should declare with the same type of args and return value

```
int foo_without_arg(void);
char func_with_arg(int, char);
int main () {
    int  (*ptr)() = foo_without_arg;
    char (*ptr2)(int, char) = foo_with_arg; 
}
```

* Struct Pointer

Use '->' to access the address of struct

* malloc()、free()、calloc() and realloc()


## About Style and common error

### Not checking for allocation failures

Unsafe way:

```
struct SomeStruct *s = malloc(sizeof *s);
s->someValue = 0; /* UNSAFE, because s might be a null pointer */
```

Safe way:
```
struct SomeStruct *s = malloc(sizeof *s);
if (s)
{
    s->someValue = 0; /* This is safe, we have checked that s is valid */
}
```

### Using literal numbers instead of sizeof when requesting memory

- Non-portable allocation:
```int *intPtr = malloc(4*1000); /* allocating storage for 1000 int */ long *longPtr = malloc(8*1000); /* allocating storage for 1000 long */```

- Portable allocation:
```int *intPtr = malloc(sizeof(int)*1000); /* allocating storage for 1000 int */ long *longPtr = malloc(sizeof(long)*1000); /* allocating storage for 1000 long */```

- Or, better still:
```int *intPtr = malloc(sizeof(*intPtr)*1000); /* allocating st```

## Terms

- Wild pointer 
    - 野 ptr, 沒經過 initialization 的 ptr
    - ptr 必須先經過 initialization 才能使用
    - compile 可以發現

- dangling pointer
    - 該 ptr 指向的位址已經無法使用或是已經被別人使用
    - compile 可以發現

