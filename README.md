# ESHER
> “Cryptography is the ultimate form of non-violent direct action.” 
> ― Julian Assange

[Usage](https://github.com/dsfx3d/ESHER#usage) | [Description](https://github.com/dsfx3d/ESHER#description) | [Project Structure](https://github.com/dsfx3d/ESHER#project-structure)

![ESH](/esh.jpg)

## Usage
Esher is a command line utility for file encryption.

##### Syntax
    esh -f[h|e|d|dh|do|p|l] arg1 --optional[ -p[o] arg2 ] [key] 
  
##### Options
    |   Flag   |   Options                   | Discription                                 |
    ---------------------------------------------------------------------------------------|
    |   -f     |  -h --help                  | Displays the utility manual page            |
    |---    ---|---                       ---|---                                       ---|
    |          |  -e [filepath] [key]        | 1. Read data at 'filepath'.                 |
    |          |                             | 2. Encrypt data using 'key'.                |
    |          |                             | 3. Convert plainfile to dopefile.           |
    |---    ---|---                       ---|---                                       ---|
    |          |  -d [filepath] [key]        | 1. Read data at 'filepath'.                 |
    |          |                             | 2. Decrypt data using 'key'.                |
    |          |                             | 3. Display Decrypted Data.                  |
    |---    ---|---                       ---|---                                       ---|
    |   -p     |  -o [filepath] --outputfile | To be used with `-d` flag. Read Description |
                       
    
### Description
.....
 
## Project Structure
* __esh.jpg__ - The Armenian Esh.
* __esh.cpp__ - Main source file.
* __/require__ - Required headers directory.
  * __common.h__ - All common `includes` and `defines`.
  * __eli.h__ - File handler for the project.
  * __eli_def.h__ - Declaration of _eli.h_.
  * __esh.h__ - Interface functions between _esh.cpp_ and required headers.
  * __esher.h__ - _le_ Cryptographer.
  * __esher_def.h__ - Declaration of _esher.h_.
