section .data
    hello db 'Hello, Holberton!', 10, 0
    format db '%s', 0

section .text
    global main
    extern printf

main:
    ; Align stack to 16-byte boundary
    push rbp
    mov rbp, rsp
    and rsp, -16

    ; Call printf function to print the message
    mov rdi, format
    mov rsi, hello
    xor eax, eax
    call printf

    ; Clean up stack and exit program
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

