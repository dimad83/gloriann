==> 01 <==
#Get the list of the network interfaces of the machine without displaying any detail
#for these interfaces. Only the list of names.
ifconfig -l

==> 02 <==
#Identify and display the Ethernet interface characteristics:

#(a) Identify broadcast address
ifconfig | grep broadcast | awk '{print $6}'

#(b) Identify all IP adresses which are part of the same subnet
arp -a
#or if you want to show only IPs:
# arp -a | grep -v permanent | awk '{print $2}' | sed 's/[()]//g'
# -v to exclude
# awk '{print $2}' | sed 's/[()]//g' # to show only ip adresses

==> 03 <==
#Identify the MAC address of the Wi-Fi card
ifconfig en1 | grep ether | awk '{print $2}'
# https://ithelp.brown.edu/kb/articles/find-the-mac-address-of-a-computer-or-device#Mac
# Locate and open Terminal from Applications->Utilities->Terminal.
# At the Terminal Prompt, type ifconfig and press Enter. This will list all of your network settings,
# including the physical addresses of your wired and wireless hardware.
# To find the Physical Address for your connection:
# > The wired physical address will be listed under en0
# > The wireless physical address will be listed under en1
# Write down or copy/paste the addresses into a document for future reference. You can also directly
# print it by going to Shell->Print. Keep this document with your important papers.

==> 04 <==
#Identifiy the default gateway in the routing table
netstat -nr | egrep 'default.*en0' | awk '{print $2}'
#"egrep" = "grep -E" (extended grep)

==> 05 <==
#Identify the IP address of the DNS that responds to the following url: slash16.org
nslookup slash16.org | grep Server:
#The first line contains the IP address of the DNS that responded.

==> 06 <==
#Get the complete path of the file that contains the IP address of the DNS
#server you’re using
/etc/resolv.conf

==> 07 <==
#Query an external DNS server on the slash16.org domain name
#(ie. : google #8.8.8.8)
nslookup slash16.org 8.8.8.8

==> 08 <==
#Find the provider of slash16.org
get IPs by this query:
nslookup slash16.org | grep Address | grep -v # | awk '{print $2}'
use whois for found IPs

==> 09 <==
#Find the external IP of 42.fr
#nslookup 42.fr | grep Address | grep -v # | awk '{print $2}'
163.172.250.13
163.172.250.12

==> 10 <==
#Identify the network devices between your computer and the slash16.org domain
traceroute slash16.org

==> 11 <==
#Use the output of the previous command to find the name and IP address of the
#device that makes the link between you (local network) and the outside world
first IP from traceroute slash16.org

==> 12 <==
#Find the IP that was assigned to you by dhcp server
ifconfig en0 | grep "inet " | awk '{print $2}'

==> 13 <==
#Thanks to the previous question and the reverse DNS find the name of your host
at-h2.21-school.ru.
# for OUT in $(ifconfig en0 | grep "inet " | awk '{print $2}'); do nslookup $OUT | grep name | awk '{print $4}'; done

==> 14 <==
#What file contains the local DNS entries?
/etc/hosts

==> 15 <==
#Make the intra.42.fr address reroute to 46.19.122.85
Add to /etc/hosts new line:
46.19.122.85  intra.42.fr
