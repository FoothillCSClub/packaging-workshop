
# Sieve of Eratosthenes demo

## What is it?

This is a simple demo of the Sieve of Eratosthenes, a primitive method
for finding prime numbers. For a full explanation of the Sieve, have a
look at the
[Wikipedia](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
article, but the gist of it is that it finds prime numbers of
ever-increasing value by keeping a list of numbers already known to be
prime and checking a candidate prime value against the list. If nothing
on the list can cleanly divide the candidate, it must be prime, and is
added to the list.

## How do I build it?

Currently, there is no way to do this beyond invoking your compiler
manually.

## Repository Layout

 * `src`: C++ source files
   * `simple_sieve_of_eratosthenes.cpp`: the sieve, implemented in a
     single function as a conceptual demonstration
   * `main.cpp`: holds the main function; uses the `SieveOfEratosthenes`
     class
   * `eratosthenes.cpp`: Implements all non-trivial parts of the
     `SieveOfEratosthenes` class
 * `include`: header files
   * `eratosthenes`: declaration for the `SieveOfEratosthenes` class
