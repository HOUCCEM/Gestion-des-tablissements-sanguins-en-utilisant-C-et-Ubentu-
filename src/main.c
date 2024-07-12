/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *Uaffiche;
  GtkWidget *Uajoute;
  GtkWidget *Usupprime;
  GtkWidget *Ustatistique;
  GtkWidget *Umodife;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  Uaffiche = create_Uaffiche ();
  gtk_widget_show (Uaffiche);
  //Uajoute = create_Uajoute ();
 // gtk_widget_show (Uajoute);
  //Usupprime = create_Usupprime ();
  //gtk_widget_show (Usupprime);
  //Ustatistique = create_Ustatistique ();
 // gtk_widget_show (Ustatistique);
  //Umodife = create_Umodife ();
  //gtk_widget_show (Umodife);

  gtk_main ();
  return 0;
}
