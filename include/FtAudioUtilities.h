/** 
 * @file FtAudioUtilities.h
 * @author Hamilton Kibbe
 * @copyright 2013 Hamilton Kibbe
 */

#ifndef FTAUDIOUTILITIES_H
#define FTAUDIOUTILITIES_H

/* Scalar for converting int to float samples (1/32768.0) */
#define INT16_TO_FLOAT_SCALAR (0.000030517578125f)

/* Limit value v to the range (l, u) */
#define LIMIT(v,l,u) ((v)<(l)?(l):((v)>(u)?(u):(v)))

/* Linearly interpolate [ = a * (1 - f) + b * f] */
#define LIN_INTERP(f,a,b) ((a) + (f) * ((b) - (a)))

/* 1/ln(2) */
#define INV_LN2 (1.442695040888963f)

/* 2*pi */
#define TWO_PI (6.283185307179586f)

/* pi/2 */
#define PI_OVER_TWO (1.5707963267948966f)

/* 1/(TWO_PI) */
#define INVERSE_TWO_PI (0.159154943091895f)

/* Convert from Hz to Rad */
#define HZ_TO_RAD(f) (TWO_PI * f)
#define RAD_TO_HZ(omega) (INVERSE_TWO_PI * omega)

/* Fast exponentiation function, y = e^x */
#define f_exp(x) f_pow2(x * INV_LN2)



#ifdef __cplusplus
extern "C" {
#endif

	
	
float
f_abs(float f);
	
/**  Max of two floats
 * @details branchless max() implementation
 * @param   x first value to compare,
 * @param   a second value to compare.
 * @return  the maximum value of the two arguments.
 */
float
f_max(float x, float a);


/**  Min of two floats
 * @details branchless min() implementation
 * @param   x first value to compare,
 * @param   a second value to compare.
 * @return  the minimum value of the two arguments.
 */
float
f_min(float x, float b);


/**  Clamp values to range
 * @details branchless LIMIT() implementation
 * @param x value to clamp
 * @param a lower bound
 * @param b upper bound
 * @return  val clamped to range (a, b)
 */
float 
f_clamp(float x, float a, float b);



/** Calculate pow(2, x)
 * @details fast, branchless pow(2,x) approximation
 * @param x     power of 2 to calculate.
 * @return      2^x
 */
float
f_pow2(float x);

/** Calculate tanh_x
* @details fast tanh approximation
* @param x     input
* @return      ~tanh(x)
*/
float
f_tanh(float x);

/** Convert signed sample to float
 *
 * @details convert a signed 16 bit sample to a 32 bit float sample in the range
 * [-1.0, 1,0]
 *
 * @param sample    The sample to convert.
 * @return          The sample as a float.
 */
float 
int16ToFloat(signed short sample);


/** Convert a float sample to signed
 *
 * @details convert a 32 bit float sample in the range [-1.0, 1,0] to a signed
 * 16 bit sample.
 *
 * @param sample    The sample to convert.
 * @return          The sample as a 16-bit signed int.
 */
signed short
floatToInt16(float sample);
    
	
/** Convert a buffer of 16 bit audio to float
 * @param inBuffer  The buffer of 16-bit samples to convert
 * @param outBuffer The buffer to write the samples to.
 * @param nSamples  The number of samples to convert.
 */
void
intBufferToFloat(const signed short* inBuffer, float* outBuffer, unsigned nSamples);
    
	
/** Convert a buffer floating point samples to 16-bit
 * @param inBuffer   The buffer of floating point samples to convert
 * @param outBuffer  The buffer to write the samples to.
 * @param nSamples   The number of samples to convert.
 */
void
floatBufferToInt(const float* inBuffer, signed short* outBuffer, unsigned nSamples); 
    
	
/** Convert a ratio to dB
 * @details convert a voltage ratio to dB.
 * @param ratio     The ratio to convert.
 * @return          Ratio value in dB.  
 */
float
ratioToDb(float ratio);

	
/** Convert a value in dB to a ratio
 * @details convert a dBFS value to a voltage ratio.
 * @param dB        The value in dB to convert.
 * @return          dB value as a voltage ratio.
 */
float
dbToRatio(float dB);

#ifdef __cplusplus
}
#endif

#endif /* FTAUDIOUTILITIES_H_ */