build:
	gcc src/main.c -o bin/Binary_Converter

clean:
	del bin\Binary_Converter.exe

debug:
	gdb bin/Binary_Converter

run:
	bin/Binary_Converter