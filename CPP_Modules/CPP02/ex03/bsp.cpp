#include "Point.hpp"

Fixed area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
   if ( (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) >= 0 )
      return ( (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2 );
   return ( (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / -2 );
}

bool  ft_inline(Fixed  x1, Fixed  y1,  Fixed  x2, Fixed  y2, Fixed  x, Fixed  y)
{
   if ((x == x1 && y == y1) || (x == x2 && y == y2))
      return true;
   if ((x - x1) * (y2 - y1) == (x2 - x1) * (y - y1))
      return true;
   return false;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{  

   Fixed x1 = a.get_x_value();
   Fixed y1 = a.get_y_value();
   Fixed x2 = b.get_x_value();
   Fixed y2 = b.get_y_value();
   Fixed x3 = c.get_x_value();
   Fixed y3 = c.get_y_value();
   Fixed x = point.get_x_value();
   Fixed y = point.get_y_value();

   if (ft_inline(x1, y1, x2, y2, x, y)) {
      return false;
   }
   if (ft_inline(x1, y1, x3, y3, x, y)) {
      return false;
   }
   if (ft_inline(x3, y3, x2, y2, x, y)) {
      return false;
   }

  Fixed A = area (x1, y1, x2, y2, x3, y3);

  Fixed A1 = area (x, y, x2, y2, x3, y3);

  Fixed A2 = area (x1, y1, x, y, x3, y3);

  Fixed A3 = area (x1, y1, x2, y2, x, y);

   std::cout << "A: " << A << std::endl;
   std::cout << "A1: " << A1 << std::endl;
   std::cout << "A2: " << A2 << std::endl;
   std::cout << "A3: " << A3 << std::endl;
    
   return (A == A1 + A2 + A3);
}