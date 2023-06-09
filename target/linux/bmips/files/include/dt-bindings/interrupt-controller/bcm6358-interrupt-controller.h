// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef __DT_BINDINGS_INTERRUPT_CONTROLLER_BCM6358_H
#define __DT_BINDINGS_INTERRUPT_CONTROLLER_BCM6358_H

#define BCM6358_IRQ_TIMER		0
#define BCM6358_IRQ_SPI			1
#define BCM6358_IRQ_UART0		2
#define BCM6358_IRQ_UART1		3
#define BCM6358_IRQ_OHCI		5
#define BCM6358_IRQ_EMAC1		6
#define BCM6358_IRQ_USBS		7
#define BCM6358_IRQ_EMAC0		8
#define BCM6358_IRQ_EPHY		9
#define BCM6358_IRQ_EHCI		10
#define BCM6358_IRQ_USB_CTL_RX_DMA	11
#define BCM6358_IRQ_USB_CTL_TX_DMA	12
#define BCM6358_IRQ_USB_BULK_RX_DMA	13
#define BCM6358_IRQ_USB_BULK_TX_DMA	14
#define BCM6358_IRQ_EMAC0_RX_DMA	15
#define BCM6358_IRQ_EMAC0_TX_DMA	16
#define BCM6358_IRQ_EMAC1_RX_DMA	17
#define BCM6358_IRQ_EMAC1_TX_DMA	18
#define BCM6358_IRQ_ATM		        19
#define BCM6358_IRQ_EXT4		20
#define BCM6358_IRQ_EXT5		21
#define BCM6358_IRQ_PCM			22
#define BCM6358_IRQ_PCM_RX_DMA		23
#define BCM6358_IRQ_PCM_TX_DMA		24
#define BCM6358_IRQ_EXT0		25
#define BCM6358_IRQ_EXT1		26
#define BCM6358_IRQ_EXT2		27
#define BCM6358_IRQ_EXT3		28
#define BCM6358_IRQ_ADSL		29
#define BCM6358_IRQ_DG			30
#define BCM6358_IRQ_MPI			31

#define BCM6358_EXTIRQ0_0		0 /* GPIO 34 */
#define BCM6358_EXTIRQ0_1		1 /* GPIO 35 */
#define BCM6358_EXTIRQ0_2		2 /* GPIO 36 */
#define BCM6358_EXTIRQ0_3		3 /* GPIO 37 */
#define BCM6358_EXTIRQ1_4		0 /* GPIO 32 */
#define BCM6358_EXTIRQ1_5		1 /* GPIO 33 */

#endif /* __DT_BINDINGS_INTERRUPT_CONTROLLER_BCM6358_H */
