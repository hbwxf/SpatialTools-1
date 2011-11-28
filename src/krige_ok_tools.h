#ifndef _SpatialTools_KRIGE_OK_TOOLS_H
#define _SpatialTools_KRIGE_OK_TOOLS_H

#include <RcppArmadillo.h>

RcppExport SEXP krige_ok(SEXP ys, SEXP Vs, SEXP Vps, SEXP Vops);

//RcppExport SEXP kweights_ok(SEXP Vs, SEXP Vps, SEXP Vops);

//RcppExport SEXP mspe_ok(SEXP ws, SEXP Vs, SEXP Vps, SEXP Vops);

#endif
