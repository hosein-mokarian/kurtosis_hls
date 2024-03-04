/*** Includes ******************************************************************
*/
#include <ap_int.h>
#include <hls_math.h>
#include "kurtosis.h"
/*******************************************************************************
*/

/*** defines *******************************************************************
*/
/*******************************************************************************
*/

/*** typedef *******************************************************************
*/
/*******************************************************************************
*/

/*** const *********************************************************************
*/
/*******************************************************************************
*/

/*** Private Function Definition ***********************************************
*/
//KURTOSIS_FIX_t KURTOSIS_CalculateMeanValue(KURTOSIS_FIX_t _arr[N]);
//KURTOSIS_FIX_t KURTOSIS_CalculateMeanValue(KURTOSIS_FIX_t _arr[N]);
/*******************************************************************************
*/

/*** Global var ****************************************************************
*/
/*******************************************************************************
*/

/*** extern from other sources *************************************************
*/
/*******************************************************************************
*/

/*** Function Declaration ******************************************************
*/

void mean(float arr[N], float &mean_val) {
//	float mean_val = 0;
	//---------------------------------
    float sum = 0;
    //---
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    //---
    mean_val = sum / N;
    //---------------------------------
//    return mean_val;
}

void standard_deviation(float arr[N], float mean_val, float &stddev) {
//	float stddev = 0;
	//---------------------------------
    float sum = 0;
    //---
    for (int i = 0; i < N; i++) {
        sum += (arr[i] - mean_val) * (arr[i] - mean_val);
    }
    //---
    stddev = sqrt(sum / N);
    //---------------------------------
//    return stddev;
}

void kurtosis(float in_arr[N], float &kurtosis_val) {
	// float kurtosis_val = 0;
	//---------------------------------
	float mean_val = 0;
	float stddev = 0;
    mean(in_arr, mean_val);
    standard_deviation(in_arr, mean_val, stddev);

    float sum = 0;
    for (int i = 0; i < N; i++) {
        float deviation = (in_arr[i] - mean_val) / stddev;
        sum += deviation * deviation * deviation * deviation;
    }
    //---
    kurtosis_val = (sum / N) - 3;
    //---------------------------------
    // return kurtosis_val;
}

/*******************************************************************************
*/

/***************************** End Of File *************************************
*/
