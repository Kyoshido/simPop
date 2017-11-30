// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// updateMatC
NumericMatrix updateMatC(NumericMatrix M, NumericVector add_row, NumericVector add_col, NumericVector remove_row, NumericVector remove_col, NumericVector hhsize, NumericVector hhid);
RcppExport SEXP _simPop_updateMatC(SEXP MSEXP, SEXP add_rowSEXP, SEXP add_colSEXP, SEXP remove_rowSEXP, SEXP remove_colSEXP, SEXP hhsizeSEXP, SEXP hhidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type add_row(add_rowSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type add_col(add_colSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type remove_row(remove_rowSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type remove_col(remove_colSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type hhsize(hhsizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type hhid(hhidSEXP);
    rcpp_result_gen = Rcpp::wrap(updateMatC(M, add_row, add_col, remove_row, remove_col, hhsize, hhid));
    return rcpp_result_gen;
END_RCPP
}
// updateVecC
IntegerVector updateVecC(IntegerVector init_weight, IntegerVector add_index, IntegerVector remove_index, IntegerVector hhsize, IntegerVector hhid, int sizefactor);
RcppExport SEXP _simPop_updateVecC(SEXP init_weightSEXP, SEXP add_indexSEXP, SEXP remove_indexSEXP, SEXP hhsizeSEXP, SEXP hhidSEXP, SEXP sizefactorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type init_weight(init_weightSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type add_index(add_indexSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type remove_index(remove_indexSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type hhsize(hhsizeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type hhid(hhidSEXP);
    Rcpp::traits::input_parameter< int >::type sizefactor(sizefactorSEXP);
    rcpp_result_gen = Rcpp::wrap(updateVecC(init_weight, add_index, remove_index, hhsize, hhid, sizefactor));
    return rcpp_result_gen;
END_RCPP
}
// sumVec
IntegerVector sumVec(IntegerVector init_weight, int sizefactor);
RcppExport SEXP _simPop_sumVec(SEXP init_weightSEXP, SEXP sizefactorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type init_weight(init_weightSEXP);
    Rcpp::traits::input_parameter< int >::type sizefactor(sizefactorSEXP);
    rcpp_result_gen = Rcpp::wrap(sumVec(init_weight, sizefactor));
    return rcpp_result_gen;
END_RCPP
}
// select_equal
List select_equal(IntegerVector x, int val1, int val2);
RcppExport SEXP _simPop_select_equal(SEXP xSEXP, SEXP val1SEXP, SEXP val2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type val1(val1SEXP);
    Rcpp::traits::input_parameter< int >::type val2(val2SEXP);
    rcpp_result_gen = Rcpp::wrap(select_equal(x, val1, val2));
    return rcpp_result_gen;
END_RCPP
}
// tableC
std::map<int,int> tableC(IntegerVector x);
RcppExport SEXP _simPop_tableC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tableC(x));
    return rcpp_result_gen;
END_RCPP
}
// csample_num
IntegerVector csample_num(IntegerVector x, int size, bool replace, NumericVector prob);
RcppExport SEXP _simPop_csample_num(SEXP xSEXP, SEXP sizeSEXP, SEXP replaceSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(csample_num(x, size, replace, prob));
    return rcpp_result_gen;
END_RCPP
}
// sample_group
IntegerVector sample_group(IntegerVector x, IntegerVector group_x, IntegerVector group, IntegerVector group_num, bool replace);
RcppExport SEXP _simPop_sample_group(SEXP xSEXP, SEXP group_xSEXP, SEXP groupSEXP, SEXP group_numSEXP, SEXP replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type group_x(group_xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type group(groupSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type group_num(group_numSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_group(x, group_x, group, group_num, replace));
    return rcpp_result_gen;
END_RCPP
}
