

def foo(*positional, **keywords):
    print("Positional: ", positional)
    print("Keywords: ", keywords)

# *positional
foo('one', 'two', 'three')

# **keywords
foo(a='one', b='two', c='three')

# both at same time
foo('one', 'two', c='three', d='four')