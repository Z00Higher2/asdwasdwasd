/*
Implement a class Rectangle. 
Provide a constructor to construct a rectangle with given width and height, 
member functions get_perimeter and get_area that compute the perimeter and area, 
and a member function void resize(double factor) 
that resizes the rectangle by mulitpying the width and height by the given factor.
*/

class Rectangle {
private:
    double width, height;

public:
    Rectangle(double w, double h){
        this->width = w;
        this->height = h;
    }

    double get_perimeter() const {
        return 2 * (width + height);
    }

    double get_area() const {
        return width * height;
    }

    void resize(double factor) {
        width *= factor;
        height *= factor;
    }
};