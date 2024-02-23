CFLAGS = -std=c++17 -O2
LDFLAGS = -lSDL2 -lSDL2_image

game: main.cpp game.cpp TextureManager.cpp GameObject.cpp
	g++ $(CFLAGS) -o game main.cpp game.cpp TextureManager.cpp GameObject.cpp $(LDFLAGS)

.PHONY: test clean

test: game
	./game

clean:
	rm -f game
