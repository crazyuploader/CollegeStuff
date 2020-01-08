#!bin/bash
echo ""
echo "Compiling Programs with GCC"
for f in $(ls *.c); do echo "Compiling $f"; gcc $f; done
echo ""
echo ""
echo "Compiling Programs with Clang"
for f in $(ls *.c); do echo "Compiling $f"; clang $f; done
echo ""