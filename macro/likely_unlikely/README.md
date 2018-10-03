
in kernel 

```
<linux/compiler>

#define likely(x) __builtin_expect(!!(x), 1)

#define unlikely(x) __builtin_expect(!!(x), 0)
```

__buildin_expect((x), 1)表示x的值为真的可能性更大。

__buildin_expect((x), 0)表示x的值为假的可能性更大。


https://cosysn.github.io/2017/01/14/introduction-to-linux-kernel-2-likey-and-unlieky/
