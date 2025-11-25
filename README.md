# _printf

## Summary
- [Description](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#description)
- [General format](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#general-format)
- [Structure project](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#structure-project)
- [Flowchart](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#flowchart)
- [Installation](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#installation)
- [Compilation](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#compilation)
- [Documentation](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#documentation-man-page)
- [Technologies used](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#technologies-used)
- [Authors](https://github.com/Loic2888/holbertonschool-printf/edit/main/README.md#authors)

---

## Description

Reproduction of the printf function from the C language.  
This version handles several conversion specifiers and prints the result to standard output (stdout).  

```int _printf(const char *format, ...);```

The _printf function traverses a format string and prints characters and values according to the specifiers encountered.  
It returns the total number of characters printed, as in the standard version.

This project has the following constraints:
- No switches
- No global variables
- Maximum of 5 functions per file
- Betty style


###  Supported features
- ```%c``` : character
- ```%s``` : character string
- ```%%``` : to print %
- ```%d``` : signed integer
- ```%i``` : unsigned integer


---


##  General Format

The format consists of a sequence of normal characters + directives beginning with ```%```.

Examples:
```
_printf(‘Hello %s\n’, ‘Holberton’);
_printf(‘Number: %d\n’, 42);
_printf(‘Percent: %%\n’);
```

---


## Structure project

```
holbertonschool-printf/
│
├── _printf.c
├── main.h
├── 
└──README.md
```     

---


## Flowchart

<a href="https://ibb.co/MxJRqX9f"><img src="https://i.ibb.co/21pjXb5S/Flowchart2-fond.png" alt="Flowchart2-fond" border="0"></a>

---

## Installation

- Clone this repository:
- Open your preferred Terminal.
- Navigate to the directory where you want to clone the repository.
- Run the following command:
  
```git clone https://github.com/Loic2888/holbertonschool-printf.git```
- Open the cloned repository.

---


## Compilation

```gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c```


---


## Documentation (man page)

The complete man page can be found in the file:  

man_3_printf


---


## Technologies Used

<div align="left">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" height="40" alt="c logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/github/github-original.svg" height="40" alt="github logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/linux/linux-original.svg" height="40" alt="linux logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/windows8/windows8-original.svg" height="40" alt="windows8 logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/vscode/vscode-original.svg" height="40" alt="vscode logo"  />
</div>



---

##  Authors

- **Virginie**  
- **Loïc**
