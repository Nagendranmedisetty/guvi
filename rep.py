def while_replace(string):
    while '  ' in string:
        string = string.replace('  ', ' ')
    return string
