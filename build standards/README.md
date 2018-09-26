<h2>Build standards will define how the program is built.</h2>
<h3>We will be using the GNU C Compiler (gcc) with make.</h3>

Documentation can be found at:
	-https://www.gnu.org/software/make/manual/make.pdf
I've added a copy for convience[SEE: make.pdf]

<strong>syntax:</strong>
````
$: make
	gcc -o quad quad.c -lm		//Makefile procedure
$: make run
	./quad
$: make clean
	rm quad
````
