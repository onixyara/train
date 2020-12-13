class Wagon
{
  public:
    int   m_name;
    int   m_maxCapacity = 10;
    double m_capacity;

  public:
    Wagon(int name, int value);

    void printCapasity();
    void fillWagon(int value);
};
