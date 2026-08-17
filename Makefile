
init:
	cmake --preset Debug

build:
	cmake --build --preset Debug

release:
	cmake --preset Release
	cmake --build  --preset Release
