T = int(input())
for case_num in range(1, T + 1):
    salaries = list(map(int, input().split()))
    salaries.sort()
    print(f"Case {case_num}: {salaries[1]}")
