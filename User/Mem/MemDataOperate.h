
#ifndef _MEMDATAOPERATE_H
#define _MEMDATAOPERATE_H

/* Includes ------------------------------------------------------------------*/
#include "Macro.h"
#include "param.h"
/* Exported macro ------------------------------------------------------------*/

#define  ApplicationAddress     (0x8000000+0x0000)      // Ӧ�ó���ʼ��ַ
#define  BootLoaderAddress      (0x8000000+0xD800)
#define CONFIG_STARTADDR        (0x0800fc00)    // ��63k
#define CALIB_STARTADDR         (0x0800f800)    // ��62k
#define FLASH_PARAM_SIZE	    256	            // ����������


// ===========================================================

/* Exported functions ------------------------------------------------------- */
void MemData_Init(void);
void MemData_DefaultSettingParam(void);
// �ⲿ����,��ȡ����
BOOL MemData_WriteActNumToFlash(void);
void MemData_WriteParam(void);
void MemData_ReadParam(void);
void MemData_WriteCalib(u8 *pScrData, u16 Count);     //У��
void MemData_ReadCalib(u8 *pDstData, u16 Count);
void MemData_SetDefaultParam(PARAM_T *pSettingParam, BOOL bInit);

/* Exported variables ------------------------------------------------------- */

extern volatile BOOL vg_bLostFault;		// �������

//////////////////////////////////////////////////////////////////////////
//extern Device_ProtectParamStruct  vg_DeviceProtectParam; //�豸��������
//
extern u16 g_CTRatio;
extern u8 g_SimTestFlag;			// ȫ��ģ����Ա���
extern u8 g_ManualFlag;			    // ȫ��ģ����Ա���

#endif /* _MEMDATADEF_H */

//===========================================================================
// No more.
//===========================================================================

