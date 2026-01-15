#Junior Software Engineer – Test Assignment

This repository contains the solutions for the test assignments provided by Exasoft Singapore.
The focus is on clarity, correctness, and clean code.



Repository Structure

Exasoft_Assignment
├── assignment_1
│ └── reverse_words.cpp # Assignment 1 solution (C++)
├── assignment_2
│ └── update_version.py # Assignment 2 solution (Python)
├── develop
│ └── global
│ └── src
│ ├── SConstruct # File updated by Assignment 2
│ └── VERSION # File updated by Assignment 2
└── README.md




 Assignment 1 – Reverse Words (C++)

Problem:
Reverse each word in a string while keeping punctuation, spaces, and word order unchanged.


Approach:

1. Scan the string character by character.


2. Detect letters/numbers → start of a word.


3. Find the end of the word.


4. Reverse only the characters in the word.


5. Skip punctuation and spaces.


6. Return the modified string.



Example:

Input:

"String; 2be reversed..."

Output:

"gnirtS; eb2 desrever..."



How to Run:

1. Open PowerShell in the repository folder (<path-to-folder>\Exasoft_Assignment).

2. Compile the program:
C:\MinGW\bin\g++ assignment_1\reverse_words.cpp -o assignment_1\reverse_words.exe

3. Run the program:
.\assignment_1\reverse_words.exe

4. Enter your string to see the reversed words.






Assignment 2 – Update Version (Python)

Problem:
Update build version in two files: SConstruct and VERSION.
Version comes from environment variable BuildNum.


Files are located under:

<path-to-folder>\Exasoft_Assignment\develop\global\src

Approach:

1. Validate environment variables (SourcePath and BuildNum).


2. Read both files.


3. Use regex to find and replace the version numbers.


4. Save the updated files.


5. Print confirmation: Version updated successfully.



How to Run:

1. Set environment variables in PowerShell:
$env:SourcePath="<path-to-folder>\Exasoft_Assignment"
$env:BuildNum="999"


2. Run the script:
python assignment_2\update_version.py


3. Check updated files:
SConstruct → point=999

VERSION → ADLMSDK_VERSION_POINT=999
