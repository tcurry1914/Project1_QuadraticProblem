The way I envisioned this is having the test directory be a mirror image, but
one level down, of our finished, tested work.  I envision having the makefile
live in test (with a slightly diffent version also in src), so that we can 
both build and run the binary executable by running make and make run, whether
we're in test or src. The same infrastructure can be maintained with build and
src one level up.
