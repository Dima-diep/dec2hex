# dec2hex

## What is it?

It's converter of numbers from DEC to HEX. Usage:
```
 ~ $ ./dec2hex 10
a
 ~ $ ./dec2hex 15 16
f 10
```

## Compilation

There is no need any specific libraries, only C++ (cross)compiler.
```
 ~ # apt install g++
 ~ # g++ dec2hex.cpp -o dec2hex
 ~ # ./dec2hex 838 1706
dc af
```
