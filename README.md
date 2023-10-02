# computer-security-unb
Repository for exercises and assignments for the computer security course at the University of Brasília

# Project Title

Trabalho 1 - Cifra Vigenére
Cristiane Damancena Gonçalves de Oliveira
2023/2

## Table of Contents

- [Installation](#installation)
- [Tests](#tests)
- [Usage](#usage)
- [Configuration](#configuration)
- [Contribution](#contribution)
- [License](#license)

## Installation

To run a C executable in the Linux terminal, follow these steps:

Make sure you have a C compiler installed, such as GCC (GNU Compiler Collection). If you haven't already installed it, you can do so on many Linux distributions using the package manager. For example, on Ubuntu and Debian, you can install GCC with the following command:

```bash
sudo apt-get install gcc
```

After installing the compiler, create or obtain your C source code and save it with a ".c" extension. For example, you can create a file named "program.c."

Open the terminal and navigate to the directory where the C file is located. You can use the "cd" command to do this. For example:

```bash
cd /path/to/your/computer-security-unb/src
```

Compile the source code using GCC. The basic command to compile a C file is as follows:

```bash
gcc -o program main.c
```

This will generate an executable file named "program" (or the name you specified after the -o option).

Now that you have the executable file, you can run it in the terminal using the following command:

```bash
./program
```

Make sure to include "./" before the executable's name to indicate that you are running a file in the current directory.

## Tests

The tests for this project were done using the Minunit library: https://github.com/siu/minunit

To use this library and run all the tests, go to the directory:

```bash
cd /path/to/your/computer-security-unb/src/test
```

Compile the source code using GCC. The basic command is:

```bash
gcc -o tests tests.c
```
Now that you have the executable file, you can run it in the terminal using the following command:

```bash
./tests
```
The terminal will display the results of the execution of all the tests. For exemples:

```bash
4 tests, 4 assertions, 0 failures

Finished in 0.00010496 seconds (real) 0.00009875 seconds (proc)

All tests executed
```

## Usage

To use the ciphers, run the program and select the cipher option you want to see the ciphertext in the console.

Type the number in the console. 

## Information

Student: Cristiane Damacena 180047906
