==> 01 <==
#/etc/passwd file
awk -F: ' {print $1 " " $3 " " $6}' /etc/passwd | column -t

==> 02 <==
USER=$1
pgrep -u $USER | while read PID; do sudo kill $PID; done
sudo userdel $USER
#usermod -aG sudo username
#Use the su command to switch to the new user account: su - username

==> 03 <==
result=$(wget -qO- https://www.cbr-xml-daily.ru/daily_json.js)
echo -n "USD rate by CBRF: "
echo "$result" | jq -r '.Valute .USD .Value'
==> all.sh <==
