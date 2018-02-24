#!/bin/bash
# Bash-Tuner
# Edited by Logan Campbell
clear
echo  ====================================
echo    Shoutcast Channel-Tuner
echo       http://www.shoutcast.com/
echo  ====================================
echo

echo "Enter your age: "
read age

if [ $age -ge 10 ]

then
  echo "
        1. RADIO LATINA
        2. FM 100 Memphis
        3. WCIK 103.1 FM Elmira
        4. DS4U Radio
        5. 104.6 RTL - Weihnachtsradio
        6. Radio Lomé
        7. Radio 2M Beograd
        8. Vital Radio Afrique
        9. User defined URL"
echo
echo "Please enter a program number
  Exit with [x]:"

read channel

case "$channel" in
1)
clear

#1 RADIO LATINA
vlc http://15383.live.streamtheworld.com/XLTNFM_SC
;;
2)
clear

#2 FM 100 Memphis
vlc http://c8icy.prod.playlists.ihrhls.com/2804_icy
;;
3)
clear


#3 WCIK 103.1 FM Elmira
vlc http://50.22.253.46/fln.mp3
;;
4)
clear
#4 DS4U Radio
vlc http://ds4u.com:8000/listen.pls
;;
5)
clear
#5 	104.6 RTL - Weihnachtsradio
vlc http://stream.104.6rtl.com/rtl-event/mp3-128/radiosure/
;;
6)
clear
#6. Radio Lomé
vlc http://ample-zeno-03.radiojar.com/2rhc424mb
;;
7)
clear
#7. Radio 2M Beograd
vlc http://stream.1more.fr/1more-dance-128.mp3
;;
8)
clear
#8. Vital Radio Afrique
vlc http://listen.radioking.com/radio/398/stream/1643
;;

9)
echo "Enter a URL:"
read streamurl
clear
vlc $streamurl
;;



*)
bash tuner-script_lin.sh
;;
esac
bash tuner-script_lin.sh

else
    echo  "
          1. RADIO LATINA
          2. WCIK 103.1 FM Elmira
          3. DS4U Radio
          4. Radio Lomé
          5. Radio 2M Beograd
          6. User defined URL"
echo
echo "Please enter a program number
  Exit with [x]:"

read channel

case "$channel" in
1)
clear

#1 RADIO LATINA
vlc http://15383.live.streamtheworld.com/XLTNFM_SC
;;

2)
clear
#3 WCIK 103.1 FM Elmira
vlc http://50.22.253.46/fln.mp3
;;
3)
clear
#4 DS4U Radio
vlc http://ds4u.com:8000/listen.pls
;;
4)
clear
#6. Radio Lomé
vlc http://ample-zeno-03.radiojar.com/2rhc424mb
;;
5)
clear
#7. Radio 2M Beograd
vlc http://stream.1more.fr/1more-dance-128.mp3
;;
6)
echo "Enter a URL:"
read streamurl
clear
vlc $streamurl
;;
x)
exit
;;
*)
bash tuner-script_lin.sh
;;
esac
bash tuner-script_lin.sh

fi



