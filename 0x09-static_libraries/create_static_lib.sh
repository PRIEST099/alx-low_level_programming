#!/bin/bash
codes=$(find . -maxdepth 1 -type f -name "*.c")

for code in $codes; do
	output_file="${code%.c}.o"
	gcc -c "$code" -o "$output_file"
done

ar rcs liball.a *.o

rm *.o
