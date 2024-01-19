Main=base.cc
Project=hello-world-gtk

build:
	g++ -o $(Project) $(Main) `pkg-config --cflags --libs gtkmm-4.0` #-std=c++17

run:
	./$(Project)
