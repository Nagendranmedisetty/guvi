def removeSpaces(string):
    count = 0
    list = []
    for i in xrange(len(string)):
        if string[i] != ' ':
            list.append(string[i])
 
    return toString(list)
def toString(List):
    return ''.join(List)
string = "savee th a schoo l of enginee ri ng "
print removeSpaces(string)
