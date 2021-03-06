#!/bin/bash
echo -e "\033[32mInitializing test\033[0m"
ls "bytecodes/" |
    while read file
    do
        echo -e "\n================\n\033[36mTesting ${file}\033[0m"
        echo "output: "
        ./monty "bytecodes/${file}" 2> err
        echo "exit code " $?
        chars=$(wc -c err | cut -d" " -f1)
        if [[ $chars != 0 ]]
        then
            echo -e "\033[31mError Output $(cat err)\033[0m"
        fi
    done 
