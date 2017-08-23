#include <Gprs.h>

Gprs vmi(7,8,2,3); //pwrpin, statuspin, rx, tx

void setup(){
Serial.begin(9600);
vmi.config("application/json", "vmi", "capas", "zjLwMAMo3TzwgFqZ6vL2rCHmvPMhjl");
vmi.set_apn("\"internet.movistar.com.co\""); //"apn"
}

void loop(){
vmi.send("50.23.124.68", "80", 9);  //ip, port, value
vmi.close();
}
