#include<ncurses.h>
#include<unistd.h>

int main()
{
  int n, temp, x, y;

  initscr();
  WINDOW *win = newwin(18, 50, 5, 10);
  refresh();
  box(win, 0, 0);
  wmove(win, 1, 1);

  wprintw(win, "Panjang Array: ");
  wrefresh(win);
  wscanw(win, "%d", &n);

  int a[n], b[n];

  for(int i=0; i<n; i++){
    mvwprintw(win, 2, 1, "Angka: ");
    wrefresh(win);
    wscanw(win, "%d", &a[i]);
    b[i] = a[i];
  }

  for(int i=0; i<n-1; i++)
  {
    for(int j=0; j<n-i-1; j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
      }
      wclear(win);
      box(win,0,0);
      for(int k=0; k<n; k++)
      {
        mvwprintw(win, k+1, 1, "%d", a[k]);
        for(int l =0; l<a[k]; l++)
        {
          wprintw(win, "  #|");
          wrefresh(win);
        }
      }
      sleep(1);
    }
  }
  getyx(win, y, x);
  mvwprintw(win, y+2, 1, "Array : ");
  wrefresh(win);
  for(int i=0; i<n; i++)
  {
    wprintw(win, " %d", b[i]);
    wrefresh(win);
  }
  mvwprintw(win, y + 3,1,"Hasil Sorting : ");
  wrefresh(win);
  for(int i=0; i<n; i++){
    wprintw(win, " %d", a[i]);
    wrefresh(win);
  }
  getch();
  endwin();
}