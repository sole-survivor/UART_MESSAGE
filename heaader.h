typedef unsigned int u32;
typedef unsigned char u8;
typedef signed int s32;
typedef signed char s8;

extern void uart0_init(unsigned int);
extern void uart0_tx (unsigned char);
extern void uart0_tx_string (s8*);
extern u8 uart0_rx (void);
extern void uart0_ascii (u8);
extern void uart0_hex (u8);
extern void uart0_tx_int (s32);
extern void uart0_tx_float (float);
extern void uart0_rx_string (s8*,s32);

