// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ReadVTK
void ReadVTK(const std::string& inputTracts, std::string& outputFile);
RcppExport SEXP _fiberIO_ReadVTK(SEXP inputTractsSEXP, SEXP outputFileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type inputTracts(inputTractsSEXP);
    Rcpp::traits::input_parameter< std::string& >::type outputFile(outputFileSEXP);
    ReadVTK(inputTracts, outputFile);
    return R_NilValue;
END_RCPP
}
// ReadVTP
void ReadVTP(const std::string& inputTracts, std::string& outputFile);
RcppExport SEXP _fiberIO_ReadVTP(SEXP inputTractsSEXP, SEXP outputFileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type inputTracts(inputTractsSEXP);
    Rcpp::traits::input_parameter< std::string& >::type outputFile(outputFileSEXP);
    ReadVTP(inputTracts, outputFile);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fiberIO_ReadVTK", (DL_FUNC) &_fiberIO_ReadVTK, 2},
    {"_fiberIO_ReadVTP", (DL_FUNC) &_fiberIO_ReadVTP, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_fiberIO(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
