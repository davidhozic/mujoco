// Copyright 2025 DeepMind Technologies Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "./tokens.h"

PXR_NAMESPACE_OPEN_SCOPE

MjcPhysicsTokensType::MjcPhysicsTokensType()
    : auto_("auto", TfToken::Immortal),
      cg("cg", TfToken::Immortal),
      dense("dense", TfToken::Immortal),
      elliptic("elliptic", TfToken::Immortal),
      euler("euler", TfToken::Immortal),
      implicit("implicit", TfToken::Immortal),
      implicitfast("implicitfast", TfToken::Immortal),
      mjcPhysicsActuatorgroupdisable("mjc:physics:actuatorgroupdisable",
                                     TfToken::Immortal),
      mjcPhysicsApirate("mjc:physics:apirate", TfToken::Immortal),
      mjcPhysicsCcd_iterations("mjc:physics:ccd_iterations", TfToken::Immortal),
      mjcPhysicsCcd_tolerance("mjc:physics:ccd_tolerance", TfToken::Immortal),
      mjcPhysicsCone("mjc:physics:cone", TfToken::Immortal),
      mjcPhysicsDensity("mjc:physics:density", TfToken::Immortal),
      mjcPhysicsFlagActuation("mjc:physics:flag:actuation", TfToken::Immortal),
      mjcPhysicsFlagAutoreset("mjc:physics:flag:autoreset", TfToken::Immortal),
      mjcPhysicsFlagClampctrl("mjc:physics:flag:clampctrl", TfToken::Immortal),
      mjcPhysicsFlagConstraint("mjc:physics:flag:constraint",
                               TfToken::Immortal),
      mjcPhysicsFlagContact("mjc:physics:flag:contact", TfToken::Immortal),
      mjcPhysicsFlagEnergy("mjc:physics:flag:energy", TfToken::Immortal),
      mjcPhysicsFlagEquality("mjc:physics:flag:equality", TfToken::Immortal),
      mjcPhysicsFlagEulerdamp("mjc:physics:flag:eulerdamp", TfToken::Immortal),
      mjcPhysicsFlagFilterparent("mjc:physics:flag:filterparent",
                                 TfToken::Immortal),
      mjcPhysicsFlagFrictionloss("mjc:physics:flag:frictionloss",
                                 TfToken::Immortal),
      mjcPhysicsFlagFwdinv("mjc:physics:flag:fwdinv", TfToken::Immortal),
      mjcPhysicsFlagGravity("mjc:physics:flag:gravity", TfToken::Immortal),
      mjcPhysicsFlagInvdiscrete("mjc:physics:flag:invdiscrete",
                                TfToken::Immortal),
      mjcPhysicsFlagIsland("mjc:physics:flag:island", TfToken::Immortal),
      mjcPhysicsFlagLimit("mjc:physics:flag:limit", TfToken::Immortal),
      mjcPhysicsFlagMidphase("mjc:physics:flag:midphase", TfToken::Immortal),
      mjcPhysicsFlagMulticcd("mjc:physics:flag:multiccd", TfToken::Immortal),
      mjcPhysicsFlagNativeccd("mjc:physics:flag:nativeccd", TfToken::Immortal),
      mjcPhysicsFlagOverride("mjc:physics:flag:override", TfToken::Immortal),
      mjcPhysicsFlagPassive("mjc:physics:flag:passive", TfToken::Immortal),
      mjcPhysicsFlagRefsafe("mjc:physics:flag:refsafe", TfToken::Immortal),
      mjcPhysicsFlagSensor("mjc:physics:flag:sensor", TfToken::Immortal),
      mjcPhysicsFlagWarmstart("mjc:physics:flag:warmstart", TfToken::Immortal),
      mjcPhysicsImpratio("mjc:physics:impratio", TfToken::Immortal),
      mjcPhysicsIntegrator("mjc:physics:integrator", TfToken::Immortal),
      mjcPhysicsIterations("mjc:physics:iterations", TfToken::Immortal),
      mjcPhysicsJacobian("mjc:physics:jacobian", TfToken::Immortal),
      mjcPhysicsLs_iterations("mjc:physics:ls_iterations", TfToken::Immortal),
      mjcPhysicsLs_tolerance("mjc:physics:ls_tolerance", TfToken::Immortal),
      mjcPhysicsMagnetic("mjc:physics:magnetic", TfToken::Immortal),
      mjcPhysicsNoslip_iterations("mjc:physics:noslip_iterations",
                                  TfToken::Immortal),
      mjcPhysicsNoslip_tolerance("mjc:physics:noslip_tolerance",
                                 TfToken::Immortal),
      mjcPhysicsO_friction("mjc:physics:o_friction", TfToken::Immortal),
      mjcPhysicsO_margin("mjc:physics:o_margin", TfToken::Immortal),
      mjcPhysicsO_solimp("mjc:physics:o_solimp", TfToken::Immortal),
      mjcPhysicsO_solref("mjc:physics:o_solref", TfToken::Immortal),
      mjcPhysicsSdf_initpoints("mjc:physics:sdf_initpoints", TfToken::Immortal),
      mjcPhysicsSdf_iterations("mjc:physics:sdf_iterations", TfToken::Immortal),
      mjcPhysicsSolver("mjc:physics:solver", TfToken::Immortal),
      mjcPhysicsTimestep("mjc:physics:timestep", TfToken::Immortal),
      mjcPhysicsTolerance("mjc:physics:tolerance", TfToken::Immortal),
      mjcPhysicsViscosity("mjc:physics:viscosity", TfToken::Immortal),
      mjcPhysicsWind("mjc:physics:wind", TfToken::Immortal),
      newton("newton", TfToken::Immortal),
      pgs("pgs", TfToken::Immortal),
      pyramidal("pyramidal", TfToken::Immortal),
      rk4("rk4", TfToken::Immortal),
      sparse("sparse", TfToken::Immortal),
      MjcPhysicsSceneAPI("MjcPhysicsSceneAPI", TfToken::Immortal),
      MjcSiteAPI("MjcSiteAPI", TfToken::Immortal),
      allTokens({auto_,
                 cg,
                 dense,
                 elliptic,
                 euler,
                 implicit,
                 implicitfast,
                 mjcPhysicsActuatorgroupdisable,
                 mjcPhysicsApirate,
                 mjcPhysicsCcd_iterations,
                 mjcPhysicsCcd_tolerance,
                 mjcPhysicsCone,
                 mjcPhysicsDensity,
                 mjcPhysicsFlagActuation,
                 mjcPhysicsFlagAutoreset,
                 mjcPhysicsFlagClampctrl,
                 mjcPhysicsFlagConstraint,
                 mjcPhysicsFlagContact,
                 mjcPhysicsFlagEnergy,
                 mjcPhysicsFlagEquality,
                 mjcPhysicsFlagEulerdamp,
                 mjcPhysicsFlagFilterparent,
                 mjcPhysicsFlagFrictionloss,
                 mjcPhysicsFlagFwdinv,
                 mjcPhysicsFlagGravity,
                 mjcPhysicsFlagInvdiscrete,
                 mjcPhysicsFlagIsland,
                 mjcPhysicsFlagLimit,
                 mjcPhysicsFlagMidphase,
                 mjcPhysicsFlagMulticcd,
                 mjcPhysicsFlagNativeccd,
                 mjcPhysicsFlagOverride,
                 mjcPhysicsFlagPassive,
                 mjcPhysicsFlagRefsafe,
                 mjcPhysicsFlagSensor,
                 mjcPhysicsFlagWarmstart,
                 mjcPhysicsImpratio,
                 mjcPhysicsIntegrator,
                 mjcPhysicsIterations,
                 mjcPhysicsJacobian,
                 mjcPhysicsLs_iterations,
                 mjcPhysicsLs_tolerance,
                 mjcPhysicsMagnetic,
                 mjcPhysicsNoslip_iterations,
                 mjcPhysicsNoslip_tolerance,
                 mjcPhysicsO_friction,
                 mjcPhysicsO_margin,
                 mjcPhysicsO_solimp,
                 mjcPhysicsO_solref,
                 mjcPhysicsSdf_initpoints,
                 mjcPhysicsSdf_iterations,
                 mjcPhysicsSolver,
                 mjcPhysicsTimestep,
                 mjcPhysicsTolerance,
                 mjcPhysicsViscosity,
                 mjcPhysicsWind,
                 newton,
                 pgs,
                 pyramidal,
                 rk4,
                 sparse,
                 MjcPhysicsSceneAPI,
                 MjcSiteAPI}) {}

TfStaticData<MjcPhysicsTokensType> MjcPhysicsTokens;

PXR_NAMESPACE_CLOSE_SCOPE
