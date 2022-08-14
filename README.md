# CMP Hash

It is possible to evaluate if 2 distant files are equal or not without sending them in full thanks to a hash like sha256.\
This project tries to do the same thing, but to find file variants.\
This will be useful to recognize virus variants.

## Utilisation

To compute a pseudo match rate between 2 distant files, we need to compute their hash with the `cmp_create_hash` function and then measure their match rate with the `cmp_two_hashes` function. This function returns the raw match rate between the 2 hashes, which is usually overestimated for the match rate of 2 files.\
It is possible to use the `certainty` function which will give an idea of the probability that 2 files are variants of each other.

Due to the small size of the uint32_t used, the program builds its hash only on the first 4 GB of a file.

The main.c program is an example of utilisation.