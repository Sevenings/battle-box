#include <gtk/gtk.h>

static void print_hello (GtkWidget *widget, gpointer data)
{
  g_print ("Hello World, Programed to work and not to feel\n");
}


static void activate (GtkApplication *app, gpointer user_data)
{
    // Onde eu efetivamente construo a janela
  GtkWidget *window;
  GtkWidget *button;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Bonjour");
  gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

  button = gtk_button_new_with_label ("Hello World");
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
  gtk_window_set_child (GTK_WINDOW (window), button);

  gtk_window_present (GTK_WINDOW (window));
}


static void activate2 (GtkApplication *app, gpointer user_data)
{
    // Onde eu efetivamente construo a janela
  GtkWidget *window;
  GtkWidget *button;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Bonsoir");
  gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

  button = gtk_button_new_with_label ("Hello World");
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
  gtk_window_set_child (GTK_WINDOW (window), button);

  gtk_window_present (GTK_WINDOW (window));
}


int main (int argc, char **argv)
{
  GtkApplication *app, *app2;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS); // Cria o APP, classe mãe da Janela
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);  // Conecta a função activate como a "função main" da Janela
  status = g_application_run (G_APPLICATION (app), argc, argv);     // Executa a Janela
  g_object_unref (app);

  app2 = gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS); // Cria o APP, classe mãe da Janela
  g_signal_connect (app2, "activate", G_CALLBACK (activate2), NULL);  // Conecta a função activate como a "função main" da Janela
  g_application_run (G_APPLICATION (app2), argc, argv);     // Executa a Janela
  g_object_unref (app2);


  return status;
}
