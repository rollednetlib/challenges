#!/usr/bin/env python2.7
import sys


def uInputInt(prompt):
    sys.stdout.write(prompt)
    while True:
        try:
            out = int(sys.stdin.readline())
        except:
            pass

        sys.stdout.write("That was not an int!\n")

    return out

def main():
    fnum = uInputInt("What is the first number? ")
    snum = uInputInt("What is the second number? ")
if __name__ == "__main__":
    main()
