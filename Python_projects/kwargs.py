# **kwargs = parameter that will pack all arguments into a dictionary
#            useful so that a function can accept a varring amount of keyword arguments

def hello(**names):
    #print("Hello " + names['first'] + " " + names['last'])
    print("Hello",end=" ")
    for key,value in names.items():
        print(value,end=" ")


hello(first="Bro",middle="dude",last="code")