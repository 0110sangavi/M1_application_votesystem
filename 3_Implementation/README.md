## IMPLEMENTATION

## Folder Structure

| Folder        |                Description                  |
| ------------- | -------------                               |
| inc           | All headers files                           |
| src           | main source code                            |
| unity         | All unity files                             |
| test          | All source code and data for testing purpose|
| build         | Build output (not included in git)          |

To execute the tests, run this from the terminal.

` gcc.exe .\test\test_vote_system.c .\unity\unity.c -Iinc -Iunity -o test.exe`

`C:\Users\Sangavi R\Documents\MiniVoteSystem\voting\M1_application_votesystem`

## Manual

## Setup to run Project-
1. An integrated development environment (Suggesting Visual Studio Code).
2. GCC compiler to compile the project.
3. "make" to run the Makefile smoothly.

## Steps To run Project
1. First clone the repository from the Github.
2. Open the repository in an IDE (Suggesting Visual Studio Code).
3. The next step is to build the project with the help of make command :
make all
4. Next step is to run the project with help of make command :
make run
5. If you want to run the test cases then run the following command :
make test
6. Clean all executable files by the following command :
make clean