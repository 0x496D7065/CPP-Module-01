*This project has been created as part of the 42 curriculum*

# CPP Module 01

## Description

The second module of the 42 C++ series. It focuses on **memory allocation** (stack vs heap), **pointers and references**, **pointers to member functions**, **file streams**, and the `switch` statement, all in C++98.

All code is compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Instructions

Each exercise has its own folder and its own `Makefile`:

```bash
cd ex00        # or ex01 ... ex06
make           # builds the executable
make clean     # removes object files
make fclean    # removes object files and the executable
make re        # rebuilds everything
```

### Requirements

- A C++ compiler (`c++`, `g++`, or `clang++`) with C++98 support
- `make`

## Exercises

### ex00: BraiiiiiiinnnzzZ

Creates a `Zombie` class with a name and an `announce()` function that makes it moan. Two helper functions show the difference between allocation types:

- `newZombie(name)` creates a zombie on the **heap** and returns it.
- `randomChump(name)` creates a zombie on the **stack** and makes it announce itself.

**Focus:** when to use the stack or the heap, and cleaning up allocated memory.

### ex01: Moar brainz!

Creates a whole horde of zombies at once with `zombieHorde(N, name)`, using a **single allocation** for the `N` zombies, and returns a pointer to the first one. Each zombie announces itself, and the memory is freed correctly.

**Focus:** allocating arrays of objects, and default constructors.

### ex02: HI THIS IS BRAIN

A short program that declares a string, a pointer to it, and a reference to it. It prints their memory addresses and their values to show that the pointer and the reference both refer to the original string.

**Focus:** pointers versus references.

### ex03: Unnecessary violence

Creates a `Weapon` class and two characters who use it:

- `HumanA` always has a weapon (held as a **reference**).
- `HumanB` may not have one (held as a **pointer**).

Changing the weapon's type is immediately visible in both characters' attacks.

**Focus:** choosing between a pointer and a reference.

### ex04: Sed is for losers

A mini file-replacement tool. It takes a filename and two strings, `s1` and `s2`, then writes a copy of the file named `<filename>.replace` in which every occurrence of `s1` is replaced by `s2`. The standard `std::string::replace` function is not allowed.

```bash
./replace file.txt "old" "new"
```

**Focus:** reading and writing files with file streams, and string manipulation.

### ex05: Harl 2.0

A `Harl` class that complains at four levels: `DEBUG`, `INFO`, `WARNING`, and `ERROR`. Its `complain(level)` function calls the right private member function, using an **array of pointers to member functions** instead of a chain of `if`/`else`.

**Focus:** pointers to member functions.

### ex06: Harl filter

Extends Harl so the program takes a log level as an argument and shows the messages from that level **and above**. The filter is implemented with a `switch` statement, and unknown levels print a default message.

```bash
./harl WARNING
```

**Focus:** the `switch` statement and its fall-through behavior.

## Project structure

```
.
├── ex00/   # Zombie (stack and heap)
├── ex01/   # Zombie horde
├── ex02/   # Pointers and references
├── ex03/   # Weapon, HumanA, HumanB
├── ex04/   # File search and replace
├── ex05/   # Harl and pointers to member functions
└── ex06/   # Harl filter with switch
```

Each folder contains its own `Makefile`, headers (`.hpp`), and sources (`.cpp`).

## Resources

- [cppreference.com](https://en.cppreference.com/)
- [Stack vs heap in C++](https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/)
- [Pointers to member functions](https://isocpp.org/wiki/faq/pointers-to-members)
- The 42 CPP Module 01 subject PDF
