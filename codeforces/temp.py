def osu_mania():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    t = int(data[0])  # Number of test cases
    results = []
    index = 1
    
    for _ in range(t):
        n = int(data[index])  # Number of rows in the beatmap
        index += 1
        rows = data[index:index+n]
        index += n
        
        # Find the column index of '#' for each row, reverse the order
        result = []
        for row in reversed(rows):
            result.append(row.index('#') + 1)  # Convert to 1-based index
        results.append(' '.join(map(str, result)))
    
    # Output all results
    print('\n'.join(results))

osu_mania()