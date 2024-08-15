#include "gui.h"
#include <stdlib.h>

void on_button_clicked(GtkWidget *widget, gpointer data){
  //Retrive widget
  GtkWidget **entries = (GtkWidget **)data;
  const gchar *text = gtk_entry_get_text(GTK_ENTRY(entries[0]));
  const gchar *num1_str = gtk_entry_get_text(GTK_ENTRY(entries[1]));
  const gchar *num2_str = gtk_entry_get_text(GTK_ENTRY(entries[2]));

  //convert String to ints
  int num1 = atoi(num1_str);
  int num2 = atoi(num2_str);

  //calculate the sum
  int sum = num1+num2;

  //create the result message
  gchar *result = g_strdup_printf("Entered text: %s\nSum: %d",text,sum);

  //show result in a dialog

}
