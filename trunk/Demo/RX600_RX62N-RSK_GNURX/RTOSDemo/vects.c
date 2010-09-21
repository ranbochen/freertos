/***********************************************************************/
/*                                                                     */
/*  FILE        :vects.c                                               */
/*  DATE        :Wed, Aug 25, 2010                                     */
/*  DESCRIPTION :Vector Table                                          */
/*  CPU TYPE    :Other                                                 */
/*                                                                     */
/*  This file is generated by KPIT GNU Project Generator.              */
/*                                                                     */
/***********************************************************************/
                          



#include "inthandler.h"

typedef void (*fp) (void);
extern void start(void);
extern void stack (void);
extern void vTickISR( void );
extern void vSoftwareInterruptISR( void );
extern void vT0_1_ISR_Wrapper( void );
extern void vT2_3_ISR_Wrapper( void );
extern void vEMAC_ISR_Wrapper( void );
extern void vTimer2_ISR_Wrapper( void );

#define FVECT_SECT          __attribute__ ((section (".fvectors")))

const fp HardwareVectors[] FVECT_SECT  = {
//;0xffffff80  Reserved
    (fp)0,
//;0xffffff84  Reserved
    (fp)0,
//;0xffffff88  Reserved
    (fp)0,
//;0xffffff8C  Reserved
    (fp)0,
//;0xffffff90  Reserved
    (fp)0,
//;0xffffff94  Reserved
    (fp)0,
//;0xffffff98  Reserved
    (fp)0,
//;0xffffff9C  Reserved
    (fp)0,
//;0xffffffA0  Reserved
    (fp)0,
//;0xffffffA4  Reserved
    (fp)0,
//;0xffffffA8  Reserved
    (fp)0,
//;0xffffffAC  Reserved
    (fp)0,
//;0xffffffB0  Reserved
    (fp)0,
//;0xffffffB4  Reserved
    (fp)0,
//;0xffffffB8  Reserved
    (fp)0,
//;0xffffffBC  Reserved
    (fp)0,
//;0xffffffC0  Reserved
    (fp)0,
//;0xffffffC4  Reserved
    (fp)0,
//;0xffffffC8  Reserved
    (fp)0,
//;0xffffffCC  Reserved
    (fp)0,
//;0xffffffd0  Exception(Supervisor Instruction)
    INT_Excep_SuperVisorInst,
//;0xffffffd4  Reserved
    (fp)0,
//;0xffffffd8  Reserved
    (fp)0,
//;0xffffffdc  Exception(Undefined Instruction)
    INT_Excep_UndefinedInst,
//;0xffffffe0  Reserved
    (fp)0,
//;0xffffffe4  Exception(Floating Point)
    INT_Excep_FloatingPoint,
//;0xffffffe8  Reserved
    (fp)0,
//;0xffffffec  Reserved
    (fp)0,
//;0xfffffff0  Reserved
    (fp)0,
//;0xfffffff4  Reserved
    (fp)0,
//;0xfffffff8  NMI
    INT_NonMaskableInterrupt,
//;0xfffffffc  RESET
//;<<VECTOR DATA START (POWER ON RESET)>>
//;Power On Reset PC
    start                                                                                                                 
//;<<VECTOR DATA END (POWER ON RESET)>>
};

#define RVECT_SECT          __attribute__ ((section (".rvectors")))

const fp RelocatableVectors[] RVECT_SECT  = {
//;0x0000  Reserved
    (fp)0,
//;0x0004  Reserved
    (fp)0,
//;0x0008  Reserved
    (fp)0,
//;0x000C  Reserved
    (fp)0,
//;0x0010  Reserved
    (fp)0,
//;0x0014  Reserved
    (fp)0,
//;0x0018  Reserved
    (fp)0,
//;0x001C  Reserved
    (fp)0,
//;0x0020  Reserved
    (fp)0,
//;0x0024  Reserved
    (fp)0,
//;0x0028  Reserved
    (fp)0,
//;0x002C  Reserved
    (fp)0,
//;0x0030  Reserved
    (fp)0,
//;0x0034  Reserved
    (fp)0,
//;0x0038  Reserved
    (fp)0,
//;0x003C  Reserved
    (fp)0,
//;0x0040  BUSERR
	(fp)INT_Excep_BUSERR,
//;0x0044  Reserved
    (fp)0,
//;0x0048  Reserved
    (fp)0,
//;0x004C  Reserved
    (fp)0,
//;0x0050  Reserved
    (fp)0,
//;0x0054 FCUERR
	(fp)INT_Excep_FCU_FCUERR,
//;0x0058  Reserved
    (fp)0,
//;0x005C  FRDYI
	(fp)INT_Excep_FCU_FRDYI,
//;0x0060  Reserved
    (fp)0,
//;0x0064  Reserved
    (fp)0,
//;0x0068  Reserved
    (fp)0,
//;0x006C  Reserved
    (fp)vSoftwareInterruptISR,
//;0x0070  CMTU0_CMT0
	(fp)vTickISR,
//;0x0074  CMTU0_CMT1
	(fp)INT_Excep_CMTU0_CMT1,
//;0x0078  CMTU1_CMT2
	(fp)vTimer2_ISR_Wrapper,
//;0x007C  CMTU1_CMT3
	(fp)INT_Excep_CMTU1_CMT3,
//;0x0080  Ether
    (fp)vEMAC_ISR_Wrapper,
//;0x0084  Reserved
    (fp)0,
//;0x0088  Reserved
    (fp)0,
//;0x008C  Reserved
    (fp)0,
//;0x0090  Reserved
    (fp)0,
//;0x0094  Reserved
    (fp)0,
//;0x0098  Reserved
    (fp)0,
//;0x009C  Reserved
    (fp)0,
//;0x00A0  Reserved
    (fp)0,
//;0x00A4  Reserved
    (fp)0,
//;0x00A8  Reserved
    (fp)0,
//;0x00AC  Reserved
    (fp)0,
//;0x00B0  Reserved
    (fp)0,
//;0x00B4  Reserved
    (fp)0,
//;0x00B8  Reserved
    (fp)0,
//;0x00BC  Reserved
    (fp)0,
//;0x00C0  Reserved
    (fp)0,
//;0x00C4  Reserved
    (fp)0,
//;0x00C8  Reserved
    (fp)0,
//;0x00CC  Reserved
    (fp)0,
//;0x00D0  Reserved
    (fp)0,
//;0x00D4  Reserved
    (fp)0,
//;0x00D8  Reserved
    (fp)0,
//;0x00DC  Reserved
    (fp)0,
//;0x00E0  Reserved
    (fp)0,
//;0x00E4  Reserved
    (fp)0,
//;0x00E8  Reserved
    (fp)0,
//;0x00EC  Reserved
    (fp)0,
//;0x00F0  Reserved
    (fp)0,
//;0x00F4  Reserved
    (fp)0,
//;0x00F8  Reserved
    (fp)0,
//;0x00FC  Reserved
    (fp)0,
//;0x0100  IRQ0
    (fp)INT_Excep_IRQ0,
//;0x0104 IRQ1
    (fp)INT_Excep_IRQ1,
//;0x0108 IRQ2
    (fp)INT_Excep_IRQ2,
//;0x010C IRQ3
    (fp)INT_Excep_IRQ3,
//;0x0110 IRQ4
    (fp)INT_Excep_IRQ4,
//;0x0114 IRQ5
    (fp)INT_Excep_IRQ5,
//;0x0118 IRQ6
    (fp)INT_Excep_IRQ6,
//;0x011C IRQ7
    (fp)INT_Excep_IRQ7,
//;0x0120 IRQ8
    (fp)INT_Excep_IRQ8,
//;0x0124 IRQ9
    (fp)INT_Excep_IRQ9,
//;0x0128 IRQ10
    (fp)INT_Excep_IRQ10,
//;0x012C IRQ11
    (fp)INT_Excep_IRQ11,
//;0x0130 IRQ12
    (fp)INT_Excep_IRQ12,
//;0x0134 IRQ13
    (fp)INT_Excep_IRQ13,
//;0x0138 IRQ14
    (fp)INT_Excep_IRQ14,
//;0x013C IRQ15
    (fp)INT_Excep_IRQ15,
//;0x0140  Reserved
    (fp)0,
//;0x0144  Reserved
    (fp)0,
//;0x0148  Reserved
    (fp)0,
//;0x014C  Reserved
    (fp)0,
//;0x0150  Reserved
    (fp)0,
//;0x0154  Reserved
    (fp)0,
//;0x0158  Reserved
    (fp)0,
//;0x015C  Reserved
    (fp)0,
//;0x0160  Reserved
    (fp)0,
//;0x0164  Reserved
    (fp)0,
//;0x0168  Reserved
    (fp)0,
//;0x016C  Reserved
    (fp)0,
//;0x0170  Reserved
    (fp)0,
//;0x0174  Reserved
    (fp)0,
//;0x0178  Reserved
    (fp)0,
//;0x017C  Reserved
    (fp)0,
//;0x0180  WDT_WOVI
    (fp)INT_Excep_WDT_WOVI,
//;0x0184  Reserved
    (fp)0,
//;0x0188  AD0_ADI0
    (fp)INT_Excep_AD0_ADI0,
//;0x018C  AD1_ADI1
    (fp)INT_Excep_AD1_ADI1,
//;0x0190  AD2_ADI2
    (fp)INT_Excep_AD2_ADI2,
//;0x0194  AD3_ADI3
    (fp)INT_Excep_AD3_ADI3,
//;0x0198  Reserved
    (fp)0,
//;0x019C  Reserved
    (fp)0,
//;0x01A0  TPU0_TGI0A
	(fp)INT_Excep_TPU0_TGI0A,
//;0x01A4  TPU0_TGI0B
    (fp)INT_Excep_TPU0_TGI0B,
//;0x01A8  TPU0_TGI0C
    (fp)INT_Excep_TPU0_TGI0C,
//;0x01AC  TPU0_TGI0D
    (fp)INT_Excep_TPU0_TGI0D,
//;0x01B0  TPU0_TCI0V
    (fp)INT_Excep_TPU0_TCI0V,
//;0x01B4  Reserved
    (fp)0,
//;0x01B8  Reserved
    (fp)0,
//;0x01BC  TPU1_TGI1A
	(fp)INT_Excep_TPU1_TGI1A,
//;0x01C0  TPU1_TGI1B
    (fp)INT_Excep_TPU1_TGI1B,
//;0x01C4  Reserved
    (fp)0,
//;0x01C8  Reserved
    (fp)0,
//;0x01CC  TPU1_TCI1V
    (fp)INT_Excep_TPU1_TCI1V,
//;0x01D0  TPU1_TCI1U
    (fp)INT_Excep_TPU1_TCI1U,
//;0x01D4  TPU2_TGI2A
	(fp)INT_Excep_TPU2_TGI2A,
//;0x01D8  TPU2_TGI2B
    (fp)INT_Excep_TPU2_TGI2B,
//;0x01DC  Reserved
    (fp)0,
//;0x01E0  TPU2_TCI2V
    (fp)INT_Excep_TPU2_TCI2V,
//;0x01E4  TPU2_TCI2U
    (fp)INT_Excep_TPU2_TCI2U,
//;0x01E8  TPU3_TGI3A
    (fp)INT_Excep_TPU3_TGI3A,
//;0x01EC  TPU3_TGI3B
    (fp)INT_Excep_TPU3_TGI3B,
//;0x01F0  TPU3_TGI3C
    (fp)INT_Excep_TPU3_TGI3C,
//;0x01F4  TPU3_TGI3D
    (fp)INT_Excep_TPU3_TGI3D,
//;0x01F8  TPU3_TCI3V
    (fp)INT_Excep_TPU3_TCI3V,
//;0x01FC  TPU4_TGI4A
    (fp)INT_Excep_TPU4_TGI4A,
//;0x0200  TPU4_TGI4B
    (fp)INT_Excep_TPU4_TGI4B,
//;0x0204  Reserved
    (fp)0,
//;0x0208  Reserved
    (fp)0,
//;0x020C TPU4_TCI4V
    (fp)INT_Excep_TPU4_TCI4V,
//;0x0210 TPU4_TCI4U
    (fp)INT_Excep_TPU4_TCI4U,
//;0x0214  TPU5_TGI5A
    (fp)INT_Excep_TPU5_TGI5A,
//;0x0218  TPU5_TGI5B
    (fp)INT_Excep_TPU5_TGI5B,
//;0x021C  Reserved
    (fp)0,
//;0x0220  TPU5_TCI5V
    (fp)INT_Excep_TPU5_TCI5V,
//;0x0224  TPU5_TCI5U
    (fp)INT_Excep_TPU5_TCI5U,
//;0x0228  TPU6_TGI6A
    (fp)INT_Excep_TPU6_TGI6A,
//;0x022C  TPU6_TGI6B
    (fp)INT_Excep_TPU6_TGI6B,
//;0x0230  TPU6_TGI6C
    (fp)INT_Excep_TPU6_TGI6C,
//;0x0234  TPU6_TGI6D
    (fp)INT_Excep_TPU6_TGI6D,
//;0x0238  TPU6_TCI6V
    (fp)INT_Excep_TPU6_TCI6V,
//;0x023C  Reserved
    (fp)0,
//;0x0240  Reserved
    (fp)0,
//;0x0244  TPU7_TGI7A
    (fp)INT_Excep_TPU7_TGI7A,
//;0x0248  TPU7_TGI7B
    (fp)INT_Excep_TPU7_TGI7B,
//;0x024C  Reserved
    (fp)0,
//;0x0250  Reserved
    (fp)0,
//;0x0254  TPU7_TCI7V
    (fp)INT_Excep_TPU7_TCI7V,
//;0x0258  TPU7_TCI7U
    (fp)INT_Excep_TPU7_TCI7U,
//;0x025C  TPU8_TGI8A
    (fp)INT_Excep_TPU8_TGI8A,
//;0x0260  TPU8_TGI8B
    (fp)INT_Excep_TPU8_TGI8B,
//;0x0264  Reserved
    (fp)0,
//;0x0268  TPU8_TCI8V
    (fp)INT_Excep_TPU8_TCI8V,
//;0x026C  TPU8_TCI8U
    (fp)INT_Excep_TPU8_TCI8U,
//;0x0270  TPU9_TGI9A
    (fp)INT_Excep_TPU9_TGI9A,
//;0x0274  TPU9_TGI9B
    (fp)INT_Excep_TPU9_TGI9B,
//;0x0278  TPU9_TGI9C
    (fp)INT_Excep_TPU9_TGI9C,
//;0x027C  TPU9_TGI9D
    (fp)INT_Excep_TPU9_TGI9D,
//;0x0280  TPU9_TCI9V
    (fp)INT_Excep_TPU9_TCI9V,
//;0x0284  TPU10_TGI10A
    (fp)INT_Excep_TPU10_TGI10A,
//;0x0288  TPU10_TGI10B
    (fp)INT_Excep_TPU10_TGI10B,
//;0x028C  Reserved
    (fp)0,
//;0x0290  Reserved
    (fp)0,
//;0x0294  TPU10_TCI10V
    (fp)INT_Excep_TPU10_TCI10V,
//;0x0298  TPU10_TCI10U
    (fp)INT_Excep_TPU10_TCI10U,
//;0x029C  TPU11_TGI11A
    (fp)INT_Excep_TPU11_TGI11A,
//;0x02A0  TPU11_TGI11B
    (fp)INT_Excep_TPU11_TGI11B,
//;0x02A4  Reserved
    (fp)0,
//;0x02A8  TPU11_TCI11V
    (fp)INT_Excep_TPU11_TCI11V,
//;0x02AC  TPU11_TCI11U
    (fp)INT_Excep_TPU11_TCI11U,
//;0x02B0  Reserved
    (fp)0,
//;0x02B4  Reserved
    (fp)0,
//;0x02B8  TMR0_CMI0A
    (fp)vT0_1_ISR_Wrapper,
//;0x02BC  TMR0_CMI0B
    (fp)INT_Excep_TMR0_CMI0B,
//;0x02C0  TMR0_OV0I
    (fp)INT_Excep_TMR0_OV0I,
//;0x02C4  TMR1_CMI1A
    (fp)INT_Excep_TMR1_CMI1A,
//;0x02C8  TMR1_CMI1B
    (fp)INT_Excep_TMR1_CMI1B,
//;0x02CC  TMR1_OV1I
    (fp)INT_Excep_TMR1_OV1I,
//;0x02D0 TMR2_CMI2A
    (fp)vT2_3_ISR_Wrapper,
//;0x02D4  TMR2_CMI2B
    (fp)INT_Excep_TMR2_CMI2B,
//;0x02D8  TMR2_OV2I
    (fp)INT_Excep_TMR2_OV2I,
//;0x02DC  TMR3_CMI3A
    (fp)INT_Excep_TMR3_CMI3A,
//;0x02E0 TMR3_CMI3B
    (fp)INT_Excep_TMR3_CMI3B,
//;0x02E4  TMR3_OV3I
    (fp)INT_Excep_TMR3_OV3I,
//;0x02E8  Reserved
    (fp)0,
//;0x02EC  Reserved
    (fp)0,
//;0x02F0  Reserved
    (fp)0,
//;0x02F4  Reserved
    (fp)0,
//;0x02F8  Reserved
    (fp)0,
//;0x02FC  Reserved
    (fp)0,
//;0x0300  Reserved
    (fp)0,
//;0x0304  Reserved
    (fp)0,
//;0x0308  Reserved
    (fp)0,
//;0x030C  Reserved
    (fp)0,
//;0x0310  Reserved
    (fp)0,
//;0x0314  Reserved
    (fp)0,
//;0x0318  DMAC_DMTEND0
    (fp)INT_Excep_DMAC_DMTEND0,
//;0x031C  DMAC_DMTEND1
    (fp)INT_Excep_DMAC_DMTEND1,
//;0x0320  DMAC_DMTEND2
    (fp)INT_Excep_DMAC_DMTEND2,
//;0x0324  DMAC_DMTEND3
    (fp)INT_Excep_DMAC_DMTEND3,
//;0x0328  Reserved
    (fp)0,
//;0x032C  Reserved
    (fp)0,
//;0x0330  Reserved
    (fp)0,
//;0x0334  Reserved
    (fp)0,
//;0x0338  Reserved
    (fp)0,
//;0x033C  Reserved
    (fp)0,
//;0x0340  Reserved
    (fp)0,
//;0x0344  Reserved
    (fp)0,
//;0x0348  Reserved
    (fp)0,
//;0x034C  Reserved
    (fp)0,
//;0x0350  Reserved
    (fp)0,
//;0x0354  Reserved
    (fp)0,
//;0x0358  SCI0_ERI0
    (fp)INT_Excep_SCI0_ERI0,
//;0x035C  SCI0_RXI0
    (fp)INT_Excep_SCI0_RXI0,
//;0x0360  SCI0_TXI0
    (fp)INT_Excep_SCI0_TXI0,
//;0x0364  SCI0_TEI0
    (fp)INT_Excep_SCI0_TEI0,
//;0x0368  SCI1_ERI1
    (fp)INT_Excep_SCI1_ERI1,
//;0x036C  SCI1_RXI1
    (fp)INT_Excep_SCI1_RXI1,
//;0x0370  SCI1_TXI1
    (fp)INT_Excep_SCI1_TXI1,
//;0x0374  SCI1_TEI1
    (fp)INT_Excep_SCI1_TEI1,
//;0x0378  SCI2_ERI2
    (fp)INT_Excep_SCI2_ERI2,
//;0x037C  SCI2_RXI2
    (fp)INT_Excep_SCI2_RXI2,
//;0x0380  SCI2_TXI2
    (fp)INT_Excep_SCI2_TXI2,
//;0x0384  SCI2_TEI2
    (fp)INT_Excep_SCI2_TEI2,
//;0x0388  SCI3_ERI3
    (fp)INT_Excep_SCI3_ERI3,
//;0x038C  SCI3_RXI3
    (fp)INT_Excep_SCI3_RXI3,
//;0x0390  SCI3_TXI3
    (fp)INT_Excep_SCI3_TXI3,
//;0x0394  SCI3_TEI3
    (fp)INT_Excep_SCI3_TEI3,
//;0x0398  SCI4_ERI4
    (fp)INT_Excep_SCI4_ERI4,
//;0x039C  SCI4_RXI4
    (fp)INT_Excep_SCI4_RXI4,
//;0x03A0  SCI4_TXI4
    (fp)INT_Excep_SCI4_TXI4,
//;0x03A4  SCI4_TEI4
    (fp)INT_Excep_SCI4_TEI4,
//;0x03A8  SCI5_ERI5
    (fp)INT_Excep_SCI5_ERI5,
//;0x03AC  SCI5_RXI5
    (fp)INT_Excep_SCI5_RXI5,
//;0x03B0  SCI5_TXI5
    (fp)INT_Excep_SCI5_TXI5,
//;0x03B4  SCI5_TEI5
    (fp)INT_Excep_SCI5_TEI5,
//;0x03B8  SCI6_ERI6
    (fp)INT_Excep_SCI6_ERI6,
//;0x03BC  SCI6_RXI6
    (fp)INT_Excep_SCI6_RXI6,
//;0x03C0  SCI6_TXI6
    (fp)INT_Excep_SCI6_TXI6,
//;0x03C4  SCI6_TEI6
    (fp)INT_Excep_SCI6_TEI6,
//;0x03C8  Reserved
    (fp)0,
//;0x03CC  Reserved
    (fp)0,
//;0x03D0  Reserved
    (fp)0,
//;0x03D4  Reserved
    (fp)0,
//;0x03D8  RIIC0_EEI0
    (fp)INT_Excep_RIIC0_EEI0,
//;0x03DC  RIIC0_RXI0
    (fp)INT_Excep_RIIC0_RXI0,
//;0x03E0  RIIC0_TXI0
    (fp)INT_Excep_RIIC0_TXI0,
//;0x03E4  RIIC0_TEI0
    (fp)INT_Excep_RIIC0_TEI0,
//;0x03E8  RIIC1_EEI1
    (fp)INT_Excep_RIIC1_EEI1,
//;0x03EC  RIIC1_RXI1
    (fp)INT_Excep_RIIC1_RXI1,
//;0x03F0  RIIC1_TXI1
    (fp)INT_Excep_RIIC1_TXI1,
//;0x03F4  RIIC1_TEI1
    (fp)INT_Excep_RIIC1_TEI1,
//;0x03F8  Reserved
    (fp)0,
//;0x03FC  Reserved
    (fp)0,
};
