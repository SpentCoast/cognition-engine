CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

.PHONY: linux clean

linux: main.cpp
	g++ $(CFLAGS) -o "Cognition Engine" main.cpp setup.cpp $(LDFLAGS)
	./"Cognition Engine"

windows: main.cpp
	g++ $(CFLAGS) -o "Cognition Engine.exe" main.cpp setup.cpp $(LDFLAGS)

mac: main.cpp
	g++ $(CFLAGS) -o "Cognition Engine.app" main.cpp setup.cpp $(LDFLAGS)

clean:
	rm -f "Cognition Engine"
	rm -f "Cognition Engine.exe"
	rm -f "Cognition Engine.app"