# C++ and DSA Practice

A collection of C++ programs I wrote while learning the language and core data structures and algorithms. It starts with basic syntax and works up to linked lists, stacks and trees.

## About the Repository

This repository is a learning log. Each folder covers one topic, and the files inside are numbered in the order I worked through them. Most programs are small and focus on a single idea, such as a loop pattern, a pointer concept or one operation on a data structure.

Many files keep earlier attempts as commented-out code above or below the final version. I left these in on purpose, because they show different ways to solve the same problem and how the solution improved.

## Learning Objectives

- Understand C++ syntax, data types, operators and control flow.
- Write and use functions, pointers and references.
- Work with arrays, vectors, 2D arrays and strings.
- Think recursively and solve problems with recursion.
- Implement searching and sorting algorithms and compare their approaches.
- Learn object-oriented programming: classes, constructors, static members and overloading.
- Build linked lists, stacks and trees from scratch, and use the STL `stack`.

## Technologies Used

- **Language:** C++ (the programs use standard C++ and the STL)
- **Compiler:** GCC / G++ (developed with MinGW-w64 G++ 8.1 on Windows)
- **Editor:** Visual Studio Code

## Topics Covered

| #  | Folder | Topic | Programs |
|----|--------|-------|:--------:|
| 01 | [01-cpp-fundamentals](01-cpp-fundamentals/) | Output, variables, operators, input, type casting | 20 |
| 02 | [02-conditionals](02-conditionals/) | `if`/`else`, logical operators, ternary, `switch` | 15 |
| 03 | [03-loops](03-loops/) | `for`, `while`, `do-while`, `break`, `continue`, digit problems | 19 |
| 04 | [04-pattern-programs](04-pattern-programs/) | Star, number and alphabet patterns | 21 |
| 05 | [05-functions](05-functions/) | Parameters, return types, scope, default arguments | 13 |
| 06 | [06-pointers](06-pointers/) | Addresses, dereferencing, pass by reference, pointer arithmetic | 11 |
| 07 | [07-arrays](07-arrays/) | Declaration, input/output, sum, max, linear search | 10 |
| 08 | [08-arrays-and-vectors](08-arrays-and-vectors/) | `vector` basics, reversing, rotating, two-pointer problems | 19 |
| 09 | [09-multidimensional-arrays](09-multidimensional-arrays/) | 2D arrays, matrix addition, transpose, rotation, multiplication | 14 |
| 10 | [10-strings](10-strings/) | `string` functions, anagram, `stringstream`, `stoi` | 18 |
| 11 | [11-recursion](11-recursion/) | Factorial, Fibonacci, power, call order | 12 |
| 12 | [12-recursion-problems](12-recursion-problems/) | Tower of Hanoi, subsets, recursive array problems | 5 |
| 13 | [13-searching-algorithms](13-searching-algorithms/) | Linear search, binary search, lower/upper bound, square root | 8 |
| 14 | [14-basic-sorting](14-basic-sorting/) | Bubble, selection and insertion sort | 6 |
| 15 | [15-advanced-sorting](15-advanced-sorting/) | Merge sort | 1 |
| 16 | [16-oop-fundamentals](16-oop-fundamentals/) | Classes, getters/setters, constructors, destructor, overloading | 14 |
| 17 | [17-singly-linked-list](17-singly-linked-list/) | Insertion, deletion, middle node, remove n-th from end | 16 |
| 18 | [18-doubly-linked-list](18-doubly-linked-list/) | Doubly linked list nodes, display, class with insert operations | 3 |
| 19 | [19-stacks](19-stacks/) | STL `stack`, push at bottom, reverse a stack, balanced brackets | 10 |
| 20 | [20-infix-expression-evaluation](20-infix-expression-evaluation/) | Evaluating infix expressions with two stacks | 2 |
| 21 | [21-binary-trees](21-binary-trees/) | Tree nodes, size, sum, levels, diameter, level-wise printing | 10 |
| 22 | [22-binary-search-trees](22-binary-search-trees/) | Search, insert, lowest common ancestor, deletion | 4 |

## Repository Structure

```text
cpp-dsa-practice/
├── 01-cpp-fundamentals/
├── 02-conditionals/
├── 03-loops/
├── 04-pattern-programs/
├── 05-functions/
├── 06-pointers/
├── 07-arrays/
├── 08-arrays-and-vectors/
├── 09-multidimensional-arrays/
├── 10-strings/
├── 11-recursion/
├── 12-recursion-problems/
├── 13-searching-algorithms/
├── 14-basic-sorting/
├── 15-advanced-sorting/
├── 16-oop-fundamentals/
├── 17-singly-linked-list/
├── 18-doubly-linked-list/
├── 19-stacks/
├── 20-infix-expression-evaluation/
├── 21-binary-trees/
├── 22-binary-search-trees/
├── .vscode/
├── .gitignore
└── README.md
```

Files are named `NN-topic-name.cpp`, where `NN` is the order in which the program was written. For example: `13-searching-algorithms/02-binary-search.cpp`.

## How to Compile

Every file is a standalone program with its own `main()`, so compile one file at a time.

Check that G++ is installed:

```bash
g++ --version
```

Compile a program:

```bash
g++ -std=c++17 13-searching-algorithms/02-binary-search.cpp -o binary-search
```

- `-std=c++17` selects the C++ standard.
- `-o binary-search` sets the name of the output program.

Optional: add `-Wall` to see helpful warnings.

```bash
g++ -std=c++17 -Wall 13-searching-algorithms/02-binary-search.cpp -o binary-search
```

## How to Run

On Windows (Command Prompt or PowerShell):

```bash
.\binary-search.exe
```

On Linux or macOS:

```bash
./binary-search
```

Some programs read input from the keyboard (using `cin`), so type the requested values and press Enter. Compiled files (`.exe`, `.out`, `.o`) are ignored by Git.

## Example Program

Binary search on a sorted array, from [13-searching-algorithms/02-binary-search.cpp](13-searching-algorithms/02-binary-search.cpp):

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21};
    int target = 18;

    int n = sizeof(arr) / sizeof(arr[0]);

    int lo = 0;        // index
    int hi = n - 1;    // index
    bool flag = false;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // used maths for more optimized code 

        if (arr[mid] == target) {
            flag = true;
            break;
        }
        else if (arr[mid] < target) lo = mid + 1;
        else  hi = mid - 1;   // another way of writing this line else if (arr[mid]>target) hi = mid - 1;
    }

    if (flag) cout << "target present";
    else cout << "target not present";

    return 0;
}
```

Output:

```text
target present
```

## Notes on the Learning Progression

- **Folders build on each other.** Fundamentals, conditionals and loops come first. Pattern programs practise nested loops. Functions and pointers lead into arrays, vectors and strings.
- **Recursion comes before data structures.** The recursion folders prepare for linked lists, recursive stack operations and tree traversal.
- **OOP comes before linked lists.** The linked list, stack and tree programs use classes for their nodes.
- **Many files show more than one approach.** Earlier versions are kept as comments so the improvement from a simple solution to a better one stays visible, for example brute force versus binary search, or recursion versus a loop.
- **Topics still in progress.** Infix to prefix/postfix conversion and graphs are planned but not written yet.
