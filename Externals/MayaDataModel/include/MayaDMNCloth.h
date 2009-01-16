/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_NCLOTH_H__
#define __MayaDM_NCLOTH_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMNParticle.h"
namespace MayaDM
{
class NCloth : public NParticle
{
public:
public:
	NCloth(FILE* file,const std::string& name,const std::string& parent=""):NParticle(file, name, parent, "nCloth"){}
	virtual ~NCloth(){}
	void setNumSubdivisions(int nsub)
	{
		if(nsub == 2) return;
		fprintf(mFile,"setAttr \".nsub\" %i;\n", nsub);

	}
	void setScalingRelation(unsigned int srl)
	{
		if(srl == 0) return;
		fprintf(mFile,"setAttr \".srl\" %i;\n", srl);

	}
	void setStretchResistance(float stch)
	{
		if(stch == 20.0) return;
		fprintf(mFile,"setAttr \".stch\" %f;\n", stch);

	}
	void setCompressionResistance(float comr)
	{
		if(comr == 10.0) return;
		fprintf(mFile,"setAttr \".comr\" %f;\n", comr);

	}
	void setStretchMap(float stmp)
	{
		if(stmp == 1.0) return;
		fprintf(mFile,"setAttr \".stmp\" %f;\n", stmp);

	}
	void setStretchPerVertex(const doubleArray& spv)
	{
		if(spv.size == 0) return;
		fprintf(mFile,"setAttr \".spv\" -type \"doubleArray\" ");
		spv.write(mFile);
		fprintf(mFile,";\n");

	}
	void setBendResistance(float bnd)
	{
		if(bnd == 0.1) return;
		fprintf(mFile,"setAttr \".bnd\" %f;\n", bnd);

	}
	void setBendMap(float bemp)
	{
		if(bemp == 0.0) return;
		fprintf(mFile,"setAttr \".bemp\" %f;\n", bemp);

	}
	void setBendPerVertex(const doubleArray& bdpv)
	{
		if(bdpv.size == 0) return;
		fprintf(mFile,"setAttr \".bdpv\" -type \"doubleArray\" ");
		bdpv.write(mFile);
		fprintf(mFile,";\n");

	}
	void setBendAngleDropoff(float bnad)
	{
		if(bnad == 0.0) return;
		fprintf(mFile,"setAttr \".bnad\" %f;\n", bnad);

	}
	void setRestitutionTension(float retn)
	{
		if(retn == 1000.0) return;
		fprintf(mFile,"setAttr \".retn\" %f;\n", retn);

	}
	void setRestitutionAngle(float reae)
	{
		if(reae == 3) return;
		fprintf(mFile,"setAttr \".reae\" %f;\n", reae);

	}
	void setShearResistance(float shr)
	{
		if(shr == 0.0) return;
		fprintf(mFile,"setAttr \".shr\" %f;\n", shr);

	}
	void setRigidity(float rity)
	{
		if(rity == 0.0) return;
		fprintf(mFile,"setAttr \".rity\" %f;\n", rity);

	}
	void setRigidityMap(float rimp)
	{
		if(rimp == 0.0) return;
		fprintf(mFile,"setAttr \".rimp\" %f;\n", rimp);

	}
	void setRigidityPerVertex(const doubleArray& rpv)
	{
		if(rpv.size == 0) return;
		fprintf(mFile,"setAttr \".rpv\" -type \"doubleArray\" ");
		rpv.write(mFile);
		fprintf(mFile,";\n");

	}
	void setDeformResistance(float dety)
	{
		if(dety == 0.0) return;
		fprintf(mFile,"setAttr \".dety\" %f;\n", dety);

	}
	void setDeformMap(float demp)
	{
		if(demp == 0.0) return;
		fprintf(mFile,"setAttr \".demp\" %f;\n", demp);

	}
	void setDeformPerVertex(const doubleArray& dfpv)
	{
		if(dfpv.size == 0) return;
		fprintf(mFile,"setAttr \".dfpv\" -type \"doubleArray\" ");
		dfpv.write(mFile);
		fprintf(mFile,";\n");

	}
	void setInputMeshAttract(float imat)
	{
		if(imat == 0.0) return;
		fprintf(mFile,"setAttr \".imat\" %f;\n", imat);

	}
	void setInputAttractMap(float iamp)
	{
		if(iamp == 0.0) return;
		fprintf(mFile,"setAttr \".iamp\" %f;\n", iamp);

	}
	void setInputAttractPerVertex(const doubleArray& iapv)
	{
		if(iapv.size == 0) return;
		fprintf(mFile,"setAttr \".iapv\" -type \"doubleArray\" ");
		iapv.write(mFile);
		fprintf(mFile,";\n");

	}
	void setInputAttractDamp(float iadm)
	{
		if(iadm == 0.5) return;
		fprintf(mFile,"setAttr \".iadm\" %f;\n", iadm);

	}
	void setWrinkleMap(float wkmp)
	{
		if(wkmp == 0.0) return;
		fprintf(mFile,"setAttr \".wkmp\" %f;\n", wkmp);

	}
	void setWrinklePerVertex(const doubleArray& wpv)
	{
		if(wpv.size == 0) return;
		fprintf(mFile,"setAttr \".wpv\" -type \"doubleArray\" ");
		wpv.write(mFile);
		fprintf(mFile,";\n");

	}
	void setWrinkleMapScale(float wms)
	{
		if(wms == 1.0) return;
		fprintf(mFile,"setAttr \".wms\" %f;\n", wms);

	}
	void setBendAngleScale(float basc)
	{
		if(basc == 1.0) return;
		fprintf(mFile,"setAttr \".basc\" %f;\n", basc);

	}
	void setSortLinks(bool stlk)
	{
		if(stlk == 0) return;
		fprintf(mFile,"setAttr \".stlk\" %i;\n", stlk);

	}
	void setEvaluationOrder(unsigned int evo)
	{
		if(evo == 0) return;
		fprintf(mFile,"setAttr \".evo\" %i;\n", evo);

	}
	void setAddCrossLinks(bool aclk)
	{
		if(aclk == true) return;
		fprintf(mFile,"setAttr \".aclk\" %i;\n", aclk);

	}
	void setStretchDamp(float sdmp)
	{
		if(sdmp == 0.1) return;
		fprintf(mFile,"setAttr \".sdmp\" %f;\n", sdmp);

	}
	void setSelfCollideWidthScale(float scws)
	{
		if(scws == 1.0) return;
		fprintf(mFile,"setAttr \".scws\" %f;\n", scws);

	}
	void setSelfCollisionSoftness(float scsf)
	{
		if(scsf == 0.0) return;
		fprintf(mFile,"setAttr \".scsf\" %f;\n", scsf);

	}
	void setSelfCrossoverPush(float scpu)
	{
		if(scpu == 0.0) return;
		fprintf(mFile,"setAttr \".scpu\" %f;\n", scpu);

	}
	void setSelfTrappedCheck(bool stpc)
	{
		if(stpc == 0) return;
		fprintf(mFile,"setAttr \".stpc\" %i;\n", stpc);

	}
	void setPressureMethod(unsigned int pmth)
	{
		if(pmth == 0) return;
		fprintf(mFile,"setAttr \".pmth\" %i;\n", pmth);

	}
	void setPressure(float pres)
	{
		if(pres == 0.0) return;
		fprintf(mFile,"setAttr \".pres\" %f;\n", pres);

	}
	void setStartPressure(float stpe)
	{
		if(stpe == 0.0) return;
		fprintf(mFile,"setAttr \".stpe\" %f;\n", stpe);

	}
	void setIncompressibility(float incm)
	{
		if(incm == 5.0) return;
		fprintf(mFile,"setAttr \".incm\" %f;\n", incm);

	}
	void setPressureDamping(float prdg)
	{
		if(prdg == 0.0) return;
		fprintf(mFile,"setAttr \".prdg\" %f;\n", prdg);

	}
	void setPumpRate(float pure)
	{
		if(pure == 0.0) return;
		fprintf(mFile,"setAttr \".pure\" %f;\n", pure);

	}
	void setAirTightness(float aits)
	{
		if(aits == 1.0) return;
		fprintf(mFile,"setAttr \".aits\" %f;\n", aits);

	}
	void setSealHoles(bool shol)
	{
		if(shol == true) return;
		fprintf(mFile,"setAttr \".shol\" %i;\n", shol);

	}
	void setIgnoreSolverGravity(bool igsg)
	{
		if(igsg == 0) return;
		fprintf(mFile,"setAttr \".igsg\" %i;\n", igsg);

	}
	void setIgnoreSolverWind(bool igsw)
	{
		if(igsw == 0) return;
		fprintf(mFile,"setAttr \".igsw\" %i;\n", igsw);

	}
	void setWindSelfShadow(bool wssh)
	{
		if(wssh == 0) return;
		fprintf(mFile,"setAttr \".wssh\" %i;\n", wssh);

	}
	void setLift(float lft)
	{
		if(lft == 0.05) return;
		fprintf(mFile,"setAttr \".lft\" %f;\n", lft);

	}
	void setDrag(float drg)
	{
		if(drg == 0.05) return;
		fprintf(mFile,"setAttr \".drg\" %f;\n", drg);

	}
	void setTangentialDrag(float tdrg)
	{
		if(tdrg == 0.0) return;
		fprintf(mFile,"setAttr \".tdrg\" %f;\n", tdrg);

	}
	void setSolverDisplay(unsigned int svds)
	{
		if(svds == 0) return;
		fprintf(mFile,"setAttr \".svds\" %i;\n", svds);

	}
	void setStretchMapType(unsigned int smt)
	{
		if(smt == 2) return;
		fprintf(mFile,"setAttr \".smt\" %i;\n", smt);

	}
	void setBendMapType(unsigned int bdmt)
	{
		if(bdmt == 2) return;
		fprintf(mFile,"setAttr \".bdmt\" %i;\n", bdmt);

	}
	void setRigidityMapType(unsigned int rmt)
	{
		if(rmt == 2) return;
		fprintf(mFile,"setAttr \".rmt\" %i;\n", rmt);

	}
	void setDeformMapType(unsigned int dmmt)
	{
		if(dmmt == 2) return;
		fprintf(mFile,"setAttr \".dmmt\" %i;\n", dmmt);

	}
	void setInputAttractMapType(unsigned int iamt)
	{
		if(iamt == 2) return;
		fprintf(mFile,"setAttr \".iamt\" %i;\n", iamt);

	}
	void setWrinkleMapType(unsigned int wmt)
	{
		if(wmt == 2) return;
		fprintf(mFile,"setAttr \".wmt\" %i;\n", wmt);

	}
	void getOutputMesh()
	{
		fprintf(mFile,"\"%s.omsh\"",mName.c_str());

	}
	void getRestShapeMesh()
	{
		fprintf(mFile,"\"%s.rsmh\"",mName.c_str());

	}
	void getNumSubdivisions()
	{
		fprintf(mFile,"\"%s.nsub\"",mName.c_str());

	}
	void getScalingRelation()
	{
		fprintf(mFile,"\"%s.srl\"",mName.c_str());

	}
	void getStretchResistance()
	{
		fprintf(mFile,"\"%s.stch\"",mName.c_str());

	}
	void getCompressionResistance()
	{
		fprintf(mFile,"\"%s.comr\"",mName.c_str());

	}
	void getStretchMap()
	{
		fprintf(mFile,"\"%s.stmp\"",mName.c_str());

	}
	void getStretchPerVertex()
	{
		fprintf(mFile,"\"%s.spv\"",mName.c_str());

	}
	void getBendResistance()
	{
		fprintf(mFile,"\"%s.bnd\"",mName.c_str());

	}
	void getBendMap()
	{
		fprintf(mFile,"\"%s.bemp\"",mName.c_str());

	}
	void getBendPerVertex()
	{
		fprintf(mFile,"\"%s.bdpv\"",mName.c_str());

	}
	void getBendAngleDropoff()
	{
		fprintf(mFile,"\"%s.bnad\"",mName.c_str());

	}
	void getRestitutionTension()
	{
		fprintf(mFile,"\"%s.retn\"",mName.c_str());

	}
	void getRestitutionAngle()
	{
		fprintf(mFile,"\"%s.reae\"",mName.c_str());

	}
	void getShearResistance()
	{
		fprintf(mFile,"\"%s.shr\"",mName.c_str());

	}
	void getRigidity()
	{
		fprintf(mFile,"\"%s.rity\"",mName.c_str());

	}
	void getRigidityMap()
	{
		fprintf(mFile,"\"%s.rimp\"",mName.c_str());

	}
	void getRigidityPerVertex()
	{
		fprintf(mFile,"\"%s.rpv\"",mName.c_str());

	}
	void getDeformResistance()
	{
		fprintf(mFile,"\"%s.dety\"",mName.c_str());

	}
	void getDeformMap()
	{
		fprintf(mFile,"\"%s.demp\"",mName.c_str());

	}
	void getDeformPerVertex()
	{
		fprintf(mFile,"\"%s.dfpv\"",mName.c_str());

	}
	void getInputMeshAttract()
	{
		fprintf(mFile,"\"%s.imat\"",mName.c_str());

	}
	void getInputAttractMap()
	{
		fprintf(mFile,"\"%s.iamp\"",mName.c_str());

	}
	void getInputAttractPerVertex()
	{
		fprintf(mFile,"\"%s.iapv\"",mName.c_str());

	}
	void getInputAttractDamp()
	{
		fprintf(mFile,"\"%s.iadm\"",mName.c_str());

	}
	void getWrinkleMap()
	{
		fprintf(mFile,"\"%s.wkmp\"",mName.c_str());

	}
	void getWrinklePerVertex()
	{
		fprintf(mFile,"\"%s.wpv\"",mName.c_str());

	}
	void getWrinkleMapScale()
	{
		fprintf(mFile,"\"%s.wms\"",mName.c_str());

	}
	void getBendAngleScale()
	{
		fprintf(mFile,"\"%s.basc\"",mName.c_str());

	}
	void getSortLinks()
	{
		fprintf(mFile,"\"%s.stlk\"",mName.c_str());

	}
	void getEvaluationOrder()
	{
		fprintf(mFile,"\"%s.evo\"",mName.c_str());

	}
	void getAddCrossLinks()
	{
		fprintf(mFile,"\"%s.aclk\"",mName.c_str());

	}
	void getStretchDamp()
	{
		fprintf(mFile,"\"%s.sdmp\"",mName.c_str());

	}
	void getMinimalStretch()
	{
		fprintf(mFile,"\"%s.msso\"",mName.c_str());

	}
	void getMinimalBend()
	{
		fprintf(mFile,"\"%s.mbso\"",mName.c_str());

	}
	void getMinimalShear()
	{
		fprintf(mFile,"\"%s.mshs\"",mName.c_str());

	}
	void getStretchHierarchyLevels()
	{
		fprintf(mFile,"\"%s.shlv\"",mName.c_str());

	}
	void getStretchHierarchyPercent()
	{
		fprintf(mFile,"\"%s.shpe\"",mName.c_str());

	}
	void getSelfCollideWidthScale()
	{
		fprintf(mFile,"\"%s.scws\"",mName.c_str());

	}
	void getSelfCollisionSoftness()
	{
		fprintf(mFile,"\"%s.scsf\"",mName.c_str());

	}
	void getSelfCrossoverPush()
	{
		fprintf(mFile,"\"%s.scpu\"",mName.c_str());

	}
	void getSelfTrappedCheck()
	{
		fprintf(mFile,"\"%s.stpc\"",mName.c_str());

	}
	void getPressureMethod()
	{
		fprintf(mFile,"\"%s.pmth\"",mName.c_str());

	}
	void getPressure()
	{
		fprintf(mFile,"\"%s.pres\"",mName.c_str());

	}
	void getStartPressure()
	{
		fprintf(mFile,"\"%s.stpe\"",mName.c_str());

	}
	void getIncompressibility()
	{
		fprintf(mFile,"\"%s.incm\"",mName.c_str());

	}
	void getPressureDamping()
	{
		fprintf(mFile,"\"%s.prdg\"",mName.c_str());

	}
	void getPumpRate()
	{
		fprintf(mFile,"\"%s.pure\"",mName.c_str());

	}
	void getAirTightness()
	{
		fprintf(mFile,"\"%s.aits\"",mName.c_str());

	}
	void getSealHoles()
	{
		fprintf(mFile,"\"%s.shol\"",mName.c_str());

	}
	void getIgnoreSolverGravity()
	{
		fprintf(mFile,"\"%s.igsg\"",mName.c_str());

	}
	void getIgnoreSolverWind()
	{
		fprintf(mFile,"\"%s.igsw\"",mName.c_str());

	}
	void getWindSelfShadow()
	{
		fprintf(mFile,"\"%s.wssh\"",mName.c_str());

	}
	void getLift()
	{
		fprintf(mFile,"\"%s.lft\"",mName.c_str());

	}
	void getDrag()
	{
		fprintf(mFile,"\"%s.drg\"",mName.c_str());

	}
	void getTangentialDrag()
	{
		fprintf(mFile,"\"%s.tdrg\"",mName.c_str());

	}
	void getSolverDisplay()
	{
		fprintf(mFile,"\"%s.svds\"",mName.c_str());

	}
	void getStretchMapType()
	{
		fprintf(mFile,"\"%s.smt\"",mName.c_str());

	}
	void getBendMapType()
	{
		fprintf(mFile,"\"%s.bdmt\"",mName.c_str());

	}
	void getRigidityMapType()
	{
		fprintf(mFile,"\"%s.rmt\"",mName.c_str());

	}
	void getDeformMapType()
	{
		fprintf(mFile,"\"%s.dmmt\"",mName.c_str());

	}
	void getInputAttractMapType()
	{
		fprintf(mFile,"\"%s.iamt\"",mName.c_str());

	}
	void getWrinkleMapType()
	{
		fprintf(mFile,"\"%s.wmt\"",mName.c_str());

	}
protected:
	NCloth(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):NParticle(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_NCLOTH_H__