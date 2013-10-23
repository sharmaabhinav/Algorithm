Algorithm
=========
This Program is compliled on GNU GCC version 4.8.1
algorithm : -- non aschii character contain 1s followed by 0 in there highest byte like (1110)xxxxx xxxxxxxx xxxxxxxx
               Here 3 1s shows that character has a size of  3 byte.aschii character contain 0 in there highest bit
               like 0xxxxxxx.
               
               steps : read file byte by byte and check count of 1s followed by 0 if count = 0
                       it is a aschii character skip and if count!=0  increment count(non_aschii) and skip
                       bytes equal  to (count - 1).
