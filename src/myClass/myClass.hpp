class myClass
{
  public :
    void setVar(
        unsigned char u8Arg);

    bool increaseVar(
        unsigned char u8Arg = (unsigned char)1);

    unsigned char getVar(void);

    myClass(
        unsigned char u8Arg = (unsigned char)0);

    ~myClass();


  protected :
    unsigned char mpro_u8Var;

    static unsigned short spro_u16NbrofObjects;

    static unsigned short getNbrOfObjects(void);
};