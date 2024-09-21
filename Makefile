CC = gcc 		  # Compiler
CFLAGS = -Wall -g # Compiler flags

SRC_DIRS = $(if $(DIR), $(DIR), Ex1 Ex3)

all = build_all

build_all:
	@for %%D in ($(SRC_DIRS)) do ( \
		if exist %%D\*.c ( \
			echo Compiling in %%D... && \
			$(CC) $(CFLAGS) -o %%D\output.exe %%D\*.c && \
			echo "Built %%D\output.exe" \
		) else ( \
			echo "No C files found in %%D" \
		) \
	)

clean:
	@for %%D in ($(SRC_DIRS)) do ( \
		if exist %%D\output.exe ( \
			del /f %%D\output.exe && \
			echo "Deleted %%D\output.exe" \
		) \
	)

run:
	@for %%D in ($(SRC_DIRS)) do ( \
		if exist %%D\output.exe (\
			echo "Running %%D\output.exe" && \
			%%D\output.exe \
		) \
	)
