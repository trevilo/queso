/*------------------------------------------------------------------------
 *
 * Copyright (C) 2012 The PECOS Development Team
 *
 * Please see http://pecos.ices.utexas.edu for more information.
 *
 * This file is part of the QUESO Library (Quantification of Uncertainty
 * for Estimation, Simulation and Optimization).
 *
 * QUESO is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QUESO is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QUESO. If not, see <http://www.gnu.org/licenses/>.
 *
 *------------------------------------------------------------------------
 *
 * $Id$
 */
 /*------------------------------------------------------------------
 * Brief description of this file: 
 *
 * This is the header file from gravity_qoi.C. 
 *-----------------------------------------------------------------*/

#ifndef __GRAVITY_QOI_H__
#define __GRAVITY_QOI_H__

#include <queso/GslMatrix.h>
#include <queso/DistArray.h>

struct
qoiRoutine_Data
{
  double m_angle;
  double m_initialVelocity;
  double m_initialHeight;
};

void
qoiRoutine(
  const QUESO::GslVector&                     paramValues,
  const QUESO::GslVector*                     paramDirection,
  const void*                                 functionDataPtr,
        QUESO::GslVector&                     qoiValues,
        QUESO::DistArray<QUESO::GslVector* >* gradVectors,
        QUESO::DistArray<QUESO::GslMatrix* >* hessianMatrices,
        QUESO::DistArray<QUESO::GslVector* >* hessianEffects);

#endif
