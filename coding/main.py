import os
import sys
import string

template = 'template.cpp'
number_files = ['1.cpp', '2.cpp', '3.cpp', '4.cpp', '5.cpp', '6.cpp', '7.cpp', '8.cpp', '9.cpp', '10.cpp']
upper_case = list(string.ascii_uppercase)

file_name_choose = input('Alphabet(a) or Number(0)')
number_of_files = int(input("Number of Files : "))

if file_name_choose == 'a':
	for i in range(number_of_files):
		f = f'{upper_case[i]}.cpp'
		intput_file = open(template, 'r')
		output_file = open(f, 'w')
		for line in intput_file:
			output_file.write(line)

else:
	for i in range(number_of_files):
		f = number_files[i]
		intput_file = open(template, 'r')
		output_file = open(f'{i + 1}.cpp', 'w')
		for line in intput_file:
			output_file.write(line)