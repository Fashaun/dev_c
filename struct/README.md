Struct 

使用 struct 時，考慮的是一組資料擁有的相關性，例如學生會有學號、姓名、住址、電話等，若操作時經常都要傳遞同樣一組資料，可以使用 struct 來定義一個 Student 型態，這個型態中包括了學號、姓名、住址、電話等資訊，接著可以使用 Student 來宣告新的資料，進行資料指定或取出等

1. 在存取 struct 成員時，必須透過宣告的名稱加上 . 運算子



* 定義 struct 的方式

1.
```c=
struct Ball {
    char color[10];
    double radius;
};

typedef struct Ball Sphere;
```

2.
```
typedef struct {
    char color[10];
    double radius;
} Ball;
```
