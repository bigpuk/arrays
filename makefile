
DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC
FILES=main.cpp n_sum.cpp n_triangle.cpp print.cpp triangle_arr_out.cpp input_rectangle.cpp rectangle_arr_out.cpp input_rectangle.cpp input_torn.cpp torn_arr_out.cpp
PROG_NAME=array

all: array_games

array_games: main.o n_sum.o n_triangle.o input_rectangle.o rectangle_arr_out.o triangle_arr_out.o input_triangle.o input_torn.o torn_arr_out.o
			g++ main.o n_sum.o n_triangle.o input_rectangle.o rectangle_arr_out.o triangle_arr_out.o input_triangle.o input_torn.o torn_arr_out.o -o array_games

main.o: main.cpp
		g++ $(DED_FLAGS) -c main.cpp -o main.o

input_rectangle.o: input_rectangle.cpp
		g++ $(DED_FLAGS) -c input_rectangle.cpp -o input_rectangle.o

rectangle_arr_out.o: rectangle_arr_out.cpp
		g++ $(DED_FLAGS) -c rectangle_arr_out.cpp -o rectangle_arr_out.o

triangle_arr_out.o: triangle_arr_out.cpp
		g++ $(DED_FLAGS) -c triangle_arr_out.cpp -o triangle_arr_out.o

input_triangle.o: input_triangle.cpp
		g++ $(DED_FLAGS) -c input_triangle.cpp -o input_triangle.o

input_torn.o: input_torn.cpp
		g++ $(DED_FLAGS) -c input_torn.cpp -o input_torn.o

torn_arr_out.o: torn_arr_out.cpp
		g++ $(DED_FLAGS) -c torn_arr_out.cpp -o torn_arr_out.o

n_triangle.o: n_triangle.cpp
		g++ $(DED_FLAGS) -c n_triangle.cpp -o n_triangle.o

n_sum.o: n_sum.cpp
		g++ $(DED_FLAGS) -c n_sum.cpp -o n_sum.o

clean:
	rm -rf *.o array_games
