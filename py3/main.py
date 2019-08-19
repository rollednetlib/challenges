#!/usr/bin/env python2.7
import sys

def main():
    sys.stdout.write("What is the quote? ")
    quote = sys.stdin.readline()
    sys.stdout.write("Who said it? ")
    author = sys.stdin.readline()
    print(str(author).strip() + " says, \"" + str(quote).strip() +"\"")

if __name__ == "__main__":
    main()
