import sys                                                          #como una biblioteca en c. soporta el "sys.argv"

if len(sys.argv) == 1:
    a = 0.1
    b = 0.2
elif len(sys.argv) >= 3:
    a = float(sys.argv[1])                                              
    b = float(sys.argv[2])
else:
    sys.exit(1)

print("SUMA DE 0.1 + 0.2 EN PYTHON. RESULTADO: {:.17g}".format(a+b))


# BIBLIOGRAFÍA
# 1. Maruch, S., & Maruch, A. (2006). Python for dummies (For dummies (Computer/Tech)). En "For Dummies eBooks".
#   http://dl.acm.org/citation.cfm?id=1202724 -> consulta de varios temas.

