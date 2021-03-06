/*################################################################################
  ##
  ##   Copyright (C) 2011-2018 Keith O'Hara
  ##
  ##   This file is part of the BMLib C++ library.
  ##
  ##   BMLib is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   BMLib is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ##   You should have received a copy of the GNU General Public License
  ##   along with BMLib. If not, see <http://www.gnu.org/licenses/>.
  ##
  ################################################################################*/

/*
 * Modecheck
 */

#ifndef _bmlib_mode_check_HPP
#define _bmlib_mode_check_HPP

template<typename T>
arma::cube mode_check(const T& model_inp, const arma::vec& mode_vals, const int grid_size);

template<typename T>
double hess_objfn(const arma::vec& pars_inp, arma::vec* grad_vec, void* hess_data);

template<typename T>
struct mode_check_data {
    T model_obj;
};

#include "mode_check.tpp"

#endif
