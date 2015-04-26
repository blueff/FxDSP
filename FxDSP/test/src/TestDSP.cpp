//
//  TestDSP.cpp
//  FxDSP
//
//  Created by Hamilton Kibbe on 4/8/15.
//  Copyright (c) 2015 Hamilton Kibbe. All rights reserved.
//

#include "gtest/gtest.h"
#include "Dsp.h"
#include "Signals.h"
#include "Utilities.h"


TEST(DSPSingle, TestFillBuffer)
{
    float out[10];
    FillBuffer(out, 10, 1.0);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(ones[i], out[i]);
    }
}

TEST(DSPSingle, TestClearBuffer)
{
    float out[10];
    for (unsigned i = 0; i < 10; ++i)
    {
        out[i] = i;
    }
    ClearBuffer(out, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(0.0, out[i]);
    }
}


TEST(DSPSingle, TestCopyBuffer)
{
    float out[10];
    CopyBuffer(out, ones, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(ones[i], out[i]);
    }
}

TEST(DSPSingle, TestVectorVectorAdd)
{
    float out[10];
    VectorVectorAdd(out, zeros, ramp, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(ramp[i], out[i]);
    }
}


TEST(DSPSingle, TestVectorScalarAdd)
{
    float out[10];
    VectorScalarAdd(out, zeros, 1, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(ones[i], out[i]);
    }
}


TEST(DSPSingle, TestVectorVectorMultiply)
{
    float out[10];
    VectorVectorMultiply(out, ones, ramp, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(ramp[i], out[i]);
    }
}


TEST(DSPSingle, TestVectorScalarMultiply)
{
    float out[10];
    VectorScalarMultiply(out, ramp, 2.0, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(2.0 * ramp[i], out[i]);
    }
}

TEST(DSPSingle, TestConvolve)
{
    float out[10];
    float in1[5] =
    {
        0.0, 0.5, 1.0, 0.5, 0.0
    };
    
    float in2[6] =
    {
        0.5, 0.5, 0.5, 1.0, 1.0, 1.0
    };
    
    // >> conv([0 0.5 1 0.5 0], [0.5 0.5 0.5 1.0 1.0 1.0])
    float res[10] =
    {
        0.0, 0.25, 0.75, 1.0, 1.25, 1.75, 2.0, 1.5, 0.5, 0.0
    };
    
    Convolve(in1, 5, in2, 6, out);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_FLOAT_EQ(res[i], out[i]);
    }
}

TEST(DSPSingle, TestComplexMultiply)
{
    float re1[10] = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    float im1[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    float re2[10] = {1, 2, 4, 8, 16, -1, -2, -4, -8, -16};
    float im2[10] = {-1, -2, 4, 8, 16, 1, 2, -4, -8, -16};
    float result_re[10];
    float result_im[10];
    float expected_re[10] = {2., 8., 0., 0., 0., 0., 0., 24., 64., 160.};
    float expected_im[10] = {0., 0., 24., 64., 160., -2., -8., 0., 0., 0.};
    ComplexMultiply(result_re, result_im, re1, im1, re2, im2, 10);
    for(unsigned i = 0; i < 10; ++i)
    {
        //printf("GOT %f + j%f\n", result_re[i], result_im[i]);
        ASSERT_FLOAT_EQ(expected_re[i], result_re[i]);
        ASSERT_FLOAT_EQ(expected_im[i], result_im[i]);
    }
    
}


#pragma mark -
#pragma mark Double Precision Tests

TEST(DSPDouble, TestFillBuffer)
{
    double out[10];
    FillBufferD(out, 10, 1.0);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(onesD[i], out[i]);
    }
}

TEST(DSPDouble, TestClearBuffer)
{
    double out[10];
    for (unsigned i = 0; i < 10; ++i)
    {
        out[i] = i;
    }
    ClearBufferD(out, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(0.0, out[i]);
    }
}


TEST(DSPDouble, TestCopyBuffer)
{
    double out[10];
    CopyBufferD(out, onesD, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(onesD[i], out[i]);
    }
}

TEST(DSPDouble, TestVectorVectorAdd)
{
    double out[10];
    VectorVectorAddD(out, zerosD, rampD, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(rampD[i], out[i]);
    }
}


TEST(DSPDouble, TestVectorScalarAdd)
{
    double out[10];
    VectorScalarAddD(out, zerosD, 1, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(ones[i], out[i]);
    }
}


TEST(DSPDouble, TestVectorVectorMultiply)
{
    double out[10];
    VectorVectorMultiplyD(out, onesD, rampD, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(rampD[i], out[i]);
    }
}


TEST(DSPDouble, TestVectorScalarMultiply)
{
    double out[10];
    VectorScalarMultiplyD(out, rampD, 2.0, 10);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(2.0 * rampD[i], out[i]);
    }
}


TEST(DSPDouble, TestConvolve)
{
    double out[10];
    double in1[5] =
    {
        0.0, 0.5, 1.0, 0.5, 0.0
    };
    
    double in2[6] =
    {
        0.5, 0.5, 0.5, 1.0, 1.0, 1.0
    };
    
    // >> conv([0 0.5 1 0.5 0], [0.5 0.5 0.5 1.0 1.0 1.0])
    double res[10] =
    {
        0.0, 0.25, 0.75, 1.0, 1.25, 1.75, 2.0, 1.5, 0.5, 0.0
    };
    
    ConvolveD(in1, 5, in2, 6, out);
    for (unsigned i = 0; i < 10; ++i)
    {
        ASSERT_DOUBLE_EQ(res[i], out[i]);
    }
}


TEST(DSPDouble, TestComplexMultiply)
{
    double re1[10] = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    double im1[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    double re2[10] = {1, 2, 4, 8, 16, -1, -2, -4, -8, -16};
    double im2[10] = {-1, -2, 4, 8, 16, 1, 2, -4, -8, -16};
    double result_re[10];
    double result_im[10];
    double expected_re[10] = {2., 8., 0., 0., 0., 0., 0., 24., 64., 160.};
    double expected_im[10] = {0., 0., 24., 64., 160., -2., -8., 0., 0., 0.};
    ComplexMultiplyD(result_re, result_im, re1, im1, re2, im2, 10);
    for(unsigned i = 0; i < 10; ++i)
    {
       // printf("GOT %f + j%f\n", result_re[i], result_im[i]);
        ASSERT_FLOAT_EQ(expected_re[i], result_re[i]);
        ASSERT_FLOAT_EQ(expected_im[i], result_im[i]);
    }
    
}