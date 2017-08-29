# Celular_lib

Library for setting up Quectel M95 and make a POST request to an API.

The objetc Gprs(int pwrpin, int statuspin, int srxpin, int stxpin) receives the pins for power, status, rx and tx.

Function void config(String type, String device, String variable, String token) receives the content-type as a string for the http request, 
content-lenght is automatically calculated, variable name as a string and token as a string. Sets up the device elimintaing echo and 
setting connection type 1.

Function void set_apn(String apn) receives the mobile service apn inside "" eg.("\"internet.movistar.com.co\"") and sets it as apn server.

Function void send(String ip, String port, int content) receives the servers ip and port and the value as an integer that is going to be 
sent. It opens the TCP/IP connection and sends the content.

Function void close() closes the TCP/IP connection. (not working).
