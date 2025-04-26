SRC=src/vpyramid.c
PROGRAM=vpyramid
DIRECTORY=/usr/bin

gcc $SRC -o $PROGRAM
sudo mv $PROGRAM $DIRECTORY
