>+>+                Set the first two cells to 1 1 **cell 0 is empty
>,>,                Take input from the user store into cell 3 and 4
[<]                 Returns to cell 2

>+++++++[<++++++>-] Converting cell 1 to ascii 0 store in cell 0
>+++++++[<++++++>-] Converting cell 2 to ascii 0 store in cell 1
[<]  		    Returns to cell 1

<[>>-<<-]     	    Converting cell 3 to non ascii
<[>>>>-<<<<-]       Converting cell 4 to non ascii
>>>		    Returns to cell 3

[>		    Go to cell 4
  [>+>+<<-]	    Move content from 4 to cell 5 and 6
  >>[<<+>>-]	    Move content from cell 6 to 4 with cell 5 unchanged
  <<<-		    Go to cell 4 and decrement by 1
] 		    End of loop
>>		    Go to cell 5 ** result is stored in cell 5

>>		    Go to cell 7
++++++++[<++++++>-] Converting cell 7 to ascii 0 store in cell 6
<		    Go to cell 5
[<+>-]		    Converting cell 5 to ascii
<.		    Print result of multiplication