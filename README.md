# Sphinx integration for CMake

A CMake module for Sphinx inspired by the excellent Doxygen module. Given that
you have CMake, Doxygen, Sphinx (+Breathe) installed, generating API
documentation can be done by:

```
$ cd cmake-sphinx
$ mkdir build
$ cmake -G "<generator supported by your platform>" ..
$ cmake --build . --target foobar_sphinx
```

