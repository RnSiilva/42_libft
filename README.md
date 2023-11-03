<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/RnSiilva/42_libft?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/RnSiilva/42_libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/RnSiilva/42_libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/RnSiilva/42_libft?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#%EF%B8%8F-bonus">Bonus</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

    🚀 TLDR: this project consists of coding basic C functions (see below), which are then compiled
	  into a library for use in other projects of the cursus.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` or `cc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

For all mandatory functions:

```shell
$ make
```

For bonus functions:

```shell
$ make bonus
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```
---
## 🌟 Bonus

The project includes a bonus version of libft, which includes functions that address structures and linked lists.

To test the bonus just run the make command as stated above.

## Grade: 125 / 100

## 📋 Testing

You can use any of this third party testers to test the project


- Francinette: https://github.com/xicodomingues/francinette
- libft-war-machine: https://github.com/0x050f/libft-war-machine
- libftTester: https://github.com/Tripouille/libftTester
- libft_file_checker: https://github.com/Nuno-Jesus/libft_file_checker
