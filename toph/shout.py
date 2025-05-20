
input_string = input().strip()


words = input_string.split(' ')


filtered_words = [word for word in words if not word.isupper()]


output_string = ' '.join(filtered_words)


print(output_string)