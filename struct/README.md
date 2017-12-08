Struct 

使用 struct 時，考慮的是一組資料擁有的相關性，例如學生會有學號、姓名、住址、電話等，若操作時經常都要傳遞同樣一組資料，可以使用 struct 來定義一個 Student 型態，這個型態中包括了學號、姓名、住址、電話等資訊，接著可以使用 Student 來宣告新的資料，進行資料指定或取出等

* 在存取 struct 成員時，必須透過宣告的名稱加上 . 運算子



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

* struct in struct 
```
struct nba_team {
    char *name;
    int number;

    struct {
        char *color;
        double radius;
    } ball;
};

struct nba_team losangelos;
losangeles.name = "laker";
losangeles.number = 1;
losangeles.ball.color = "red";
losangeles.ball.radius = 5.0;
```

* Access struct by pointer

使用時機
. 函式想改變的是被傳遞的 struct 實例本身，而不是實例的複本
. 另情況效率考量，如果 struct 實例本身很龐大，若不想有複製整個 struct 實例負擔

1. Create a struct
```
struct Ball ball = {"red", 4.0};
```
2. Create a struct pointer
```
struct Ball *ptr;
```
3. let the pointer point to the struct address
```
ptr = &ball;
```
4. Access by the '->' operator
```
printf("ball: %s\t%.2f\n", ptr->color, ptr->radius);
```
* Struct and Pointer Recall

