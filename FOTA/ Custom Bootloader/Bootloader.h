/*
*  BootLoader.h
*
*
*Created on : 
* Author : Merareb.Badreddine
*/
  

#define BL_HOST_RX_BUFFER_LENGHT    200;



#define CMD_GET_Version           0x10
#define CMD_GET_CID_CMD           0x11
#define CMD_RDP_Status            0x12
#define CMD_FLASH_ERASE           0x13
#define CMD_MEM_Write             0x14
#define CMD_GO_TO_Main_APP        0x15



#define BL_Vendor_ID            200
#define SW_Magor_ID             1
#define SW_Minor_ID             0
#define SW_Patch_ID             0


void BL_USART_Fetch_Host_CMD(void);
