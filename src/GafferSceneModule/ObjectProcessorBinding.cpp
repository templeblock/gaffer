//////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2017, Image Engine Design Inc. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//      * Redistributions of source code must retain the above
//        copyright notice, this list of conditions and the following
//        disclaimer.
//
//      * Redistributions in binary form must reproduce the above
//        copyright notice, this list of conditions and the following
//        disclaimer in the documentation and/or other materials provided with
//        the distribution.
//
//      * Neither the name of John Haddon nor the names of
//        any other contributors to this software may be used to endorse or
//        promote products derived from this software without specific prior
//        written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
//  IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
//  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
//  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
//  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
//  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
//  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//////////////////////////////////////////////////////////////////////////

#include "boost/python.hpp"

#include "ObjectProcessorBinding.h"

#include "GafferScene/DeleteCurves.h"
#include "GafferScene/DeleteFaces.h"
#include "GafferScene/DeleteObject.h"
#include "GafferScene/DeletePoints.h"
#include "GafferScene/LightToCamera.h"
#include "GafferScene/MeshDistortion.h"
#include "GafferScene/MeshTangents.h"
#include "GafferScene/MeshToPoints.h"
#include "GafferScene/MeshType.h"
#include "GafferScene/Parameters.h"
#include "GafferScene/PointsType.h"
#include "GafferScene/ReverseWinding.h"

#include "GafferBindings/DependencyNodeBinding.h"

using namespace boost::python;
using namespace Gaffer;
using namespace GafferBindings;
using namespace GafferScene;

void GafferSceneModule::bindObjectProcessor()
{

	GafferBindings::DependencyNodeClass<GafferScene::DeletePoints>();
	GafferBindings::DependencyNodeClass<GafferScene::DeleteFaces>();
	GafferBindings::DependencyNodeClass<GafferScene::DeleteCurves>();
	GafferBindings::DependencyNodeClass<GafferScene::MeshTangents>();
	GafferBindings::DependencyNodeClass<GafferScene::PointsType>();
	GafferBindings::DependencyNodeClass<GafferScene::MeshToPoints>();
	GafferBindings::DependencyNodeClass<MeshType>();
	GafferBindings::DependencyNodeClass<GafferScene::LightToCamera>();
	GafferBindings::DependencyNodeClass<Parameters>();
	GafferBindings::DependencyNodeClass<ReverseWinding>();
	GafferBindings::DependencyNodeClass<GafferScene::MeshDistortion>();
	GafferBindings::DependencyNodeClass<DeleteObject>();

}
