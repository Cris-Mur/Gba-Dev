# First Demo

<img src="./first_demo.png" alt="first demo" width="880" height="520" />

In the first guide of tonc wrote a program to show 3 color dots on the screen, only with this simple premise we can learn many things about the console and the challenges that will come in understanding how it works.

To begin we realize that we do not use libraries (soon)... denoting that our program will not load anything absolutely nothing external to what we are going to program in the following lines.

As in very c program, there is the special and only function called "main" without parameters... I recommend that before defining a function, method, routine or whatever, let's comment an a brief description of its operation, parameters and return that makes code more professional and easier to understand. :D.

Within this function, the first line of code is very special in itself.

## First line

```c
*(unsigned int*)0x04000000 = 0x0403;
```

Although in the code I tried to explain this line a little, will try this time with more details. Let's to start!

***** Data type: pointer... we know that a pointer is a variable we store a memory address (reference) in this case this pointer will save the address of an unsigned integer pointer and its explicit address "0x04000000" something like this:

| (unsigned int *) 0x04000000 |
| :-------------------------: |
|              *              |

### 0x04000000 I / O RAM

FOR THIS CASE WE ONLY CARE ABOUT THE SPACES THAT ARE CHANGED FROM THIS MEMORY

|  F   |  E   |  D   |  C   |  B   |  A   |  9   |  8   |  7   |  6   |  5   |  4   |  3r  | 2 1 0 |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :---: |
|  -   |  -   |  -   |  -   |  -   | BG2  |  -   |  -   |  -   |  -   |  -   |  -   |  -   | MODE  |
|  0   |  0   |  0   |  0   |  0   |  1   |  0   |  0   |  0   |  0   |  0   |  0   |  0   | 0 1 1 |

#### MODE

In GBA "mode" refers to an special way of interpreting information for the console screen. These 3 binary figures available in the mode space indicate 7 possible states (only by the digits) of which 6 are actually defined, these are listed from mode 0 to mode 5.

For this case we use mode 3.

#### BG2

In GBA there are 4 types of background that go from space 8 to B (right to left), the backgrounds can be seen as layers (as in photoshop) where they can be "drawn" and displayed on screen.

One way to obtain these values is with their respective hexadecimal notation.
**Remember that purpose is binary values the way to obtain result depends of the developer.**

Now yes, we can go to the rest of the lines.

## Second, third, fourth Line 

```c
((unsigned short*)0x06000000)[120+80*240] = 0x001F;
((unsigned short*)0x06000000)[136+80*240] = 0x03E0;
((unsigned short*)0x06000000)[120+96*240] = 0x7C00;
```

This time something similar happens that in the first line, we assign a pointer of a **unsigned short integer** all initially to the same memory address **0x06000000**, this is where the magic comes from what is inside the square brackets is a reference to another memory space starting with the initial 0x06 ... that is, another pointer, but to which space ?? exactly the number of blocks that arithmetic operation represents (in a moment I explain it), and right in that memory space it will assign the hexadecimal value that the color will represent.

### 0x06000000 VRAM

We can say that at this moment the vram in a certain way represents the screen of the GBA, the point is that really in memory this representation of the screen is not a matrix (x, y), (is to say array of arrays) is really a string, a single row of data from (0,0) to (240, 160), so how do we get to that position? This is where the arithmetic operation from before is born **"[x + y * W]"** where we add the ordered pair (x, y) and multiply it by the width of the screen, that is to say 240, in this way we reach the position of the screen where we want to be.

#### Color

The GBA screen is capable of displaying 15 bit RGB color shades (in a variable of 16 because one of 15 is not possible ;) ), this means that for each pixel, values can be assigned to 15 binary spaces, divided into 3 segments.

|  x   | <span style="color:blue">B</span> | <span style="color:blue">B</span> | <span style="color:blue">B</span> | <span style="color:blue">B</span> | <span style="color:blue">B</span> | <span style="color:GREEN">G</span> | <span style="color:GREEN">G</span> | <span style="color:GREEN">G</span> | <span style="color:GREEN">G</span> | <span style="color:GREEN">G</span> | <span style="color:RED">R</span> | <span style="color:RED">R</span> | <span style="color:RED">R</span> | <span style="color:RED">R</span> | <span style="color:RED">R</span> |
| :--: | :-------------------------------: | :-------------------------------: | :-------------------------------: | :-------------------------------: | :-------------------------------: | :--------------------------------: | :--------------------------------: | :--------------------------------: | :--------------------------------: | :--------------------------------: | :------------------------------: | :------------------------------: | :------------------------------: | :------------------------------: | :------------------------------: |
|  0   |                 -                 |                 -                 |                 -                 |                 -                 |                 -                 |                 -                  |                 -                  |                 -                  |                 -                  |                 -                  |                -                 |                -                 |                -                 |                -                 |                -                 |

For each color we have up to 32 possible combinations (5 bits) from 0 to 31, resulting in a palette of 32,768 possible RGB colors.

The v2 is a same code but changing this complex syntax to an more understanding.