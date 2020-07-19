==> 01 <==
#In what file can you find the installed version of your Debian?
/etc/debian_version

==> 02 <==
#What command can you use to rename your system?
hostname <new_hostname>

==> 03 <==
#What file has to be modified to make it permanent?
/etc/hostname

==> 04 <==
#What command gives you the time since your system was last booted?
who -b #gives last boot time (SINCE)
uptime #gives last boot time (SINCE) and time FROM last boot
#Предлог since указывает на период события по-другому: он передает, когда началось действие,
# служит его отправной точкой (proof: https://puzzle-english.com/directory/for-and-since)

==> 05 <==
#Name the command that determines the state of the SSH service
systemctl status ssh

==> 06 <==
#Name the command that reboots the SSH service
systemctl restart ssh

==> 07 <==
#Figure out the PID of the SSHD service.
systemctl status ssh | grep 'PID' | awk '{print $3}'

==> 08 <==
#What file contains the RSA keys of systems that are authorized to connect via SSH?
~/.ssh/authorized_keys

==> 09 <==
#What command lets you know who is connected to the System?
w
#or who -a

==> 10 <==
 #Name the command that lists the partition tables of drives?
 lsblk
 # or /sbin/fdisk -l

==> 11 <==
#Name the command that displays the available space left and used on the system
#in an humanly understandable way
df -h

==> 12 <==
#Figure out the exact size of each folder of /var in a humanly understandable
#way followed by the path of it.
du -sh /var/*
#du --summarize --human-readable

==> 13 <==
#Name the command that find, in real time, currently running processes
top

==> 14 <==
#Run the ‘tail -f /var/log/syslog‘ command in background
tail -f /var/log/syslog &

==> 15 <==
#Find the command that kills the background command’s process
kill <PID>

==> 16 <==
#Find the service which makes it possible to run specific tasks following a regular schedule
cron
#for one-time schedule use 'at'

==> 17 <==
#Find the command that allows you to connect via ssh on the VM.(In parallel with
#the graphic session)

# port forwarding: protocol TCP, Host port 2222, Guest Port 22
ssh gloriann@localhost -p 2222

==> 18 <==
#Find the command that kills ssh service
kill $(pgrep ssh)
#or
pkill ssh

==> 19 <==
#List all services which are started at boot time and name this kind of services
systemctl list-unit-files --type=service --state=enabled | grep -v STATE | awk -F'.service' '{print $1}'

==> 20 <==
#List all existing users on the VM
awk -F: '{print $1}' /etc/passwd

==> 21 <==
#List all real users on the VM
awk -F: '$3 >= 1000 && $1 != "nobody" {print $1}' /etc/passwd
#-F fs — позволяет указать символ-разделитель для полей в записи.

==> 22 <==
#Find the command that add a new local user
adduser <username>

==> 23 <==
#Explain how connect yourself as new user. (With graphic session and ssh session)
Graphical : Put login and password when asked
SSH : ssh <user>@<ip>, put password when asked

==> 24 <==
apt list --installed
