import argparse


parser = argparse.ArgumentParser()
parser.add_argument("--i")
parser.add_argument("--f")
parser.add_argument("--o")



args = parser.parse_args()
print("i:", args.i)
print("f:", args.f)
print("o:", args.o)
