/*
 *  signals.h
 *  Test
 *
 *  Created by Hamilton Kibbe on 4/28/13.
 *  Copyright 2013 HTK Audio. All rights reserved.
 *
 */

#ifndef SIGNALS_H
#define SIGNALS_H

#ifdef __cplusplus
extern "C" {
#endif


static const float MatlabSignal[] = 
{
    0.0, 0.187381312251091, 0.36812454462051392, 0.53582680225372314,
    0.68454712629318237, 0.80901700258255005, 0.9048270583152771,
    0.96858316659927368, 0.99802672863006592, 0.99211472272872925,
    0.95105654001235962, 0.87630665302276611, 0.77051323652267456,
    0.63742399215698242, 0.48175367712974548, 0.30901700258255005,
    0.12533323466777802, -0.062790520489215851, -0.24868988990783691,
    -0.42577928304672241, -0.58778524398803711, -0.72896862030029297,
    -0.84432792663574219, -0.92977648973464966, -0.98228722810745239,
    -1.0, -0.98228722810745239, -0.92977648973464966, -0.84432792663574219,
    -0.72896862030029297, -0.58778524398803711, -0.42577928304672241,
    -0.24868988990783691, -0.062790520489215851, 0.12533323466777802,
    0.30901700258255005, 0.48175367712974548, 0.63742399215698242,
    0.77051323652267456, 0.87630665302276611, 0.95105654001235962,
    0.99211472272872925, 0.99802672863006592, 0.96858316659927368,
    0.9048270583152771, 0.80901700258255005, 0.68454712629318237,
    0.53582680225372314, 0.36812454462051392, 0.187381312251091,
    3.6739402930577075e-16, -0.187381312251091, -0.36812454462051392,
    -0.53582680225372314, -0.68454712629318237, -0.80901700258255005,
    -0.9048270583152771, -0.96858316659927368, -0.99802672863006592,
    -0.99211472272872925, -0.95105654001235962, -0.87630665302276611,
    -0.77051323652267456, -0.63742399215698242, -0.48175367712974548,
    -0.30901700258255005, -0.12533323466777802, 0.062790520489215851,
    0.24868988990783691, 0.42577928304672241, 0.58778524398803711,
    0.72896862030029297, 0.84432792663574219, 0.92977648973464966,
    0.98228722810745239, 1.0, 0.98228722810745239, 0.92977648973464966,
    0.84432792663574219, 0.72896862030029297, 0.58778524398803711,
    0.42577928304672241, 0.24868988990783691, 0.062790520489215851,
    -0.12533323466777802, -0.30901700258255005, -0.48175367712974548,
    -0.63742399215698242, -0.77051323652267456, -0.87630665302276611,
    -0.95105654001235962, -0.99211472272872925, -0.99802672863006592,
    -0.96858316659927368, -0.9048270583152771, -0.80901700258255005,
    -0.68454712629318237, -0.53582680225372314, -0.36812454462051392,
    -0.187381312251091,
};

static const double MatlabSignalD[] =
{
    0.0, 0.187381312251091, 0.36812454462051392, 0.53582680225372314,
    0.68454712629318237, 0.80901700258255005, 0.9048270583152771,
    0.96858316659927368, 0.99802672863006592, 0.99211472272872925,
    0.95105654001235962, 0.87630665302276611, 0.77051323652267456,
    0.63742399215698242, 0.48175367712974548, 0.30901700258255005,
    0.12533323466777802, -0.062790520489215851, -0.24868988990783691,
    -0.42577928304672241, -0.58778524398803711, -0.72896862030029297,
    -0.84432792663574219, -0.92977648973464966, -0.98228722810745239,
    -1.0, -0.98228722810745239, -0.92977648973464966, -0.84432792663574219,
    -0.72896862030029297, -0.58778524398803711, -0.42577928304672241,
    -0.24868988990783691, -0.062790520489215851, 0.12533323466777802,
    0.30901700258255005, 0.48175367712974548, 0.63742399215698242,
    0.77051323652267456, 0.87630665302276611, 0.95105654001235962,
    0.99211472272872925, 0.99802672863006592, 0.96858316659927368,
    0.9048270583152771, 0.80901700258255005, 0.68454712629318237,
    0.53582680225372314, 0.36812454462051392, 0.187381312251091,
    3.6739402930577075e-16, -0.187381312251091, -0.36812454462051392,
    -0.53582680225372314, -0.68454712629318237, -0.80901700258255005,
    -0.9048270583152771, -0.96858316659927368, -0.99802672863006592,
    -0.99211472272872925, -0.95105654001235962, -0.87630665302276611,
    -0.77051323652267456, -0.63742399215698242, -0.48175367712974548,
    -0.30901700258255005, -0.12533323466777802, 0.062790520489215851,
    0.24868988990783691, 0.42577928304672241, 0.58778524398803711,
    0.72896862030029297, 0.84432792663574219, 0.92977648973464966,
    0.98228722810745239, 1.0, 0.98228722810745239, 0.92977648973464966,
    0.84432792663574219, 0.72896862030029297, 0.58778524398803711,
    0.42577928304672241, 0.24868988990783691, 0.062790520489215851,
    -0.12533323466777802, -0.30901700258255005, -0.48175367712974548,
    -0.63742399215698242, -0.77051323652267456, -0.87630665302276611,
    -0.95105654001235962, -0.99211472272872925, -0.99802672863006592,
    -0.96858316659927368, -0.9048270583152771, -0.80901700258255005,
    -0.68454712629318237, -0.53582680225372314, -0.36812454462051392,
    -0.187381312251091,
};

static const float zeros[10] =
{
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
};

static const double zerosD[10] =
{
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
};

static const float ones[10] =
{
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0
};

static const double onesD[10] =
{
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0
};

static const float ramp[10] =
{
    -1.0, -0.8, -0.6, -0.4, -0.2, 0.0, 0.2, 0.4, 0.6, 0.8
};

static const double rampD[10] =
{
    -1.0, -0.8, -0.6, -0.4, -0.2, 0.0, 0.2, 0.4, 0.6, 0.8
};

#ifdef __cplusplus
}
#endif

#endif // SIGNALS_H