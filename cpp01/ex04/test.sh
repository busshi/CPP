#!/bin/bash

make re

echo "coucou" > infile
echo "holà" >> infile

./sedIsForLosers infile "coucou" "au revoir"
diff infile infile.replace
[[ $? -eq 0 ]] && echo -e "[\033[32m ok \033[0m] 👍" || echo -e "[\033[31m ko \033[0m] 👎"

rm -f infile infile.replace
make fclean
