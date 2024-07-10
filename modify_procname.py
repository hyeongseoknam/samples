import setproctitle

# Set the new process title
new_title = "postgres: archiver last time was 12³455677889"
setproctitle.setproctitle(new_title)

# Keep the program running so you can observe the process name change
import time
while True:
    time.sleep(1)