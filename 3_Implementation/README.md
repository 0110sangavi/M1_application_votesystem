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