# Bitwise Operators

| Symbol | Operator
| & | bitwise AND
| | | bitwise inclusive OR
| ^ | bitwise exclusive OR (XOR)
| ~ | bitwise not (one's complement)
| << | logical left shift
| >> | logical right shift


Bitwise operations with signed types should be avoided because the sign bit of such a bit representation has a particular meaning. 
Particular restrictions apply to the shift operators:
- Left shifting a 1 bit into the signed bit is erroneous and leads to undefined behavior.
- Right shifting a negative value (with sign bit 1) is implementation defined and therefore not portable.
- If the value of the right operand of a shift operator is negative or is greater than or equal to the width of the promoted left operand, the behavior is undefined.

## Masking

Masking refers to the process of extracting the desired bits from (or transforming the desired bits in) a variable by using logical bitwise operations. The operand (a constant or variable) that is used to perform masking is called a mask.
Masking is used in many different ways:
- To decide the bit pattern of an integer variable.
- To copy a portion of a given bit pattern to a new variable, while the remainder of the new variable is filled with 0s (using bitwise AND)
- To copy a portion of a given bit pattern to a new variable, while the remainder of the new variable is filled with 1s (using bitwise OR).
- To copy a portion of a given bit pattern to a new variable, while the remainder of the original bit pattern is inverted within the new variable (using bitwise exclusive OR).
