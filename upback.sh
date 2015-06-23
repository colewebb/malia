# Known glitches:
#
# -> Moves fstab and environment into ~/etc/, not /etc/.
# -> Syncs uploaded files, but not deleted files.
# -> When you perform a backup after an upback, it updates everything (since technically
#    everything is newer than source).

rm -R -v ~/Documents/
rm -R -v ~/Downloads/
rm -R -v ~/GeoGebra/
rm -R -v ~/Pictures/
rm -R -v ~/Public/
rm -R -v ~/Videos/
rm -R -v ~/VirtualBox\ VMs/
sudo rm -R -v ~/.config/
sudo rm -R -v /etc/apt/sources.list

cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Documents/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Downloads/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/GeoGebra/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Intranet/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Pictures/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/private/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Public/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Templates/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Videos/
cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/Scripts/
sudo cp --target-directory=/home/rebooted/ -u -v -R /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/.config/
sudo cp /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/etc/fstab -u -v /etc/
sudo cp /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/etc/environment -u -v /etc/environment
sudo cp /media/rebooted/Toshiba\ Canvio/My\ Files/Backups/xubuntu/etc/sources.list -u -v /etc/apt/sources.list
