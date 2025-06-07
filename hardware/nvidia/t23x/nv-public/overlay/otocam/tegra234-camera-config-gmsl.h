#define I2C_BUS	i2c@3180000
//#define I2C_BUS	cam_i2cmux
#if 1
#define I2C_MUX	tca9543@72
#define I2C_MUX_TCA9543
#define I2C_BUS_CAM0	/bus@0/I2C_BUS/I2C_MUX/i2c@0
#define I2C_BUS_CAM1	/bus@0/I2C_BUS/I2C_MUX/i2c@0
#define I2C_BUS_CAM2	/bus@0/I2C_BUS/I2C_MUX/i2c@1
#define I2C_BUS_CAM3	/bus@0/I2C_BUS/I2C_MUX/i2c@1
#define I2C_BUS_CAM4	/bus@0/I2C_BUS/I2C_MUX/i2c@2
#define I2C_BUS_CAM5	/bus@0/I2C_BUS/I2C_MUX/i2c@2
#define I2C_BUS_CAM6	/bus@0/I2C_BUS/I2C_MUX/i2c@3
#define I2C_BUS_CAM7	/bus@0/I2C_BUS/I2C_MUX/i2c@3
#else
#define I2C_BUS_CAM0	/bus@0/I2C_BUS
#define I2C_BUS_CAM1	/bus@0/I2C_BUS
#define I2C_BUS_CAM2	/bus@0/I2C_BUS
#define I2C_BUS_CAM3	/bus@0/I2C_BUS
#define I2C_BUS_CAM4	/bus@0/I2C_BUS
#define I2C_BUS_CAM5	/bus@0/I2C_BUS
#define I2C_BUS_CAM6	/bus@0/I2C_BUS
#define I2C_BUS_CAM7	/bus@0/I2C_BUS
#endif

#define CSI_NUM_CHANS	8
#define CSI_NUM_PORTS	4
#define CSI_PORT_LANES	4
#define CSI_SERDES	2	// Ser:Des
#define CSI_SERDES_GMSL

#define CAM_MODE	imx390isp
