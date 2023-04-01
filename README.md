<br/>
<p align="center">
  <a href="https://github.com/Aldo2303/holbertonschool-printf">
    <img src="https://blog.holbertonschool.com/wp-content/uploads/2020/04/unnamed-2.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">README _printf</h3>

  <p align="center">
    Creating our custom _printf for Holberton School Uruguay
    <br/>
    <br/>
    <a href="https://github.com/Aldo2303/holbertonschool-printf"><strong>Explore the docs »</strong></a>
    <br/>
    <br/>
  </p>
</p>

![Contributors](https://img.shields.io/github/contributors/Aldo2303/holbertonschool-printf?color=dark-green)

## Table Of Contents

* [About the Project](#about-the-project)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation, compiling and executing](#installation-compiling-and-executing)
* [Usage](#usage)
* [Authors](#authors)

## About The Project

![Screen Shot](https://upload.wikimedia.org/wikipedia/commons/6/64/Untitled-%E2%80%91-Made-with-FlexClip.gif)

### int _printf(const char *format, ...);
###### The objective of this project is to create a custom version of the ```printf``` function, which is a C function belonging to the ```<stdio.h>``` standard library. Its purpose is to print formatted text to the standard output stream, taking as inputs ```constant *format``` and a ```variadic list``` and returning the number of characters output, or a negative value if an output error occurs. Hence the "f" in the name stands for "formatted". In our version, we can print any combinations of chars, strings, intergers and decimals as data types.

## Getting Started

Here is a practical guide for installing and compiling our _printf

### Prerequisites

<b>The repository containing this project has these files:</b>

```main.h```: holds prototypes of functions spread across all files.
```man_3_printf```: custom manpage for custom _printf function.
```_functions.c```: holds each function to be changed for specifier.
```_get_sp.c```: gets the function corresponding to specifier.
```_printf.c```: holds custom _printf function.
```_write.c```: prints a char on stdo.

### Installation, compiling and executing

<b>1. Clone the repo, by executing: </b>
```sh
git clone https://github.com/Aldo2303/holbertonschool-printf
```
<b>2. Create your ```main.c```, for example: </b>
```sh
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
     int len;
     len = _printf("Let's try to printf a simple sentence.\n");
     _printf("Length:[%d, %i]\n", len, len);
     _printf("Negative:[%d, %i]\n", -762534, -762534);
     _printf("Character:[%c]\n", 'H');
     _printf("String:[%s]\n", "I am a string !");
     len = _printf("Percent:[%%]\n");
     _printf("Len:[%d]\n", len);
     _printf("Unknown:[%r]\n");
     return (0);
}
```
<b>3. Compile it with: </b>
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
<b>4. Execute as follows: </b>
```sh
./a.out
```
<b>5. Your output should be:</b>
```sh
Let's try to printf a simple sentence.
Length:[39, 39]
Negative:[-762534, -762534]
Character:[H]
String:[I am a string !]
Percent:[%]
Len:[12]
Unknown:[%r]
```

## Usage

<b> For chars as data type: </b>
- Input:  
```sh
_printf("character = %c", a);
```
- Output:
```sh
character = a
```
<b> For strings as data type: </b>
- Input:  
```sh
_printf("string = %s", "Hello World");
```
- Output:
```sh
string = Hello World
```
<b> For integers as data type: </b>
- Input:  
```sh
_printf("integer = %i", 6323);
```
- Output:
```sh
integer = 6323
```
<b> For decimals as data type: </b>
- Input:  
```sh
_printf("decimal = %d", -6324);
```
- Output:
```sh
decimal = -6324
```


## Authors

* **Aldo Sánchez** - *Holberton Student* - [Aldo Sánchez](https://github.com/Aldo2303) - *Author*
* **Luisina Llugdar** - *Holberton Student* - [Luisina Llugdar](https://github.com/LuisinaLlugdar) - *Author*
