## Parallel Implementation of Fractals!

### Getting Started
You need CMake and C++11.

After installing these prerequisites, clone the repository using
```
git@github.com:daniellezoeller/Parallel_Final.git
```

Next, we need to set up a `build/` directory for CMake:
```
mkdir build
cd build
```

Inside the build directory we can run CMake to generate a Makefile for the project
```
cmake ..
```

Then if CMake was successfully generated run:
```
make
```

### Run the Programs
To run the `serial_mandelbrot.cpp` program enter the following in the terminal:
```
./serial iteration x-value y-value scale ../filename.png
```
To run the `parallel_mandelbrot.cpp` program enter the following in the terminal:
```
./parallel iteration x-value y-value scale ../filename.png
```
iteration will affect the contrast

increase in iteration produces an image with more contrast

x-value will decide how much to the left the image will be in respect to the fractal image

y-value will decide how much to the top the image will be in respect to the fractal image

scale will decide how zoomed the image will be in a point on fractal image

decrease in scale will create a more zoomed in image

filename.png will decide where the image will output

Example:
```
./serial 5000 -1.5 -0.25 0.5 ../fractal.png
./parallel 5000 -1.5 -0.25 0.5 ../fractal.png
```
The example will create a fractal image that has not been zoomed in

Example:
```
./parallel 1000 -1.32 -0.08 0.015 ../zoom.png
./parallel 1000 -1.317 -0.075 0.01 ../zoom2.png
./parallel 1000 -1.314 -0.070 0.0045 ../zoom3.png
./parallel 1000 -1.313 -0.0695 0.0015 ../zoom4.png
./parallel 1000 -1.3123 -0.0695 0.0007 ../zoom5.png
./parallel 1000 -1.31205 -0.0695 0.0003 ../zoom6.png
./parallel 1000 -1.31192 -0.0695 0.00007 ../zoom7.png
./parallel 1000 -1.31190 -0.0695 0.00004 ../zoom8.png
```
The example shows the example of the fractal being zoomed in




