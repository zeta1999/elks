/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * Just accept the defaults unless you know what you are doing
 */

/*
 * General setup
 */
#define CONFIG_ARCH_AUTO 1
#undef  CONFIG_XT
#undef  CONFIG_AT
#undef  CONFIG_MODULE
#undef  CONFIG_COMPAQ_FAST

/*
 * 286 protected mode support
 */
#undef  CONFIG_286PMODE

/*
 * Kernel hacking
 */
#undef  CONFIG_STRACE
#undef  CONFIG_OPT_SMALL

/*
 * Character device drivers
 */

/*
 * Select a console driver
 */
#define CONFIG_CONSOLE_DIRECT 1
#define CONFIG_DCON_VT52 1
#define CONFIG_DCON_ANSI 1
#undef  CONFIG_DCON_ANSI_PRINTK
#undef  CONFIG_BE_KEYMAP
#undef  CONFIG_FR_KEYMAP
#undef  CONFIG_UK_KEYMAP
#undef  CONFIG_ES_KEYMAP
#undef  CONFIG_DE_KEYMAP
#define CONFIG_DEFAULT_KEYMAP 1
#undef  CONFIG_CONSOLE_BIOS
#undef  CONFIG_CONSOLE_SERIAL

/*
 * Other character devices
 */
#define CONFIG_CHAR_DEV_MEM 1
#define CONFIG_CHAR_DEV_RS 1
#define CONFIG_CHAR_DEV_LP 1

/*
 * Block device drivers
 */
#define CONFIG_BLK_DEV_BIOS 1
#define CONFIG_BLK_DEV_BFD 1
#define CONFIG_BLK_DEV_BHD 1
#undef  CONFIG_BLK_DEV_FD
#undef  CONFIG_BLK_DEV_HD
#undef  CONFIG_DMA

/*
 * Additional block devices
 */
#undef  CONFIG_BLK_DEV_RAM
#undef  CONFIG_BLK_DEV_XD

/*
 * Filesystems
 */
#define CONFIG_MINIX_FS 1
#undef  CONFIG_ROMFS_FS
#undef  CONFIG_ELKSFS_FS

/*
 * General filesystem settings
 */
#undef  CONFIG_FULL_VFS
#define CONFIG_PIPE 1
#undef  CONFIG_FS_RO

/*
 * Executable file formats
 */
#define CONFIG_EXEC_MINIX 1
#undef  CONFIG_EXEC_MSDOS

/*
 * Networking
 */
#undef  CONFIG_SOCKET
