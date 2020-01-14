

#ifndef MAX11618_25_H_
#define MAX11618_25_H_

// Conversion register
#define CONVERSION_REG_SELECTOR      0x80 // 0b1XXXXXXX

#define INPUT_CHANNEL_SELECT_MASK    0x78 // 0bXCCCCXXX
#define INPUT_CHANNEL_SELECT_SHIFT   (3)

#define SCAN_MODE_SELECT_MASK        0x06 // 0bXXXXXSSX
#define SCAN_MODE_SELECT_SHIFT       (1)

// Setup register
#define SETUP_REG_SELECTOR           0x40 // 0b01XXXXXX

#define CLOCK_MODE_SELECT_MASK       0x30 // 0bXXCCXXXX
#define CLOCK_MODE_SELECT_SHIFT      (4)

#define REF_MODE_SELECT_MASK         0x0C // 0bXXXXRRXX
#define REF_MODE_SELECT_SHIFT        (2)

// Averaging regiser
#define AVERAGING_REG_SELECTOR       0x20 // 0b001XXXXX

#define AVERAGING_ON_MASK            0x10 // 0bXXXAXXXX
#define AVERAGING_ON_SHIFT           (4)

#define NUMBER_OF_CONVERSIONS_MASK   0x0C // 0bXXXXNNXX    
#define NUMBER_OF_CONVSERSION_SHIFT  (2)    

#define SINGLE_CHAN_SCAN_CNT_MASK    0x03 // 0bXXXXXXSS
#define SINGLE_CHAN_SCAN_CNT_SHIFT   (0)

// Reset register
#define RESET_REG_SELECTOR           0x10 // 0b0001XXXX

#define RESETN_BIT_MASK              0x08 // 0bXXXXRXXX
#define RESETN_BIT_SHIFT             (3)



enum{
    AIN0 = 0,
    AIN1 = 1,
    AIN2 = 2,
    AIN3 = 3,
    AIN4 = 4,
    AIN5 = 5,
    AIN6 = 6,
    AIN7 = 7,
    AIN8 = 8,
    AIN9 = 9,
    AIN10 = 10,
    AIN11 = 11,
    AIN12 = 12,
    AIN13 = 13,
    AIN14 = 14,
    AIN15 = 15
} input_channel_select_t;

enum{
    // channel N is selected by the INPUT_CHANNEL_SELECT bits
    SCAN_CHANNELS_FROM_0_TO_N = 0,
    SCAN_CHANNELS_FROM_N_TO_HIGHEST = 1,
    SCAN_CHANNEL_N_REPEATEDLY = 2,
    SCAN_CHANNEL_N_ONCE = 3,
} scan_mode_select_t;   

enum{
    CLOCK_MODE_00 = 0, // Internally Timed Acquisitions and Conversions Using CNVST
    CLOCK_MODE_01 = 1, // Externally Timed Acquisitions and Internally Timed Conversions with CNVST
    CLOCK_MODE_10 = 2, // Internally Timed Acquisitions and Conversions Using the Serial Interface
    CLOCK_MODE_11 = 3, // Externally Clocked Acquisitions and Conversions Using the Serial Interface
} clock_mode_select_t;

enum{
    VOLTAGE_REF_INTERNAL_AND_AUTOSHUTDOWN_ENABLED = 0,
    VOLTAGE_REF_EXTERNAL = 1,
    VOLTAGE_REF_INTERNAL_AND_AUTOSHUTDOWN_DISABLED = 2,
} ref_mode_select_t;

#endif //MAX11618_25_H_