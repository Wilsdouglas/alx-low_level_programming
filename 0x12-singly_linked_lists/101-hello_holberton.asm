section .data
    msg db 'Hello, Holberton', 0Ah ; message to be printed, with newline character (0Ah) at the end

section .text
    global _start

global   main
	  extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
format: db `Hello, Holberton\n`,0

