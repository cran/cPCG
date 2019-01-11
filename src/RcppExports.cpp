// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// icc
arma::mat icc(arma::mat A);
RcppExport SEXP _cPCG_icc(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(icc(A));
    return rcpp_result_gen;
END_RCPP
}
// cgsolve
arma::vec cgsolve(arma::mat A, arma::vec b, float tol, int maxIter);
RcppExport SEXP _cPCG_cgsolve(SEXP ASEXP, SEXP bSEXP, SEXP tolSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< float >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(cgsolve(A, b, tol, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// pcgsolve
arma::vec pcgsolve(arma::mat A, arma::vec b, std::string preconditioner, float tol, int maxIter);
RcppExport SEXP _cPCG_pcgsolve(SEXP ASEXP, SEXP bSEXP, SEXP preconditionerSEXP, SEXP tolSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< std::string >::type preconditioner(preconditionerSEXP);
    Rcpp::traits::input_parameter< float >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(pcgsolve(A, b, preconditioner, tol, maxIter));
    return rcpp_result_gen;
END_RCPP
}
