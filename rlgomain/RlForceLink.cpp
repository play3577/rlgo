/** Autogenerated file to force all AutoObjects to link */

#include "SgSystem.h"
#include "RlForceLink.h"
#include "RlAgent.h"
#include "RlAgentLog.h"
#include "RlConvert.h"
#include "RlEvaluator.h"
#include "RlFactory.h"
#include "RlFuegoPlayout.h"
#include "RlHistory.h"
#include "RlMoveFilter.h"
#include "RlSetup.h"
#include "RlSimulator.h"
#include "RlTrainer.h"
#include "RlWeightSet.h"
#include "RlLocalShapeConvert.h"
#include "RlLocalShapeFeatures.h"
#include "RlLocalShapeSet.h"
#include "RlLocalShapeShare.h"
//#include "RlManualFeatures.h"
//#include "RlProductFeatures.h"
#include "RlSharedFeatures.h"
#include "RlStageFeatures.h"
#include "RlSumFeatures.h"
#include "RlToPlayFeatures.h"
#include "RlMCRules.h"
#include "RlTDRules.h"
#include "RlEpsilonPolicy.h"
#include "RlGibbs.h"
#include "RlMCPolicy.h"
#include "RlPolicy.h"
#include "RlPriorityPolicy.h"
#include "RlSearch.h"
#include "RlTwoStagePolicy.h"
#include "RlFuegoPolicy.h"

void RlForceLink()
{
    RlRealAgent::ForceLink();
    RlSimAgent::ForceLink();
    RlAgentLog::ForceLink();
    RlEvaluator::ForceLink();
    RlHistory::ForceLink();
    RlMoveFilter::ForceLink();
    RlSingleEyeFilter::ForceLink();
    RlSimpleEyeFilter::ForceLink();
    RlProximityFilter::ForceLink();
    RlPointSetFilter::ForceLink();
    RlUnionFilter::ForceLink();
    RlIntersectionFilter::ForceLink();
    RlSetup::ForceLink();
    RlSimulator::ForceLink();
    RlForwardTrainer::ForceLink();
    RlBackwardTrainer::ForceLink();
    RlRandomTrainer::ForceLink();
    RlWeightSet::ForceLink();
    RlLocalShapeFusion::ForceLink();
    RlLocalShapeUnshare::ForceLink();
    RlLocalShapeFeatures::ForceLink();
    RlLocalShapeSet::ForceLink();
    RlLocalShapeShare::ForceLink();
    RlLDFeatureShare::ForceLink();
    RlLIFeatureShare::ForceLink();
    RlCIFeatureShare::ForceLink();
    //RlManualFeatureSet::ForceLink();
    //RlProductFeatures::ForceLink();
    RlSharedFeatures::ForceLink();
    RlStageFeatures::ForceLink();
    RlSumFeatures::ForceLink();
    RlToPlayFeatures::ForceLink();
    RlMonteCarlo::ForceLink();
    RlTD0::ForceLink();
    RlLambdaReturn::ForceLink();
    RlTDLambda::ForceLink();
    RlEpsilonPolicy::ForceLink();
    RlEpsilonDecayPolicy::ForceLink();
    RlGibbs::ForceLink();
    RlGreedy::ForceLink();
    RlRandomPolicy::ForceLink();
    RlMCPolicy::ForceLink();
    RlSimMaxPolicy::ForceLink();
    RlPriorityPolicy::ForceLink();
    RlAtariPolicy::ForceLink();
    RlMainSearch::ForceLink();
    RlTwoStagePolicy::ForceLink();
    RlLogTwoStagePolicy::ForceLink();
    RlLinearTwoStagePolicy::ForceLink();
    RlFuegoPlayout::ForceLink();
    RlFuegoPlayoutPolicy::ForceLink();
}
