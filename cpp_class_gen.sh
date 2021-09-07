#!/bin/bash


check()
{
[[ $? -eq 0 ]] && echo -e "[ \033[32mOK\033[0m ] File $file successfully created" || echo -e "[ \033[31mKO\033[0m ] File $file not generated. An error occured!"
}

gen_hpp()
{
file="${class}.hpp"
[ -f $file ] && { echo "File $file already exists!"; exit 1; }
class_maj=$( echo $class | tr '[:lower:]' '[:upper:]' )
vim -c Stdheader -c wq $file
sed -i ".bak" '$d' "$file" && rm "${file}.bak"
echo -e "#ifndef ${class_maj}_HPP\n# define ${class_maj}_HPP" >> $file
echo -e "\nclass\t${class} {\n\n\tpublic:\n\t\t${class}( void );" >> $file
echo -e "\t\t${class}( ${class} const & src );" >> $file
echo -e "\t\t~${class}( void );" >> $file
echo -e "\n\t\t${class} &\toperator=( ${class} const & rhs );" >> $file
echo -e "\n\tprivate:" >> $file
echo -e "};" >> $file
echo -e "\n#endif" >> $file
check
}

gen_cpp()
{
file="${class}.cpp"
[ -f $file ] && { echo "File $file already exists!"; exit 1; }
vim -c Stdheader -c wq $file
sed -i ".bak" '$d' "$file" && rm "${file}.bak"
echo -e "#include \"${class}.hpp\"\n#include <iostream>" >> $file
echo -e "\n${class}::${class}( void ) {\n\n\tstd::cout << \"Default constructor called\" << std::endl;\n\n}" >> $file
echo -e "\n${class}::${class}( ${class} const & src ) {\n\n\tstd::cout << \"Copy constructor called\" << std::endl;\n\n\t*this = src;\n\n}" >> $file
echo -e "\n${class}::~${class}( void ) {\n\n\tstd::cout << \"Destructor called\" << std::endl;\n\n}" >> $file
echo -e "\n${class} &\t${class}::operator=( ${class} const & rhs ) {\n\n\tstd::cout << \"Assignation operator called\" << std::endl;\n\n\tif (this != &rhs)\n\t\tthis-> = rhs.;\n\n\treturn *this;\n\n}" >> $file
check
}

if [ -z "$1" ] ; then
	read -p "Which class? " class
	gen_hpp
	gen_cpp
else
	for class in "$@" ; do
		gen_hpp
		gen_cpp
	done
fi

exit 0
