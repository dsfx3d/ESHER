# ESHER

> “Cryptography is the ultimate form of non-violent direct action.” 
> ― Julian Assange

## About
Esher is a command line utility for file encryption.

##### Syntax
    esh -f[h|e|d|dh|do|p|l] arg1 --optional[ -p[o] arg2 ] [key] 
  * -h   help
  * -e   encrypt
  * -d   decrypt
  * -dh  decrypt hidden mode
  * -do  decrypt in original file
  * -p   print file
  * -l   login [future use]

##### Options
    |   Flag   |   Options             | Discription                               |
    -------------------------------------------------------------------------------|
    |   -f     |  -h                   | Displays the utility manual page          |
    |---    ---|---                 ---|---                                     ---|
    |          |  -e [filepath] [key]  | 1. Read data at 'filepath'.               |
    |          |                       | 2. Encrypt data using 'key'.              |
    |          |                       | 3. Convert plainfile to dopefile.         |                             
    |---    ---|---                 ---|---                                     ---|
    |          |  -d [filepath] [key]  | 1. Read data at 'filepath'.               |
    |          |                       | 2. Decrypt data using 'key'.              |
    |          |                       | 3. Display Decrypted Data.                |
    |---    ---|---                 ---|---                                     ---|
    
### Description
.....
 
