// 2025 John Warren

#pragma once

#include "AnimGraphNode_SkeletalControlBase.h"
//#include "AnimGraphNode_Base.h"
#include "AnimNode_SIKSolver.h"
#include "AnimGraphNode_SIKSolver.generated.h"

/**
 * Class that expose the actual node to the AnimGraph. 
 * Here we have stuff like the title, color of node, tooltips etc.
 */
UCLASS(meta = (Keywords = "SIK Simple Inverse Kinematics Solve IK Full VR Body"))
class SIKEDITOR_API UAnimGraphNode_SIKSolver : public UAnimGraphNode_SkeletalControlBase
//class SIKEDITOR_API UAnimGraphNode_SIKSolver : public UAnimGraphNode_Base
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_SIKSolver Node;
	
public:
	// UEdGraphNode interface
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	// End of UEdGraphNode interface

	/* Only valid if i base this off of FAnimNode_SkeletalControlBase */
	// UAnimGraphNode_SkeletalControlBase interface
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override { return &Node; }
	// End of UAnimGraphNode_SkeletalControlBase interface
};
