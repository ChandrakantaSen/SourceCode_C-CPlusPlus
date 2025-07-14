#include <iostream>

    class polygon 
    {
        protected:
        int width, height;
        public:
			void set_values (int a, int b)
			{ 
				width = a;
				height = b;
			}
    };
        
   
    class rectangle: public polygon
    {
        public:
        int area ()
        { 
            return (width * height); 
        }
    };
   
    int main () 
    {
        rectangle rect;
        
        rect.set_values (4, 5);
      
     rect.area();
      
        return 0;
    }