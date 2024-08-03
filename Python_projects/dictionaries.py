# dictionary = A changeable, unorderd collection of unique kay: value pairs
#              Fast because they use hashing, allow us to access a value quickly


capitals = {'USA':'Washington DC',
            'India':'New Delhi',
            'China':'Beijing',
            'Russia':'Moscow'}

# print(capitals['Germany'])        # This method through an KeyError
# print(capitals.get('Germany'))    # This method search the key value without KeyError
# print(capitals.keys())
# print(capitals.values())
# print(capitals.items())

capitals.update({'Germany':'Berlin'})
capitals.update({'USA':'Las Vegas'})
capitals.pop('China')


for key,value in capitals.items():
    print(key, value)