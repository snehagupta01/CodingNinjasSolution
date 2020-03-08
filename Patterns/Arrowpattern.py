## Read input as specified in the question.
## Print output as specified in the question.
n = int(input())
x = int(n/2)+1
s = 1
e = 1
for i in range(1,x+1,1):
    res=""
    for j in range(1,n+1,1):
        if j < s:
            res+="  "
        elif j >= s and j <= e:
            res+="* "
        elif j > e:
            break
    print(res)
    s += 1
    e += 2
s -= 2
e -= 4
for i in range(1,x,1):
    res=""
    for j in range(1,n+1,1):
        if j < s:
            res+="  "
        elif j >= s and j <= e:
            res += "* "
        elif j > e:
            break
    print(res)
    s -= 1
    e -= 2
        
 