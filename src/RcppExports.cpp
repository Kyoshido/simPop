// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// calibPop_work
IntegerVector calibPop_work(IntegerMatrix inp, NumericVector totals, IntegerVector weights, List hh_info, List params);
RcppExport SEXP _simPop_calibPop_work(SEXP inpSEXP, SEXP totalsSEXP, SEXP weightsSEXP, SEXP hh_infoSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type totals(totalsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< List >::type hh_info(hh_infoSEXP);
    Rcpp::traits::input_parameter< List >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(calibPop_work(inp, totals, weights, hh_info, params));
    return rcpp_result_gen;
END_RCPP
}
// binary_representation
IntegerMatrix binary_representation(IntegerVector levels, IntegerVector values);
RcppExport SEXP _simPop_binary_representation(SEXP levelsSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type levels(levelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_representation(levels, values));
    return rcpp_result_gen;
END_RCPP
}
// ipu_work
NumericVector ipu_work(NumericMatrix inp, NumericVector con, NumericVector w, double eps, IntegerVector verbose);
RcppExport SEXP _simPop_ipu_work(SEXP inpSEXP, SEXP conSEXP, SEXP wSEXP, SEXP epsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type con(conSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(ipu_work(inp, con, w, eps, verbose));
    return rcpp_result_gen;
END_RCPP
}
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
IntegerVector updateVecC(IntegerVector& init_weight, IntegerVector& add_index, IntegerVector& remove_index, IntegerVector& hhsize, IntegerVector& hhid, int& sizefactor);
RcppExport SEXP _simPop_updateVecC(SEXP init_weightSEXP, SEXP add_indexSEXP, SEXP remove_indexSEXP, SEXP hhsizeSEXP, SEXP hhidSEXP, SEXP sizefactorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type init_weight(init_weightSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type add_index(add_indexSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type remove_index(remove_indexSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type hhsize(hhsizeSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type hhid(hhidSEXP);
    Rcpp::traits::input_parameter< int& >::type sizefactor(sizefactorSEXP);
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
// splitVector
Rcpp::List splitVector(Rcpp::IntegerVector& x);
RcppExport SEXP _simPop_splitVector(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(splitVector(x));
    return rcpp_result_gen;
END_RCPP
}
// calcCase
double calcCase(Rcpp::NumericVector& x);
RcppExport SEXP _simPop_calcCase(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calcCase(x));
    return rcpp_result_gen;
END_RCPP
}
// calcProbabilities
Rcpp::List calcProbabilities(Rcpp::IntegerMatrix& indexMat, Rcpp::NumericVector& x, Rcpp::NumericVector& Npop, Rcpp::IntegerVector& indexData, Rcpp::IntegerVector& initWeight, Rcpp::IntegerVector& indexAdd, Rcpp::IntegerVector& indexRemove);
RcppExport SEXP _simPop_calcProbabilities(SEXP indexMatSEXP, SEXP xSEXP, SEXP NpopSEXP, SEXP indexDataSEXP, SEXP initWeightSEXP, SEXP indexAddSEXP, SEXP indexRemoveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix& >::type indexMat(indexMatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type Npop(NpopSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type indexData(indexDataSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type initWeight(initWeightSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type indexAdd(indexAddSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type indexRemove(indexRemoveSEXP);
    rcpp_result_gen = Rcpp::wrap(calcProbabilities(indexMat, x, Npop, indexData, initWeight, indexAdd, indexRemove));
    return rcpp_result_gen;
END_RCPP
}
