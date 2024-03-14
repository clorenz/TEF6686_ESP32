#ifndef RDS_H
#define RDS_H

#include <Arduino.h>
#include <TFT_eSPI.h>
#include <WiFiClient.h>
#include "TEF6686.h"
#include <WiFi.h>
#include <ESP32Time.h>

extern bool advancedRDS;
extern bool afmethodBold;
extern bool afpage;
extern bool afscreen;
extern bool aftest;
extern bool artheadold;
extern bool BWreset;
extern bool compressedold;
extern bool clearrds;
extern bool dropout;
extern bool dynamicPTYold;
extern bool fullsearchrds;
extern bool hasafold;
extern bool hasCTold;
extern bool haseonold;
extern bool hasrtplusold;
extern bool hastmcold;
extern bool rdsreset;
extern bool RDSSPYTCP;
extern bool RDSSPYUSB;
extern bool RDSstatus;
extern bool rdsstereoold;
extern bool rtcset;
extern bool screenmute;
extern bool setupmode;
extern byte showrdserrors;
extern bool TAold;
extern bool TPold;
extern bool wifi;
extern bool XDRGTKTCP;
extern bool XDRGTKUSB;
extern byte af_counterold;
extern byte aid_counterold;
extern byte afpagenr;
extern byte band;
extern byte charwidth;
extern byte ECCold;
extern byte language;
extern byte licold;
extern byte MSold;
extern byte eonptyold[20];
extern byte rdsblockold;
extern byte rdsqualityold;
extern byte region;
extern byte stationlistid;
extern char eonpicodeold[20][6];
extern char programTypePrevious[18];
extern int ActiveColor;
extern int ActiveColorSmooth;
extern int BackgroundColor;
extern int BarSignificantColor;
extern int BarInsignificantColor;
extern int BWAutoColor;
extern int BWAutoColorSmooth;
extern int GreyoutColor;
extern int InsignificantColor;
extern int InsignificantColorSmooth;
extern int PrimaryColor;
extern int PrimaryColorSmooth;
extern int RDSColor;
extern int RDSColorSmooth;
extern int RDSDropoutColor;
extern int RDSDropoutColorSmooth;
extern int SecondaryColor;
extern int SecondaryColorSmooth;
extern int SignificantColor;
extern int SignificantColorSmooth;
extern int xPos;
extern int xPos2;
extern int xPos3;
extern int xPos4;
extern int16_t SAvg3;
extern IPAddress remoteip;
extern String AIDString;
extern String ECColdtxt;
extern String eonpsold[20];
extern String LIColdString;
extern String pinstringold;
extern String PIold;
extern String PSold;
extern String ptynold;
extern String PTYold;
extern String rds_clock;
extern String rds_clockold;
extern String RDSSPYRDS;
extern String RDSSPYRDSold;
extern String RTold;
extern String stationIDold;
extern String stationStateold;
extern String XDRGTKRDS;
extern String XDRGTKRDSold;
extern unsigned int mappedfreqold[20];
extern unsigned int mappedfreqold2[20];
extern unsigned int mappedfreqold3[20];
extern unsigned long afticker;
extern unsigned long aftickerhold;
extern unsigned long aftimer;
extern unsigned long eonticker;
extern unsigned long eontickerhold;
extern unsigned long rtplusticker;
extern unsigned long rtplustickerhold;
extern unsigned long rtticker;
extern unsigned long rttickerhold;

extern ESP32Time rtc;
extern TFT_eSPI tft;
extern TEF6686 radio;
extern WiFiClient RemoteClient;
extern WiFiUDP Udp;
extern TFT_eSprite RadiotextSprite;
extern TFT_eSprite RDSSprite;

void ShowAdvancedRDS();
void readRds();
void showECC();
void doAF();
void showPI();
void showPTY();
void showPS();
void showRadioText();
void ShowAFEON();
void showCT();
void ShowErrors();

extern void ShowRDSLogo(bool RDSstatus);
extern void DataPrint(String string);
extern void tftPrint(int8_t offset, const String & text, int16_t x, int16_t y, int color, int smoothcolor, uint8_t fontsize);
extern void tftReplace(int8_t offset, const String & textold, const String & text, int16_t x, int16_t y, int color, int smoothcolor, uint8_t fontsize);
#endif