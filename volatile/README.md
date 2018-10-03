# Volatile (http://adrianhuang.blogspot.com/2011/08/cvolatile.html)

volatile 變數代表其所儲存的內容會不定時地被改變，宣告volatile變數用來告訴編譯器 (Compiler) 不要對該變數做任何最佳化操作，凡牽涉讀取該volatile變數的操作，保證會到該變數的實體位址讀取，而不會讀取CPU暫存器的內容 (提升效能) 。舉個例子，某一硬體狀態暫存器 (Status Register)就必須宣告volatile關鍵字，因為該狀態暫存器會隨時改變，宣告volatile便可確保每次讀取的內容都是最新的。

Volatile關鍵字的應用範疇
1. 硬體暫存器，如狀態暫存器。
2. 多執行緒所共用的全域變數。
3. 中斷服務函式 (Interrupt Service Rountie，ISR)所使用的全域變數。

有陷阱

```
volatile_trap.c 
```

## Refs
http://newscienceview.blogspot.com/2013/09/c-volatile.html
