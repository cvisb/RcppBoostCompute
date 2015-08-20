// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// compute_hello_world
void compute_hello_world();
RcppExport SEXP RcppBoostCompute_compute_hello_world() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    compute_hello_world();
    return R_NilValue;
END_RCPP
}
// getBoostComputeEnvironment
List getBoostComputeEnvironment();
RcppExport SEXP RcppBoostCompute_getBoostComputeEnvironment() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(getBoostComputeEnvironment());
    return __result;
END_RCPP
}
// getProgramCache
List getProgramCache(SEXP sexpContext);
RcppExport SEXP RcppBoostCompute_getProgramCache(SEXP sexpContextSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexpContext(sexpContextSEXP);
    __result = Rcpp::wrap(getProgramCache(sexpContext));
    return __result;
END_RCPP
}
// copyToDevice
SEXP copyToDevice(SEXP sexpContext, SEXP sexpQueue, const std::vector<int>& rVector);
RcppExport SEXP RcppBoostCompute_copyToDevice(SEXP sexpContextSEXP, SEXP sexpQueueSEXP, SEXP rVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexpContext(sexpContextSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpQueue(sexpQueueSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type rVector(rVectorSEXP);
    __result = Rcpp::wrap(copyToDevice(sexpContext, sexpQueue, rVector));
    return __result;
END_RCPP
}
// copyToHost
SEXP copyToHost(const std::vector<int>& rVector);
RcppExport SEXP RcppBoostCompute_copyToHost(SEXP rVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type rVector(rVectorSEXP);
    __result = Rcpp::wrap(copyToHost(rVector));
    return __result;
END_RCPP
}
// simpleTransformationReduction
double simpleTransformationReduction(SEXP sexpContext, SEXP sexpQueue, SEXP sexpDeviceVector);
RcppExport SEXP RcppBoostCompute_simpleTransformationReduction(SEXP sexpContextSEXP, SEXP sexpQueueSEXP, SEXP sexpDeviceVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexpContext(sexpContextSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpQueue(sexpQueueSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpDeviceVector(sexpDeviceVectorSEXP);
    __result = Rcpp::wrap(simpleTransformationReduction(sexpContext, sexpQueue, sexpDeviceVector));
    return __result;
END_RCPP
}
// simpleTransformationReductionWithCopy
double simpleTransformationReductionWithCopy(SEXP sexpContext, SEXP sexpQueue, const std::vector<int>& rVector);
RcppExport SEXP RcppBoostCompute_simpleTransformationReductionWithCopy(SEXP sexpContextSEXP, SEXP sexpQueueSEXP, SEXP rVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexpContext(sexpContextSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpQueue(sexpQueueSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type rVector(rVectorSEXP);
    __result = Rcpp::wrap(simpleTransformationReductionWithCopy(sexpContext, sexpQueue, rVector));
    return __result;
END_RCPP
}
// simpleTransformationReductionNoParallel
double simpleTransformationReductionNoParallel(SEXP sexpHostVector);
RcppExport SEXP RcppBoostCompute_simpleTransformationReductionNoParallel(SEXP sexpHostVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexpHostVector(sexpHostVectorSEXP);
    __result = Rcpp::wrap(simpleTransformationReductionNoParallel(sexpHostVector));
    return __result;
END_RCPP
}
