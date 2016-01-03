// Copyright (c) 2014 Osamu Hirose
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

typedef unsigned char byte;

typedef struct _sortbox{
  double val;
  int    idx;
} sortbox;

void prepare_sortbox      (sortbox *sb, const double * array, const int size);
int  cmp_sortbox          (const void *a, const void *b);

char    ** calloc2c (const int uw, const int ulen);
double  ** calloc2d (const int M, const int N);
int     ** calloc2i (const int M, const int N);
double *** calloc3d (const int L, const int M, const int N);
short   ** calloc2s (const int M, const int N);
double     dist2    (const double x1[3], const double x2[3], const int D);

double  ** read2d   (int *nr, int *nc, char *mode, const char *file);
void       write2d  (const char *file, const double **X, const int nr, const int nc);

void printInfo(const char mode, const int loop, const double Np, const double sigma, const double noise, const double conv);

#define SQ(x) ((x)*(x))
