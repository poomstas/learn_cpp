import ctypes

# Load the shared library
example = ctypes.CDLL('./add_func.so')

# Call the C++ Function
result = example.add(3, 5)
print(result)
