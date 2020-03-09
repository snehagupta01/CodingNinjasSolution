list = []
n = int(input())
c = 1
ind = 0
val = 0
for i in range(0,n,1):
    list.append([])
    for j in range(0,n,1):
        list[ind].append(c)
        c += 1
    ind += 1
for i in range(0,n,2):
    res=""
    for j in range(n):
        res += str(list[i][j])
        res += " "
    print(res)
    
    if val == n-1:
        break
    val += 2
val -= 1
for i in range(val,0,-2):
    res=""
    for j in range(n):
        res += str(list[i][j])
        res += " "
    print(res)
    
