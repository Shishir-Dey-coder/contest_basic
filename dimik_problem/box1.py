#https://dimikoj.com/problems/5/box-1

test_cases = int(input())
results = []

for i in range(test_cases):

    size = int(input())

    for i in range(size):
        results.append('*' * size)
    

for result in results:
    print(result,end="\n")


#wrong


