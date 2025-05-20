#https://dimikoj.com/problems/9/square-number
import math
n = int(input())
results = []
for _ in range(n):
    m = int(input())
    tst = math.sqrt(m)
    if (tst*tst) == m:
        results.append("YES")
    else:
        results.append("NO")
    

for result in results:
    print(result)