// C++ implementation for mandelbrot set fractals
#include <iostream>

#include "image.h"
#define MAXCOUNT 30
  
// Function to draw mandelbrot set
void drawFractal(float left, float top, float xside, float yside, std::string name)
{
    float xscale, yscale; //Scale of the image in x and y direction
    float zx, zy; //same as below but for diff value
    float cx, cy; //I believe that this is storing values needed for mandelbrot's eq
    float tempx; //needed for the mandelbrot's eq
    int x, y; //iterators for image pixels
    int maxx, maxy, count; //maximum values for x and y pixels
    
  
    // getting maximum value of x-axis of screen
    maxx = 1300;
  
    // getting maximum value of y-axis of screen
    maxy = 750;
  
    // setting up the xscale and yscale
    xscale = xside / maxx;
    yscale = yside / maxy;
  
    // calling rectangle function
    // where required image will be seen
    Image frac_img(maxx, maxy);
  
    // scanning every point in that rectangular area.
    // Each point represents a Complex number (x + yi).
    // Iterate that complex number
    for (y = 1; y <= maxy - 1; y++) {
        for (x = 1; x <= maxx - 1; x++)
        {
            // c_real
            cx = x * xscale + left;
  
            // c_imaginary
            cy = y * yscale + top;
  
            // z_real
            zx = 0;
  
            // z_imaginary
            zy = 0;
            count = 0;
  
            // Calculate whether c(c_real + c_imaginary) belongs
            // to the Mandelbrot set or not and draw a pixel
            // at coordinates (x, y) accordingly
            // If you reach the Maximum number of iterations
            // and If the distance from the origin is
            // greater than 2 exit the loop
            while ((zx * zx + zy * zy < 4) && (count < MAXCOUNT))
            {
                // Calculate Mandelbrot function
                // z = z*z + c where z is a complex number
  
                // tempx = z_real*_real - z_imaginary*z_imaginary + c_real
                tempx = zx * zx - zy * zy + cx;
  
                // 2*z_real*z_imaginary + c_imaginary
                zy = 2 * zx * zy + cy;
  
                // Updating z_real = tempx
                zx = tempx;
  
                // Increment count
                count = count + 1;
            }
  
            // To display the created fractal
            frac_img.set(x, y, count);
        }
    }
    frac_img.write("../fractal.png");
    return;
}
  
// Driver code
int main()
{   
  
    // setting the left, top, xside and yside
    // for the screen and image to be displayed
    float left = -1.75;
    float top = -0.25;
    float xside = 0.25;
    float yside = 0.45;
  
    
  
    // Function calling
    drawFractal(left, top, xside, yside, "../fracal.png");
  
    
  
    return 0;
}