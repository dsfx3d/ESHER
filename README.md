# ESHER
> “Cryptography is the ultimate form of non-violent direct action.” 
> ― Julian Assange

![ESH](/esh.jpg)

__[Usage](#usage) | [Description](#description) | [Project Structure](#project-structure)__

## Usage
Esher is a command line utility for file encryption.

##### Syntax
    esh -f[h|e|d|dh|do|p|l] arg1 --optional[ -p[o] arg2 ] [key] 
  
##### Options
    |   Flag   |   Options                   | Discription                                   |
    -----------------------------------------------------------------------------------------|
    |   -f     |  -h --help                  | Displays the utility manual page              |
    |---    ---|---                       ---|---                                         ---|
    |          |  -e [filepath] [key]        | 1. Read data at 'filepath'.                   |
    |          |                             | 2. Encrypt data using 'key'.                  |
    |          |                             | 3. Convert plainfile to dopefile.             |
    |---    ---|---                       ---|---                                         ---|
    |          |  -d [filepath] [key]        | 1. Read data at 'filepath'.                   |
    |          |                             | 2. Decrypt data using 'key'.                  |
    |          |                             | 3. Display Decrypted Data.                    |
    |---    ---|---                       ---|---                                         ---|
    |          |  -d [filepath] -o \         | 1. Read data at 'filepath'.                   |
    |          |     [outputpath] [key]      | 2. Decrypt data using 'key'.                  |
    |          |                             | 3. Display Decrypted Data.                    |
    |          |                             | 4. Store decyphered data at `outputpath'      |
    |---    ---|---                       ---|---                                         ---|
    |          |  -dh [filepath] -o \        | 1. Read data at 'filepath'.                   |
    |          |     [outputpath] [key]      | 2. Decrypt data using 'key'.                  |
    |          |                             | 3. Store decyphered data at `outputpath`      |
    |---    ---|---                       ---|---                                         ---|
    |          |  -do [filepath] [key]       | 1. Read data at 'filepath'.                   |
    |          |                             | 2. Decrypt data using 'key'.                  |
    |          |                             | 3. Overwrites the original file at 'filepath' |
    |          |                             |    decrypted data.                            |
    |---    ---|---                       ---|---                                         ---|
    |   -p     |  -o [filepath] --outputfile | To be used with `-d` flag. Read Description   |
                       
    
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
