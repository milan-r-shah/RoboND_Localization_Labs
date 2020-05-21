Before running this program, make sure you have **Python 2.7** installed in your computer. Apart from that, it's also required to have **matplotlib** library installed in your machine.

### Compiling the Program
```sh
$ mkdir Images
$ g++ main.cpp -o app -std=c++11 -I/usr/include/python2.7 -lpython2.7
```

### Running the Program
```sh
$ ./app
```
Wait for the program to iterate `50` times.

All the output images would be generated in ```Images``` directory.
