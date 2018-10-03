union 維護足夠的空間來置放多個資料成員中的「一種」，而不是為每一個資料成員配置空間，使用關鍵字 union 來定義，在 union 中所有資料成員共用一個空間，同時間只能儲存其中一個成員的資料


```
union StateMachine {
    char character;
    int number;
    char *str;
    double exp;
};
```

一個 union 只配置一個足夠大的空間以來容納最大長度的資料成員，以上例而言，最大長度是 double 型態，所以 StateMachine 的記憶體空間 就是 double 型態的長度

由於 union 的資料成員共用一個記憶體空間，所以必須存取正確的資料成員才能正確的取出資料
