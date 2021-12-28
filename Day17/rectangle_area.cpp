
/*
 * Create classes Rectangle and RectangleArea
 */
using namespace std;

class Rectangle
{
    protected:
    int width;
    int height;

    public:
    void display()
    {
        cout<<height<<" "<<width<<endl;
    }
};

class RectangleArea : public Rectangle
{

    public:
    void read_input()
    {
        cin>>height;
        cin>>width;
    }

    void display()
    {
        cout<<(width*height)<<endl;
    }

};

