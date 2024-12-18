# Language Processors

Computer programs are generally written in high-level languages (like C++, Python, and Java). A language processor, or language translator, is a computer program that convert source code from one programming language to another language or to machine code (also known as object code). They also find errors during translation.

## Linker

Linker is a program in a system which helps to link object modules of a program into a single object file. It performs the process of linking.

Linkers are also called as link editors. Linking is a process of collecting and maintaining piece of code and data into a single file. Linker also links a particular module into system library.

It takes object modules from assembler as input and forms an executable file as output for the loader. Linking is performed at both compile time, when the source code is translated into machine code and load time, when the program is loaded into memory by the loader.

Linking is performed at the last step in compiling a program.

`Source code -> compiler -> Assembler -> Object code -> Linker -> Executable file -> Loader`

## Loader

A loader is a program that is responsible for loading executable programs into memory for execution. The loader reads the object code of a program, which is usually in binary form, and copies it into memory.

It also performs other tasks such as allocating memory for the program’s data and resolving any external references to other programs or libraries. The loader is typically part of the operating system and is invoked by the system’s bootstrap program or by a command from a user.

## Pass

A Compiler pass refers to the traversal of a compiler through the entire program. Compiler passes are of two types Single Pass Compiler, and Two Pass Compiler or Multi-Pass Compiler.

1. Single Pass Compiler
   If we combine or group all the phases of compiler design in a single module known as a single pass compiler.

   - A one-pass/single-pass compiler is a type of compiler that passes through the part of each compilation unit exactly once.
   - Single pass compiler is faster and smaller than the multi-pass compiler.
   - A disadvantage of a single-pass compiler is that it is less efficient in comparison with the multipass compiler.
   - A single pass compiler is one that processes the input exactly once , so going directly from lexical analysis to code generator, and then going back for the next read.

2. A Two pass/multi-pass Compiler is a type of compiler that processes the source code or abstract syntax tree of a program multiple times.
   - First Pass is referred as Front end
     - Analytic part
     - Platform independent
   - Second Pass is referred as Back end
     - Synthesis Part
     - Platform Dependent

## Assembler

Assembler is a program for converting instructions written in low-level assembly code into relocatable machine code and generating along information for the loader.

It is necessary to convert user-written programs into machinery code. This is called a translation of a high-level language to a low-level that is machinery language. This type of translation is performed with the help of system software.

An Assembler can be defined as a program that translates an assembly language program into a machine language program. Self-assembler is a program that runs on a computer and produces the machine codes for the same computer or same machine.

It is also known as a resident assembler. A cross-assembler is an assembler that runs on a computer and produces machine codes for other computers.

## Preprocessor

Preprocessors are programs that process the source code before compilation. Several steps are involved between writing a program and executing a program in C.

Preprocessor programs provide preprocessor directives that tell the compiler to preprocess the source code before compiling. All of these preprocessor directives begin with a ‘#’ (hash) symbol.

The ‘#’ symbol indicates that whatever statement starts with a ‘#’ will go to the preprocessor program to get executed. We can place these preprocessor directives anywhere in our program.

There are 4 Main Types of Preprocessor Directives:

- Macros
- File Inclusion
- Conditional Compilation
- Other directives

## Marco

In C, Macros are pieces of code in a program that is given some name. Whenever this name is encountered by the compiler, the compiler replaces the name with the actual piece of code.

The ‘#define’ directive is used to define a macro.

#### Syntax of Macro Definition

`#define token value`

where after preprocessing, the token will be expanded to its value in the program.
