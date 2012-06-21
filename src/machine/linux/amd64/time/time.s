.globl time
.type time, @function

time:
    movq $201, %rax
    syscall
    ret

