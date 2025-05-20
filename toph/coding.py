import re

def tokenize(code):
    tokens = re.findall(r'say "(.*?)"|repeat (\d+) \{|\}', code)
    return tokens

def interpret(tokens):
    i = 0
    while i < len(tokens):
        token = tokens[i]
        
        if token[0]:  # say "message"
            print(token[0])
        elif token[1]:  # repeat N {
            repeat_count = int(token[1])
            block = []
            i += 1
            while tokens[i] != ('', ''):
                block.append(tokens[i])
                i += 1
            
            for _ in range(repeat_count):
                interpret(block)
        i += 1

# Example RZS Code
rzs_code = '''
say "Shishir!"
repeat 10 {
    say "Shisihr loves coding!"
}
'''

tokens = tokenize(rzs_code)
interpret(tokens)
