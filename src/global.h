/* Global variable and function definitions */

#ifndef _GLOBAL_H
#define _GLOBAL_H

#include <float.h>

/* Global Constants */
#define INF DBL_MAX
#define EPS 1.0e-10
#define E 2.7182818284590452353602874713526625
#ifdef PI
#undef PI
#endif
#define PI 3.1415926535897932384626433832795029

/* Global variables that you are required to initialize */
int nreal; /* number of real variables */
int nfunc; /* number of basic functions */
long double bound; /* required for plotting the function profiles for nreal=2 */
int density; /* density of grid points for plotting for nreal=2 */

/* Global variables being used in evaluation of various functions */
/* These are initalized in file def2.c */
long double C;
long double global_bias;
long double *trans_x;
long double *basic_f;
long double *temp_x1;
long double *temp_x2;
long double *temp_x3;
long double *temp_x4;
long double *weight;
long double *sigma;
long double *lambda;
long double *bias;
long double *norm_x;
long double *norm_f;
long double **o;
long double **g;
long double ***l;

/* Auxilary function declarations */
long double maximum(long double, long double);
long double minimum(long double, long double);
long double modulus(long double*, int);
long double dot(long double*, long double*, int);
long double mean(long double*, int);

/* Basic funcion declarations */
long double calc_ackley(long double*);
long double calc_rastrigin(long double*);
long double calc_weierstrass(long double*);
long double calc_griewank(long double*);
long double calc_sphere(long double*);
long double calc_schwefel(long double*);
long double calc_rosenbrock(long double *x);
long double nc_schaffer(long double, long double);
long double nc_rastrigin(long double*);

/* Utility function declarations */
void allocate_memory();
void initialize_f1(char *extdatadir);
void initialize_f2(char *extdatadir);
void initialize_f3(char *extdatadir);
void initialize_f4(char *extdatadir);
void initialize_f5(char *extdatadir);
void initialize_f6(char *extdatadir);
void initialize_f7(char *extdatadir);
void initialize_f8(char *extdatadir);
void initialize_f9(char *extdatadir);
void initialize_f10(char *extdatadir);
void initialize_f11(char *extdatadir);
void initialize_f12(char *extdatadir);
void initialize_f13(char *extdatadir);
void initialize_f14(char *extdatadir);
void initialize_f15(char *extdatadir);
void initialize_f16(char *extdatadir);
void initialize_f17(char *extdatadir);
void initialize_f18(char *extdatadir);
void initialize_f19(char *extdatadir);
void initialize_f20(char *extdatadir);
void initialize_f21(char *extdatadir);
void initialize_f22(char *extdatadir);
void initialize_f23(char *extdatadir);
void initialize_f24_f25(char *extdatadir);
void transform(long double*, int);
void transform_norm(int);
void calc_weight(long double*);
void free_memory();

/* Benchmark function declaration */
long double calc_benchmark_func_f1(long double *);
long double calc_benchmark_func_f2(long double *);
long double calc_benchmark_func_f3(long double *);
long double calc_benchmark_func_f4(long double *);
long double calc_benchmark_func_f5(long double *);
long double calc_benchmark_func_f6(long double *);
long double calc_benchmark_func_f7(long double *);
long double calc_benchmark_func_f8(long double *);
long double calc_benchmark_func_f9(long double *);
long double calc_benchmark_func_f10(long double *);
long double calc_benchmark_func_f11(long double *);
long double calc_benchmark_func_f12(long double *);
long double calc_benchmark_func_f13(long double *);
long double calc_benchmark_func_f14(long double *);
long double calc_benchmark_func_f15(long double *);
long double calc_benchmark_func_f16(long double *);
long double calc_benchmark_func_f17(long double *);
long double calc_benchmark_func_f18(long double *);
long double calc_benchmark_func_f19(long double *);
long double calc_benchmark_func_f20(long double *);
long double calc_benchmark_func_f21(long double *);
long double calc_benchmark_func_f22(long double *);
long double calc_benchmark_func_f23(long double *);
long double calc_benchmark_func_f24_f25(long double *);
void calc_benchmark_norm_f15();
void calc_benchmark_norm_f16();
void calc_benchmark_norm_f17();
void calc_benchmark_norm_f18();
void calc_benchmark_norm_f19();
void calc_benchmark_norm_f20();
void calc_benchmark_norm_f21();
void calc_benchmark_norm_f22();
void calc_benchmark_norm_f23();
void calc_benchmark_norm_f24_f25();

#endif
