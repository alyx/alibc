.globl time
.type time, @function
time:
    pushl     %ebx
    xorl      %ebx, %ebx
    movl      $13, %eax
    int       $128
    popl      %ebx
    ret
