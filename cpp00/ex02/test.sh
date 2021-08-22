#!/bin/bash

make re
./the_job_of_your_dreams > out
cat out | cut -d "]" -f2 > mine
rm out
cat 19920104_091532.log | cut -d "]" -f2 > true
diff mine true
[[ $? -eq 0 ]] && echo -e "[ \033[32mOK\033[0m ] All good :)" || echo -e "[ \033[31mKO\033[0m ] Test failed :("
rm mine true

exit 0
