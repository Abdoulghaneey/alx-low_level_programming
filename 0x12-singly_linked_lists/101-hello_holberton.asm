	global    main
	          extern    printf

	          section   .text
main:	push      rbx	; Call stack must be aligned
	          lea       rdi, [rel message] ; First argument is address of message
		  call      printf	       ; (message)
		  xor 	    eax,eax
		  pop       rbx		       ; Fix up stack before returning
	          ret

	          section   .data
message:	  db        "Hello, Holberton", 10, 0
