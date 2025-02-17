// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

/// \file PDG.h
/// \brief PDG features
/// \note Use PWGHF/Core/make_pdg_header.py to generate the enums and mass declarations.

#ifndef PWGHF_CORE_PDG_H_
#define PWGHF_CORE_PDG_H_

namespace o2::analysis::pdg
{
/// \brief Declarations of named PDG codes of particles missing in ROOT PDG_t
/// \note Follow kCamelCase naming convention
/// \link https://root.cern/doc/master/TPDGCode_8h.html
enum Code {
  kB0 = 511,
  kB0Bar = -511,
  kBPlus = 521,
  kBS = 531,
  kBSBar = -531,
  kD0 = 421,
  kD0Bar = -421,
  kDMinus = -411,
  kDPlus = 411,
  kDS = 431,
  kDSBar = -431,
  kDStar = 413,
  kChiC1 = 20443,
  kJPsi = 443,
  kLambdaB0 = 5122,
  kLambdaCPlus = 4122,
  kOmegaC0 = 4332,
  kPhi = 333,
  kSigmaC0 = 4112,
  kSigmaCPlusPlus = 4222,
  kX3872 = 9920443,
  kXiB0 = 5232,
  kXiCCPlusPlus = 4422,
  kXiCPlus = 4232,
  kXiCZero = 4132
};

/// \brief Declarations of masses for additional particles
constexpr double MassB0 = 5.27953;
constexpr double MassB0Bar = 5.27953;
constexpr double MassBPlus = 5.27915;
constexpr double MassBS = 5.3663;
constexpr double MassBSBar = 5.3663;
constexpr double MassD0 = 1.86484;
constexpr double MassD0Bar = 1.86484;
constexpr double MassDMinus = 1.86962;
constexpr double MassDPlus = 1.86962;
constexpr double MassDS = 1.9685;
constexpr double MassDSBar = 1.9685;
constexpr double MassDStar = 2.01027;
constexpr double MassChiC1 = 3.51066;
constexpr double MassJPsi = 3.096916;
constexpr double MassLambdaB0 = 5.6202;
constexpr double MassLambdaCPlus = 2.28646;
constexpr double MassOmegaC0 = 2.6952;
constexpr double MassPhi = 1.019455;
constexpr double MassSigmaC0 = 2.45376;
constexpr double MassSigmaCPlusPlus = 2.45402;
constexpr double MassX3872 = 3.87165;
constexpr double MassXiB0 = 5.7924;
constexpr double MassXiCCPlusPlus = 3.62155;
constexpr double MassXiCPlus = 2.4679;
constexpr double MassXiCZero = 2.471;

/// \brief Declarations of masses for particles in ROOT PDG_t
constexpr double MassDown = 0.0048;
constexpr double MassDownBar = 0.0048;
constexpr double MassUp = 0.0024;
constexpr double MassUpBar = 0.0024;
constexpr double MassStrange = 0.104;
constexpr double MassStrangeBar = 0.104;
constexpr double MassCharm = 1.27;
constexpr double MassCharmBar = 1.27;
constexpr double MassBottom = 4.68;
constexpr double MassBottomBar = 4.68;
constexpr double MassTop = 171.2;
constexpr double MassTopBar = 171.2;
constexpr double MassGluon = 0.0;
constexpr double MassElectron = 0.00051099891;
constexpr double MassPositron = 0.00051099891;
constexpr double MassNuE = 0.0;
constexpr double MassNuEBar = 0.0;
constexpr double MassMuonMinus = 0.105658;
constexpr double MassMuonPlus = 0.105658;
constexpr double MassNuMu = 0.0;
constexpr double MassNuMuBar = 0.0;
constexpr double MassTauMinus = 1.77684;
constexpr double MassTauPlus = 1.77684;
constexpr double MassNuTau = 0.0;
constexpr double MassNuTauBar = 0.0;
constexpr double MassGamma = 0.0;
constexpr double MassZ0 = 91.187;
constexpr double MassWPlus = 80.398;
constexpr double MassWMinus = 80.398;
constexpr double MassPi0 = 0.134977;
constexpr double MassK0Long = 0.497614;
constexpr double MassPiPlus = 0.13957;
constexpr double MassPiMinus = 0.13957;
constexpr double MassProton = 0.938272;
constexpr double MassProtonBar = 0.938272;
constexpr double MassNeutron = 0.939565;
constexpr double MassNeutronBar = 0.939565;
constexpr double MassK0Short = 0.497614;
constexpr double MassK0 = 0.497614;
constexpr double MassK0Bar = 0.497614;
constexpr double MassKPlus = 0.493677;
constexpr double MassKMinus = 0.493677;
constexpr double MassLambda0 = 1.11568;
constexpr double MassLambda0Bar = 1.11568;
constexpr double MassLambda1520 = 1.5195;
constexpr double MassSigmaMinus = 1.19744;
constexpr double MassSigmaBarPlus = 1.19744;
constexpr double MassSigmaPlus = 1.18937;
constexpr double MassSigmaBarMinus = 1.18937;
constexpr double MassSigma0 = 1.192642;
constexpr double MassSigma0Bar = 1.192642;
constexpr double MassXiMinus = 1.32171;
constexpr double MassXiPlusBar = 1.32171;
constexpr double MassOmegaMinus = 1.67245;
constexpr double MassOmegaPlusBar = 1.67245;
} // namespace o2::analysis::pdg

#endif // PWGHF_CORE_PDG_H_
