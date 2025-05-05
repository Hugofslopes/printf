<p align="center">
    <img src="https://www.42porto.com/wp-content/uploads/2024/08/42-Porto-Horizontal.png" alt="Pipex Image" />
</p>
<h1 align="center">Printf</h1>
<p align="center">
    <img src="https://github.com/user-attachments/assets/31d40d19-8a82-4f82-aa23-3303cb741f5f" alt="Image" />
</p>

## Summary
<p>
    <b>Printf</b> is a 42 School project that aims to replicate the behavior of the original <b>printf</b> from <b>stdio.h</b>. The mandatory part should cover the following format specifiers.:
</p>
<ul>
    <li><b>c</b>: To print a single character.</li>
    <li><b>s</b>: To print a string.</li>
    <li><b>s</b>: To print a pointer.</li>
    <li><b>d</b>: To print a signed decimal integer. It explicitly indicates that the number is in decimal format</li>
    <li><b>i</b>: To print a signed decimal integer.</li>
    <li><b>u</b>: To print an unsigned decimal integer.</li>
    <li><b>x</b>: To print, in lowercase, an unsigned integer in hexadecimal format.</li>
    <li><b>X</b>: To print, in uppercase, an unsigned integer in hexadecimal format.</li>
</ul>
<p>
The bonus part should cover the flags and possible combinations between them:
</p>
<ul>
    <li><b>0</b>: Indicates that the output should be padded with zeros instead of spaces. This flag can be aplyed to <b>d</b>,<b>i</b>,<b>u</b>,<b>x</b> and <b>X</b>.</li>
    <li><b>#</b>: This flag adds the <b>0f</b> before the hexadecimal numbers.</li>
    <li><b>.</b>: This flag specifies the precision of the output.</li>
    <li><b>+</b>: This flag forces the output to include a sign <b>+</b> or <b>-</b> for numeric values.
   <li><b>-</b>: This flag modifies the output to be aligned to the left side of the specified width, with any extra space filled with spaces on the right.</li>
   <li><b>' '</b>: The space flag adds a leading space for positive numbers, indicating their sign. It is used in conjunction with signed integer.</b>
</ul>

## Code Phases
<ol>
    <li>Receives <b>str</b>, which is the string specifying what should be printed and <b>args</b>, which are the multiple parameters that can be passed to the function.
    </li>
    <li> Then I have a loop that will go through all of the string <b>str</b>.</li>
    <li>If the character is different from <b>'%'</b>, I just call the function to print the character and increment the number of characters. I always increment the number of characters printed because printf returns the number of printed characters."</li>
    <li>The <b>select_formats( )</b> function is used to choose which format specifiers were selected and which flags were used. I pass the address of the string <b>s</b> so I can increment its pointer directly. The return value of this function is the number of characters printed.</li>
    </ol>

## Code Setup
<p>
    <b>Step 1:</b> Clone the repository
</p>

    git clone https://github.com/Hugofslopes/printf

<p>
    <b>Step 2:</b> Open the terminal on the repo folder and write
</p>

    make

<p>
    <b>Step 4:</b> Run tests:
</p>

    make main ; ./main
This main function was created by me to cover various cases for the entire ft_printf. I compare the behavior of the original printf with my version in each case.

	make main2 ; ./main2
This main function was created by <a href="https://github.com/PedroZappa">PedroZappa</a> to cover some additional tests.

## Improvements
<p>
    The improvements to be made are to tokenize the input in a way that makes the selection of format specifiers and flags easier. In my case, I created a scheme like a tree that follows each hypothesis of input, which made the code much larger than necessary.
</p>