
boolean LoadConfig(){
  if (EEPROM.read(0) == 27) {
    k_uzsalimas = EEPROM.read(2); 
    k_ijungimo_skirtumas = EEPROM.read(4);  
    k_isjungimo_skirtumas = EEPROM.read(6);
    temperatura_1 = EEPROM.read(8);  
    temperatura_2 = EEPROM.read(10);
    T_busena = EEPROM.read(12);
    return true;
  }
  return false;
}

void SaveConfig(){
  EEPROM.write(0,27);
  EEPROM.write(2,k_uzsalimas); 
  EEPROM.write(4,k_ijungimo_skirtumas);  // almacenamos los valores 2 veces
  EEPROM.write(6,k_isjungimo_skirtumas);// almacenamos los valores 2 veces
  EEPROM.write(8,temperatura_1);// almacenamos los valores 2 veces
  EEPROM.write(10,temperatura_2);// almacenamos los valores 2 veces
  EEPROM.write(12,T_busena);// almacenamos los valores 2 veces

}


