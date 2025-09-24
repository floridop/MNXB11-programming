# MNXB11-programming
Programming examples for the MNXB11 course

## Directory structure

```
.
├── code
│   ├── bash
│   │   └── readgames.sh # read nintendowiigames.xml using BASH
│   ├── C
│   │   └── readgames.c # read nintendowiigames.xml using C
│   ├── CPP
│   │   ├── readgames.cpp # read nintendowiigames.xml using CPP
│   │   └── sizeoftypes.cxx # showcase of size of types and integer limitations
│   ├── Java
│   │   └── readgames.java # read nintendowiigames.xml using Java
│   └── Python
│       ├── floatingerrors.py # showcase of floating point precision issues
│       └── readgames.py # read nintendowiigames.xml using Python
├── data
│   ├── getdatabase.sh # Download the xml database of Nintendo games
│   └── nintendowiigames.xml # An excerpt of the Nintendo Wii database of games
├── LICENSE
└── README.md
```

## How to use these examples

Change directory inside each directory. C, C++ and Java need compilation, BASH and Python scripts can be run by the interpreter.
Data contains some of the data used by the examples.

To compile and run C++ code:

```
g++ <sourcecodefile>
./a.out
```

To compile and run java code:

```
java <sourcecodefile>
```

To interpret and run BASH or Python code:

```
./<sourcecodefile>
```


