"""
Write a program to print all the possible combinations according to the input values.
Example :
Given Values
'1' : ['Z', 'Y', 'A'],
'2' : ['B', 'O'],
'12' : ['L'],
'3' : ['U', 'P']
Input: 123
Output : [ZBU, ZBP, ZOU, ZOP, YBU, YBP, YOU, YOP, ABU, ABP, AOU, AOP, LU, LP]

"""
output = []
# def helper(mappings, input, ind, string):

#     if ind >= len(input):
#         if string in mappings:
#             return string
#         else:
#             return ""
    
#     #include
#     inc = helper(mappings, input, ind+1, string + input[ind])
#     exc = helper(mappings, input, ind+1, string) 

#     if inc + exc == input:

#         for s in mappings[inc]:

#             for t in mappings[exc]:
#                 output.append(s+t)

#     return inc + exc


# def printMappings(mappings, input=123):

#     if(type(input) != str):
#         input = str(input)
    
#     print(helper(mappings, input, 0, ""))
#     print(output)
    

# def getCombinations()
    
if __name__ == "__main__":

    mappings = {
        '1' : ['Z', 'Y', 'A'],
        '2' : ['B', 'O'],
        '12' : ['L'],
        '3' : ['U', 'P']
    }

    keys = list(mappings.keys())
    keys.sort()
    print(keys)

