#!/bin/bash

echo "Enter the Three Numbers"
read num num2 num3

if [ $num1 -ge $num2 ] && [ $num1 -ge $num3 ]; then
    largest=$num1
elif [ $num2 -ge $num1 ] && [ $num2 -ge $num3 ]; then
    largest=$num2
else
    largest=$num3
fi

if [ $num -le $num2 ] && [ $num -le $num3 ]; then
    smallest=$num
elif [$num2 -le $num] && [$num2 -le $num3]; then
    smallest=$num2
elif [$num3 -le $num2] && [$num3 -le $num]; then
    smallest=$num3
fi

echo "Largest is $largest"
echo "Samllest is $smallest"
