echo "add_executable($1 src/$1.cpp)\n" >> CMakeLists.txt;
echo "#include <headers.h>\n" >> src/$1.cpp
echo " " >> src/$1.cpp
echo "int main() \n{\n\n    return 0;\n}\n" >> src/$1.cpp
