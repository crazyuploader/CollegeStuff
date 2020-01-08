#!bin/bash
echo ""
echo "Compiling Programs with GCC"
echo ""
for f in $(ls *.c); do echo "Compiling $f"; gcc $f; done
echo ""
echo ""
echo "Compiling Programs with Clang"
echo ""
for f in $(ls *.c); do echo "Compiling $f"; clang $f; done
echo ""
