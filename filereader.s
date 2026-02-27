.section .text
.globl filereader

filereader:
    xor %eax, %eax   # sets sum to 0
    xor %ecx, %ecx  # loop counter

    loop: cmp %esi, %ecx      #checks if finished reading
    je finish                 # jumps to finish

    add (%rdi, %rcx, 4), %eax    # sums the sum and the array elementt
    inc %ecx
    jmp loop                     # restarts loop

    finish:
        ret  # return sum




