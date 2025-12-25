#include <stdio.h>
int main(){
    int x = 42;
    int* p = &x;
    printf("%d\n",x);
    printf("%d",p);
    // in kernel you can do this 
    // uint32_t* vga_buffer = (uint32_t*)0xB8000;

    // //dereferencing 
    // *p = 200;
    int x = 42;
    int* ptr = &x;

    printf("%d\n", *ptr);   // Prints 42 (dereference: follow the pointer)
    printf("%p\n", ptr);    // Prints 0x... (the address itself)

    *ptr = 100;             // Change the value at that address
    printf("%d\n", x);

//     // in kernel context
//     // VGA text buffer is at 0xB8000
//   uint16_t* vga = (uint16_t*)0xB8000;

// // Write character 'A' (ASCII 65) with white text on black background
//  *vga = 0x0F00 | 65;     // 0x0F = white on black, 65 = 'A'

// // Read from a device register
//  uint32_t* timer_reg = (uint32_t*)0xFFFF0000;
//  uint32_t ticks = *timer_reg;  // Read current tick count
}
