#ifndef _C_PRINTSCREEN
#define _C_PRINTSCREEN

class PrintScreen
{
  public:
    int run();
  protected:
    GtkStatusIcon *m_taskbar_icon;
    bool m_options_open;
};

#endif

