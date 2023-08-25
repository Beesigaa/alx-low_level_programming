section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    push rdi
    push rsi
    lea rdi, [hello_msg]
    lea rsi, [format]
    xor rax, rax  ; Clear RAX register (function return value)
    call printf
    pop rsi
    pop rdi
    ret
