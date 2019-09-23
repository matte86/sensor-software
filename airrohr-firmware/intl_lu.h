/*
 *	airRohr firmware
 *	Copyright (C) 2016-2018  Code for Stuttgart a.o.
 * 
 *  Luxembourgish translations
 * 
 *	Texts should be as short as possible
 *	We only have 512 kB for the entire firmware
 */

const char INTL_LANG[] = "LU";
const char INTL_PM_SENSOR[] PROGMEM = "Reng Stëbspartikelensensor";
const char INTL_CONFIGURATION[] PROGMEM = "Konfiguratioun";
const char INTL_WIFI_SETTINGS[] PROGMEM = "WiFi Daten";
const char INTL_WIFI_NETWORKS[] PROGMEM = "WiFi Netzwierker lueden ...";
const char INTL_LANGUAGE[] PROGMEM = "Sprooch";
const char INTL_NO_NETWORKS[] PROGMEM =  "Keng Netzwierker fonnt";
const char INTL_NETWORKS_FOUND[] PROGMEM = "Netzwierker fonnt: ";
const char INTL_AB_HIER_NUR_ANDERN[] PROGMEM = "Ab hei nëmmen änneren, wann der wësst wat dir maacht";
const char INTL_SAVE[] PROGMEM = "Späicheren";
const char INTL_SENSORS[] PROGMEM = "Sensoren";
const char INTL_SDS011[] PROGMEM = "SDS011 ({pm})";
const char INTL_PMS[] PROGMEM = "Plantower PMS(1,3,5,6,7)003 ({pm})";
const char INTL_HPM[] PROGMEM = "Honeywell PM sensor";
const char INTL_SPS30[] PROGMEM = "Sensirion SPS30 ({pm})";
const char INTL_PPD42NS[] PROGMEM = "PPD42NS";
const char INTL_DHT22[] PROGMEM = "DHT22 ({t}, {h})";
const char INTL_HTU21D[] PROGMEM = "HTU21D ({t}, {h})";
const char INTL_BMP180[] PROGMEM = "BMP180 ({t}, {p})";
const char INTL_BMX280[] PROGMEM = "BMP280/BME280 ({t}, {h}, {p})";
const char INTL_DS18B20[] PROGMEM = "DS18B20 ({t})";
const char INTL_DNMS[] PROGMEM = "DNMS ({l_a})";
const char INTL_DNMS_CORRECTION[] PROGMEM ="";
const char INTL_NEO6M[] PROGMEM = "GPS (NEO 6M)";
const char INTL_BASICAUTH[] PROGMEM = "BasicAuth aktivéieren";
const char INTL_FS_WIFI[] PROGMEM = "WiFi Sensor";
const char INTL_FS_WIFI_DESCRIPTION[] PROGMEM = "WiFi Sensor Numm am Konfiguratiounsmodus";
const char INTL_FS_WIFI_NAME[] PROGMEM = "Numm";
const char INTL_MORE_SETTINGS[] PROGMEM ="Méi Astellungen";
const char INTL_AUTO_UPDATE[] PROGMEM = "Automateschen Update";
const char INTL_USE_BETA[] PROGMEM = "Beta Versiounen eroflueden";
const char INTL_DISPLAY[] PROGMEM = "OLED SSD1306";
const char INTL_SH1106[] PROGMEM = "OLED SH1106";
const char INTL_FLIP_DISPLAY[] PROGMEM = "";
const char INTL_LCD1602_27[] PROGMEM = "LCD 1602 (I2C: 0x27)";
const char INTL_LCD1602_3F[] PROGMEM = "LCD 1602 (I2C: 0x3F)";
const char INTL_LCD2004_27[] PROGMEM = "LCD 2004 (I2C: 0x27)";
const char INTL_DISPLAY_WIFI_INFO[] PROGMEM = "";
const char INTL_DISPLAY_DEVICE_INFO[] PROGMEM = "";
const char INTL_DEBUG_LEVEL[] PROGMEM = "Debug Niveau";
const char INTL_MEASUREMENT_INTERVAL[] PROGMEM = "Mooss-intervall";
const char INTL_DURATION_ROUTER_MODE[] PROGMEM = "Zait&nbsp;Routermodus";
const char INTL_MORE_APIS[] PROGMEM = "Aner APIs";
const char INTL_SEND_TO_OWN_API[] PROGMEM = "Un eegen API schécken";
const char INTL_SERVER[] PROGMEM = "Server"; 
const char INTL_PATH[] PROGMEM = "Wee"; 
const char INTL_PORT[] PROGMEM = "Port"; 
const char INTL_USER[] PROGMEM = "Benotzer"; 
const char INTL_PASSWORD[] PROGMEM = "Passwuert"; 
const char INTL_SEND_TO[] PROGMEM = "Schécken op {v}"; 
const char INTL_READ_FROM[] PROGMEM = "Liesen {v}";
const char INTL_SENSOR_IS_REBOOTING[] PROGMEM = "De Sensor gëtt neigestart.";
const char INTL_RESTART_DEVICE[] PROGMEM = "Apparat nei starten";
const char INTL_DELETE_CONFIG[] PROGMEM = "Config.json läschen";
const char INTL_RESTART_SENSOR[] PROGMEM = "Sensor nei starten";
const char INTL_HOME[] PROGMEM = "Iwwersiicht";
const char INTL_BACK_TO_HOME[] PROGMEM = "Zréck op d'Haaptsäit";
const char INTL_CURRENT_DATA[] PROGMEM = "Aktuell Wäerter";
const char INTL_ACTIVE_SENSORS_MAP[] PROGMEM = "Kaart vun den aktive Sensoren (externen Link)";
const char INTL_CONFIGURATION_DELETE[] PROGMEM = "Konfiguratioun läschen";
const char INTL_CONFIGURATION_REALLY_DELETE[] PROGMEM = "Konfiguratioun wierklech läschen?";
const char INTL_DELETE[] PROGMEM = "Läschen";
const char INTL_CANCEL[] PROGMEM = "Ofbriechen";
const char INTL_REALLY_RESTART_SENSOR[] PROGMEM = "Sensor wierklech nei starten?";
const char INTL_RESTART[] PROGMEM = "Nei starten";
const char INTL_SAVE_AND_RESTART[] PROGMEM = "Späicheren a nei starten";
const char INTL_FIRMWARE[] PROGMEM = "Firmware";
const char INTL_DEBUG_SETTING_TO[] PROGMEM = "Debug setzen op";
const char INTL_NONE[] PROGMEM = "keng";
const char INTL_ERROR[] PROGMEM = "fehler";
const char INTL_WARNING[] PROGMEM = "warnung";
const char INTL_MIN_INFO[] PROGMEM = "min. info";
const char INTL_MED_INFO[] PROGMEM = "med. info";
const char INTL_MAX_INFO[] PROGMEM = "max. info";
const char INTL_CONFIG_DELETED[] PROGMEM = "Config.json geläscht";
const char INTL_CONFIG_CAN_NOT_BE_DELETED[] PROGMEM = "Config.json konnt net geläscht ginn";
const char INTL_CONFIG_NOT_FOUND[] PROGMEM = "Config.json net fonnt";
const char INTL_TIME_TO_FIRST_MEASUREMENT[] PROGMEM = "Nach {v} Sekonnen bis zur éischter Miessung.";
const char INTL_TIME_SINCE_LAST_MEASUREMENT[] PROGMEM = " Sekonnen zanter der leschter Miessung.";
const char INTL_PARTICLES_PER_LITER[] PROGMEM = "Partikel/Liter";
const char INTL_PARTICULATE_MATTER[] PROGMEM = "Reng Stëbspartikelen";
const char INTL_TEMPERATURE[] PROGMEM = "Temperatur";
const char INTL_HUMIDITY[] PROGMEM = "rel. Loftfiichtegkeet";
const char INTL_PRESSURE[] PROGMEM = "Loftdrock";
const char INTL_LEQ_A[] PROGMEM = "LAeq";
const char INTL_LA_MIN[] PROGMEM = "LA min";
const char INTL_LA_MAX[] PROGMEM = "LA max";
const char INTL_LATITUDE[] PROGMEM = "Breedegrad";
const char INTL_LONGITUDE[] PROGMEM = "Längtegrad";
const char INTL_ALTITUDE[] PROGMEM = "Héicht";
const char INTL_DATE[] PROGMEM = "Datum";
const char INTL_TIME[] PROGMEM = "Zäit";
const char INTL_SIGNAL_STRENGTH[] PROGMEM = "Signal";
const char INTL_SIGNAL_QUALITY[] PROGMEM = "Qualitéit";
const char INTL_NUMBER_OF_MEASUREMENTS[] PROGMEM = "Zuel vu Mesuren:";
const char INTL_SENSOR[] PROGMEM = "Sensor";
const char INTL_PARAMETER[] PROGMEM = "Parameter";
const char INTL_VALUE[] PROGMEM = "Wäert";

#include "./airrohr-logo-common.h"
