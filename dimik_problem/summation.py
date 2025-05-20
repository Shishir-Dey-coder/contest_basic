#https://dimikoj.com/problems/6/summation


num = int(input())
results = []

for _ in range(num):
    n = input()
    results.append(int(n[0])+int(n[-1]))


for result in results:
    print("Sum =",result)

# # Creating a simple guide on how to approach competitive programming problems
# from fpdf import FPDF

# pdf = FPDF()
# pdf.set_auto_page_break(auto=True, margin=15)
# pdf.add_page()

# # Set Title
# pdf.set_font('Arial', 'B', 16)
# pdf.cell(200, 10, txt="A Guide to Problem Solving in Competitive Programming", ln=True, align='C')

# # Add a line break
# pdf.ln(10)

# # Set the font for the content
# pdf.set_font('Arial', '', 12)

# # Table of contents
# content = [
#     ("Introduction to Problem Solving", 
#      "In competitive programming, the key to success lies in problem-solving skills. "
#      "The more problems you solve, the better you will understand different techniques and approaches to solving various types of problems."
#      " This guide is designed to help you build strong problem-solving skills through a systematic approach."),

#     ("1. Brute Force Approach", 
#      "The brute force approach involves solving a problem in the most straightforward way possible, "
#      "by trying all possible solutions and choosing the best one. While it may not always be the most efficient, it's often a good starting point."
#      " Example Problem: Find all divisors of a number. In the brute force approach, we simply check each number up to that number."),

#     ("2. Greedy Approach", 
#      "In the greedy approach, you make the locally optimal choice at each stage, hoping that these choices will lead to a globally optimal solution."
#      " Example: Finding the minimum number of coins required to make a certain amount using a greedy approach."),

#     ("3. Divide and Conquer", 
#      "Divide and Conquer involves dividing the problem into smaller sub-problems and solving each one recursively. The solution to the overall problem is then built from the solutions to the sub-problems."
#      " Example: Merge Sort is a classic Divide and Conquer algorithm."),

#     ("4. Dynamic Programming", 
#      "Dynamic Programming (DP) is used for solving problems by breaking them down into smaller sub-problems and storing the results of these sub-problems."
#      " This approach avoids recalculating the same sub-problems, improving efficiency. Example: Fibonacci series calculation using DP."),

#     ("5. Backtracking", 
#      "Backtracking is used to find all possible solutions to a problem by building up a solution step by step and undoing the steps when a solution fails."
#      " Example: Solving the N-Queens problem."),

#     ("6. Practice Problems and Examples", 
#      "The best way to learn competitive programming is by solving problems. Practice is essential to mastering different problem-solving techniques."
#      " Start with basic problems like calculating factorials, and then move on to more complex algorithms like sorting, searching, dynamic programming, etc."),

#     ("Conclusion", 
#      "As you continue practicing, you'll develop a deeper understanding of different problem-solving techniques. "
#      "Always break down problems, approach them step by step, and refine your solutions as needed."
#      " Competitive programming is a skill that improves with consistent practice and learning.")
# ]

# # Add the content to the PDF
# for section, description in content:
#     pdf.set_font('Arial', 'B', 14)
#     pdf.cell(200, 10, txt=section, ln=True)
#     pdf.set_font('Arial', '', 12)
#     pdf.multi_cell(0, 10, description)
#     pdf.ln(5)

# # Save the PDF
# pdf_output = "guide_to_problem_solving_competitive_programming.pdf"
# pdf.output(pdf_output)

# pdf_output  # Return the path to the generated PDF
