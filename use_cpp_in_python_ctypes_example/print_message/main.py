import ctypes

# Load the shared library
example = ctypes.CDLL('./print_msg.so')

# Call the C++ Function
example.print_msg()
