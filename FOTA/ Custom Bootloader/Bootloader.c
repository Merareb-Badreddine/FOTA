
#include  "Bootloader.h" 

void BL_FETCH_HOST_COMMAND(void)
{
    uint16_t BL_Host_Buffer[BL_HOST_RX_BUFFER_LENGHT];
    uint16_t temp;
    uint8_t DATA_LENGTH;
    uint8_t i;

    
    MCAL_UART_ReceiveData(usartA, &temp, PollingEn);
    DATA_LENGTH = (uint8_t)temp;

   
    for (i = 0; i < DATA_LENGTH; i++)
    {
        MCAL_UART_ReceiveData(usartA, &Buffer[i], PollingEn);
    }

   
    switch ((uint8_t)Buffer[1])
    {
        case CMD_GET_Version:
            BootLoader_Get_Version(uint8_t BL_Host_Buffer);
            break;
      case CMD_GET_CID_CMD:
            BootLoader_Get_Chip_ID(uint8_t BL_Host_Buffer);
            break;

        case CMD_RDP_Status:
            BootLoader_Get_RDP_Status(uint8_t BL_Host_Buffer);
            break;

        case CMD_FLASH_ERASE:
            BootLoader_Get_Application_Erase(uint8_t BL_Host_Buffer);
            break;
      
       case CMD_MEM_Write:
            BootLoader_Upload_Application(uint8_t BL_Host_Buffer);
            break;

       case CMD_GO_TO_Main_APP:
            BootLoader_Jump_TO_Application(uint8_t BL_Host_Buffer);
            break;

      default:

            break;
    }
}

// ------------------------------------------------------------------------------------------//
static void BootLoader_Get_Version(uint8_t BL_Host_Buffer);
static void BootLoader_Get_Chip_ID(uint8_t BL_Host_Buffer);
static void BootLoader_Get_RDP_Status(uint8_t BL_Host_Buffer);
static void BootLoader_Get_Application_Erase(uint8_t BL_Host_Buffer);
static void BootLoader_Upload_Application(uint8_t BL_Host_Buffer);
static void BootLoader_Jump_TO_Application(uint8_t BL_Host_Buffer);





static void BootLoader_Get_Version(uint8_t BL_Host_Buffer)
{
    uint8_t BL_Version[4] = {BL_Vendor_ID ,SW_Magor_ID ,SW_Minor_ID ,SW_Patch_ID}
}
static void BootLoader_Get_Chip_ID(uint8_t BL_Host_Buffer)
{
	
}
static void BootLoader_Get_RDP_Status(uint8_t BL_Host_Buffer)
{
	
}
static void BootLoader_Get_Application_Erase(uint8_t BL_Host_Buffer)
{
	
}
static void BootLoader_Upload_Application(uint8_t BL_Host_Buffer)
{
	uint16_t  Host_CMD_Packet_Len = 0;
	uint32_t  Host_Addreas = 0;
	uint8_t   Payload_Len = 0;

	
       Host_CMD_Packet_Len =  BL_Host_Buffer[0] + 1 ;
}
static void BootLoader_Jump_TO_Application(uint8_t BL_Host_Buffer)
{
	
}





