/* immutable means can not be changed 

why strings are immutable in java??

--------------------------------------------------------------------------------------

String s1 = "java";
s1.concat(" rules");
System.out.println("s1 refers to "+s1);  // Yes, s1 still refers to "java"

----------------------------------------------
What's happening:

The first line is pretty straightforward: create a new String "java" and refer s1 to it.
Next, the VM creates another new String "java rules", but nothing refers to it. So, the second String is instantly lost. We can't reach it.
The reference variable s1 still refers to the original String "java"

*/