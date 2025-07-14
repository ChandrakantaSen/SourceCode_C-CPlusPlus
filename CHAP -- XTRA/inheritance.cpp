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
        class output1 
        {
            public:
            void output1(int i) 
			{
			cout << i << endl;
			}
        };
   
    class rectangle: public polygon, public output1 
    {
        public:
        int area ()
        { 
            return (width * height); 
        }
    };
    class triangle: public polygon, public output1 
    {
        public:
        int area ()
        {
            return (width * height / 2); 
        }
    };
    int main () 
    {
        rectangle rect;
        triangle trgl;
        rect.set_values (4, 5);
        trgl.set_values (4, 5);
        rect.output (rect.area());
        trgl.output (trgl.area());
        return 0;
    }