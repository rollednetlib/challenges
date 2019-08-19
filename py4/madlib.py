#!/usr/bin/env python2.7
import sys

def uInputChar(prompt):
    sys.stdout.write(prompt)
    out = str(sys.stdin.readline()).strip()
    return out

def main():
    noun = uInputChar("Enter a noun: ")
    verb = uInputChar("Enter a verb: ")
    adjective = uInputChar("Enter an adjective: ");
    adverb = uInputChar("Enter an adverb: ")
    print("Do you " + verb + " your " + noun + " " + adjective + " " + adverb + "? That is disturbing")
#    sys.stdout.write("Enter a noun

if __name__ == "__main__":
    main()
