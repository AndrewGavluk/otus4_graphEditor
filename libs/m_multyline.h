
class point
{
    public:
        point(): m_posX{0.0}, m_posY{0.0}{};
        point(double _x, double _y): m_posX{_x}, m_posY{_y}{};
        ~point() = default;

    private:
        double m_posX;
        double m_posY;

}