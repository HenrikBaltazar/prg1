# Programming-1 Classes
## Info:
**Professor:** Roberto Wanderley da Nobrega

**Special classes:** Computing room, tuesdays and thursdays 09:40-11:30 AM

---

## Class notes
### April 5th:
> Programing language gonna be C.
> 
> Even if the variable is a float, always put *.0* at the end of the value 
> 
> printf: `%d` is for decimal `%f` is for float
> 
> Float have some kind of bug that it doesn't reach the exactly value, it can be fixed by usign `double` or `%.2f` to show 2 algarisms after dot.
> 
> It is possible to make math operations inside `printf` command
> 
> Variables must start with letters or underlines and finish with letters, underlines or numbers.

### April 12th:
> Arithmetic operators:
> 
> > Unary: + -
> > Binary: + - * / %
> 
> Atribution operators:
> > var = expr
> 
> Compound operators:
> > a = a + b -> a+=b
> > a = a - b -> a-=b
> > a = a * b -> a*=b
> > a = a / b -> a/=b
> 
> Increment and Decrement operators:
> > a = a + 1 -> a += 1 -> a++
> > a = a - 1 -> a -= 1 -> a--
> 
> All those operations can be made as an argument (eg. inside printf)
> > In a++ case, if used as "a++" it will first use "a" as argument and after do the incement
> > In ++a case, it will use "a" already incremented as argument
>
> Relational (bool):
> >  < > <= => ==
>
> Equalty and Inequalty: == !=
>
> Booleans:
> > Binary: && (and) || (or)
> > Unary: ! (not)

### May 10th
> int types | bits | printf
> > char 1 
> > short int 2 %hd
> > int 4 %d
> > long int 8 %ld
> > long long int 8 %lld
> Float types | bits | printf
> > float %f
> > double %lf
> > long double %llf