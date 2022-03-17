// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_cov1_mxPBF_single
arma::mat cpp_cov1_mxPBF_single(arma::mat X, double a0, double b0, double gamma);
RcppExport SEXP _SHT_cpp_cov1_mxPBF_single(SEXP XSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cov1_mxPBF_single(X, a0, b0, gamma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_cov1_mxPBF_multiple
arma::mat cpp_cov1_mxPBF_multiple(arma::mat X, double a0, double b0, double gamma, int nCores);
RcppExport SEXP _SHT_cpp_cov1_mxPBF_multiple(SEXP XSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP gammaSEXP, SEXP nCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type nCores(nCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cov1_mxPBF_multiple(X, a0, b0, gamma, nCores));
    return rcpp_result_gen;
END_RCPP
}
// cov2_2012LC_A
double cov2_2012LC_A(arma::mat& X);
RcppExport SEXP _SHT_cov2_2012LC_A(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cov2_2012LC_A(X));
    return rcpp_result_gen;
END_RCPP
}
// cov2_2012LC_C
double cov2_2012LC_C(arma::mat& X, arma::mat& Y);
RcppExport SEXP _SHT_cov2_2012LC_C(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(cov2_2012LC_C(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// cov2_2012LC_A_no_bias
double cov2_2012LC_A_no_bias(arma::mat& X);
RcppExport SEXP _SHT_cov2_2012LC_A_no_bias(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cov2_2012LC_A_no_bias(X));
    return rcpp_result_gen;
END_RCPP
}
// cov2_2012LC_C_no_bias
double cov2_2012LC_C_no_bias(arma::mat& X, arma::mat& Y);
RcppExport SEXP _SHT_cov2_2012LC_C_no_bias(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(cov2_2012LC_C_no_bias(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_cov2_mxPBF_single
arma::mat cpp_cov2_mxPBF_single(arma::mat X, arma::mat Y, double a0, double b0, double gamma);
RcppExport SEXP _SHT_cpp_cov2_mxPBF_single(SEXP XSEXP, SEXP YSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cov2_mxPBF_single(X, Y, a0, b0, gamma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_cov2_mxPBF_multiple
arma::mat cpp_cov2_mxPBF_multiple(arma::mat X, arma::mat Y, double a0, double b0, double gamma, int nCores);
RcppExport SEXP _SHT_cpp_cov2_mxPBF_multiple(SEXP XSEXP, SEXP YSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP gammaSEXP, SEXP nCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type nCores(nCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cov2_mxPBF_multiple(X, Y, a0, b0, gamma, nCores));
    return rcpp_result_gen;
END_RCPP
}
// energy_distance
double energy_distance(arma::mat Xi, arma::mat Xj, double alpha, int nCores);
RcppExport SEXP _SHT_energy_distance(SEXP XiSEXP, SEXP XjSEXP, SEXP alphaSEXP, SEXP nCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xj(XjSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type nCores(nCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(energy_distance(Xi, Xj, alpha, nCores));
    return rcpp_result_gen;
END_RCPP
}
// cpp_eqdist_2014BG_statistic
double cpp_eqdist_2014BG_statistic(arma::mat DX, arma::mat DY, arma::mat DXY);
RcppExport SEXP _SHT_cpp_eqdist_2014BG_statistic(SEXP DXSEXP, SEXP DYSEXP, SEXP DXYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type DX(DXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type DY(DYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type DXY(DXYSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_eqdist_2014BG_statistic(DX, DY, DXY));
    return rcpp_result_gen;
END_RCPP
}
// cpp_eqdist_2014BG_computeS
double cpp_eqdist_2014BG_computeS(arma::mat D);
RcppExport SEXP _SHT_cpp_eqdist_2014BG_computeS(SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_eqdist_2014BG_computeS(D));
    return rcpp_result_gen;
END_RCPP
}
// adjust_clime
arma::mat adjust_clime(arma::mat omega);
RcppExport SEXP _SHT_adjust_clime(SEXP omegaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type omega(omegaSEXP);
    rcpp_result_gen = Rcpp::wrap(adjust_clime(omega));
    return rcpp_result_gen;
END_RCPP
}
// cpp_mean2_mxPBF_single
arma::vec cpp_mean2_mxPBF_single(arma::mat X, arma::mat Y, double a0, double b0, double gamma);
RcppExport SEXP _SHT_cpp_mean2_mxPBF_single(SEXP XSEXP, SEXP YSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mean2_mxPBF_single(X, Y, a0, b0, gamma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_mean2_mxPBF_multiple
arma::vec cpp_mean2_mxPBF_multiple(arma::mat X, arma::mat Y, double a0, double b0, double gamma, int nCores);
RcppExport SEXP _SHT_cpp_mean2_mxPBF_multiple(SEXP XSEXP, SEXP YSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP gammaSEXP, SEXP nCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type nCores(nCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mean2_mxPBF_multiple(X, Y, a0, b0, gamma, nCores));
    return rcpp_result_gen;
END_RCPP
}
// norm_1987JB_single
double norm_1987JB_single(arma::vec x);
RcppExport SEXP _SHT_norm_1987JB_single(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_1987JB_single(x));
    return rcpp_result_gen;
END_RCPP
}
// norm_1987JB_mcarlo
Rcpp::List norm_1987JB_mcarlo(arma::vec x, int nreps);
RcppExport SEXP _SHT_norm_1987JB_mcarlo(SEXP xSEXP, SEXP nrepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nreps(nrepsSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_1987JB_mcarlo(x, nreps));
    return rcpp_result_gen;
END_RCPP
}
// norm_2008RJB_single
double norm_2008RJB_single(arma::vec x, double C1, double C2);
RcppExport SEXP _SHT_norm_2008RJB_single(SEXP xSEXP, SEXP C1SEXP, SEXP C2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type C1(C1SEXP);
    Rcpp::traits::input_parameter< double >::type C2(C2SEXP);
    rcpp_result_gen = Rcpp::wrap(norm_2008RJB_single(x, C1, C2));
    return rcpp_result_gen;
END_RCPP
}
// norm_2008RJB_mcarlo
Rcpp::List norm_2008RJB_mcarlo(arma::vec x, int nreps, double C1, double C2);
RcppExport SEXP _SHT_norm_2008RJB_mcarlo(SEXP xSEXP, SEXP nrepsSEXP, SEXP C1SEXP, SEXP C2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nreps(nrepsSEXP);
    Rcpp::traits::input_parameter< double >::type C1(C1SEXP);
    Rcpp::traits::input_parameter< double >::type C2(C2SEXP);
    rcpp_result_gen = Rcpp::wrap(norm_2008RJB_mcarlo(x, nreps, C1, C2));
    return rcpp_result_gen;
END_RCPP
}
// norm_1996AJB_single
double norm_1996AJB_single(arma::vec x);
RcppExport SEXP _SHT_norm_1996AJB_single(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_1996AJB_single(x));
    return rcpp_result_gen;
END_RCPP
}
// norm_1996AJB_mcarlo
Rcpp::List norm_1996AJB_mcarlo(arma::vec x, int nreps);
RcppExport SEXP _SHT_norm_1996AJB_mcarlo(SEXP xSEXP, SEXP nrepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nreps(nrepsSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_1996AJB_mcarlo(x, nreps));
    return rcpp_result_gen;
END_RCPP
}
// testcpp_lgamma
arma::vec testcpp_lgamma(arma::vec x);
RcppExport SEXP _SHT_testcpp_lgamma(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(testcpp_lgamma(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SHT_cpp_cov1_mxPBF_single", (DL_FUNC) &_SHT_cpp_cov1_mxPBF_single, 4},
    {"_SHT_cpp_cov1_mxPBF_multiple", (DL_FUNC) &_SHT_cpp_cov1_mxPBF_multiple, 5},
    {"_SHT_cov2_2012LC_A", (DL_FUNC) &_SHT_cov2_2012LC_A, 1},
    {"_SHT_cov2_2012LC_C", (DL_FUNC) &_SHT_cov2_2012LC_C, 2},
    {"_SHT_cov2_2012LC_A_no_bias", (DL_FUNC) &_SHT_cov2_2012LC_A_no_bias, 1},
    {"_SHT_cov2_2012LC_C_no_bias", (DL_FUNC) &_SHT_cov2_2012LC_C_no_bias, 2},
    {"_SHT_cpp_cov2_mxPBF_single", (DL_FUNC) &_SHT_cpp_cov2_mxPBF_single, 5},
    {"_SHT_cpp_cov2_mxPBF_multiple", (DL_FUNC) &_SHT_cpp_cov2_mxPBF_multiple, 6},
    {"_SHT_energy_distance", (DL_FUNC) &_SHT_energy_distance, 4},
    {"_SHT_cpp_eqdist_2014BG_statistic", (DL_FUNC) &_SHT_cpp_eqdist_2014BG_statistic, 3},
    {"_SHT_cpp_eqdist_2014BG_computeS", (DL_FUNC) &_SHT_cpp_eqdist_2014BG_computeS, 1},
    {"_SHT_adjust_clime", (DL_FUNC) &_SHT_adjust_clime, 1},
    {"_SHT_cpp_mean2_mxPBF_single", (DL_FUNC) &_SHT_cpp_mean2_mxPBF_single, 5},
    {"_SHT_cpp_mean2_mxPBF_multiple", (DL_FUNC) &_SHT_cpp_mean2_mxPBF_multiple, 6},
    {"_SHT_norm_1987JB_single", (DL_FUNC) &_SHT_norm_1987JB_single, 1},
    {"_SHT_norm_1987JB_mcarlo", (DL_FUNC) &_SHT_norm_1987JB_mcarlo, 2},
    {"_SHT_norm_2008RJB_single", (DL_FUNC) &_SHT_norm_2008RJB_single, 3},
    {"_SHT_norm_2008RJB_mcarlo", (DL_FUNC) &_SHT_norm_2008RJB_mcarlo, 4},
    {"_SHT_norm_1996AJB_single", (DL_FUNC) &_SHT_norm_1996AJB_single, 1},
    {"_SHT_norm_1996AJB_mcarlo", (DL_FUNC) &_SHT_norm_1996AJB_mcarlo, 2},
    {"_SHT_testcpp_lgamma", (DL_FUNC) &_SHT_testcpp_lgamma, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_SHT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
