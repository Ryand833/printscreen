#include <gtk/gtk.h>

#include "printscreen.h"

int PrintScreen::run()
{
  GtkWidget *window;

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Center");
  gtk_window_set_default_size(GTK_WINDOW(window), 230, 150);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_widget_show(window);

  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_main();

  return 0;
}

int main(int argc, char** argv)
{
  // Initialize GTK
  gtk_init(&argc, &argv);

  // Run main
  PrintScreen *ps = new PrintScreen();
  int rcode = ps->run();
  delete ps;

  return rcode;
}
