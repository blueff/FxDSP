//
//  testWindow.h
//  Test
//
//  Created by Hamilton Kibbe on 5/14/13.
//
//

#ifndef TESTWINDOW_H
#define TESTWINDOW_H

unsigned
runWindowFunctionTests();

unsigned
testHann();

unsigned
testHamming();

unsigned
testBlackman();

unsigned
testTukey();

unsigned
testBartlett();

unsigned
testGaussian();

unsigned
testBartlettHann();

unsigned
testKaiser();

unsigned
testNuttall();

unsigned
testBlackmanHarris();

// >>hann(10, 'symmetric')
static const float matlabHann[10] =
{
    
    0,
    0.116977778440511,
    0.413175911166535,
    0.750000000000000,
    0.969846310392954,
    0.969846310392954,
    0.750000000000000,
    0.413175911166535,
    0.116977778440511,
    0
};


// >>hamming(10)
static const float matlabHamming[10] =
{
    0.0800000,
    0.1876196,
    0.4601218,
    0.7700000,
    0.9722586,
    0.9722586,
    0.7700000,
    0.4601218,
    0.1876196,
    0.0800000
};


// >>blackman(10)
static const float matlabBlackman[10] =
{
    -1.38777878e-17,
    5.08696327e-02,
    2.58000502e-01,
    6.30000000e-01,
    9.51129866e-01,
    9.51129866e-01,
    6.30000000e-01,
    2.58000502e-01,
    5.08696327e-02,
    -1.38777878e-17
};

// >>tukeywin(10)
static const float matlabTukey[10] =
{
    0,
    0.4131759,
    0.9698463,
    1.0000000,
    1.0000000,
    1.0000000,
    1.0000000,
    0.9698463,
    0.4131759,
    0
};

// >>bartlett(10)
static const float matlabBartlett[10] =
{
    0,
    0.2222222,
    0.4444444,
    0.6666667,
    0.8888889,
    0.8888889,
    0.6666667,
    0.4444444,
    0.2222222,
    0
};

// >>gausswin(10)
static const float matlabGaussian[10] =
{
    0.0439369,
    0.1510065,
    0.3811714,
    0.7066483,
    0.9621545,
    0.9621545,
    0.7066483,
    0.3811714,
    0.1510065,
    0.0439369
};


// >>barthannwin(10)
static const float matlabBartlettHann[10] =
{
    0,
    0.1422364,
    0.4206804,
    0.7300000,
    0.9504165,
    0.9504165,
    0.7300000,
    0.4206804,
    0.1422364,
    0
};

// >>kaiser(10,0.5 * pi)
static const float matlabKaiser[10] =
{
    0.58181688,
    0.73247767,
    0.8576826 ,
    0.94732134,
    0.994065,
    0.994065,
    0.94732134,
    0.8576826 ,
    0.73247767,
    0.58181688
};

// >>nutallwin(9)
static const float matlabNuttall[10] =
{
    0.0003628,
    0.0178910,
    0.1555961,
    0.5292298,
    0.9332202,
    0.9332202,
    0.5292298,
    0.1555961,
    0.0178910,
    0.0003628
};


// >>blackmanharris(9)
static const float matlabBlackmanHarris[10] =
{
    0.0000600,
    0.0150712,
    0.1470396,
    0.5205750,
    0.9316593,
    0.9316593,
    0.5205750,
    0.1470396,
    0.0150712,
    0.0000600
};
#endif
