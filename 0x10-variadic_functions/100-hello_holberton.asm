	section .data 			; start of data section
	to_print db "Hello, Holberton", 10 ; char \n in ASCI

	section .text 		; indicate to gcc the start point of the code

	global main

main:
	mov rax, 4 		; put 4 in rax
	mov rbx, 1
	;;  indicate descriptor that makes reference to std output
	mov rcx, to_print 	; address of to_print
	mov rdx, 17 	; lngth of to_print including \n
	int 80h	; call to system
	mov rax, 1 		; call to exit(sys_exit) function
	mov rbx, 0 		; return code without errors (0)
	int 80h
	;;  call again to system to pass control to console
