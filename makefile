
# Compiler Flags
FLAG := HI_MAN
# FLAG := BYE_MAN

CFILES := main.cpp
output_binary := main

all: ${output_binary}
	g++ -D${FLAG} -o ${output_binary} ${CFILES}

clean: 
	rm -rf main
