// 2025 John Warren

#include "../Public/AnimGraphNode_SIKSolver.h"
#include "SIKEditor.h"

#define LOCTEXT_NAMESPACE "A3Nodes"

FText UAnimGraphNode_SIKSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("SIKSolver", "SIK");
}

FText UAnimGraphNode_SIKSolver::GetTooltipText() const
{
	return LOCTEXT("SIK_Tooltip", "Solve inverse kinematics for VR body.");
}

#undef LOCTEXT_NAMESPACE
