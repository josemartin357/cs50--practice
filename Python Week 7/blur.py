# When running a program, use python3 your_file.py
# Downloaded cs50 library with command: pip3 install cs50

from PIL import Image, ImageFilter

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.bmp")