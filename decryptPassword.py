#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'decryptPassword' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def decryptPassword(s):
    # Write your code here

    newPassword = ''
    x = 0
    numberLog = 0
    while x < len(s):

        if s[x] in '123456789':
            numberLog = numberLog + 1
            x = x + 1

        elif s[x] == '*':
            #newPassword[:-2].strip()
            newPassword = newPassword[:-2] + s[x-1] + s[x-2]
            x = x + 1


        elif s[x] == '0':
            newPassword = newPassword + s[numberLog - 1]
            numberLog = numberLog - 1
            x = x + 1

        else:
            newPassword = newPassword + s[x]
            x = x + 1

    return(newPassword)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = decryptPassword(s)

    fptr.write(result + '\n')

    fptr.close()
