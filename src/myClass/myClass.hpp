class myClass
{
  /* ------------------------ PUBLIC SECTION ----------------------- */
  public :
    void setVar(
        unsigned char u8Arg);

    bool increaseVar(
        unsigned char u8Arg = (unsigned char)1);

    unsigned char getVar(void);

    unsigned short getNbrOfObjects(void);

    myClass(
        unsigned char u8Arg = (unsigned char)0);

    ~myClass();


  /* ---------------------- PROTECTED SECTION ---------------------- */
  protected :
    unsigned char mpro_u8Var;

    static unsigned short spro_u16NbrofObjects;
};