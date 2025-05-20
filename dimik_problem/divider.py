#https://dimikoj.com/problems/4/divisor
# টেস্ট কেসের সংখ্যা ইনপুট নিন
num = int(input())
results = []

for i in range(num):
    n = int(input())

    results.append([j for j in range(1,n+1) if n % j ==0])


for result in results:
    print("Case:",result)