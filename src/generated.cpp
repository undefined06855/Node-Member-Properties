#include <geode.devtools/include/API.hpp>

// compiled at Tue, 04 Nov 2025 23:29:31 +0000

$on_mod(Loaded) {
    devtools::waitForDevTools([] {

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCObject>) {
devtools::registerNode<cocos2d::CCObject>([](cocos2d::CCObject* node) {
    devtools::label("Members for cocos2d::CCObject:");
    devtools::property("m_uID", node->m_uID);
    devtools::property("m_nLuaID", node->m_nLuaID);
    devtools::property("m_nTag", node->m_nTag);
    devtools::property("m_uReference", node->m_uReference);
    devtools::property("m_uAutoReleaseCount", node->m_uAutoReleaseCount);
    devtools::property("m_uIndexInArray", node->m_uIndexInArray);
    devtools::property("m_unknown2", node->m_unknown2);
    devtools::property("m_nZOrder", node->m_nZOrder);
    devtools::property("m_uOrderOfArrival", node->m_uOrderOfArrival);
    devtools::property("m_unknown5", node->m_unknown5);
    devtools::label("cocos2d::CCObjectType m_eObjType");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCAction>) {
devtools::registerNode<cocos2d::CCAction>([](cocos2d::CCAction* node) {
    devtools::label("Members for cocos2d::CCAction:");
    devtools::property("m_nTag", node->m_nTag);
    devtools::property("m_fSpeedMod", node->m_fSpeedMod);
    devtools::label(fmt::format("cocos2d::CCNode* m_pOriginalTarget at {}", (void*)node->m_pOriginalTarget).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_pTarget at {}", (void*)node->m_pTarget).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCFiniteTimeAction>) {
devtools::registerNode<cocos2d::CCFiniteTimeAction>([](cocos2d::CCFiniteTimeAction* node) {
    devtools::label("Members for cocos2d::CCFiniteTimeAction:");
    devtools::property("m_fDuration", node->m_fDuration);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCActionInterval>) {
devtools::registerNode<cocos2d::CCActionInterval>([](cocos2d::CCActionInterval* node) {
    devtools::label("Members for cocos2d::CCActionInterval:");
    devtools::property("m_elapsed", node->m_elapsed);
    devtools::property("m_bFirstTick", node->m_bFirstTick);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCNodeRGBA>) {
devtools::registerNode<cocos2d::CCNodeRGBA>([](cocos2d::CCNodeRGBA* node) {
    devtools::label("Members for cocos2d::CCNodeRGBA:");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCMotionStreak>) {
devtools::registerNode<cocos2d::CCMotionStreak>([](cocos2d::CCMotionStreak* node) {
    devtools::label("Members for cocos2d::CCMotionStreak:");
    devtools::property("m_bFastMode", node->m_bFastMode);
    devtools::property("m_bStartingPositionInitialized", node->m_bStartingPositionInitialized);
    devtools::property("m_bStroke", node->m_bStroke);
    devtools::property("m_fStroke", node->m_fStroke);
    devtools::property("m_fFadeDelta", node->m_fFadeDelta);
    devtools::property("m_fMinSeg", node->m_fMinSeg);
    devtools::property("m_uMaxPoints", node->m_uMaxPoints);
    devtools::property("m_uNuPoints", node->m_uNuPoints);
    devtools::property("m_uPreviousNuPoints", node->m_uPreviousNuPoints);
    devtools::property("m_bRepeatMode", node->m_bRepeatMode);
    devtools::property("m_fRepeatSpeed", node->m_fRepeatSpeed);
    devtools::property("m_fRepeatTime", node->m_fRepeatTime);
    devtools::property("m_idk", node->m_idk);
    devtools::property("m_fMaxSeg", node->m_fMaxSeg);
    devtools::property("m_bDontOpacityFade", node->m_bDontOpacityFade);
    devtools::property("m_tPositionR", node->m_tPositionR);
    devtools::label(fmt::format("cocos2d::CCTexture2D* m_pTexture at {}", (void*)node->m_pTexture).c_str());
    devtools::label("cocos2d::ccBlendFunc m_tBlendFunc");
    devtools::label(fmt::format("cocos2d::CCPoint* m_pPointVertexes at {}", (void*)node->m_pPointVertexes).c_str());
    devtools::label(fmt::format("float* m_pPointState at {}", (void*)node->m_pPointState).c_str());
    devtools::label(fmt::format("cocos2d::ccVertex2F* m_pVertices at {}", (void*)node->m_pVertices).c_str());
    devtools::label(fmt::format("uint8_t* m_pColorPointer at {}", (void*)node->m_pColorPointer).c_str());
    devtools::label(fmt::format("cocos2d::ccTex2F* m_pTexCoords at {}", (void*)node->m_pTexCoords).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCSet>) {
devtools::registerNode<cocos2d::CCSet>([](cocos2d::CCSet* node) {
    devtools::label("Members for cocos2d::CCSet:");
    devtools::label("gd::set<cocos2d::CCObject*> m_pSet");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCParticleSystem>) {
devtools::registerNode<cocos2d::CCParticleSystem>([](cocos2d::CCParticleSystem* node) {
    devtools::label("Members for cocos2d::CCParticleSystem:");
    devtools::property("m_sPlistFile", node->m_sPlistFile);
    devtools::property("m_fElapsed", node->m_fElapsed);
    devtools::property("m_fEmitCounter", node->m_fEmitCounter);
    devtools::property("m_uParticleIdx", node->m_uParticleIdx);
    devtools::property("m_uAtlasIndex", node->m_uAtlasIndex);
    devtools::property("m_bTransformSystemDirty", node->m_bTransformSystemDirty);
    devtools::property("m_uAllocatedParticles", node->m_uAllocatedParticles);
    devtools::property("m_bIsActive", node->m_bIsActive);
    devtools::property("m_uParticleCount", node->m_uParticleCount);
    devtools::property("m_fDuration", node->m_fDuration);
    devtools::property("m_tSourcePosition", node->m_tSourcePosition);
    devtools::property("m_tPosVar", node->m_tPosVar);
    devtools::property("m_fLife", node->m_fLife);
    devtools::property("m_fLifeVar", node->m_fLifeVar);
    devtools::property("m_fAngle", node->m_fAngle);
    devtools::property("m_fAngleVar", node->m_fAngleVar);
    devtools::property("m_fFadeInTime", node->m_fFadeInTime);
    devtools::property("m_fFadeInTimeVar", node->m_fFadeInTimeVar);
    devtools::property("m_fFadeOutTime", node->m_fFadeOutTime);
    devtools::property("m_fFadeOutTimeVar", node->m_fFadeOutTimeVar);
    devtools::property("m_fFrictionPos", node->m_fFrictionPos);
    devtools::property("m_fFrictionPosVar", node->m_fFrictionPosVar);
    devtools::property("m_fFrictionSize", node->m_fFrictionSize);
    devtools::property("m_fFrictionSizeVar", node->m_fFrictionSizeVar);
    devtools::property("m_fFrictionRot", node->m_fFrictionRot);
    devtools::property("m_fFrictionRotVar", node->m_fFrictionRotVar);
    devtools::property("m_fRespawn", node->m_fRespawn);
    devtools::property("m_fRespawnVar", node->m_fRespawnVar);
    devtools::property("m_bStartSpinEqualToEnd", node->m_bStartSpinEqualToEnd);
    devtools::property("m_bStartSizeEqualToEnd", node->m_bStartSizeEqualToEnd);
    devtools::property("m_bStartRadiusEqualToEnd", node->m_bStartRadiusEqualToEnd);
    devtools::property("m_bDynamicRotationIsDir", node->m_bDynamicRotationIsDir);
    devtools::property("m_bOrderSensitive", node->m_bOrderSensitive);
    devtools::property("m_bStartRGBVarSync", node->m_bStartRGBVarSync);
    devtools::property("m_bEndRGBVarSync", node->m_bEndRGBVarSync);
    devtools::property("m_bWasRemoved", node->m_bWasRemoved);
    devtools::property("m_bUsingSchedule", node->m_bUsingSchedule);
    devtools::property("m_fStartSize", node->m_fStartSize);
    devtools::property("m_fStartSizeVar", node->m_fStartSizeVar);
    devtools::property("m_fEndSize", node->m_fEndSize);
    devtools::property("m_fEndSizeVar", node->m_fEndSizeVar);
    devtools::property("m_tStartColor", node->m_tStartColor);
    devtools::property("m_tStartColorVar", node->m_tStartColorVar);
    devtools::property("m_tEndColor", node->m_tEndColor);
    devtools::property("m_tEndColorVar", node->m_tEndColorVar);
    devtools::property("m_fStartSpin", node->m_fStartSpin);
    devtools::property("m_fStartSpinVar", node->m_fStartSpinVar);
    devtools::property("m_fEndSpin", node->m_fEndSpin);
    devtools::property("m_fEndSpinVar", node->m_fEndSpinVar);
    devtools::property("m_fEmissionRate", node->m_fEmissionRate);
    devtools::property("m_uTotalParticles", node->m_uTotalParticles);
    devtools::property("m_bOpacityModifyRGB", node->m_bOpacityModifyRGB);
    devtools::property("m_bIsBlendAdditive", node->m_bIsBlendAdditive);
    devtools::property("m_bIsAutoRemoveOnFinish", node->m_bIsAutoRemoveOnFinish);
    devtools::property("m_bDontCleanupOnFinish", node->m_bDontCleanupOnFinish);
    devtools::property("m_nEmitterMode", node->m_nEmitterMode);
    devtools::property("m_bWorldPosUninitialized", node->m_bWorldPosUninitialized);
    devtools::property("m_tWorldPos", node->m_tWorldPos);
    devtools::property("m_tUniformColor", node->m_tUniformColor);
    devtools::property("m_tUniformDeltaColor", node->m_tUniformDeltaColor);
    devtools::property("m_bUseUniformColorMode", node->m_bUseUniformColorMode);
    devtools::property("m_fDefaultStartSize", node->m_fDefaultStartSize);
    devtools::property("m_fDefaultStartSizeVar", node->m_fDefaultStartSizeVar);
    devtools::property("m_fDefaultEndSize2", node->m_fDefaultEndSize2);
    devtools::property("m_fDefaultEndSize", node->m_fDefaultEndSize);
    devtools::property("m_fDefaultAngle", node->m_fDefaultAngle);
    devtools::property("m_fDefaultModeASpeed", node->m_fDefaultModeASpeed);
    devtools::property("m_fDefaultModeASpeedVar", node->m_fDefaultModeASpeedVar);
    devtools::property("m_tDefaultPosVar", node->m_tDefaultPosVar);
    devtools::property("m_nCustomParticleIndex", node->m_nCustomParticleIndex);
    devtools::label(fmt::format("cocos2d::sCCParticle* m_pParticles at {}", (void*)node->m_pParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleBatchNode* m_pBatchNode at {}", (void*)node->m_pBatchNode).c_str());
    devtools::label(fmt::format("cocos2d::CCTexture2D* m_pTexture at {}", (void*)node->m_pTexture).c_str());
    devtools::label("cocos2d::ccBlendFunc m_tBlendFunc");
    devtools::label("cocos2d::tCCPositionType m_ePositionType");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCParticleSystemQuad>) {
devtools::registerNode<cocos2d::CCParticleSystemQuad>([](cocos2d::CCParticleSystemQuad* node) {
    devtools::label("Members for cocos2d::CCParticleSystemQuad:");
    devtools::property("m_tTextureRect", node->m_tTextureRect);
    devtools::property("m_tQuadColor", node->m_tQuadColor);
    devtools::property("m_uParticleIdx", node->m_uParticleIdx);
    devtools::property("m_uOpacity", node->m_uOpacity);
    devtools::label(fmt::format("cocos2d::ccV3F_C4B_T2F_Quad* m_pQuads at {}", (void*)node->m_pQuads).c_str());
    devtools::label(fmt::format("uint16_t* m_pIndices at {}", (void*)node->m_pIndices).c_str());
    devtools::label("std::array<uint32_t, 2> m_pBuffersVBO");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCLayer>) {
devtools::registerNode<cocos2d::CCLayer>([](cocos2d::CCLayer* node) {
    devtools::label("Members for cocos2d::CCLayer:");
    devtools::property("m_bTouchEnabled", node->m_bTouchEnabled);
    devtools::property("m_bAccelerometerEnabled", node->m_bAccelerometerEnabled);
    devtools::property("m_bKeypadEnabled", node->m_bKeypadEnabled);
    devtools::property("m_bKeyboardEnabled", node->m_bKeyboardEnabled);
    devtools::property("m_bMouseEnabled", node->m_bMouseEnabled);
    devtools::property("m_nTouchPriority", node->m_nTouchPriority);
    devtools::property("m_uPreviousPriority", node->m_uPreviousPriority);
    devtools::label(fmt::format("cocos2d::CCTouchScriptHandlerEntry* m_pScriptTouchHandlerEntry at {}", (void*)node->m_pScriptTouchHandlerEntry).c_str());
    devtools::label(fmt::format("cocos2d::CCScriptHandlerEntry* m_pScriptKeypadHandlerEntry at {}", (void*)node->m_pScriptKeypadHandlerEntry).c_str());
    devtools::label(fmt::format("cocos2d::CCScriptHandlerEntry* m_pScriptAccelerateHandlerEntry at {}", (void*)node->m_pScriptAccelerateHandlerEntry).c_str());
    devtools::label("cocos2d::ccTouchesMode m_eTouchMode");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCLayerRGBA>) {
devtools::registerNode<cocos2d::CCLayerRGBA>([](cocos2d::CCLayerRGBA* node) {
    devtools::label("Members for cocos2d::CCLayerRGBA:");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCLayerColor>) {
devtools::registerNode<cocos2d::CCLayerColor>([](cocos2d::CCLayerColor* node) {
    devtools::label("Members for cocos2d::CCLayerColor:");
    devtools::label("std::array<cocos2d::ccVertex2F, 4> m_pSquareVertices");
    devtools::label("std::array<cocos2d::ccColor4F, 4> m_pSquareColors");
    devtools::label("cocos2d::ccBlendFunc m_tBlendFunc");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCLayerGradient>) {
devtools::registerNode<cocos2d::CCLayerGradient>([](cocos2d::CCLayerGradient* node) {
    devtools::label("Members for cocos2d::CCLayerGradient:");
    devtools::property("m_startColor", node->m_startColor);
    devtools::property("m_endColor", node->m_endColor);
    devtools::property("m_AlongVector", node->m_AlongVector);
    devtools::property("m_bShouldPremultiply", node->m_bShouldPremultiply);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCMouseDispatcher>) {
devtools::registerNode<cocos2d::CCMouseDispatcher>([](cocos2d::CCMouseDispatcher* node) {
    devtools::label("Members for cocos2d::CCMouseDispatcher:");
    devtools::label(fmt::format("cocos2d::CCArray* m_pMouseHandlers at {}", (void*)node->m_pMouseHandlers).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCTouchHandler>) {
devtools::registerNode<cocos2d::CCTouchHandler>([](cocos2d::CCTouchHandler* node) {
    devtools::label("Members for cocos2d::CCTouchHandler:");
    devtools::property("m_nPriority", node->m_nPriority);
    devtools::property("m_nEnabledSelectors", node->m_nEnabledSelectors);
    devtools::label(fmt::format("cocos2d::CCTouchDelegate* m_pDelegate at {}", (void*)node->m_pDelegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCTargetedTouchHandler>) {
devtools::registerNode<cocos2d::CCTargetedTouchHandler>([](cocos2d::CCTargetedTouchHandler* node) {
    devtools::label("Members for cocos2d::CCTargetedTouchHandler:");
    devtools::property("m_bSwallowsTouches", node->m_bSwallowsTouches);
    devtools::label(fmt::format("cocos2d::CCSet* m_pClaimedTouches at {}", (void*)node->m_pClaimedTouches).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCTouch>) {
devtools::registerNode<cocos2d::CCTouch>([](cocos2d::CCTouch* node) {
    devtools::label("Members for cocos2d::CCTouch:");
    devtools::property("m_nId", node->m_nId);
    devtools::property("m_startPointCaptured", node->m_startPointCaptured);
    devtools::property("m_startPoint", node->m_startPoint);
    devtools::property("m_point", node->m_point);
    devtools::property("m_prevPoint", node->m_prevPoint);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCTouchDispatcher>) {
devtools::registerNode<cocos2d::CCTouchDispatcher>([](cocos2d::CCTouchDispatcher* node) {
    devtools::label("Members for cocos2d::CCTouchDispatcher:");
    devtools::property("m_bToQuit", node->m_bToQuit);
    devtools::property("m_bDispatchEvents", node->m_bDispatchEvents);
    devtools::property("m_targetPrio", node->m_targetPrio);
    devtools::property("m_forcePrio", node->m_forcePrio);
    devtools::label(fmt::format("cocos2d::CCArray* m_pTargetedHandlers at {}", (void*)node->m_pTargetedHandlers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pStandardHandlers at {}", (void*)node->m_pStandardHandlers).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCMouseHandler>) {
devtools::registerNode<cocos2d::CCMouseHandler>([](cocos2d::CCMouseHandler* node) {
    devtools::label("Members for cocos2d::CCMouseHandler:");
    devtools::label(fmt::format("cocos2d::CCMouseDelegate* m_pDelegate at {}", (void*)node->m_pDelegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCKeyboardDispatcher>) {
devtools::registerNode<cocos2d::CCKeyboardDispatcher>([](cocos2d::CCKeyboardDispatcher* node) {
    devtools::label("Members for cocos2d::CCKeyboardDispatcher:");
    devtools::property("m_bShiftPressed", node->m_bShiftPressed);
    devtools::property("m_bControlPressed", node->m_bControlPressed);
    devtools::property("m_bAltPressed", node->m_bAltPressed);
    devtools::property("m_bCommandPressed", node->m_bCommandPressed);
    devtools::property("m_bBlockRepeat", node->m_bBlockRepeat);
    devtools::label(fmt::format("cocos2d::CCArray* m_pDelegates at {}", (void*)node->m_pDelegates).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCKeypadDispatcher>) {
devtools::registerNode<cocos2d::CCKeypadDispatcher>([](cocos2d::CCKeypadDispatcher* node) {
    devtools::label("Members for cocos2d::CCKeypadDispatcher:");
    devtools::label(fmt::format("cocos2d::CCArray* m_pDelegates at {}", (void*)node->m_pDelegates).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCSprite>) {
devtools::registerNode<cocos2d::CCSprite>([](cocos2d::CCSprite* node) {
    devtools::label("Members for cocos2d::CCSprite:");
    devtools::property("m_uAtlasIndex", node->m_uAtlasIndex);
    devtools::property("m_bDirty", node->m_bDirty);
    devtools::property("m_bRecursiveDirty", node->m_bRecursiveDirty);
    devtools::property("m_bHasChildren", node->m_bHasChildren);
    devtools::property("m_bShouldBeHidden", node->m_bShouldBeHidden);
    devtools::property("m_obRect", node->m_obRect);
    devtools::property("m_bRectRotated", node->m_bRectRotated);
    devtools::property("m_obOffsetPosition", node->m_obOffsetPosition);
    devtools::property("m_obUnflippedOffsetPositionFromCenter", node->m_obUnflippedOffsetPositionFromCenter);
    devtools::property("m_bOpacityModifyRGB", node->m_bOpacityModifyRGB);
    devtools::property("m_bFlipX", node->m_bFlipX);
    devtools::property("m_bFlipY", node->m_bFlipY);
    devtools::property("m_bDontDraw", node->m_bDontDraw);
    devtools::property("m_bUseVertexMod", node->m_bUseVertexMod);
    devtools::property("m_fTlVertexMod", node->m_fTlVertexMod);
    devtools::property("m_fTrVertexMod", node->m_fTrVertexMod);
    devtools::property("m_fBlVertexMod", node->m_fBlVertexMod);
    devtools::property("m_fBrVertexMod", node->m_fBrVertexMod);
    devtools::property("m_fTextureLeft", node->m_fTextureLeft);
    devtools::property("m_fTextureRight", node->m_fTextureRight);
    devtools::property("m_fTextureBottom", node->m_fTextureBottom);
    devtools::property("m_fTextureTop", node->m_fTextureTop);
    devtools::label(fmt::format("cocos2d::CCTextureAtlas* m_pobTextureAtlas at {}", (void*)node->m_pobTextureAtlas).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pobBatchNode at {}", (void*)node->m_pobBatchNode).c_str());
    devtools::label("cocos2d::CCAffineTransform m_transformToBatch");
    devtools::label("cocos2d::ccBlendFunc m_sBlendFunc");
    devtools::label(fmt::format("cocos2d::CCTexture2D* m_pobTexture at {}", (void*)node->m_pobTexture).c_str());
    devtools::label("cocos2d::ccV3F_C4B_T2F_Quad m_sQuad");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCSpriteBatchNode>) {
devtools::registerNode<cocos2d::CCSpriteBatchNode>([](cocos2d::CCSpriteBatchNode* node) {
    devtools::label("Members for cocos2d::CCSpriteBatchNode:");
    devtools::property("m_bManualSortChildren", node->m_bManualSortChildren);
    devtools::property("m_bManualSortAllChildrenDirty", node->m_bManualSortAllChildrenDirty);
    devtools::label(fmt::format("cocos2d::CCTextureAtlas* m_pobTextureAtlas at {}", (void*)node->m_pobTextureAtlas).c_str());
    devtools::label("cocos2d::ccBlendFunc m_blendFunc");
    devtools::label(fmt::format("cocos2d::CCArray* m_pobDescendants at {}", (void*)node->m_pobDescendants).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCLabelBMFont>) {
devtools::registerNode<cocos2d::CCLabelBMFont>([](cocos2d::CCLabelBMFont* node) {
    devtools::label("Members for cocos2d::CCLabelBMFont:");
    devtools::property("m_sFntFile", node->m_sFntFile);
    devtools::property("m_sInitialStringUTF8", node->m_sInitialStringUTF8);
    devtools::property("m_fWidth", node->m_fWidth);
    devtools::property("m_bLineBreakWithoutSpaces", node->m_bLineBreakWithoutSpaces);
    devtools::property("m_tImageOffset", node->m_tImageOffset);
    devtools::property("m_cDisplayedOpacity", node->m_cDisplayedOpacity);
    devtools::property("m_cRealOpacity", node->m_cRealOpacity);
    devtools::property("m_tDisplayedColor", node->m_tDisplayedColor);
    devtools::property("m_tRealColor", node->m_tRealColor);
    devtools::property("m_bCascadeColorEnabled", node->m_bCascadeColorEnabled);
    devtools::property("m_bCascadeOpacityEnabled", node->m_bCascadeOpacityEnabled);
    devtools::property("m_bIsOpacityModifyRGB", node->m_bIsOpacityModifyRGB);
    devtools::property("m_bIsBatched", node->m_bIsBatched);
    devtools::property("m_nExtraKerning", node->m_nExtraKerning);
    devtools::label(fmt::format("uint16_t* m_sString at {}", (void*)node->m_sString).c_str());
    devtools::label(fmt::format("uint16_t* m_sInitialString at {}", (void*)node->m_sInitialString).c_str());
    devtools::label("cocos2d::CCTextAlignment m_pAlignment");
    devtools::label(fmt::format("cocos2d::CCBMFontConfiguration* m_pConfiguration at {}", (void*)node->m_pConfiguration).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_pReusedChar at {}", (void*)node->m_pReusedChar).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pTargetArray at {}", (void*)node->m_pTargetArray).c_str());
    devtools::label(fmt::format("cocos2d::CCTexture2D* m_pSomeTexture at {}", (void*)node->m_pSomeTexture).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCAnimate>) {
devtools::registerNode<cocos2d::CCAnimate>([](cocos2d::CCAnimate* node) {
    devtools::label("Members for cocos2d::CCAnimate:");
    devtools::property("m_nNextFrame", node->m_nNextFrame);
    devtools::property("m_uExecutedLoops", node->m_uExecutedLoops);
    devtools::property("m_bRecenterFrames", node->m_bRecenterFrames);
    devtools::property("m_bRecenterChildren", node->m_bRecenterChildren);
    devtools::label(fmt::format("gd::vector<float>* m_pSplitTimes at {}", (void*)node->m_pSplitTimes).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteFrame* m_pOrigFrame at {}", (void*)node->m_pOrigFrame).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCArray>) {
devtools::registerNode<cocos2d::CCArray>([](cocos2d::CCArray* node) {
    devtools::label("Members for cocos2d::CCArray:");
    devtools::label(fmt::format("cocos2d::ccArray* data at {}", (void*)node->data).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCDictionary>) {
devtools::registerNode<cocos2d::CCDictionary>([](cocos2d::CCDictionary* node) {
    devtools::label("Members for cocos2d::CCDictionary:");
    devtools::property("m_eDictType", node->m_eDictType);
    devtools::label(fmt::format("cocos2d::CCDictElement* m_pElements at {}", (void*)node->m_pElements).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCDrawNode>) {
devtools::registerNode<cocos2d::CCDrawNode>([](cocos2d::CCDrawNode* node) {
    devtools::label("Members for cocos2d::CCDrawNode:");
    devtools::property("m_uVao", node->m_uVao);
    devtools::property("m_uVbo", node->m_uVbo);
    devtools::property("m_uBufferCapacity", node->m_uBufferCapacity);
    devtools::property("m_nBufferCount", node->m_nBufferCount);
    devtools::property("m_bDirty", node->m_bDirty);
    devtools::property("m_bUseArea", node->m_bUseArea);
    devtools::property("m_rDrawArea", node->m_rDrawArea);
    devtools::property("m_fMinAreaX", node->m_fMinAreaX);
    devtools::property("m_fMaxAreaX", node->m_fMaxAreaX);
    devtools::property("m_fMaxAreaY", node->m_fMaxAreaY);
    devtools::property("m_fMinAreaY", node->m_fMinAreaY);
    devtools::label(fmt::format("cocos2d::ccV2F_C4B_T2F* m_pBuffer at {}", (void*)node->m_pBuffer).c_str());
    devtools::label("cocos2d::ccBlendFunc m_sBlendFunc");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCString>) {
devtools::registerNode<cocos2d::CCString>([](cocos2d::CCString* node) {
    devtools::label("Members for cocos2d::CCString:");
    devtools::property("m_sString", node->m_sString);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCMenuItem>) {
devtools::registerNode<cocos2d::CCMenuItem>([](cocos2d::CCMenuItem* node) {
    devtools::label("Members for cocos2d::CCMenuItem:");
    devtools::property("m_bSelected", node->m_bSelected);
    devtools::property("m_bEnabled", node->m_bEnabled);
    devtools::property("m_nScriptTapHandler", node->m_nScriptTapHandler);
    devtools::property("m_fSizeMult", node->m_fSizeMult);
    devtools::label(fmt::format("cocos2d::CCObject* m_pListener at {}", (void*)node->m_pListener).c_str());
    devtools::label("cocos2d::SEL_MenuHandler m_pfnSelector");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCMenuItemSprite>) {
devtools::registerNode<cocos2d::CCMenuItemSprite>([](cocos2d::CCMenuItemSprite* node) {
    devtools::label("Members for cocos2d::CCMenuItemSprite:");
    devtools::label(fmt::format("cocos2d::CCNode* m_pNormalImage at {}", (void*)node->m_pNormalImage).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_pSelectedImage at {}", (void*)node->m_pSelectedImage).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_pDisabledImage at {}", (void*)node->m_pDisabledImage).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCMenu>) {
devtools::registerNode<cocos2d::CCMenu>([](cocos2d::CCMenu* node) {
    devtools::label("Members for cocos2d::CCMenu:");
    devtools::property("m_bEnabled", node->m_bEnabled);
    devtools::label("cocos2d::tCCMenuState m_eState");
    devtools::label(fmt::format("cocos2d::CCMenuItem* m_pSelectedItem at {}", (void*)node->m_pSelectedItem).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::extension::CCHttpClient>) {
devtools::registerNode<cocos2d::extension::CCHttpClient>([](cocos2d::extension::CCHttpClient* node) {
    devtools::label("Members for cocos2d::extension::CCHttpClient:");
    devtools::property("_timeoutForConnect", node->_timeoutForConnect);
    devtools::property("_timeoutForRead", node->_timeoutForRead);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::extension::CCHttpRequest>) {
devtools::registerNode<cocos2d::extension::CCHttpRequest>([](cocos2d::extension::CCHttpRequest* node) {
    devtools::label("Members for cocos2d::extension::CCHttpRequest:");
    devtools::property("_requestType", node->_requestType);
    devtools::property("_url", node->_url);
    devtools::property("_tag", node->_tag);
    devtools::property("_type", node->_type);
    devtools::property("_shouldCancel", node->_shouldCancel);
    devtools::property("_downloadProgress", node->_downloadProgress);
    devtools::property("_readTimeout", node->_readTimeout);
    devtools::property("_connectTimeout", node->_connectTimeout);
    devtools::label("gd::vector<char> _requestData");
    devtools::label(fmt::format("cocos2d::CCObject* _pTarget at {}", (void*)node->_pTarget).c_str());
    devtools::label("cocos2d::extension::SEL_HttpResponse _pSelector");
    devtools::label(fmt::format("void* _pUserData at {}", (void*)node->_pUserData).c_str());
    devtools::label("gd::vector<gd::string> _headers");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::extension::CCHttpResponse>) {
devtools::registerNode<cocos2d::extension::CCHttpResponse>([](cocos2d::extension::CCHttpResponse* node) {
    devtools::label("Members for cocos2d::extension::CCHttpResponse:");
    devtools::property("_succeed", node->_succeed);
    devtools::property("_responseCode", node->_responseCode);
    devtools::property("_errorBuffer", node->_errorBuffer);
    devtools::label(fmt::format("cocos2d::extension::CCHttpRequest* _pHttpRequest at {}", (void*)node->_pHttpRequest).c_str());
    devtools::label("gd::vector<char> _responseData");
    devtools::label("gd::vector<char> _responseHeader");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, cocos2d::CCLightning>) {
devtools::registerNode<cocos2d::CCLightning>([](cocos2d::CCLightning* node) {
    devtools::label("Members for cocos2d::CCLightning:");
    devtools::property("m_strikePoint", node->m_strikePoint);
    devtools::property("m_strikePoint2", node->m_strikePoint2);
    devtools::property("m_split", node->m_split);
    devtools::property("m_displacement", node->m_displacement);
    devtools::property("m_minDisplacement", node->m_minDisplacement);
    devtools::property("m_seed", node->m_seed);
    devtools::property("m_lineWidth", node->m_lineWidth);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::property("m_removeAfterFinished", node->m_removeAfterFinished);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_opacityModify", node->m_opacityModify);
    devtools::property("m_numPoints", node->m_numPoints);
    devtools::property("m_displayedOpacity", node->m_displayedOpacity);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_displayedColor", node->m_displayedColor);
    devtools::property("m_color", node->m_color);
    devtools::property("m_cascadeColorEnabled", node->m_cascadeColorEnabled);
    devtools::property("m_cascadeOpacityEnabled", node->m_cascadeOpacityEnabled);
    devtools::property("m_opacityModifyEnabled", node->m_opacityModifyEnabled);
    devtools::label(fmt::format("std::array<cocos2d::CCPoint, 200>* m_lightningPoints at {}", (void*)node->m_lightningPoints).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODSound>) {
devtools::registerNode<FMODSound>([](FMODSound* node) {
    devtools::label("Members for FMODSound:");
    devtools::property("m_filePath", node->m_filePath);
    devtools::property("m_length", node->m_length);
    devtools::property("m_playCount", node->m_playCount);
    devtools::property("m_playIndex", node->m_playIndex);
    devtools::property("m_preloaded", node->m_preloaded);
    devtools::label(fmt::format("FMOD::Sound* m_sound at {}", (void*)node->m_sound).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AdvancedFollowInstance>) {
devtools::registerNode<AdvancedFollowInstance>([](AdvancedFollowInstance* node) {
    devtools::label("Members for AdvancedFollowInstance:");
    devtools::property("m_group", node->m_group);
    devtools::property("m_objectKey", node->m_objectKey);
    devtools::property("m_controlId", node->m_controlId);
    devtools::property("m_otherObjectKey", node->m_otherObjectKey);
    devtools::property("m_relatedToGJGameStateUnkUint7", node->m_relatedToGJGameStateUnkUint7);
    devtools::property("m_finished", node->m_finished);
    devtools::property("m_doStart", node->m_doStart);
    devtools::property("m_started", node->m_started);
    devtools::property("m_processed", node->m_processed);
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXTriggerInstance>) {
devtools::registerNode<SFXTriggerInstance>([](SFXTriggerInstance* node) {
    devtools::label("Members for SFXTriggerInstance:");
    devtools::property("m_groupID1", node->m_groupID1);
    devtools::property("m_groupID2", node->m_groupID2);
    devtools::property("m_controlID", node->m_controlID);
    devtools::label(fmt::format("SFXTriggerGameObject* m_sfxTriggerGameObject at {}", (void*)node->m_sfxTriggerGameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EventTriggerInstance>) {
devtools::registerNode<EventTriggerInstance>([](EventTriggerInstance* node) {
    devtools::label("Members for EventTriggerInstance:");
    devtools::property("m_targetID", node->m_targetID);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_inactive", node->m_inactive);
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongChannelState>) {
devtools::registerNode<SongChannelState>([](SongChannelState* node) {
    devtools::label("Members for SongChannelState:");
    devtools::property("m_unkDouble1", node->m_unkDouble1);
    devtools::property("m_unkDouble2", node->m_unkDouble2);
    devtools::label(fmt::format("SongTriggerGameObject* m_songTriggerGameObject1 at {}", (void*)node->m_songTriggerGameObject1).c_str());
    devtools::label(fmt::format("SongTriggerGameObject* m_songTriggerGameObject2 at {}", (void*)node->m_songTriggerGameObject2).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongTriggerState>) {
devtools::registerNode<SongTriggerState>([](SongTriggerState* node) {
    devtools::label("Members for SongTriggerState:");
    devtools::property("m_unkDouble", node->m_unkDouble);
    devtools::label(fmt::format("SongTriggerGameObject* m_songTriggerGameObject at {}", (void*)node->m_songTriggerGameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXStateContainer>) {
devtools::registerNode<SFXStateContainer>([](SFXStateContainer* node) {
    devtools::label("Members for SFXStateContainer:");
    devtools::property("m_unkDouble1", node->m_unkDouble1);
    devtools::property("m_unkDouble2", node->m_unkDouble2);
    devtools::property("m_unkFloat1", node->m_unkFloat1);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_unkBool", node->m_unkBool);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXTriggerState>) {
devtools::registerNode<SFXTriggerState>([](SFXTriggerState* node) {
    devtools::label("Members for SFXTriggerState:");
    devtools::property("m_unkInt1", node->m_unkInt1);
    devtools::property("m_unkDouble1", node->m_unkDouble1);
    devtools::property("m_unkDouble2", node->m_unkDouble2);
    devtools::property("m_unkDouble3", node->m_unkDouble3);
    devtools::property("m_unkDouble4", node->m_unkDouble4);
    devtools::property("m_unkFloat1", node->m_unkFloat1);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_unkFloat3", node->m_unkFloat3);
    devtools::property("m_unkFloat4", node->m_unkFloat4);
    devtools::property("m_unkInt2", node->m_unkInt2);
    devtools::property("m_processed", node->m_processed);
    devtools::property("m_unkBool1", node->m_unkBool1);
    devtools::label(fmt::format("SFXTriggerGameObject* m_sfxTriggerGameObject at {}", (void*)node->m_sfxTriggerGameObject).c_str());
    devtools::label("std::array<SFXStateContainer, 3> m_sfxStateContainers");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ChanceObject>) {
devtools::registerNode<ChanceObject>([](ChanceObject* node) {
    devtools::label("Members for ChanceObject:");
    devtools::property("m_groupID", node->m_groupID);
    devtools::property("m_oldGroupID", node->m_oldGroupID);
    devtools::property("m_chance", node->m_chance);
    devtools::property("m_unk00c", node->m_unk00c);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SmartPrefabResult>) {
devtools::registerNode<SmartPrefabResult>([](SmartPrefabResult* node) {
    devtools::label("Members for SmartPrefabResult:");
    devtools::property("m_binaryKey", node->m_binaryKey);
    devtools::property("m_prefabKey", node->m_prefabKey);
    devtools::property("m_prefabCount", node->m_prefabCount);
    devtools::property("m_unrequired", node->m_unrequired);
    devtools::property("m_rotation", node->m_rotation);
    devtools::property("m_flipX", node->m_flipX);
    devtools::property("m_flipY", node->m_flipY);
    devtools::property("m_ignoreCorners", node->m_ignoreCorners);
    devtools::label(fmt::format("GJSmartPrefab* m_smartPrefab at {}", (void*)node->m_smartPrefab).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameObjectPhysics>) {
devtools::registerNode<GameObjectPhysics>([](GameObjectPhysics* node) {
    devtools::label("Members for GameObjectPhysics:");
    devtools::property("m_unkPoint1", node->m_unkPoint1);
    devtools::property("m_unkPoint2", node->m_unkPoint2);
    devtools::property("m_unkFloat1", node->m_unkFloat1);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_unkInt1", node->m_unkInt1);
    devtools::property("m_unkInt2", node->m_unkInt2);
    devtools::property("m_unkInt3", node->m_unkInt3);
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DynamicObjectAction>) {
devtools::registerNode<DynamicObjectAction>([](DynamicObjectAction* node) {
    devtools::label("Members for DynamicObjectAction:");
    devtools::property("m_unkFloat1", node->m_unkFloat1);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_unkFloat3", node->m_unkFloat3);
    devtools::property("m_unkBool1", node->m_unkBool1);
    devtools::property("m_unkBool2", node->m_unkBool2);
    devtools::property("m_unkBool3", node->m_unkBool3);
    devtools::property("m_unkBool4", node->m_unkBool4);
    devtools::property("m_unkFloat4", node->m_unkFloat4);
    devtools::property("m_unkFloat5", node->m_unkFloat5);
    devtools::property("m_unkFloat6", node->m_unkFloat6);
    devtools::label(fmt::format("GameObject* m_gameObject1 at {}", (void*)node->m_gameObject1).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject2 at {}", (void*)node->m_gameObject2).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject3 at {}", (void*)node->m_gameObject3).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject4 at {}", (void*)node->m_gameObject4).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject5 at {}", (void*)node->m_gameObject5).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject6 at {}", (void*)node->m_gameObject6).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject7 at {}", (void*)node->m_gameObject7).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject8 at {}", (void*)node->m_gameObject8).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJTransformState>) {
devtools::registerNode<GJTransformState>([](GJTransformState* node) {
    devtools::label("Members for GJTransformState:");
    devtools::property("m_scaleX", node->m_scaleX);
    devtools::property("m_scaleY", node->m_scaleY);
    devtools::property("m_angleX", node->m_angleX);
    devtools::property("m_angleY", node->m_angleY);
    devtools::property("m_skewX", node->m_skewX);
    devtools::property("m_skewY", node->m_skewY);
    devtools::property("m_transformRotation", node->m_transformRotation);
    devtools::property("m_transformReset", node->m_transformReset);
    devtools::property("m_transformRotationX", node->m_transformRotationX);
    devtools::property("m_transformRotationY", node->m_transformRotationY);
    devtools::property("m_transformPosition", node->m_transformPosition);
    devtools::property("m_transformSkewX", node->m_transformSkewX);
    devtools::property("m_transformSkewY", node->m_transformSkewY);
    devtools::property("m_transformScaleX", node->m_transformScaleX);
    devtools::property("m_transformScaleY", node->m_transformScaleY);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CAState>) {
devtools::registerNode<CAState>([](CAState* node) {
    devtools::label("Members for CAState:");
    devtools::property("m_fromColor", node->m_fromColor);
    devtools::property("m_toColor", node->m_toColor);
    devtools::property("m_color", node->m_color);
    devtools::property("m_paused", node->m_paused);
    devtools::property("m_blending", node->m_blending);
    devtools::property("m_copyOpacity", node->m_copyOpacity);
    devtools::property("m_legacyHSV", node->m_legacyHSV);
    devtools::property("m_playerColor", node->m_playerColor);
    devtools::property("m_colorID", node->m_colorID);
    devtools::property("m_copyID", node->m_copyID);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_fromOpacity", node->m_fromOpacity);
    devtools::property("m_toOpacity", node->m_toOpacity);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_currentOpacity", node->m_currentOpacity);
    devtools::label("cocos2d::ccHSVValue m_copyHSV");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJPointDouble>) {
devtools::registerNode<GJPointDouble>([](GJPointDouble* node) {
    devtools::label("Members for GJPointDouble:");
    devtools::property("m_x", node->m_x);
    devtools::property("m_y", node->m_y);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SavedObjectStateRef>) {
devtools::registerNode<SavedObjectStateRef>([](SavedObjectStateRef* node) {
    devtools::label("Members for SavedObjectStateRef:");
    devtools::property("m_positionX", node->m_positionX);
    devtools::property("m_positionY", node->m_positionY);
    devtools::property("m_rotationXOffset", node->m_rotationXOffset);
    devtools::property("m_rotationYOffset", node->m_rotationYOffset);
    devtools::property("m_addToCustomScaleX", node->m_addToCustomScaleX);
    devtools::property("m_addToCustomScaleY", node->m_addToCustomScaleY);
    devtools::property("m_unkFloat3", node->m_unkFloat3);
    devtools::property("m_unkFloat4", node->m_unkFloat4);
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SavedActiveObjectState>) {
devtools::registerNode<SavedActiveObjectState>([](SavedActiveObjectState* node) {
    devtools::label("Members for SavedActiveObjectState:");
    devtools::property("m_activatedByPlayer1", node->m_activatedByPlayer1);
    devtools::property("m_activatedByPlayer2", node->m_activatedByPlayer2);
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SavedSpecialObjectState>) {
devtools::registerNode<SavedSpecialObjectState>([](SavedSpecialObjectState* node) {
    devtools::label("Members for SavedSpecialObjectState:");
    devtools::property("m_animationID", node->m_animationID);
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SequenceTriggerState>) {
devtools::registerNode<SequenceTriggerState>([](SequenceTriggerState* node) {
    devtools::label("Members for SequenceTriggerState:");
    devtools::label("gd::unordered_map<int,float> m_unkUnorderedMap1");
    devtools::label("gd::unordered_map<int,int> m_unkUnorderedMap2");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODSoundTween>) {
devtools::registerNode<FMODSoundTween>([](FMODSoundTween* node) {
    devtools::label("Members for FMODSoundTween:");
    devtools::property("m_interval", node->m_interval);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_start", node->m_start);
    devtools::property("m_end", node->m_end);
    devtools::property("m_value", node->m_value);
    devtools::property("m_finished", node->m_finished);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODQueuedMusic>) {
devtools::registerNode<FMODQueuedMusic>([](FMODQueuedMusic* node) {
    devtools::label("Members for FMODQueuedMusic:");
    devtools::property("m_filePath", node->m_filePath);
    devtools::property("m_pitch", node->m_pitch);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_volume", node->m_volume);
    devtools::property("m_start", node->m_start);
    devtools::property("m_end", node->m_end);
    devtools::property("m_fadeIn", node->m_fadeIn);
    devtools::property("m_fadeOut", node->m_fadeOut);
    devtools::property("m_loop", node->m_loop);
    devtools::property("m_musicID", node->m_musicID);
    devtools::property("m_stopMusic", node->m_stopMusic);
    devtools::property("m_channelID", node->m_channelID);
    devtools::property("m_noPrepare", node->m_noPrepare);
    devtools::property("m_queuedStatus", node->m_queuedStatus);
    devtools::property("m_dontReset", node->m_dontReset);
    devtools::label(fmt::format("FMOD::Sound* m_sound at {}", (void*)node->m_sound).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SoundStateContainer>) {
devtools::registerNode<SoundStateContainer>([](SoundStateContainer* node) {
    devtools::label("Members for SoundStateContainer:");
    devtools::property("m_fadePointCount", node->m_fadePointCount);
    devtools::property("m_currentOffset", node->m_currentOffset);
    devtools::property("m_loopStartMs", node->m_loopStartMs);
    devtools::property("m_loopEndMs", node->m_loopEndMs);
    devtools::property("m_currentMs", node->m_currentMs);
    devtools::property("m_playStartOffset", node->m_playStartOffset);
    devtools::property("m_playEndOffset", node->m_playEndOffset);
    devtools::property("m_usePlayOffsets", node->m_usePlayOffsets);
    devtools::label("std::array<float, 4> m_fadePointVolumes");
    devtools::label("std::array<uint64_t, 4> m_fadePointOffsets");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODSoundState>) {
devtools::registerNode<FMODSoundState>([](FMODSoundState* node) {
    devtools::label("Members for FMODSoundState:");
    devtools::property("m_filePath", node->m_filePath);
    devtools::property("m_speed", node->m_speed);
    devtools::property("m_unkFloat1", node->m_unkFloat1);
    devtools::property("m_volume", node->m_volume);
    devtools::property("m_shouldLoop", node->m_shouldLoop);
    devtools::property("m_channelID", node->m_channelID);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_sfxGroup", node->m_sfxGroup);
    devtools::property("m_pitch", node->m_pitch);
    devtools::property("m_fastFourierTransform", node->m_fastFourierTransform);
    devtools::property("m_reverb", node->m_reverb);
    devtools::property("m_effectID", node->m_effectID);
    devtools::property("m_isMusic", node->m_isMusic);
    devtools::property("m_musicID", node->m_musicID);
    devtools::property("m_unkBool2", node->m_unkBool2);
    devtools::label("SoundStateContainer m_soundStateContainer");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TimerItem>) {
devtools::registerNode<TimerItem>([](TimerItem* node) {
    devtools::label("Members for TimerItem:");
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_time", node->m_time);
    devtools::property("m_active", node->m_active);
    devtools::property("m_timeMod", node->m_timeMod);
    devtools::property("m_ignoreTimeWarp", node->m_ignoreTimeWarp);
    devtools::property("m_targetTime", node->m_targetTime);
    devtools::property("m_stopTimeEnabled", node->m_stopTimeEnabled);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_disabled", node->m_disabled);
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EnterEffectAnimValue>) {
devtools::registerNode<EnterEffectAnimValue>([](EnterEffectAnimValue* node) {
    devtools::label("Members for EnterEffectAnimValue:");
    devtools::property("m_key", node->m_key);
    devtools::property("m_value", node->m_value);
    devtools::property("m_distance", node->m_distance);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_elapsed", node->m_elapsed);
    devtools::enumerable("m_easingType", node->m_easingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_easingRate", node->m_easingRate);
    devtools::property("m_easingBuffer", node->m_easingBuffer);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DynamicMoveCalculation>) {
devtools::registerNode<DynamicMoveCalculation>([](DynamicMoveCalculation* node) {
    devtools::label("Members for DynamicMoveCalculation:");
    devtools::property("m_offset", node->m_offset);
    devtools::label(fmt::format("CCMoveCNode* m_moveNode at {}", (void*)node->m_moveNode).c_str());
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, tk_spline>) {
devtools::registerNode<tk_spline>([](tk_spline* node) {
    devtools::label("Members for tk_spline:");
    devtools::property("m_c0", node->m_c0);
    devtools::property("m_type", node->m_type);
    devtools::property("m_left", node->m_left);
    devtools::property("m_right", node->m_right);
    devtools::property("m_leftValue", node->m_leftValue);
    devtools::property("m_rightValue", node->m_rightValue);
    devtools::property("m_madeMonotonic", node->m_madeMonotonic);
    devtools::label("gd::vector<double> m_x");
    devtools::label("gd::vector<double> m_y");
    devtools::label("gd::vector<double> m_b");
    devtools::label("gd::vector<double> m_c");
    devtools::label("gd::vector<double> m_d");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJDropDownLayer>) {
devtools::registerNode<GJDropDownLayer>([](GJDropDownLayer* node) {
    devtools::label("Members for GJDropDownLayer:");
    devtools::property("m_endPosition", node->m_endPosition);
    devtools::property("m_startPosition", node->m_startPosition);
    devtools::property("m_closeOnHide", node->m_closeOnHide);
    devtools::property("m_fastMenu", node->m_fastMenu);
    devtools::label(fmt::format("cocos2d::CCMenu* m_buttonMenu at {}", (void*)node->m_buttonMenu).c_str());
    devtools::label(fmt::format("GJListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
    devtools::label(fmt::format("GJDropDownLayerDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AccountHelpLayer>) {
devtools::registerNode<AccountHelpLayer>([](AccountHelpLayer* node) {
    devtools::label("Members for AccountHelpLayer:");
    devtools::property("m_unk290", node->m_unk290);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_loginStatusLabel at {}", (void*)node->m_loginStatusLabel).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshLoginButton at {}", (void*)node->m_refreshLoginButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_unlinkAccountButton at {}", (void*)node->m_unlinkAccountButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AccountLayer>) {
devtools::registerNode<AccountLayer>([](AccountLayer* node) {
    devtools::label("Members for AccountLayer:");
    devtools::property("m_accountHelpRelated", node->m_accountHelpRelated);
    devtools::property("m_isLoggedIn", node->m_isLoggedIn);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_linkedAccountTitle at {}", (void*)node->m_linkedAccountTitle).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_loginButton at {}", (void*)node->m_loginButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_registerButton at {}", (void*)node->m_registerButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_backupButton at {}", (void*)node->m_backupButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_syncButton at {}", (void*)node->m_syncButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_helpButton at {}", (void*)node->m_helpButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_moreButton at {}", (void*)node->m_moreButton).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FLAlertLayer>) {
devtools::registerNode<FLAlertLayer>([](FLAlertLayer* node) {
    devtools::label("Members for FLAlertLayer:");
    devtools::property("m_reverseKeyBack", node->m_reverseKeyBack);
    devtools::property("m_color", node->m_color);
    devtools::property("m_ZOrder", node->m_ZOrder);
    devtools::property("m_noElasticity", node->m_noElasticity);
    devtools::property("m_color2", node->m_color2);
    devtools::property("m_controlConnected", node->m_controlConnected);
    devtools::property("m_containsBorder", node->m_containsBorder);
    devtools::property("m_noAction", node->m_noAction);
    devtools::property("m_joystickConnected", node->m_joystickConnected);
    devtools::property("m_forcePrioRegistered", node->m_forcePrioRegistered);
    devtools::label(fmt::format("cocos2d::CCMenu* m_buttonMenu at {}", (void*)node->m_buttonMenu).c_str());
    devtools::label(fmt::format("FLAlertLayerProtocol* m_alertProtocol at {}", (void*)node->m_alertProtocol).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_scene at {}", (void*)node->m_scene).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
    devtools::label(fmt::format("ButtonSprite* m_button1 at {}", (void*)node->m_button1).c_str());
    devtools::label(fmt::format("ButtonSprite* m_button2 at {}", (void*)node->m_button2).c_str());
    devtools::label(fmt::format("ScrollingLayer* m_scrollingLayer at {}", (void*)node->m_scrollingLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AccountLoginLayer>) {
devtools::registerNode<AccountLoginLayer>([](AccountLoginLayer* node) {
    devtools::label("Members for AccountLoginLayer:");
    devtools::property("m_username", node->m_username);
    devtools::property("m_password", node->m_password);
    devtools::label(fmt::format("CCTextInputNode* m_usernameInput at {}", (void*)node->m_usernameInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_passwordInput at {}", (void*)node->m_passwordInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_usernameLabel at {}", (void*)node->m_usernameLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_passwordLabel at {}", (void*)node->m_passwordLabel).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AccountRegisterLayer>) {
devtools::registerNode<AccountRegisterLayer>([](AccountRegisterLayer* node) {
    devtools::label("Members for AccountRegisterLayer:");
    devtools::property("m_lockInput", node->m_lockInput);
    devtools::label(fmt::format("CCTextInputNode* m_usernameField at {}", (void*)node->m_usernameField).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_passwordField at {}", (void*)node->m_passwordField).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_confirmPasswordField at {}", (void*)node->m_confirmPasswordField).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_emailField at {}", (void*)node->m_emailField).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_verifyEmailField at {}", (void*)node->m_verifyEmailField).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_usernameLabel at {}", (void*)node->m_usernameLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_passwordLabel at {}", (void*)node->m_passwordLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_confirmPasswordLabel at {}", (void*)node->m_confirmPasswordLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_emailLabel at {}", (void*)node->m_emailLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_verifyEmailLabel at {}", (void*)node->m_verifyEmailLabel).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AchievementBar>) {
devtools::registerNode<AchievementBar>([](AchievementBar* node) {
    devtools::label("Members for AchievementBar:");
    devtools::property("m_unkUnused", node->m_unkUnused);
    devtools::label(fmt::format("cocos2d::CCLayerColor* m_layerColor at {}", (void*)node->m_layerColor).c_str());
    devtools::label(fmt::format("cocos2d::CCScene* m_nextScene at {}", (void*)node->m_nextScene).c_str());
    devtools::label(fmt::format("cocos2d::extension::CCScale9Sprite* m_bg at {}", (void*)node->m_bg).c_str());
    devtools::label(fmt::format("cocos2d::extension::CCScale9Sprite* m_bg2 at {}", (void*)node->m_bg2).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_achievementGlowSprite at {}", (void*)node->m_achievementGlowSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_achievementSprite at {}", (void*)node->m_achievementSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_titleLabel at {}", (void*)node->m_titleLabel).c_str());
    devtools::label(fmt::format("TextArea* m_achievementDescription at {}", (void*)node->m_achievementDescription).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCIndexPath>) {
devtools::registerNode<CCIndexPath>([](CCIndexPath* node) {
    devtools::label("Members for CCIndexPath:");
    devtools::property("m_row", node->m_row);
    devtools::property("m_section", node->m_section);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TableViewCell>) {
devtools::registerNode<TableViewCell>([](TableViewCell* node) {
    devtools::label("Members for TableViewCell:");
    devtools::property("m_cellIdentifier", node->m_cellIdentifier);
    devtools::property("m_width", node->m_width);
    devtools::property("m_height", node->m_height);
    devtools::enumerable("m_listType", node->m_listType, {
        { BoomListType::Default, "BoomListType::Default" },
        { BoomListType::User, "BoomListType::User" },
        { BoomListType::Stats, "BoomListType::Stats" },
        { BoomListType::Achievement, "BoomListType::Achievement" },
        { BoomListType::Level, "BoomListType::Level" },
        { BoomListType::Level2, "BoomListType::Level2" },
        { BoomListType::Comment, "BoomListType::Comment" },
        { BoomListType::Comment2, "BoomListType::Comment2" },
        { BoomListType::Comment3, "BoomListType::Comment3" },
        { BoomListType::List, "BoomListType::List" },
        { BoomListType::Game, "BoomListType::Game" },
        { BoomListType::Song, "BoomListType::Song" },
        { BoomListType::Score, "BoomListType::Score" },
        { BoomListType::MapPack, "BoomListType::MapPack" },
        { BoomListType::CustomSong, "BoomListType::CustomSong" },
        { BoomListType::Comment4, "BoomListType::Comment4" },
        { BoomListType::User2, "BoomListType::User2" },
        { BoomListType::Request, "BoomListType::Request" },
        { BoomListType::Message, "BoomListType::Message" },
        { BoomListType::LevelScore, "BoomListType::LevelScore" },
        { BoomListType::Artist, "BoomListType::Artist" },
        { BoomListType::SmartTemplate, "BoomListType::SmartTemplate" },
        { BoomListType::SFX, "BoomListType::SFX" },
        { BoomListType::SFX2, "BoomListType::SFX2" },
        { BoomListType::CustomMusic, "BoomListType::CustomMusic" },
        { BoomListType::Options, "BoomListType::Options" },
        { BoomListType::LevelList, "BoomListType::LevelList" },
        { BoomListType::Level3, "BoomListType::Level3" },
        { BoomListType::LevelList2, "BoomListType::LevelList2" },
        { BoomListType::LevelList3, "BoomListType::LevelList3" },
        { BoomListType::Level4, "BoomListType::Level4" },
        { BoomListType::LocalLevelScore, "BoomListType::LocalLevelScore" },
        { BoomListType::URL, "BoomListType::URL" },
    });
    devtools::label(fmt::format("void* m_unknown at {}", (void*)node->m_unknown).c_str());
    devtools::label(fmt::format("TableView* m_tableView at {}", (void*)node->m_tableView).c_str());
    devtools::label("CCIndexPath m_indexPath");
    devtools::label(fmt::format("void* m_unknown2 at {}", (void*)node->m_unknown2).c_str());
    devtools::label(fmt::format("cocos2d::CCLayerColor* m_backgroundLayer at {}", (void*)node->m_backgroundLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AchievementManager>) {
devtools::registerNode<AchievementManager>([](AchievementManager* node) {
    devtools::label("Members for AchievementManager:");
    devtools::property("m_dontNotify", node->m_dontNotify);
    devtools::property("m_order", node->m_order);
    devtools::label(fmt::format("cocos2d::CCArray* m_allAchievements at {}", (void*)node->m_allAchievements).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_platformAchievements at {}", (void*)node->m_platformAchievements).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_achievementUnlocks at {}", (void*)node->m_achievementUnlocks).c_str());
    devtools::label(fmt::format("void* m_unkPtrUnused at {}", (void*)node->m_unkPtrUnused).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_reportedAchievements at {}", (void*)node->m_reportedAchievements).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_allAchievementsSorted at {}", (void*)node->m_allAchievementsSorted).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unAchieved at {}", (void*)node->m_unAchieved).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AchievementNotifier>) {
devtools::registerNode<AchievementNotifier>([](AchievementNotifier* node) {
    devtools::label("Members for AchievementNotifier:");
    devtools::label(fmt::format("cocos2d::CCScene* m_nextScene at {}", (void*)node->m_nextScene).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_achievementBarArray at {}", (void*)node->m_achievementBarArray).c_str());
    devtools::label(fmt::format("AchievementBar* m_activeAchievementBar at {}", (void*)node->m_activeAchievementBar).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AchievementsLayer>) {
devtools::registerNode<AchievementsLayer>([](AchievementsLayer* node) {
    devtools::label("Members for AchievementsLayer:");
    devtools::property("m_currentPage", node->m_currentPage);
    devtools::property("m_unkPoint", node->m_unkPoint);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextPageButton at {}", (void*)node->m_nextPageButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevPageButton at {}", (void*)node->m_prevPageButton).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageLabel at {}", (void*)node->m_pageLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCSpritePlus>) {
devtools::registerNode<CCSpritePlus>([](CCSpritePlus* node) {
    devtools::label("Members for CCSpritePlus:");
    devtools::property("m_hasFollower", node->m_hasFollower);
    devtools::property("m_propagateScaleChanges", node->m_propagateScaleChanges);
    devtools::property("m_propagateFlipChanges", node->m_propagateFlipChanges);
    devtools::label(fmt::format("cocos2d::CCArray* m_followers at {}", (void*)node->m_followers).c_str());
    devtools::label(fmt::format("CCSpritePlus* m_followingSprite at {}", (void*)node->m_followingSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameObject>) {
devtools::registerNode<GameObject>([](GameObject* node) {
    devtools::label("Members for GameObject:");
    devtools::property("m_someOtherIndex", node->m_someOtherIndex);
    devtools::property("m_innerSectionIndex", node->m_innerSectionIndex);
    devtools::property("m_outerSectionIndex", node->m_outerSectionIndex);
    devtools::property("m_middleSectionIndex", node->m_middleSectionIndex);
    devtools::property("m_hasExtendedCollision", node->m_hasExtendedCollision);
    devtools::property("m_groupColor", node->m_groupColor);
    devtools::property("m_unk280", node->m_unk280);
    devtools::property("m_unk281", node->m_unk281);
    devtools::property("m_blackChildOpacity", node->m_blackChildOpacity);
    devtools::property("m_unk288", node->m_unk288);
    devtools::property("m_editorEnabled", node->m_editorEnabled);
    devtools::property("m_isGroupDisabled", node->m_isGroupDisabled);
    devtools::property("m_unk28B", node->m_unk28B);
    devtools::property("m_unk28c", node->m_unk28c);
    devtools::property("m_activeMainColorID", node->m_activeMainColorID);
    devtools::property("m_activeDetailColorID", node->m_activeDetailColorID);
    devtools::property("m_baseUsesHSV", node->m_baseUsesHSV);
    devtools::property("m_detailUsesHSV", node->m_detailUsesHSV);
    devtools::property("m_positionXOffset", node->m_positionXOffset);
    devtools::property("m_positionYOffset", node->m_positionYOffset);
    devtools::property("m_rotationXOffset", node->m_rotationXOffset);
    devtools::property("m_unk2A8", node->m_unk2A8);
    devtools::property("m_rotationYOffset", node->m_rotationYOffset);
    devtools::property("m_unk2B0", node->m_unk2B0);
    devtools::property("m_scaleXOffset", node->m_scaleXOffset);
    devtools::property("m_scaleYOffset", node->m_scaleYOffset);
    devtools::property("m_unk2BC", node->m_unk2BC);
    devtools::property("m_unk2C0", node->m_unk2C0);
    devtools::property("m_tempOffsetXRelated", node->m_tempOffsetXRelated);
    devtools::property("m_isFlipX", node->m_isFlipX);
    devtools::property("m_isFlipY", node->m_isFlipY);
    devtools::property("m_customBoxOffset", node->m_customBoxOffset);
    devtools::property("m_boxOffsetCalculated", node->m_boxOffsetCalculated);
    devtools::property("m_boxOffset", node->m_boxOffset);
    devtools::property("m_shouldUseOuterOb", node->m_shouldUseOuterOb);
    devtools::property("m_isRingPoweredOn", node->m_isRingPoweredOn);
    devtools::property("m_width", node->m_width);
    devtools::property("m_height", node->m_height);
    devtools::property("m_hasSpecialChild", node->m_hasSpecialChild);
    devtools::property("m_isActivated", node->m_isActivated);
    devtools::property("m_isDisabled2", node->m_isDisabled2);
    devtools::property("m_particleString", node->m_particleString);
    devtools::property("m_hasParticles", node->m_hasParticles);
    devtools::property("m_particleUseObjectColor", node->m_particleUseObjectColor);
    devtools::property("m_hasColorSprite", node->m_hasColorSprite);
    devtools::property("m_particleOffset", node->m_particleOffset);
    devtools::property("m_isSomeSpriteScalable", node->m_isSomeSpriteScalable);
    devtools::property("m_textureRect", node->m_textureRect);
    devtools::property("m_isDirty", node->m_isDirty);
    devtools::property("m_isObjectPosDirty", node->m_isObjectPosDirty);
    devtools::property("m_isUnmodifiedPosDirty", node->m_isUnmodifiedPosDirty);
    devtools::property("m_fadeMargin", node->m_fadeMargin);
    devtools::property("m_objectRect", node->m_objectRect);
    devtools::property("m_isObjectRectDirty", node->m_isObjectRectDirty);
    devtools::property("m_isOrientedBoxDirty", node->m_isOrientedBoxDirty);
    devtools::property("m_colorSpriteLocked", node->m_colorSpriteLocked);
    devtools::property("m_unk353", node->m_unk353);
    devtools::property("m_canRotateFree", node->m_canRotateFree);
    devtools::property("m_isMirroredByScale", node->m_isMirroredByScale);
    devtools::property("m_linkedGroup", node->m_linkedGroup);
    devtools::property("m_unk35C", node->m_unk35C);
    devtools::property("m_colorType", node->m_colorType);
    devtools::property("m_childColorType", node->m_childColorType);
    devtools::property("m_shouldBlendBase", node->m_shouldBlendBase);
    devtools::property("m_shouldBlendDetail", node->m_shouldBlendDetail);
    devtools::property("m_hasCustomChild", node->m_hasCustomChild);
    devtools::property("m_unk367", node->m_unk367);
    devtools::property("m_unk370", node->m_unk370);
    devtools::property("m_objectRadius", node->m_objectRadius);
    devtools::property("m_isRotationAligned", node->m_isRotationAligned);
    devtools::property("m_spriteWidthScale", node->m_spriteWidthScale);
    devtools::property("m_spriteHeightScale", node->m_spriteHeightScale);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::enumerable("m_objectType", node->m_objectType, {
        { GameObjectType::Solid, "GameObjectType::Solid" },
        { GameObjectType::Hazard, "GameObjectType::Hazard" },
        { GameObjectType::InverseGravityPortal, "GameObjectType::InverseGravityPortal" },
        { GameObjectType::NormalGravityPortal, "GameObjectType::NormalGravityPortal" },
        { GameObjectType::ShipPortal, "GameObjectType::ShipPortal" },
        { GameObjectType::CubePortal, "GameObjectType::CubePortal" },
        { GameObjectType::Decoration, "GameObjectType::Decoration" },
        { GameObjectType::YellowJumpPad, "GameObjectType::YellowJumpPad" },
        { GameObjectType::PinkJumpPad, "GameObjectType::PinkJumpPad" },
        { GameObjectType::GravityPad, "GameObjectType::GravityPad" },
        { GameObjectType::YellowJumpRing, "GameObjectType::YellowJumpRing" },
        { GameObjectType::PinkJumpRing, "GameObjectType::PinkJumpRing" },
        { GameObjectType::GravityRing, "GameObjectType::GravityRing" },
        { GameObjectType::InverseMirrorPortal, "GameObjectType::InverseMirrorPortal" },
        { GameObjectType::NormalMirrorPortal, "GameObjectType::NormalMirrorPortal" },
        { GameObjectType::BallPortal, "GameObjectType::BallPortal" },
        { GameObjectType::RegularSizePortal, "GameObjectType::RegularSizePortal" },
        { GameObjectType::MiniSizePortal, "GameObjectType::MiniSizePortal" },
        { GameObjectType::UfoPortal, "GameObjectType::UfoPortal" },
        { GameObjectType::Modifier, "GameObjectType::Modifier" },
        { GameObjectType::Breakable, "GameObjectType::Breakable" },
        { GameObjectType::SecretCoin, "GameObjectType::SecretCoin" },
        { GameObjectType::DualPortal, "GameObjectType::DualPortal" },
        { GameObjectType::SoloPortal, "GameObjectType::SoloPortal" },
        { GameObjectType::Slope, "GameObjectType::Slope" },
        { GameObjectType::WavePortal, "GameObjectType::WavePortal" },
        { GameObjectType::RobotPortal, "GameObjectType::RobotPortal" },
        { GameObjectType::TeleportPortal, "GameObjectType::TeleportPortal" },
        { GameObjectType::GreenRing, "GameObjectType::GreenRing" },
        { GameObjectType::Collectible, "GameObjectType::Collectible" },
        { GameObjectType::UserCoin, "GameObjectType::UserCoin" },
        { GameObjectType::DropRing, "GameObjectType::DropRing" },
        { GameObjectType::SpiderPortal, "GameObjectType::SpiderPortal" },
        { GameObjectType::RedJumpPad, "GameObjectType::RedJumpPad" },
        { GameObjectType::RedJumpRing, "GameObjectType::RedJumpRing" },
        { GameObjectType::CustomRing, "GameObjectType::CustomRing" },
        { GameObjectType::DashRing, "GameObjectType::DashRing" },
        { GameObjectType::GravityDashRing, "GameObjectType::GravityDashRing" },
        { GameObjectType::CollisionObject, "GameObjectType::CollisionObject" },
        { GameObjectType::Special, "GameObjectType::Special" },
        { GameObjectType::SwingPortal, "GameObjectType::SwingPortal" },
        { GameObjectType::GravityTogglePortal, "GameObjectType::GravityTogglePortal" },
        { GameObjectType::SpiderOrb, "GameObjectType::SpiderOrb" },
        { GameObjectType::SpiderPad, "GameObjectType::SpiderPad" },
        { GameObjectType::EnterEffectObject, "GameObjectType::EnterEffectObject" },
        { GameObjectType::TeleportOrb, "GameObjectType::TeleportOrb" },
        { GameObjectType::AnimatedHazard, "GameObjectType::AnimatedHazard" },
    });
    devtools::enumerable("m_savedObjectType", node->m_savedObjectType, {
        { GameObjectType::Solid, "GameObjectType::Solid" },
        { GameObjectType::Hazard, "GameObjectType::Hazard" },
        { GameObjectType::InverseGravityPortal, "GameObjectType::InverseGravityPortal" },
        { GameObjectType::NormalGravityPortal, "GameObjectType::NormalGravityPortal" },
        { GameObjectType::ShipPortal, "GameObjectType::ShipPortal" },
        { GameObjectType::CubePortal, "GameObjectType::CubePortal" },
        { GameObjectType::Decoration, "GameObjectType::Decoration" },
        { GameObjectType::YellowJumpPad, "GameObjectType::YellowJumpPad" },
        { GameObjectType::PinkJumpPad, "GameObjectType::PinkJumpPad" },
        { GameObjectType::GravityPad, "GameObjectType::GravityPad" },
        { GameObjectType::YellowJumpRing, "GameObjectType::YellowJumpRing" },
        { GameObjectType::PinkJumpRing, "GameObjectType::PinkJumpRing" },
        { GameObjectType::GravityRing, "GameObjectType::GravityRing" },
        { GameObjectType::InverseMirrorPortal, "GameObjectType::InverseMirrorPortal" },
        { GameObjectType::NormalMirrorPortal, "GameObjectType::NormalMirrorPortal" },
        { GameObjectType::BallPortal, "GameObjectType::BallPortal" },
        { GameObjectType::RegularSizePortal, "GameObjectType::RegularSizePortal" },
        { GameObjectType::MiniSizePortal, "GameObjectType::MiniSizePortal" },
        { GameObjectType::UfoPortal, "GameObjectType::UfoPortal" },
        { GameObjectType::Modifier, "GameObjectType::Modifier" },
        { GameObjectType::Breakable, "GameObjectType::Breakable" },
        { GameObjectType::SecretCoin, "GameObjectType::SecretCoin" },
        { GameObjectType::DualPortal, "GameObjectType::DualPortal" },
        { GameObjectType::SoloPortal, "GameObjectType::SoloPortal" },
        { GameObjectType::Slope, "GameObjectType::Slope" },
        { GameObjectType::WavePortal, "GameObjectType::WavePortal" },
        { GameObjectType::RobotPortal, "GameObjectType::RobotPortal" },
        { GameObjectType::TeleportPortal, "GameObjectType::TeleportPortal" },
        { GameObjectType::GreenRing, "GameObjectType::GreenRing" },
        { GameObjectType::Collectible, "GameObjectType::Collectible" },
        { GameObjectType::UserCoin, "GameObjectType::UserCoin" },
        { GameObjectType::DropRing, "GameObjectType::DropRing" },
        { GameObjectType::SpiderPortal, "GameObjectType::SpiderPortal" },
        { GameObjectType::RedJumpPad, "GameObjectType::RedJumpPad" },
        { GameObjectType::RedJumpRing, "GameObjectType::RedJumpRing" },
        { GameObjectType::CustomRing, "GameObjectType::CustomRing" },
        { GameObjectType::DashRing, "GameObjectType::DashRing" },
        { GameObjectType::GravityDashRing, "GameObjectType::GravityDashRing" },
        { GameObjectType::CollisionObject, "GameObjectType::CollisionObject" },
        { GameObjectType::Special, "GameObjectType::Special" },
        { GameObjectType::SwingPortal, "GameObjectType::SwingPortal" },
        { GameObjectType::GravityTogglePortal, "GameObjectType::GravityTogglePortal" },
        { GameObjectType::SpiderOrb, "GameObjectType::SpiderOrb" },
        { GameObjectType::SpiderPad, "GameObjectType::SpiderPad" },
        { GameObjectType::EnterEffectObject, "GameObjectType::EnterEffectObject" },
        { GameObjectType::TeleportOrb, "GameObjectType::TeleportOrb" },
        { GameObjectType::AnimatedHazard, "GameObjectType::AnimatedHazard" },
    });
    devtools::property("m_unk390", node->m_unk390);
    devtools::property("m_unmodifiedPositionX", node->m_unmodifiedPositionX);
    devtools::property("m_unmodifiedPositionY", node->m_unmodifiedPositionY);
    devtools::property("m_positionX", node->m_positionX);
    devtools::property("m_positionY", node->m_positionY);
    devtools::property("m_startPosition", node->m_startPosition);
    devtools::property("m_usesAudioScale", node->m_usesAudioScale);
    devtools::property("m_hasNoAudioScale", node->m_hasNoAudioScale);
    devtools::property("m_isDisabled", node->m_isDisabled);
    devtools::property("m_startRotationX", node->m_startRotationX);
    devtools::property("m_startRotationY", node->m_startRotationY);
    devtools::property("m_startScaleX", node->m_startScaleX);
    devtools::property("m_startScaleY", node->m_startScaleY);
    devtools::property("m_customScaleX", node->m_customScaleX);
    devtools::property("m_customScaleY", node->m_customScaleY);
    devtools::property("m_startFlipX", node->m_startFlipX);
    devtools::property("m_startFlipY", node->m_startFlipY);
    devtools::property("m_unk3ee", node->m_unk3ee);
    devtools::property("m_isInvisible", node->m_isInvisible);
    devtools::property("m_unk3D8", node->m_unk3D8);
    devtools::property("m_varianceIndex", node->m_varianceIndex);
    devtools::property("m_unk3DE", node->m_unk3DE);
    devtools::property("m_enterType", node->m_enterType);
    devtools::property("m_exitType", node->m_exitType);
    devtools::property("m_enterChannel", node->m_enterChannel);
    devtools::property("m_objectMaterial", node->m_objectMaterial);
    devtools::property("m_unk3E8", node->m_unk3E8);
    devtools::property("m_parentMode", node->m_parentMode);
    devtools::property("m_hasNoGlow", node->m_hasNoGlow);
    devtools::property("m_targetColor", node->m_targetColor);
    devtools::property("m_objectID", node->m_objectID);
    devtools::property("m_unk3F8", node->m_unk3F8);
    devtools::property("m_intrinsicDontFade", node->m_intrinsicDontFade);
    devtools::property("m_ignoreEnter", node->m_ignoreEnter);
    devtools::property("m_ignoreFade", node->m_ignoreFade);
    devtools::property("m_isSolidColorBlock", node->m_isSolidColorBlock);
    devtools::property("m_baseOrDetailBlending", node->m_baseOrDetailBlending);
    devtools::property("m_customSpriteColor", node->m_customSpriteColor);
    devtools::property("m_customColorType", node->m_customColorType);
    devtools::property("m_isDontEnter", node->m_isDontEnter);
    devtools::property("m_isDontFade", node->m_isDontFade);
    devtools::property("m_hasNoEffects", node->m_hasNoEffects);
    devtools::property("m_hasNoParticles", node->m_hasNoParticles);
    devtools::property("m_defaultZOrder", node->m_defaultZOrder);
    devtools::property("m_unk40C", node->m_unk40C);
    devtools::property("m_colorZLayerRelated", node->m_colorZLayerRelated);
    devtools::property("m_customAudioScale", node->m_customAudioScale);
    devtools::property("m_minAudioScale", node->m_minAudioScale);
    devtools::property("m_maxAudioScale", node->m_maxAudioScale);
    devtools::property("m_particleLocked", node->m_particleLocked);
    devtools::property("m_property53", node->m_property53);
    devtools::property("m_isInvisibleBlock", node->m_isInvisibleBlock);
    devtools::property("m_glowColorIsLBG", node->m_glowColorIsLBG);
    devtools::property("m_customGlowColor", node->m_customGlowColor);
    devtools::property("m_cantColorGlow", node->m_cantColorGlow);
    devtools::property("m_opacityMod", node->m_opacityMod);
    devtools::property("m_slopeUphill", node->m_slopeUphill);
    devtools::property("m_slopeDirection", node->m_slopeDirection);
    devtools::property("m_slopeIsHazard", node->m_slopeIsHazard);
    devtools::property("m_opacityMod2", node->m_opacityMod2);
    devtools::property("m_unk448", node->m_unk448);
    devtools::enumerable("m_defaultZLayer", node->m_defaultZLayer, {
        { ZLayer::B5, "ZLayer::B5" },
        { ZLayer::B4, "ZLayer::B4" },
        { ZLayer::B3, "ZLayer::B3" },
        { ZLayer::B2, "ZLayer::B2" },
        { ZLayer::B1, "ZLayer::B1" },
        { ZLayer::Default, "ZLayer::Default" },
        { ZLayer::T1, "ZLayer::T1" },
        { ZLayer::T2, "ZLayer::T2" },
        { ZLayer::T3, "ZLayer::T3" },
        { ZLayer::T4, "ZLayer::T4" },
    });
    devtools::property("m_zFixedZLayer", node->m_zFixedZLayer);
    devtools::enumerable("m_zLayer", node->m_zLayer, {
        { ZLayer::B5, "ZLayer::B5" },
        { ZLayer::B4, "ZLayer::B4" },
        { ZLayer::B3, "ZLayer::B3" },
        { ZLayer::B2, "ZLayer::B2" },
        { ZLayer::B1, "ZLayer::B1" },
        { ZLayer::Default, "ZLayer::Default" },
        { ZLayer::T1, "ZLayer::T1" },
        { ZLayer::T2, "ZLayer::T2" },
        { ZLayer::T3, "ZLayer::T3" },
        { ZLayer::T4, "ZLayer::T4" },
    });
    devtools::property("m_zOrder", node->m_zOrder);
    devtools::property("m_unk45c", node->m_unk45c);
    devtools::property("m_isSelected", node->m_isSelected);
    devtools::property("m_unk460", node->m_unk460);
    devtools::property("m_unk464", node->m_unk464);
    devtools::property("m_shouldUpdateColorSprite", node->m_shouldUpdateColorSprite);
    devtools::property("m_unk46d", node->m_unk46d);
    devtools::property("m_hasGroupParent", node->m_hasGroupParent);
    devtools::property("m_hasAreaParent", node->m_hasAreaParent);
    devtools::property("m_scaleX", node->m_scaleX);
    devtools::property("m_scaleY", node->m_scaleY);
    devtools::property("m_groupCount", node->m_groupCount);
    devtools::property("m_hasGroupParentsString", node->m_hasGroupParentsString);
    devtools::property("m_colorGroupCount", node->m_colorGroupCount);
    devtools::property("m_opacityGroupCount", node->m_opacityGroupCount);
    devtools::property("m_editorLayer", node->m_editorLayer);
    devtools::property("m_editorLayer2", node->m_editorLayer2);
    devtools::property("m_enabledGroupsCounter", node->m_enabledGroupsCounter);
    devtools::property("m_updateCustomContentSize", node->m_updateCustomContentSize);
    devtools::property("m_hasContentSize", node->m_hasContentSize);
    devtools::property("m_isNoTouch", node->m_isNoTouch);
    devtools::property("m_lastSize", node->m_lastSize);
    devtools::property("m_lastPosition", node->m_lastPosition);
    devtools::property("m_unk4C0", node->m_unk4C0);
    devtools::property("m_unk4C4", node->m_unk4C4);
    devtools::property("m_unk4C8", node->m_unk4C8);
    devtools::property("m_unk4CC", node->m_unk4CC);
    devtools::enumerable("m_classType", node->m_classType, {
        { GameObjectClassType::Game, "GameObjectClassType::Game" },
        { GameObjectClassType::Effect, "GameObjectClassType::Effect" },
        { GameObjectClassType::Animated, "GameObjectClassType::Animated" },
        { GameObjectClassType::Enhanced, "GameObjectClassType::Enhanced" },
        { GameObjectClassType::Smart, "GameObjectClassType::Smart" },
    });
    devtools::property("m_isTrigger", node->m_isTrigger);
    devtools::property("m_isSpawnOrderTrigger", node->m_isSpawnOrderTrigger);
    devtools::property("m_isColorTrigger", node->m_isColorTrigger);
    devtools::property("m_dontIgnoreDuration", node->m_dontIgnoreDuration);
    devtools::property("m_canBeControlled", node->m_canBeControlled);
    devtools::property("m_activateTriggerInEditor", node->m_activateTriggerInEditor);
    devtools::property("m_isStartPos", node->m_isStartPos);
    devtools::property("m_isHighDetail", node->m_isHighDetail);
    devtools::property("m_unk4F8", node->m_unk4F8);
    devtools::property("m_isDecoration", node->m_isDecoration);
    devtools::property("m_isDecoration2", node->m_isDecoration2);
    devtools::property("m_unk4fb", node->m_unk4fb);
    devtools::property("m_maybeNotColorable", node->m_maybeNotColorable);
    devtools::property("m_isPassable", node->m_isPassable);
    devtools::property("m_isHide", node->m_isHide);
    devtools::property("m_isNonStickX", node->m_isNonStickX);
    devtools::property("m_isNonStickY", node->m_isNonStickY);
    devtools::property("m_isIceBlock", node->m_isIceBlock);
    devtools::property("m_isGripSlope", node->m_isGripSlope);
    devtools::property("m_isScaleStick", node->m_isScaleStick);
    devtools::property("m_isExtraSticky", node->m_isExtraSticky);
    devtools::property("m_isDontBoostY", node->m_isDontBoostY);
    devtools::property("m_isDontBoostX", node->m_isDontBoostX);
    devtools::property("m_unk507", node->m_unk507);
    devtools::property("m_unk508", node->m_unk508);
    devtools::property("m_unk50C", node->m_unk50C);
    devtools::property("m_pixelScaleX", node->m_pixelScaleX);
    devtools::property("m_pixelScaleY", node->m_pixelScaleY);
    devtools::property("m_mainColorKeyIndex", node->m_mainColorKeyIndex);
    devtools::property("m_detailColorKeyIndex", node->m_detailColorKeyIndex);
    devtools::property("m_areaOpacityRelated", node->m_areaOpacityRelated);
    devtools::property("m_areaOpacityValue", node->m_areaOpacityValue);
    devtools::property("m_areaOpacityIndex", node->m_areaOpacityIndex);
    devtools::property("m_unk52C", node->m_unk52C);
    devtools::property("m_unk530", node->m_unk530);
    devtools::property("m_isUIObject", node->m_isUIObject);
    devtools::property("m_greenDebugDraw", node->m_greenDebugDraw);
    devtools::label(fmt::format("OBB2D* m_orientedBox at {}", (void*)node->m_orientedBox).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_glowSprite at {}", (void*)node->m_glowSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_particle at {}", (void*)node->m_particle).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_colorSprite at {}", (void*)node->m_colorSprite).c_str());
    devtools::label(fmt::format("GJSpriteColor* m_baseColor at {}", (void*)node->m_baseColor).c_str());
    devtools::label(fmt::format("GJSpriteColor* m_detailColor at {}", (void*)node->m_detailColor).c_str());
    devtools::label(fmt::format("std::array<short, 10>* m_groups at {}", (void*)node->m_groups).c_str());
    devtools::label(fmt::format("std::array<short, 10>* m_colorGroups at {}", (void*)node->m_colorGroups).c_str());
    devtools::label(fmt::format("std::array<short, 10>* m_opacityGroups at {}", (void*)node->m_opacityGroups).c_str());
    devtools::label(fmt::format("ColorActionSprite* m_mainActionSprite at {}", (void*)node->m_mainActionSprite).c_str());
    devtools::label(fmt::format("ColorActionSprite* m_detailActionSprite at {}", (void*)node->m_detailActionSprite).c_str());
    devtools::label(fmt::format("GJEffectManager* m_goEffectManager at {}", (void*)node->m_goEffectManager).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EnhancedGameObject>) {
devtools::registerNode<EnhancedGameObject>([](EnhancedGameObject* node) {
    devtools::label("Members for EnhancedGameObject:");
    devtools::property("m_poweredOn", node->m_poweredOn);
    devtools::property("m_state", node->m_state);
    devtools::property("m_animationRandomizedStartValue", node->m_animationRandomizedStartValue);
    devtools::property("m_animationStart", node->m_animationStart);
    devtools::property("m_unk540", node->m_unk540);
    devtools::property("m_unk544", node->m_unk544);
    devtools::property("m_unk548", node->m_unk548);
    devtools::property("m_randomFrameTime", node->m_randomFrameTime);
    devtools::property("m_visible", node->m_visible);
    devtools::property("m_shouldNotHideAnimFreeze", node->m_shouldNotHideAnimFreeze);
    devtools::property("m_usesSpecialAnimation", node->m_usesSpecialAnimation);
    devtools::property("m_frameTime", node->m_frameTime);
    devtools::property("m_frames", node->m_frames);
    devtools::property("m_hasCustomAnimation", node->m_hasCustomAnimation);
    devtools::property("m_hasCustomRotation", node->m_hasCustomRotation);
    devtools::property("m_disableRotation", node->m_disableRotation);
    devtools::property("m_rotationSpeed", node->m_rotationSpeed);
    devtools::property("m_rotationAngle", node->m_rotationAngle);
    devtools::property("m_rotationDelta", node->m_rotationDelta);
    devtools::property("m_rotationAnimationSpeed", node->m_rotationAnimationSpeed);
    devtools::property("m_animationRandomizedStart", node->m_animationRandomizedStart);
    devtools::property("m_animationSpeed", node->m_animationSpeed);
    devtools::property("m_animationShouldUseSpeed", node->m_animationShouldUseSpeed);
    devtools::property("m_animateOnTrigger", node->m_animateOnTrigger);
    devtools::property("m_disableDelayedLoop", node->m_disableDelayedLoop);
    devtools::property("m_disableAnimShine", node->m_disableAnimShine);
    devtools::property("m_singleFrame", node->m_singleFrame);
    devtools::property("m_animationOffset", node->m_animationOffset);
    devtools::property("m_animationTriggered", node->m_animationTriggered);
    devtools::property("m_unkAnimationInt", node->m_unkAnimationInt);
    devtools::property("m_maybeAnimationVariableXInt", node->m_maybeAnimationVariableXInt);
    devtools::property("m_maybeAnimationVariableYInt", node->m_maybeAnimationVariableYInt);
    devtools::property("m_animateOnlyWhenActive", node->m_animateOnlyWhenActive);
    devtools::property("m_isNoMultiActivate", node->m_isNoMultiActivate);
    devtools::property("m_isMultiActivate", node->m_isMultiActivate);
    devtools::property("m_activated", node->m_activated);
    devtools::property("m_activatedByPlayer1", node->m_activatedByPlayer1);
    devtools::property("m_activatedByPlayer2", node->m_activatedByPlayer2);
    devtools::property("m_hasUniqueCoin", node->m_hasUniqueCoin);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EffectGameObject>) {
devtools::registerNode<EffectGameObject>([](EffectGameObject* node) {
    devtools::label("Members for EffectGameObject:");
    devtools::property("m_unknownBool", node->m_unknownBool);
    devtools::property("m_triggerTargetColor", node->m_triggerTargetColor);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_triggerEffectPlaying", node->m_triggerEffectPlaying);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_centerGroupID", node->m_centerGroupID);
    devtools::property("m_isTouchTriggered", node->m_isTouchTriggered);
    devtools::property("m_isSpawnTriggered", node->m_isSpawnTriggered);
    devtools::property("m_hasCenterEffect", node->m_hasCenterEffect);
    devtools::property("m_shakeStrength", node->m_shakeStrength);
    devtools::property("m_shakeInterval", node->m_shakeInterval);
    devtools::property("m_tintGround", node->m_tintGround);
    devtools::property("m_usesPlayerColor1", node->m_usesPlayerColor1);
    devtools::property("m_usesPlayerColor2", node->m_usesPlayerColor2);
    devtools::property("m_usesBlending", node->m_usesBlending);
    devtools::property("m_moveOffset", node->m_moveOffset);
    devtools::enumerable("m_easingType", node->m_easingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_easingRate", node->m_easingRate);
    devtools::property("m_lockToPlayerX", node->m_lockToPlayerX);
    devtools::property("m_lockToPlayerY", node->m_lockToPlayerY);
    devtools::property("m_lockToCameraX", node->m_lockToCameraX);
    devtools::property("m_lockToCameraY", node->m_lockToCameraY);
    devtools::property("m_useMoveTarget", node->m_useMoveTarget);
    devtools::enumerable("m_moveTargetMode", node->m_moveTargetMode, {
        { MoveTargetType::Both, "MoveTargetType::Both" },
        { MoveTargetType::XOnly, "MoveTargetType::XOnly" },
        { MoveTargetType::YOnly, "MoveTargetType::YOnly" },
    });
    devtools::property("m_moveModX", node->m_moveModX);
    devtools::property("m_moveModY", node->m_moveModY);
    devtools::property("m_smallStep", node->m_smallStep);
    devtools::property("m_isDirectionFollowSnap360", node->m_isDirectionFollowSnap360);
    devtools::property("m_targetModCenterID", node->m_targetModCenterID);
    devtools::property("m_directionModeDistance", node->m_directionModeDistance);
    devtools::property("m_isDynamicMode", node->m_isDynamicMode);
    devtools::property("m_isSilent", node->m_isSilent);
    devtools::property("m_specialTarget", node->m_specialTarget);
    devtools::property("m_rotationDegrees", node->m_rotationDegrees);
    devtools::property("m_times360", node->m_times360);
    devtools::property("m_lockObjectRotation", node->m_lockObjectRotation);
    devtools::property("m_rotationTargetID", node->m_rotationTargetID);
    devtools::property("m_rotationOffset", node->m_rotationOffset);
    devtools::property("m_dynamicModeEasing", node->m_dynamicModeEasing);
    devtools::property("m_followXMod", node->m_followXMod);
    devtools::property("m_followYMod", node->m_followYMod);
    devtools::property("m_followYSpeed", node->m_followYSpeed);
    devtools::property("m_followYDelay", node->m_followYDelay);
    devtools::property("m_followYOffset", node->m_followYOffset);
    devtools::property("m_followYMaxSpeed", node->m_followYMaxSpeed);
    devtools::property("m_fadeInDuration", node->m_fadeInDuration);
    devtools::property("m_holdDuration", node->m_holdDuration);
    devtools::property("m_fadeOutDuration", node->m_fadeOutDuration);
    devtools::property("m_pulseMode", node->m_pulseMode);
    devtools::property("m_pulseTargetType", node->m_pulseTargetType);
    devtools::property("m_copyColorID", node->m_copyColorID);
    devtools::property("m_copyOpacity", node->m_copyOpacity);
    devtools::property("m_pulseMainOnly", node->m_pulseMainOnly);
    devtools::property("m_pulseDetailOnly", node->m_pulseDetailOnly);
    devtools::property("m_pulseExclusive", node->m_pulseExclusive);
    devtools::property("m_legacyHSV", node->m_legacyHSV);
    devtools::property("m_activateGroup", node->m_activateGroup);
    devtools::property("m_touchHoldMode", node->m_touchHoldMode);
    devtools::enumerable("m_touchToggleMode", node->m_touchToggleMode, {
        { TouchTriggerType::Normal, "TouchTriggerType::Normal" },
        { TouchTriggerType::ToggleOn, "TouchTriggerType::ToggleOn" },
        { TouchTriggerType::ToggleOff, "TouchTriggerType::ToggleOff" },
    });
    devtools::enumerable("m_touchPlayerMode", node->m_touchPlayerMode, {
        { TouchTriggerControl::Both, "TouchTriggerControl::Both" },
        { TouchTriggerControl::Player1, "TouchTriggerControl::Player1" },
        { TouchTriggerControl::Player2, "TouchTriggerControl::Player2" },
    });
    devtools::property("m_isDualMode", node->m_isDualMode);
    devtools::property("m_animationID", node->m_animationID);
    devtools::property("m_spawnXPosition", node->m_spawnXPosition);
    devtools::property("m_spawnOrder", node->m_spawnOrder);
    devtools::property("m_isMultiTriggered", node->m_isMultiTriggered);
    devtools::property("m_previewDisable", node->m_previewDisable);
    devtools::property("m_spawnOrdered", node->m_spawnOrdered);
    devtools::property("m_triggerOnExit", node->m_triggerOnExit);
    devtools::property("m_itemID2", node->m_itemID2);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_targetControlID", node->m_targetControlID);
    devtools::property("m_isDynamicBlock", node->m_isDynamicBlock);
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_targetPlayer1", node->m_targetPlayer1);
    devtools::property("m_targetPlayer2", node->m_targetPlayer2);
    devtools::property("m_followCPP", node->m_followCPP);
    devtools::property("m_subtractCount", node->m_subtractCount);
    devtools::property("m_collectibleIsPickupItem", node->m_collectibleIsPickupItem);
    devtools::property("m_collectibleIsToggleTrigger", node->m_collectibleIsToggleTrigger);
    devtools::property("m_collectibleParticleID", node->m_collectibleParticleID);
    devtools::property("m_collectiblePoints", node->m_collectiblePoints);
    devtools::property("m_hasNoAnimation", node->m_hasNoAnimation);
    devtools::property("m_forceModID", node->m_forceModID);
    devtools::property("m_rotateFollowP1", node->m_rotateFollowP1);
    devtools::property("m_rotateFollowP2", node->m_rotateFollowP2);
    devtools::property("m_unk6a8", node->m_unk6a8);
    devtools::property("m_unk6ac", node->m_unk6ac);
    devtools::property("m_unk6b0", node->m_unk6b0);
    devtools::property("m_unk6b4", node->m_unk6b4);
    devtools::property("m_gravityValue", node->m_gravityValue);
    devtools::property("m_isSinglePTouch", node->m_isSinglePTouch);
    devtools::property("m_zoomValue", node->m_zoomValue);
    devtools::property("m_cameraIsFreeMode", node->m_cameraIsFreeMode);
    devtools::property("m_cameraEditCameraSettings", node->m_cameraEditCameraSettings);
    devtools::property("m_cameraEasingValue", node->m_cameraEasingValue);
    devtools::property("m_cameraPaddingValue", node->m_cameraPaddingValue);
    devtools::property("m_cameraDisableGridSnap", node->m_cameraDisableGridSnap);
    devtools::property("m_endReversed", node->m_endReversed);
    devtools::property("m_timeWarpTimeMod", node->m_timeWarpTimeMod);
    devtools::property("m_shouldPreview", node->m_shouldPreview);
    devtools::property("m_ordValue", node->m_ordValue);
    devtools::property("m_channelValue", node->m_channelValue);
    devtools::property("m_isReverse", node->m_isReverse);
    devtools::property("m_speedModType", node->m_speedModType);
    devtools::property("m_speedStart", node->m_speedStart);
    devtools::property("m_secretCoinID", node->m_secretCoinID);
    devtools::property("m_unk6f4", node->m_unk6f4);
    devtools::property("m_unk6f5", node->m_unk6f5);
    devtools::property("m_endPosition", node->m_endPosition);
    devtools::property("m_spawnTriggerDelay", node->m_spawnTriggerDelay);
    devtools::property("m_gravityMod", node->m_gravityMod);
    devtools::property("m_unk708", node->m_unk708);
    devtools::property("m_ignoreGroupParent", node->m_ignoreGroupParent);
    devtools::property("m_ignoreLinkedObjects", node->m_ignoreLinkedObjects);
    devtools::property("m_channelChanged", node->m_channelChanged);
    devtools::label("cocos2d::ccHSVValue m_hsvValue");
    devtools::label(fmt::format("void* m_unk698 at {}", (void*)node->m_unk698).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_objectLabel at {}", (void*)node->m_objectLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AdvancedFollowTriggerObject>) {
devtools::registerNode<AdvancedFollowTriggerObject>([](AdvancedFollowTriggerObject* node) {
    devtools::label("Members for AdvancedFollowTriggerObject:");
    devtools::property("m_delay", node->m_delay);
    devtools::property("m_delayVariance", node->m_delayVariance);
    devtools::property("m_startSpeed", node->m_startSpeed);
    devtools::property("m_startSpeedVariance", node->m_startSpeedVariance);
    devtools::property("m_startSpeedReference", node->m_startSpeedReference);
    devtools::property("m_startDirection", node->m_startDirection);
    devtools::property("m_startDirectionVariance", node->m_startDirectionVariance);
    devtools::property("m_startDirectionReference", node->m_startDirectionReference);
    devtools::property("m_maxSpeed", node->m_maxSpeed);
    devtools::property("m_maxSpeedVariance", node->m_maxSpeedVariance);
    devtools::property("m_xOnly", node->m_xOnly);
    devtools::property("m_yOnly", node->m_yOnly);
    devtools::property("m_maxRange", node->m_maxRange);
    devtools::property("m_maxRangeVariance", node->m_maxRangeVariance);
    devtools::property("m_property310", node->m_property310);
    devtools::property("m_property311", node->m_property311);
    devtools::property("m_acceleration", node->m_acceleration);
    devtools::property("m_accelerationVariance", node->m_accelerationVariance);
    devtools::property("m_property312", node->m_property312);
    devtools::property("m_property313", node->m_property313);
    devtools::property("m_property314", node->m_property314);
    devtools::property("m_property315", node->m_property315);
    devtools::property("m_steerForce", node->m_steerForce);
    devtools::property("m_steerForceVariance", node->m_steerForceVariance);
    devtools::property("m_steerForceLowEnabled", node->m_steerForceLowEnabled);
    devtools::property("m_steerForceLow", node->m_steerForceLow);
    devtools::property("m_steerForceLowVariance", node->m_steerForceLowVariance);
    devtools::property("m_steerForceHighEnabled", node->m_steerForceHighEnabled);
    devtools::property("m_steerForceHigh", node->m_steerForceHigh);
    devtools::property("m_steerFroceHighVariance", node->m_steerFroceHighVariance);
    devtools::property("m_speedRangeLow", node->m_speedRangeLow);
    devtools::property("m_speedRangeLowVariance", node->m_speedRangeLowVariance);
    devtools::property("m_speedRangeHigh", node->m_speedRangeHigh);
    devtools::property("m_speedRangeHighVariance", node->m_speedRangeHighVariance);
    devtools::property("m_breakForce", node->m_breakForce);
    devtools::property("m_breakForceVariance", node->m_breakForceVariance);
    devtools::property("m_breakAngle", node->m_breakAngle);
    devtools::property("m_breakAngleVariance", node->m_breakAngleVariance);
    devtools::property("m_breakSteerForce", node->m_breakSteerForce);
    devtools::property("m_breakSteerForceVariance", node->m_breakSteerForceVariance);
    devtools::property("m_breakSteerSpeedLimit", node->m_breakSteerSpeedLimit);
    devtools::property("m_breakSteerSpeedLimitVariance", node->m_breakSteerSpeedLimitVariance);
    devtools::property("m_targetDirection", node->m_targetDirection);
    devtools::property("m_ignoreDisabled", node->m_ignoreDisabled);
    devtools::property("m_rotateDirection", node->m_rotateDirection);
    devtools::property("m_rotationOffset", node->m_rotationOffset);
    devtools::property("m_nearAcceleration", node->m_nearAcceleration);
    devtools::property("m_nearAccelerationVariance", node->m_nearAccelerationVariance);
    devtools::property("m_nearDistance", node->m_nearDistance);
    devtools::property("m_nearDistanceVariance", node->m_nearDistanceVariance);
    devtools::property("m_nearFriction", node->m_nearFriction);
    devtools::property("m_nearFrictionVariance", node->m_nearFrictionVariance);
    devtools::property("m_friction", node->m_friction);
    devtools::property("m_frictionVariance", node->m_frictionVariance);
    devtools::property("m_easing", node->m_easing);
    devtools::property("m_easingVariance", node->m_easingVariance);
    devtools::property("m_rotateEasing", node->m_rotateEasing);
    devtools::property("m_rotateDeadZ", node->m_rotateDeadZ);
    devtools::property("m_priority", node->m_priority);
    devtools::property("m_unk7fc", node->m_unk7fc);
    devtools::property("m_maxRangeReference", node->m_maxRangeReference);
    devtools::property("m_followMode", node->m_followMode);
    devtools::property("m_exclusive", node->m_exclusive);
    devtools::property("m_startMode", node->m_startMode);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AdvancedFollowEditObject>) {
devtools::registerNode<AdvancedFollowEditObject>([](AdvancedFollowEditObject* node) {
    devtools::label("Members for AdvancedFollowEditObject:");
    devtools::property("m_modX", node->m_modX);
    devtools::property("m_modXVariance", node->m_modXVariance);
    devtools::property("m_modY", node->m_modY);
    devtools::property("m_modYVariance", node->m_modYVariance);
    devtools::property("m_redirectDirection", node->m_redirectDirection);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AdvFollowSetup>) {
devtools::registerNode<AdvFollowSetup>([](AdvFollowSetup* node) {
    devtools::label("Members for AdvFollowSetup:");
    devtools::property("m_delay", node->m_delay);
    devtools::label("gd::unordered_set<int> m_centerIDs");
    devtools::label("gd::unordered_set<int> m_groupIDs");
    devtools::label("gd::unordered_set<int> m_controlIDs");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AnimatedGameObject>) {
devtools::registerNode<AnimatedGameObject>([](AnimatedGameObject* node) {
    devtools::label("Members for AnimatedGameObject:");
    devtools::property("m_finishedAnimating", node->m_finishedAnimating);
    devtools::property("m_playingAnimation", node->m_playingAnimation);
    devtools::property("m_currentAnimation", node->m_currentAnimation);
    devtools::property("m_notGrounded", node->m_notGrounded);
    devtools::property("m_animationID", node->m_animationID);
    devtools::label(fmt::format("CCAnimatedSprite* m_animatedSprite at {}", (void*)node->m_animatedSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_childSprite at {}", (void*)node->m_childSprite).c_str());
    devtools::label(fmt::format("CCSpritePart* m_eyeSpritePart at {}", (void*)node->m_eyeSpritePart).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCAnimatedSprite>) {
devtools::registerNode<CCAnimatedSprite>([](CCAnimatedSprite* node) {
    devtools::label("Members for CCAnimatedSprite:");
    devtools::property("m_unkString1", node->m_unkString1);
    devtools::property("m_activeTween", node->m_activeTween);
    devtools::enumerable("m_spriteMode", node->m_spriteMode, {
        { spriteMode::FrameByFrame, "spriteMode::FrameByFrame" },
        { spriteMode::PartAnim, "spriteMode::PartAnim" },
    });
    devtools::property("m_currentAnim", node->m_currentAnim);
    devtools::label(fmt::format("SpriteAnimationManager* m_animationManager at {}", (void*)node->m_animationManager).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_sprite at {}", (void*)node->m_sprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_fbfSprite at {}", (void*)node->m_fbfSprite).c_str());
    devtools::label(fmt::format("CCPartAnimSprite* m_paSprite at {}", (void*)node->m_paSprite).c_str());
    devtools::label(fmt::format("AnimatedSpriteDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AnimatedShopKeeper>) {
devtools::registerNode<AnimatedShopKeeper>([](AnimatedShopKeeper* node) {
    devtools::label("Members for AnimatedShopKeeper:");
    devtools::enumerable("m_type", node->m_type, {
        { ShopType::Normal, "ShopType::Normal" },
        { ShopType::Secret, "ShopType::Secret" },
        { ShopType::Community, "ShopType::Community" },
        { ShopType::Mechanic, "ShopType::Mechanic" },
        { ShopType::Diamond, "ShopType::Diamond" },
        { ShopType::Paths, "ShopType::Paths" },
    });
    devtools::property("m_idleInt1", node->m_idleInt1);
    devtools::property("m_idleInt2", node->m_idleInt2);
    devtools::property("m_looking", node->m_looking);
    devtools::property("m_reacting", node->m_reacting);
    devtools::property("m_reactCount", node->m_reactCount);
    devtools::property("m_gruntIndex", node->m_gruntIndex);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AppDelegate>) {
devtools::registerNode<AppDelegate>([](AppDelegate* node) {
    devtools::label("Members for AppDelegate:");
    devtools::property("m_glViewSetup", node->m_glViewSetup);
    devtools::property("m_gamePaused", node->m_gamePaused);
    devtools::property("m_loadingFinished", node->m_loadingFinished);
    devtools::property("m_unk0e9", node->m_unk0e9);
    devtools::property("m_ios", node->m_ios);
    devtools::property("m_unk0eb", node->m_unk0eb);
    devtools::property("m_unk0ec", node->m_unk0ec);
    devtools::property("m_unk0ed", node->m_unk0ed);
    devtools::property("m_saveTime", node->m_saveTime);
    devtools::label(fmt::format("cocos2d::CCScene* m_runningScene at {}", (void*)node->m_runningScene).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ArtistCell>) {
devtools::registerNode<ArtistCell>([](ArtistCell* node) {
    devtools::label("Members for ArtistCell:");
    devtools::label(fmt::format("SongInfoObject* m_songInfo at {}", (void*)node->m_songInfo).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ArtTriggerGameObject>) {
devtools::registerNode<ArtTriggerGameObject>([](ArtTriggerGameObject* node) {
    devtools::label("Members for ArtTriggerGameObject:");
    devtools::property("m_artIndex", node->m_artIndex);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AudioAssetsBrowser>) {
devtools::registerNode<AudioAssetsBrowser>([](AudioAssetsBrowser* node) {
    devtools::label("Members for AudioAssetsBrowser:");
    devtools::label(fmt::format("cocos2d::CCArray* m_songInfoObjects at {}", (void*)node->m_songInfoObjects).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_songList at {}", (void*)node->m_songList).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageIndicatorLabel at {}", (void*)node->m_pageIndicatorLabel).c_str());
    devtools::label("gd::vector<int> m_songsIds");
    devtools::label("gd::vector<int> m_sfxIds");
    devtools::label(fmt::format("LoadingCircleSprite* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AudioEffectsLayer>) {
devtools::registerNode<AudioEffectsLayer>([](AudioEffectsLayer* node) {
    devtools::label("Members for AudioEffectsLayer:");
    devtools::property("m_timeElapsed", node->m_timeElapsed);
    devtools::property("m_audioPulseMod", node->m_audioPulseMod);
    devtools::property("m_goingDown", node->m_goingDown);
    devtools::property("m_audioScale", node->m_audioScale);
    devtools::property("m_unk1d4", node->m_unk1d4);
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_batchNode at {}", (void*)node->m_batchNode).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unk1bc at {}", (void*)node->m_unk1bc).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unk1c0 at {}", (void*)node->m_unk1c0).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, AudioLineGuideGameObject>) {
devtools::registerNode<AudioLineGuideGameObject>([](AudioLineGuideGameObject* node) {
    devtools::label("Members for AudioLineGuideGameObject:");
    devtools::property("m_beatsPerMinute", node->m_beatsPerMinute);
    devtools::property("m_beatsPerBar", node->m_beatsPerBar);
    devtools::enumerable("m_speed", node->m_speed, {
        { Speed::Normal, "Speed::Normal" },
        { Speed::Slow, "Speed::Slow" },
        { Speed::Fast, "Speed::Fast" },
        { Speed::Faster, "Speed::Faster" },
        { Speed::Fastest, "Speed::Fastest" },
    });
    devtools::property("m_disabled", node->m_disabled);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, BitmapFontCache>) {
devtools::registerNode<BitmapFontCache>([](BitmapFontCache* node) {
    devtools::label("Members for BitmapFontCache:");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_cache at {}", (void*)node->m_cache).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, BonusDropdown>) {
devtools::registerNode<BonusDropdown>([](BonusDropdown* node) {
    devtools::label("Members for BonusDropdown:");
    devtools::property("m_yPosition", node->m_yPosition);
    devtools::label(fmt::format("cocos2d::CCLayerColor* m_layerColor at {}", (void*)node->m_layerColor).c_str());
    devtools::label(fmt::format("cocos2d::CCScene* m_scene at {}", (void*)node->m_scene).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, BoomListView>) {
devtools::registerNode<BoomListView>([](BoomListView* node) {
    devtools::label("Members for BoomListView:");
    devtools::enumerable("m_type", node->m_type, {
        { BoomListType::Default, "BoomListType::Default" },
        { BoomListType::User, "BoomListType::User" },
        { BoomListType::Stats, "BoomListType::Stats" },
        { BoomListType::Achievement, "BoomListType::Achievement" },
        { BoomListType::Level, "BoomListType::Level" },
        { BoomListType::Level2, "BoomListType::Level2" },
        { BoomListType::Comment, "BoomListType::Comment" },
        { BoomListType::Comment2, "BoomListType::Comment2" },
        { BoomListType::Comment3, "BoomListType::Comment3" },
        { BoomListType::List, "BoomListType::List" },
        { BoomListType::Game, "BoomListType::Game" },
        { BoomListType::Song, "BoomListType::Song" },
        { BoomListType::Score, "BoomListType::Score" },
        { BoomListType::MapPack, "BoomListType::MapPack" },
        { BoomListType::CustomSong, "BoomListType::CustomSong" },
        { BoomListType::Comment4, "BoomListType::Comment4" },
        { BoomListType::User2, "BoomListType::User2" },
        { BoomListType::Request, "BoomListType::Request" },
        { BoomListType::Message, "BoomListType::Message" },
        { BoomListType::LevelScore, "BoomListType::LevelScore" },
        { BoomListType::Artist, "BoomListType::Artist" },
        { BoomListType::SmartTemplate, "BoomListType::SmartTemplate" },
        { BoomListType::SFX, "BoomListType::SFX" },
        { BoomListType::SFX2, "BoomListType::SFX2" },
        { BoomListType::CustomMusic, "BoomListType::CustomMusic" },
        { BoomListType::Options, "BoomListType::Options" },
        { BoomListType::LevelList, "BoomListType::LevelList" },
        { BoomListType::Level3, "BoomListType::Level3" },
        { BoomListType::LevelList2, "BoomListType::LevelList2" },
        { BoomListType::LevelList3, "BoomListType::LevelList3" },
        { BoomListType::Level4, "BoomListType::Level4" },
        { BoomListType::LocalLevelScore, "BoomListType::LocalLevelScore" },
        { BoomListType::URL, "BoomListType::URL" },
    });
    devtools::property("m_height", node->m_height);
    devtools::property("m_width", node->m_width);
    devtools::property("m_itemSeparation", node->m_itemSeparation);
    devtools::property("m_currentPage", node->m_currentPage);
    devtools::property("m_locked", node->m_locked);
    devtools::label(fmt::format("TableView* m_tableView at {}", (void*)node->m_tableView).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_entries at {}", (void*)node->m_entries).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, BoomScrollLayer>) {
devtools::registerNode<BoomScrollLayer>([](BoomScrollLayer* node) {
    devtools::label("Members for BoomScrollLayer:");
    devtools::property("m_slowPage", node->m_slowPage);
    devtools::property("m_touchX", node->m_touchX);
    devtools::property("m_touchQuotient", node->m_touchQuotient);
    devtools::property("m_looped", node->m_looped);
    devtools::property("m_dynamic", node->m_dynamic);
    devtools::property("m_touchType", node->m_touchType);
    devtools::property("m_ignoreTouchCancel", node->m_ignoreTouchCancel);
    devtools::property("m_touchTime", node->m_touchTime);
    devtools::property("m_position", node->m_position);
    devtools::property("m_rect", node->m_rect);
    devtools::property("m_unkFloat1", node->m_unkFloat1);
    devtools::property("m_maxSpeed", node->m_maxSpeed);
    devtools::property("m_minSpeed", node->m_minSpeed);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_pageMoving", node->m_pageMoving);
    devtools::property("m_pagesInvisible", node->m_pagesInvisible);
    devtools::property("m_minimumTouchLengthToSlide", node->m_minimumTouchLengthToSlide);
    devtools::property("m_minimumTouchLengthToChangePage", node->m_minimumTouchLengthToChangePage);
    devtools::property("m_width", node->m_width);
    devtools::property("m_cancelAndStealTouch", node->m_cancelAndStealTouch);
    devtools::property("m_dotsVisible", node->m_dotsVisible);
    devtools::property("m_dotPosition", node->m_dotPosition);
    devtools::property("m_selectedPageColor", node->m_selectedPageColor);
    devtools::property("m_normalPageColor", node->m_normalPageColor);
    devtools::property("m_page", node->m_page);
    devtools::property("m_pageOffset", node->m_pageOffset);
    devtools::property("m_doVisit", node->m_doVisit);
    devtools::property("m_clippingRect", node->m_clippingRect);
    devtools::label(fmt::format("cocos2d::CCArray* m_dots at {}", (void*)node->m_dots).c_str());
    devtools::label(fmt::format("DynamicScrollDelegate* m_dynamicDelegate at {}", (void*)node->m_dynamicDelegate).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_dynamicObjects at {}", (void*)node->m_dynamicObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCTouch* m_touch at {}", (void*)node->m_touch).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pages at {}", (void*)node->m_pages).c_str());
    devtools::label(fmt::format("ExtendedLayer* m_extendedLayer at {}", (void*)node->m_extendedLayer).c_str());
    devtools::label(fmt::format("BoomScrollLayerDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, BrowseSmartTemplateLayer>) {
devtools::registerNode<BrowseSmartTemplateLayer>([](BrowseSmartTemplateLayer* node) {
    devtools::label("Members for BrowseSmartTemplateLayer:");
    devtools::property("m_page", node->m_page);
    devtools::label(fmt::format("GJSmartTemplate* m_template at {}", (void*)node->m_template).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pages at {}", (void*)node->m_pages).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_nextPageBtn at {}", (void*)node->m_nextPageBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_prevPageBtn at {}", (void*)node->m_prevPageBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_dotsArray at {}", (void*)node->m_dotsArray).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, BrowseSmartKeyLayer>) {
devtools::registerNode<BrowseSmartKeyLayer>([](BrowseSmartKeyLayer* node) {
    devtools::label("Members for BrowseSmartKeyLayer:");
    devtools::property("m_prefabKey", node->m_prefabKey);
    devtools::property("m_templatePage", node->m_templatePage);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ButtonSprite>) {
devtools::registerNode<ButtonSprite>([](ButtonSprite* node) {
    devtools::label("Members for ButtonSprite:");
    devtools::property("m_mode", node->m_mode);
    devtools::property("m_width", node->m_width);
    devtools::property("m_unkFloat", node->m_unkFloat);
    devtools::property("m_scale", node->m_scale);
    devtools::property("m_height", node->m_height);
    devtools::property("m_absolute", node->m_absolute);
    devtools::property("m_textOffset", node->m_textOffset);
    devtools::property("m_spritePosition", node->m_spritePosition);
    devtools::property("m_caption", node->m_caption);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_label at {}", (void*)node->m_label).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_subSprite at {}", (void*)node->m_subSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_subBGSprite at {}", (void*)node->m_subBGSprite).c_str());
    devtools::label(fmt::format("cocos2d::extension::CCScale9Sprite* m_BGSprite at {}", (void*)node->m_BGSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CameraTriggerGameObject>) {
devtools::registerNode<CameraTriggerGameObject>([](CameraTriggerGameObject* node) {
    devtools::label("Members for CameraTriggerGameObject:");
    devtools::property("m_exitStatic", node->m_exitStatic);
    devtools::property("m_followObject", node->m_followObject);
    devtools::property("m_followEasing", node->m_followEasing);
    devtools::property("m_edgeDirection", node->m_edgeDirection);
    devtools::property("m_smoothVelocity", node->m_smoothVelocity);
    devtools::property("m_velocityModifier", node->m_velocityModifier);
    devtools::property("m_exitInstant", node->m_exitInstant);
    devtools::property("m_previewOpacity", node->m_previewOpacity);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCAlertCircle>) {
devtools::registerNode<CCAlertCircle>([](CCAlertCircle* node) {
    devtools::label("Members for CCAlertCircle:");
    devtools::label(fmt::format("CCCircleAlert* m_circleAlert at {}", (void*)node->m_circleAlert).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCAnimateFrameCache>) {
devtools::registerNode<CCAnimateFrameCache>([](CCAnimateFrameCache* node) {
    devtools::label("Members for CCAnimateFrameCache:");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_animateFrames at {}", (void*)node->m_animateFrames).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unk040 at {}", (void*)node->m_unk040).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_animateDescriptions at {}", (void*)node->m_animateDescriptions).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCBlockLayer>) {
devtools::registerNode<CCBlockLayer>([](CCBlockLayer* node) {
    devtools::label("Members for CCBlockLayer:");
    devtools::property("m_closeOnHide", node->m_closeOnHide);
    devtools::property("m_forcePrioRegistered", node->m_forcePrioRegistered);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCCircleWave>) {
devtools::registerNode<CCCircleWave>([](CCCircleWave* node) {
    devtools::label("Members for CCCircleWave:");
    devtools::property("m_width", node->m_width);
    devtools::property("m_radius", node->m_radius);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_color", node->m_color);
    devtools::property("m_position", node->m_position);
    devtools::enumerable("m_circleMode", node->m_circleMode, {
        { CircleMode::Filled, "CircleMode::Filled" },
        { CircleMode::Outline, "CircleMode::Outline" },
    });
    devtools::property("m_lineWidth", node->m_lineWidth);
    devtools::property("m_opacityMod", node->m_opacityMod);
    devtools::property("m_blendAdditive", node->m_blendAdditive);
    devtools::label(fmt::format("cocos2d::CCNode* m_target at {}", (void*)node->m_target).c_str());
    devtools::label(fmt::format("CCCircleWaveDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCCountdown>) {
devtools::registerNode<CCCountdown>([](CCCountdown* node) {
    devtools::label("Members for CCCountdown:");
    devtools::property("m_unk260", node->m_unk260);
    devtools::property("m_seconds", node->m_seconds);
    devtools::label(fmt::format("cocos2d::CCProgressTimer* m_progressTimer at {}", (void*)node->m_progressTimer).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_countdownLabel at {}", (void*)node->m_countdownLabel).c_str());
    devtools::label("cocos2d::SEL_CallFunc m_callbackSelector");
    devtools::label(fmt::format("cocos2d::CCNode* m_targetNode at {}", (void*)node->m_targetNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCCounterLabel>) {
devtools::registerNode<CCCounterLabel>([](CCCounterLabel* node) {
    devtools::label("Members for CCCounterLabel:");
    devtools::property("m_stepSize", node->m_stepSize);
    devtools::property("m_targetCount", node->m_targetCount);
    devtools::property("m_currentCount", node->m_currentCount);
    devtools::property("m_counterEnabled", node->m_counterEnabled);
    devtools::property("m_stepCount", node->m_stepCount);
    devtools::property("m_dontSchedule", node->m_dontSchedule);
    devtools::enumerable("m_formatterType", node->m_formatterType, {
        { FormatterType::Integer, "FormatterType::Integer" },
        { FormatterType::Float, "FormatterType::Float" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCLightFlash>) {
devtools::registerNode<CCLightFlash>([](CCLightFlash* node) {
    devtools::label("Members for CCLightFlash:");
    devtools::property("m_dontFadeOut", node->m_dontFadeOut);
    devtools::property("m_layerColorZOrder", node->m_layerColorZOrder);
    devtools::label(fmt::format("cocos2d::CCArray* m_lightStripArray at {}", (void*)node->m_lightStripArray).c_str());
    devtools::label(fmt::format("cocos2d::CCLayerColor* m_layerColor at {}", (void*)node->m_layerColor).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCLightStrip>) {
devtools::registerNode<CCLightStrip>([](CCLightStrip* node) {
    devtools::label("Members for CCLightStrip:");
    devtools::property("m_objectWidth", node->m_objectWidth);
    devtools::property("m_toWidth", node->m_toWidth);
    devtools::property("m_toHeight", node->m_toHeight);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_color", node->m_color);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_width", node->m_width);
    devtools::property("m_height", node->m_height);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCMenuItemSpriteExtra>) {
devtools::registerNode<CCMenuItemSpriteExtra>([](CCMenuItemSpriteExtra* node) {
    devtools::label("Members for CCMenuItemSpriteExtra:");
    devtools::property("m_scaleMultiplier", node->m_scaleMultiplier);
    devtools::property("m_baseScale", node->m_baseScale);
    devtools::property("m_animationEnabled", node->m_animationEnabled);
    devtools::property("m_colorEnabled", node->m_colorEnabled);
    devtools::property("m_volume", node->m_volume);
    devtools::property("m_activateSound", node->m_activateSound);
    devtools::property("m_selectSound", node->m_selectSound);
    devtools::property("m_colorDip", node->m_colorDip);
    devtools::property("m_offset", node->m_offset);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_unselectedDuration", node->m_unselectedDuration);
    devtools::enumerable("m_animationType", node->m_animationType, {
        { MenuAnimationType::Scale, "MenuAnimationType::Scale" },
        { MenuAnimationType::Move, "MenuAnimationType::Move" },
    });
    devtools::property("m_startPosition", node->m_startPosition);
    devtools::enumerable("m_iconType", node->m_iconType, {
        { IconType::Cube, "IconType::Cube" },
        { IconType::Ship, "IconType::Ship" },
        { IconType::Ball, "IconType::Ball" },
        { IconType::Ufo, "IconType::Ufo" },
        { IconType::Wave, "IconType::Wave" },
        { IconType::Robot, "IconType::Robot" },
        { IconType::Spider, "IconType::Spider" },
        { IconType::Swing, "IconType::Swing" },
        { IconType::Jetpack, "IconType::Jetpack" },
        { IconType::DeathEffect, "IconType::DeathEffect" },
        { IconType::Special, "IconType::Special" },
        { IconType::Item, "IconType::Item" },
        { IconType::ShipFire, "IconType::ShipFire" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCMenuItemToggler>) {
devtools::registerNode<CCMenuItemToggler>([](CCMenuItemToggler* node) {
    devtools::label("Members for CCMenuItemToggler:");
    devtools::property("m_toggled", node->m_toggled);
    devtools::property("m_notClickable", node->m_notClickable);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_offButton at {}", (void*)node->m_offButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_onButton at {}", (void*)node->m_onButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCMoveCNode>) {
devtools::registerNode<CCMoveCNode>([](CCMoveCNode* node) {
    devtools::label("Members for CCMoveCNode:");
    devtools::property("m_unk038", node->m_unk038);
    devtools::property("m_unk040", node->m_unk040);
    devtools::property("m_unk048", node->m_unk048);
    devtools::property("m_unk058", node->m_unk058);
    devtools::property("m_unk060", node->m_unk060);
    devtools::property("m_unk068", node->m_unk068);
    devtools::property("m_unk070", node->m_unk070);
    devtools::property("m_unk071", node->m_unk071);
    devtools::property("m_unk074", node->m_unk074);
    devtools::property("m_unk078", node->m_unk078);
    devtools::property("m_unk07c", node->m_unk07c);
    devtools::property("m_unk080", node->m_unk080);
    devtools::property("m_unk088", node->m_unk088);
    devtools::property("m_unk090", node->m_unk090);
    devtools::property("m_unk098", node->m_unk098);
    devtools::property("m_unk0a0", node->m_unk0a0);
    devtools::property("m_unk0a8", node->m_unk0a8);
    devtools::property("m_unk0b0", node->m_unk0b0);
    devtools::property("m_unk0b8", node->m_unk0b8);
    devtools::property("m_unk0c0", node->m_unk0c0);
    devtools::property("m_unk0d0", node->m_unk0d0);
    devtools::property("m_unk0d1", node->m_unk0d1);
    devtools::label(fmt::format("void* m_unk050 at {}", (void*)node->m_unk050).c_str());
    devtools::label(fmt::format("GroupCommandObject2* m_groupObject at {}", (void*)node->m_groupObject).c_str());
    devtools::label("gd::vector<GroupCommandObject2*> m_groupObjects");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCPartAnimSprite>) {
devtools::registerNode<CCPartAnimSprite>([](CCPartAnimSprite* node) {
    devtools::label("Members for CCPartAnimSprite:");
    devtools::property("m_hasChanged", node->m_hasChanged);
    devtools::property("m_unkSize", node->m_unkSize);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_spritePartIDs at {}", (void*)node->m_spritePartIDs).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteFrame* m_spriteFrame at {}", (void*)node->m_spriteFrame).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_spriteParts at {}", (void*)node->m_spriteParts).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCScrollLayerExt>) {
devtools::registerNode<CCScrollLayerExt>([](CCScrollLayerExt* node) {
    devtools::label("Members for CCScrollLayerExt:");
    devtools::property("m_touchPosition", node->m_touchPosition);
    devtools::property("m_touchStartPosition", node->m_touchStartPosition);
    devtools::property("m_touchDown", node->m_touchDown);
    devtools::property("m_notAtEndOfScroll", node->m_notAtEndOfScroll);
    devtools::property("m_cutContent", node->m_cutContent);
    devtools::property("m_vScrollbarVisible", node->m_vScrollbarVisible);
    devtools::property("m_hScrollbarVisible", node->m_hScrollbarVisible);
    devtools::property("m_disableHorizontal", node->m_disableHorizontal);
    devtools::property("m_disableVertical", node->m_disableVertical);
    devtools::property("m_disableMovement", node->m_disableMovement);
    devtools::property("m_scrollLimitTop", node->m_scrollLimitTop);
    devtools::property("m_scrollLimitBottom", node->m_scrollLimitBottom);
    devtools::property("m_peekLimitTop", node->m_peekLimitTop);
    devtools::property("m_peekLimitBottom", node->m_peekLimitBottom);
    devtools::label(fmt::format("cocos2d::CCTouch* m_touch at {}", (void*)node->m_touch).c_str());
    devtools::label("cocos2d::cc_timeval m_timeValue");
    devtools::label(fmt::format("cocos2d::CCLayerColor* m_verticalScrollbar at {}", (void*)node->m_verticalScrollbar).c_str());
    devtools::label(fmt::format("cocos2d::CCLayerColor* m_horizontalScrollbar at {}", (void*)node->m_horizontalScrollbar).c_str());
    devtools::label(fmt::format("CCScrollLayerExtDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("CCContentLayer* m_contentLayer at {}", (void*)node->m_contentLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCSpriteWithHue>) {
devtools::registerNode<CCSpriteWithHue>([](CCSpriteWithHue* node) {
    devtools::label("Members for CCSpriteWithHue:");
    devtools::property("m_hue", node->m_hue);
    devtools::property("m_uHueLoc", node->m_uHueLoc);
    devtools::property("m_uAlphaLoc", node->m_uAlphaLoc);
    devtools::property("m_uLumLoc", node->m_uLumLoc);
    devtools::label("std::array<float, 3> m_luminance");
    devtools::label("std::array<std::array<float, 3>, 3> m_colorMatrix");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCSpritePart>) {
devtools::registerNode<CCSpritePart>([](CCSpritePart* node) {
    devtools::label("Members for CCSpritePart:");
    devtools::property("m_isBeingUsed", node->m_isBeingUsed);
    devtools::property("m_spriteFrameName", node->m_spriteFrameName);
    devtools::label(fmt::format("SpritePartDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCTextInputNode>) {
devtools::registerNode<CCTextInputNode>([](CCTextInputNode* node) {
    devtools::label("Members for CCTextInputNode:");
    devtools::property("m_numberInput", node->m_numberInput);
    devtools::property("m_caption", node->m_caption);
    devtools::property("m_unknown1", node->m_unknown1);
    devtools::property("m_selected", node->m_selected);
    devtools::property("m_unknown2", node->m_unknown2);
    devtools::property("m_fontValue1", node->m_fontValue1);
    devtools::property("m_fontValue2", node->m_fontValue2);
    devtools::property("m_isChatFont", node->m_isChatFont);
    devtools::property("m_allowedChars", node->m_allowedChars);
    devtools::property("m_maxLabelWidth", node->m_maxLabelWidth);
    devtools::property("m_maxLabelScale", node->m_maxLabelScale);
    devtools::property("m_placeholderScale", node->m_placeholderScale);
    devtools::property("m_placeholderColor", node->m_placeholderColor);
    devtools::property("m_textColor", node->m_textColor);
    devtools::property("m_maxLabelLength", node->m_maxLabelLength);
    devtools::property("m_filterSwearWords", node->m_filterSwearWords);
    devtools::property("m_usePasswordChar", node->m_usePasswordChar);
    devtools::property("m_forceOffset", node->m_forceOffset);
    devtools::enumerable("m_valueType", node->m_valueType, {
        { InputValueType::Float, "InputValueType::Float" },
        { InputValueType::Int, "InputValueType::Int" },
        { InputValueType::Uint, "InputValueType::Uint" },
    });
    devtools::property("m_decimalPlaces", node->m_decimalPlaces);
    devtools::property("m_kerningAmount", node->m_kerningAmount);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cursor at {}", (void*)node->m_cursor).c_str());
    devtools::label(fmt::format("cocos2d::CCTextFieldTTF* m_textField at {}", (void*)node->m_textField).c_str());
    devtools::label(fmt::format("TextInputDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_textLabel at {}", (void*)node->m_textLabel).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CCURLObject>) {
devtools::registerNode<CCURLObject>([](CCURLObject* node) {
    devtools::label("Members for CCURLObject:");
    devtools::property("m_name", node->m_name);
    devtools::property("m_url", node->m_url);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ChallengesPage>) {
devtools::registerNode<ChallengesPage>([](ChallengesPage* node) {
    devtools::label("Members for ChallengesPage:");
    devtools::property("m_triedToLoad", node->m_triedToLoad);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::label(fmt::format("cocos2d::CCArray* m_dots at {}", (void*)node->m_dots).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_countdownLabel at {}", (void*)node->m_countdownLabel).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("CurrencyRewardLayer* m_currencyRewardLayer at {}", (void*)node->m_currencyRewardLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_challengeNodes at {}", (void*)node->m_challengeNodes).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJChallengeItem>) {
devtools::registerNode<GJChallengeItem>([](GJChallengeItem* node) {
    devtools::label("Members for GJChallengeItem:");
    devtools::enumerable("m_challengeType", node->m_challengeType, {
        { GJChallengeType::Unknown, "GJChallengeType::Unknown" },
        { GJChallengeType::Orbs, "GJChallengeType::Orbs" },
        { GJChallengeType::UserCoins, "GJChallengeType::UserCoins" },
        { GJChallengeType::Stars, "GJChallengeType::Stars" },
        { GJChallengeType::Moons, "GJChallengeType::Moons" },
    });
    devtools::property("m_timeLeft", node->m_timeLeft);
    devtools::property("m_canClaim", node->m_canClaim);
    devtools::property("m_position", node->m_position);
    devtools::property("m_name", node->m_name);
    devtools::label("geode::SeedValueRSV m_count");
    devtools::label("geode::SeedValueRSV m_reward");
    devtools::label("geode::SeedValueRSV m_goal");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ChallengeNode>) {
devtools::registerNode<ChallengeNode>([](ChallengeNode* node) {
    devtools::label("Members for ChallengeNode:");
    devtools::property("m_unkPoint", node->m_unkPoint);
    devtools::property("m_unloaded", node->m_unloaded);
    devtools::label(fmt::format("ChallengesPage* m_challengesPage at {}", (void*)node->m_challengesPage).c_str());
    devtools::label(fmt::format("GJChallengeItem* m_challengeItem at {}", (void*)node->m_challengeItem).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_countdownLabel at {}", (void*)node->m_countdownLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ChanceTriggerGameObject>) {
devtools::registerNode<ChanceTriggerGameObject>([](ChanceTriggerGameObject* node) {
    devtools::label("Members for ChanceTriggerGameObject:");
    devtools::label("gd::vector<ChanceObject> m_chanceObjects");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CharacterColorPage>) {
devtools::registerNode<CharacterColorPage>([](CharacterColorPage* node) {
    devtools::label("Members for CharacterColorPage:");
    devtools::property("m_colorMode", node->m_colorMode);
    devtools::property("m_height", node->m_height);
    devtools::property("m_width", node->m_width);
    devtools::label(fmt::format("cocos2d::CCArray* m_playerObjects at {}", (void*)node->m_playerObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_modeButtons at {}", (void*)node->m_modeButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_colorButtons at {}", (void*)node->m_colorButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_cursors at {}", (void*)node->m_cursors).c_str());
    devtools::label(fmt::format("CharacterColorDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_glowToggler at {}", (void*)node->m_glowToggler).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_glowLabel at {}", (void*)node->m_glowLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CheckpointGameObject>) {
devtools::registerNode<CheckpointGameObject>([](CheckpointGameObject* node) {
    devtools::label("Members for CheckpointGameObject:");
    devtools::property("m_checkpointActivated", node->m_checkpointActivated);
    devtools::property("m_respawnID", node->m_respawnID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EnterEffectInstance>) {
devtools::registerNode<EnterEffectInstance>([](EnterEffectInstance* node) {
    devtools::label("Members for EnterEffectInstance:");
    devtools::property("m_length", node->m_length);
    devtools::property("m_lengthVariance", node->m_lengthVariance);
    devtools::property("m_offset", node->m_offset);
    devtools::property("m_offsetVariance", node->m_offsetVariance);
    devtools::property("m_offsetY", node->m_offsetY);
    devtools::property("m_offsetYVariance", node->m_offsetYVariance);
    devtools::property("m_modFront", node->m_modFront);
    devtools::property("m_modBack", node->m_modBack);
    devtools::property("m_deadzone", node->m_deadzone);
    devtools::property("m_moveDistance", node->m_moveDistance);
    devtools::property("m_moveDistanceVariance", node->m_moveDistanceVariance);
    devtools::property("m_moveAngle", node->m_moveAngle);
    devtools::property("m_moveAngleVariance", node->m_moveAngleVariance);
    devtools::property("m_moveX", node->m_moveX);
    devtools::property("m_moveXVariance", node->m_moveXVariance);
    devtools::property("m_moveY", node->m_moveY);
    devtools::property("m_moveYVariance", node->m_moveYVariance);
    devtools::property("m_relativeFade", node->m_relativeFade);
    devtools::property("m_scaleX", node->m_scaleX);
    devtools::property("m_scaleXVariance", node->m_scaleXVariance);
    devtools::property("m_scaleY", node->m_scaleY);
    devtools::property("m_scaleYVariance", node->m_scaleYVariance);
    devtools::property("m_rotation", node->m_rotation);
    devtools::property("m_rotationVariance", node->m_rotationVariance);
    devtools::property("m_tint", node->m_tint);
    devtools::property("m_unk074", node->m_unk074);
    devtools::property("m_toOpacity", node->m_toOpacity);
    devtools::property("m_fromOpacity", node->m_fromOpacity);
    devtools::property("m_hue", node->m_hue);
    devtools::property("m_saturation", node->m_saturation);
    devtools::property("m_value", node->m_value);
    devtools::property("m_reversed", node->m_reversed);
    devtools::property("m_targetID", node->m_targetID);
    devtools::property("m_centerID", node->m_centerID);
    devtools::property("m_unkFloat3", node->m_unkFloat3);
    devtools::property("m_easeIndex", node->m_easeIndex);
    devtools::property("m_paused", node->m_paused);
    devtools::property("m_paused2", node->m_paused2);
    devtools::property("m_unkBool4", node->m_unkBool4);
    devtools::property("m_targetGroupIndex", node->m_targetGroupIndex);
    devtools::property("m_controlID", node->m_controlID);
    devtools::label("gd::map<int,EnterEffectAnimValue> m_enterEffectAnimMap");
    devtools::label("cocos2d::ccHSVValue m_hsvValue");
    devtools::label(fmt::format("EnterEffectObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label("gd::vector<int> m_easeIndices");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJValueTween>) {
devtools::registerNode<GJValueTween>([](GJValueTween* node) {
    devtools::label("Members for GJValueTween:");
    devtools::property("m_fromValue", node->m_fromValue);
    devtools::property("m_toValue", node->m_toValue);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_currentValue", node->m_currentValue);
    devtools::property("m_easingType", node->m_easingType);
    devtools::property("m_easingRate", node->m_easingRate);
    devtools::property("m_finished", node->m_finished);
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_controlID", node->m_controlID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJGameState>) {
devtools::registerNode<GJGameState>([](GJGameState* node) {
    devtools::label("Members for GJGameState:");
    devtools::property("m_cameraZoom", node->m_cameraZoom);
    devtools::property("m_targetCameraZoom", node->m_targetCameraZoom);
    devtools::property("m_cameraOffset", node->m_cameraOffset);
    devtools::property("m_unkPoint1", node->m_unkPoint1);
    devtools::property("m_unkPoint2", node->m_unkPoint2);
    devtools::property("m_unkPoint3", node->m_unkPoint3);
    devtools::property("m_unkPoint4", node->m_unkPoint4);
    devtools::property("m_unkPoint5", node->m_unkPoint5);
    devtools::property("m_unkPoint6", node->m_unkPoint6);
    devtools::property("m_unkPoint7", node->m_unkPoint7);
    devtools::property("m_unkPoint8", node->m_unkPoint8);
    devtools::property("m_unkPoint9", node->m_unkPoint9);
    devtools::property("m_unkPoint10", node->m_unkPoint10);
    devtools::property("m_unkPoint11", node->m_unkPoint11);
    devtools::property("m_unkPoint12", node->m_unkPoint12);
    devtools::property("m_unkPoint13", node->m_unkPoint13);
    devtools::property("m_unkPoint14", node->m_unkPoint14);
    devtools::property("m_unkPoint15", node->m_unkPoint15);
    devtools::property("m_unkPoint16", node->m_unkPoint16);
    devtools::property("m_unkPoint17", node->m_unkPoint17);
    devtools::property("m_unkPoint18", node->m_unkPoint18);
    devtools::property("m_unkPoint19", node->m_unkPoint19);
    devtools::property("m_unkPoint20", node->m_unkPoint20);
    devtools::property("m_unkPoint21", node->m_unkPoint21);
    devtools::property("m_unkPoint22", node->m_unkPoint22);
    devtools::property("m_unkPoint23", node->m_unkPoint23);
    devtools::property("m_unkPoint24", node->m_unkPoint24);
    devtools::property("m_unkPoint25", node->m_unkPoint25);
    devtools::property("m_unkPoint26", node->m_unkPoint26);
    devtools::property("m_unkPoint27", node->m_unkPoint27);
    devtools::property("m_unkPoint28", node->m_unkPoint28);
    devtools::property("m_unkPoint29", node->m_unkPoint29);
    devtools::property("m_unkBool1", node->m_unkBool1);
    devtools::property("m_unkInt1", node->m_unkInt1);
    devtools::property("m_unkBool2", node->m_unkBool2);
    devtools::property("m_unkInt2", node->m_unkInt2);
    devtools::property("m_unkBool3", node->m_unkBool3);
    devtools::property("m_unkPoint30", node->m_unkPoint30);
    devtools::property("m_middleGroundOffsetY", node->m_middleGroundOffsetY);
    devtools::property("m_unkInt3", node->m_unkInt3);
    devtools::property("m_unkInt4", node->m_unkInt4);
    devtools::property("m_unkBool4", node->m_unkBool4);
    devtools::property("m_unkBool5", node->m_unkBool5);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_unkFloat3", node->m_unkFloat3);
    devtools::property("m_unkInt5", node->m_unkInt5);
    devtools::property("m_unkInt6", node->m_unkInt6);
    devtools::property("m_unkInt7", node->m_unkInt7);
    devtools::property("m_unkInt8", node->m_unkInt8);
    devtools::property("m_unkInt9", node->m_unkInt9);
    devtools::property("m_unkInt10", node->m_unkInt10);
    devtools::property("m_unkInt11", node->m_unkInt11);
    devtools::property("m_unkFloat4", node->m_unkFloat4);
    devtools::property("m_unkUint1", node->m_unkUint1);
    devtools::property("m_portalY", node->m_portalY);
    devtools::property("m_unkBool6", node->m_unkBool6);
    devtools::property("m_gravityRelated", node->m_gravityRelated);
    devtools::property("m_unkInt12", node->m_unkInt12);
    devtools::property("m_unkInt13", node->m_unkInt13);
    devtools::property("m_unkInt14", node->m_unkInt14);
    devtools::property("m_unkInt15", node->m_unkInt15);
    devtools::property("m_unkBool7", node->m_unkBool7);
    devtools::property("m_unkBool8", node->m_unkBool8);
    devtools::property("m_unkBool9", node->m_unkBool9);
    devtools::property("m_unkFloat5", node->m_unkFloat5);
    devtools::property("m_unkFloat6", node->m_unkFloat6);
    devtools::property("m_unkFloat7", node->m_unkFloat7);
    devtools::property("m_unkFloat8", node->m_unkFloat8);
    devtools::property("m_cameraAngle", node->m_cameraAngle);
    devtools::property("m_targetCameraAngle", node->m_targetCameraAngle);
    devtools::property("m_playerStreakBlend", node->m_playerStreakBlend);
    devtools::property("m_timeWarp", node->m_timeWarp);
    devtools::property("m_timeWarpRelated", node->m_timeWarpRelated);
    devtools::property("m_currentChannel", node->m_currentChannel);
    devtools::property("m_rotateChannel", node->m_rotateChannel);
    devtools::property("m_totalTime", node->m_totalTime);
    devtools::property("m_levelTime", node->m_levelTime);
    devtools::property("m_unkDouble3", node->m_unkDouble3);
    devtools::property("m_unkUint2", node->m_unkUint2);
    devtools::property("m_unkUint3", node->m_unkUint3);
    devtools::property("m_currentProgress", node->m_currentProgress);
    devtools::property("m_unkUint4", node->m_unkUint4);
    devtools::property("m_unkUint5", node->m_unkUint5);
    devtools::property("m_unkUint6", node->m_unkUint6);
    devtools::property("m_unkUint7", node->m_unkUint7);
    devtools::property("m_cameraPosition", node->m_cameraPosition);
    devtools::property("m_unkBool10", node->m_unkBool10);
    devtools::property("m_levelFlipping", node->m_levelFlipping);
    devtools::property("m_unkBool11", node->m_unkBool11);
    devtools::property("m_unkBool12", node->m_unkBool12);
    devtools::property("m_isDualMode", node->m_isDualMode);
    devtools::property("m_unkFloat9", node->m_unkFloat9);
    devtools::property("m_cameraEdgeValue0", node->m_cameraEdgeValue0);
    devtools::property("m_cameraEdgeValue1", node->m_cameraEdgeValue1);
    devtools::property("m_cameraEdgeValue2", node->m_cameraEdgeValue2);
    devtools::property("m_cameraEdgeValue3", node->m_cameraEdgeValue3);
    devtools::property("m_unkUint10", node->m_unkUint10);
    devtools::property("m_unkUint11", node->m_unkUint11);
    devtools::property("m_unkUint12", node->m_unkUint12);
    devtools::property("m_cameraStepDiff", node->m_cameraStepDiff);
    devtools::property("m_unkFloat10", node->m_unkFloat10);
    devtools::property("m_timeModRelated", node->m_timeModRelated);
    devtools::property("m_timeModRelated2", node->m_timeModRelated2);
    devtools::property("m_unkUint13", node->m_unkUint13);
    devtools::property("m_unkPoint32", node->m_unkPoint32);
    devtools::property("m_cameraPosition2", node->m_cameraPosition2);
    devtools::property("m_unkBool20", node->m_unkBool20);
    devtools::property("m_unkBool21", node->m_unkBool21);
    devtools::property("m_unkBool22", node->m_unkBool22);
    devtools::property("m_unkUint14", node->m_unkUint14);
    devtools::property("m_unkBool26", node->m_unkBool26);
    devtools::property("m_cameraShakeEnabled", node->m_cameraShakeEnabled);
    devtools::property("m_cameraShakeFactor", node->m_cameraShakeFactor);
    devtools::property("m_unkUint15", node->m_unkUint15);
    devtools::property("m_unkUint16", node->m_unkUint16);
    devtools::property("m_unkUint64_1", node->m_unkUint64_1);
    devtools::property("m_unkPoint34", node->m_unkPoint34);
    devtools::property("m_dualRelated", node->m_dualRelated);
    devtools::property("m_unkBool27", node->m_unkBool27);
    devtools::property("m_unkBool28", node->m_unkBool28);
    devtools::property("m_unkBool29", node->m_unkBool29);
    devtools::property("m_unkUint17", node->m_unkUint17);
    devtools::property("m_unkBool30", node->m_unkBool30);
    devtools::property("m_background", node->m_background);
    devtools::property("m_ground", node->m_ground);
    devtools::property("m_middleground", node->m_middleground);
    devtools::property("m_unkBool31", node->m_unkBool31);
    devtools::property("m_points", node->m_points);
    devtools::property("m_unkBool32", node->m_unkBool32);
    devtools::property("m_pauseCounter", node->m_pauseCounter);
    devtools::property("m_pauseBufferTimer", node->m_pauseBufferTimer);
    devtools::label("gd::unordered_map<int, int> m_spawnChannelRelated0");
    devtools::label("gd::unordered_map<int, bool> m_spawnChannelRelated1");
    devtools::label(fmt::format("GameObject* m_lastActivatedPortal1 at {}", (void*)node->m_lastActivatedPortal1).c_str());
    devtools::label(fmt::format("GameObject* m_lastActivatedPortal2 at {}", (void*)node->m_lastActivatedPortal2).c_str());
    devtools::label("gd::unordered_map<int, GJValueTween> m_tweenActions");
    devtools::label("gd::unordered_map<int, GameObjectPhysics> m_gameObjectPhysics");
    devtools::label("gd::vector<float> m_unkVecFloat1");
    devtools::label("gd::map<std::pair<int, int>, int> m_unkMapPairIntIntInt");
    devtools::label("gd::unordered_map<int, EnhancedGameObject*> m_stateObjects");
    devtools::label("gd::map<std::pair<GJGameEvent, int>, gd::vector<EventTriggerInstance>> m_unkMapPairGJGameEventIntVectorEventTriggerInstance");
    devtools::label("gd::map<std::pair<GJGameEvent, int>, int> m_unkMapPairGJGameEventIntInt");
    devtools::label("gd::unordered_map<int, gd::vector<EnterEffectInstance>> m_enterEffectInstanceVectors");
    devtools::label("gd::unordered_map<int, gd::vector<EnterEffectInstance>> m_exitEffectInstanceVectors");
    devtools::label("gd::vector<int> m_enterChannelMap");
    devtools::label("gd::vector<int> m_exitChannelMap");
    devtools::label("gd::vector<EnterEffectInstance> m_moveEffectInstances");
    devtools::label("gd::vector<EnterEffectInstance> m_rotateEffectInstances");
    devtools::label("gd::vector<EnterEffectInstance> m_scaleEffectInstances");
    devtools::label("gd::vector<EnterEffectInstance> m_fadeEffectInstances");
    devtools::label("gd::vector<EnterEffectInstance> m_tintEffectInstances");
    devtools::label("gd::unordered_set<int> m_unsortedAreaEffects");
    devtools::label("gd::vector<AdvancedFollowInstance> m_advanceFollowInstances");
    devtools::label("gd::vector<DynamicObjectAction> m_dynamicObjActions1");
    devtools::label("gd::vector<DynamicObjectAction> m_dynamicObjActions2");
    devtools::label("gd::unordered_map<int, gd::vector<int>> m_unkUMap8");
    devtools::label("gd::map<std::pair<int,int>, SFXTriggerInstance> m_proximityVolumeRelated");
    devtools::label("gd::unordered_map<int, SongChannelState> m_songChannelStates");
    devtools::label("gd::unordered_map<int, gd::vector<SongTriggerState>> m_songTriggerStateVectors");
    devtools::label("gd::vector<SFXTriggerState> m_sfxTriggerStates");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJShaderState>) {
devtools::registerNode<GJShaderState>([](GJShaderState* node) {
    devtools::label("Members for GJShaderState:");
    devtools::property("m_time", node->m_time);
    devtools::property("m_prevTime", node->m_prevTime);
    devtools::property("m_startTime", node->m_startTime);
    devtools::property("m_textureScaleX", node->m_textureScaleX);
    devtools::property("m_textureScaleY", node->m_textureScaleY);
    devtools::property("m_blurRefColor", node->m_blurRefColor);
    devtools::property("m_blurIntensity", node->m_blurIntensity);
    devtools::property("m_blurRefChannel", node->m_blurRefChannel);
    devtools::property("m_blurOnlyEmpty", node->m_blurOnlyEmpty);
    devtools::property("m_shockWaveStartTime", node->m_shockWaveStartTime);
    devtools::property("m_shockWaveTime", node->m_shockWaveTime);
    devtools::property("m_shockWaveTimeOffset", node->m_shockWaveTimeOffset);
    devtools::property("m_shockWaveSpeed", node->m_shockWaveSpeed);
    devtools::property("m_shockWaveThickness", node->m_shockWaveThickness);
    devtools::property("m_shockWaveStrength", node->m_shockWaveStrength);
    devtools::property("m_shockWaveWidth", node->m_shockWaveWidth);
    devtools::property("m_shockWaveFadeIn", node->m_shockWaveFadeIn);
    devtools::property("m_shockWaveFadeOut", node->m_shockWaveFadeOut);
    devtools::property("m_shockWaveInvert", node->m_shockWaveInvert);
    devtools::property("m_shockWaveInner", node->m_shockWaveInner);
    devtools::property("m_shockWaveOuter", node->m_shockWaveOuter);
    devtools::property("m_shockWaveTargetID", node->m_shockWaveTargetID);
    devtools::property("m_shockWaveTarget", node->m_shockWaveTarget);
    devtools::property("m_shockWaveCenterMoving", node->m_shockWaveCenterMoving);
    devtools::property("m_shockWaveRelative", node->m_shockWaveRelative);
    devtools::property("m_shockWaveMaxSize", node->m_shockWaveMaxSize);
    devtools::property("m_shockWaveScreenOffset", node->m_shockWaveScreenOffset);
    devtools::property("m_shockWaveCenterDirty", node->m_shockWaveCenterDirty);
    devtools::property("m_shockWaveCenter", node->m_shockWaveCenter);
    devtools::property("m_shockLineStartTime", node->m_shockLineStartTime);
    devtools::property("m_shockLineTime", node->m_shockLineTime);
    devtools::property("m_shockLineTimeOffset", node->m_shockLineTimeOffset);
    devtools::property("m_shockLineSpeed", node->m_shockLineSpeed);
    devtools::property("m_shockLineAxis", node->m_shockLineAxis);
    devtools::property("m_shockLineDirection", node->m_shockLineDirection);
    devtools::property("m_shockLineDual", node->m_shockLineDual);
    devtools::property("m_shockLineInvert", node->m_shockLineInvert);
    devtools::property("m_shockLineScreenOffset", node->m_shockLineScreenOffset);
    devtools::property("m_shockLineStrength", node->m_shockLineStrength);
    devtools::property("m_shockLineWidth", node->m_shockLineWidth);
    devtools::property("m_shockLineFadeIn", node->m_shockLineFadeIn);
    devtools::property("m_shockLineFadeOut", node->m_shockLineFadeOut);
    devtools::property("m_shockLineThickness", node->m_shockLineThickness);
    devtools::property("m_shockLineTargetID", node->m_shockLineTargetID);
    devtools::property("m_shockLineTarget", node->m_shockLineTarget);
    devtools::property("m_shockLineCenterMoving", node->m_shockLineCenterMoving);
    devtools::property("m_shockLineRelative", node->m_shockLineRelative);
    devtools::property("m_shockLineMaxSize", node->m_shockLineMaxSize);
    devtools::property("m_shockLineScreenOffset2", node->m_shockLineScreenOffset2);
    devtools::property("m_shockLineCenterDirty", node->m_shockLineCenterDirty);
    devtools::property("m_shockLineCenter", node->m_shockLineCenter);
    devtools::property("m_glitchStrength", node->m_glitchStrength);
    devtools::property("m_glitchSpeed", node->m_glitchSpeed);
    devtools::property("m_glitchSliceHeight", node->m_glitchSliceHeight);
    devtools::property("m_glitchMaxSliceXOff", node->m_glitchMaxSliceXOff);
    devtools::property("m_glitchMaxColXOff", node->m_glitchMaxColXOff);
    devtools::property("m_glitchMaxColYOff", node->m_glitchMaxColYOff);
    devtools::property("m_glitchRelative", node->m_glitchRelative);
    devtools::property("m_chromaticTargetX", node->m_chromaticTargetX);
    devtools::property("m_chromaticTargetY", node->m_chromaticTargetY);
    devtools::property("m_chromaticRelative", node->m_chromaticRelative);
    devtools::property("m_cGStartTime", node->m_cGStartTime);
    devtools::property("m_cGTime", node->m_cGTime);
    devtools::property("m_cGSpeed", node->m_cGSpeed);
    devtools::property("m_cGRGBOffset", node->m_cGRGBOffset);
    devtools::property("m_cGStrength", node->m_cGStrength);
    devtools::property("m_cGSegmentHeight", node->m_cGSegmentHeight);
    devtools::property("m_cGLineThickness", node->m_cGLineThickness);
    devtools::property("m_cGLineStrength", node->m_cGLineStrength);
    devtools::property("m_cGEnable", node->m_cGEnable);
    devtools::property("m_cGActive", node->m_cGActive);
    devtools::property("m_cGRelative", node->m_cGRelative);
    devtools::property("m_cGRelativePos", node->m_cGRelativePos);
    devtools::property("m_pixelateTargetX", node->m_pixelateTargetX);
    devtools::property("m_pixelateTargetY", node->m_pixelateTargetY);
    devtools::property("m_pixelateSnapGrid", node->m_pixelateSnapGrid);
    devtools::property("m_pixelatePixelating", node->m_pixelatePixelating);
    devtools::property("m_pixelateRelative", node->m_pixelateRelative);
    devtools::property("m_pixelateHardEdges", node->m_pixelateHardEdges);
    devtools::property("m_lensCircleSize", node->m_lensCircleSize);
    devtools::property("m_lensCircleFade", node->m_lensCircleFade);
    devtools::property("m_lensCircleStrength", node->m_lensCircleStrength);
    devtools::property("m_lensCircleTargetID", node->m_lensCircleTargetID);
    devtools::property("m_lensCircleTintChannel", node->m_lensCircleTintChannel);
    devtools::property("m_lensCircleRelative", node->m_lensCircleRelative);
    devtools::property("m_lensCircleAdditive", node->m_lensCircleAdditive);
    devtools::property("m_lensCircleTint", node->m_lensCircleTint);
    devtools::property("m_lensCircleCenter", node->m_lensCircleCenter);
    devtools::property("m_lensCircleScreenOffset", node->m_lensCircleScreenOffset);
    devtools::property("m_radialBlurSize", node->m_radialBlurSize);
    devtools::property("m_radialBlurFade", node->m_radialBlurFade);
    devtools::property("m_radialBlurTarget", node->m_radialBlurTarget);
    devtools::property("m_radialBlurTargetID", node->m_radialBlurTargetID);
    devtools::property("m_radialBlurCenter", node->m_radialBlurCenter);
    devtools::property("m_radialBlurScreenOffset", node->m_radialBlurScreenOffset);
    devtools::property("m_motionBlurTargetX", node->m_motionBlurTargetX);
    devtools::property("m_motionBlurTargetY", node->m_motionBlurTargetY);
    devtools::property("m_motionBlurSpeedX", node->m_motionBlurSpeedX);
    devtools::property("m_motionBlurSpeedY", node->m_motionBlurSpeedY);
    devtools::property("m_motionBlurFollowEaseX", node->m_motionBlurFollowEaseX);
    devtools::property("m_motionBlurFollowEaseY", node->m_motionBlurFollowEaseY);
    devtools::property("m_motionBlurTargetIDX", node->m_motionBlurTargetIDX);
    devtools::property("m_motionBlurTargetIDY", node->m_motionBlurTargetIDY);
    devtools::property("m_motionBlurDual", node->m_motionBlurDual);
    devtools::property("m_motionBlurRelative", node->m_motionBlurRelative);
    devtools::property("m_bulgeValue", node->m_bulgeValue);
    devtools::property("m_bulgeRelative", node->m_bulgeRelative);
    devtools::property("m_bulgeTargetID", node->m_bulgeTargetID);
    devtools::property("m_bulgeRadius", node->m_bulgeRadius);
    devtools::property("m_bulgeCenter", node->m_bulgeCenter);
    devtools::property("m_bulgeScreenOffset", node->m_bulgeScreenOffset);
    devtools::property("m_pinchTargetX", node->m_pinchTargetX);
    devtools::property("m_pinchTargetY", node->m_pinchTargetY);
    devtools::property("m_pinchTargetEnabledX", node->m_pinchTargetEnabledX);
    devtools::property("m_pinchTargetEnabledY", node->m_pinchTargetEnabledY);
    devtools::property("m_pinchTargetIDX", node->m_pinchTargetIDX);
    devtools::property("m_pinchTargetIDY", node->m_pinchTargetIDY);
    devtools::property("m_pinchCenter", node->m_pinchCenter);
    devtools::property("m_pinchScreenOffset", node->m_pinchScreenOffset);
    devtools::property("m_pinchRelative", node->m_pinchRelative);
    devtools::property("m_pinchRadius", node->m_pinchRadius);
    devtools::property("m_pinchModifier", node->m_pinchModifier);
    devtools::property("m_grayscaleValue", node->m_grayscaleValue);
    devtools::property("m_grayscaleUseLum", node->m_grayscaleUseLum);
    devtools::property("m_grayscaleTintChannel", node->m_grayscaleTintChannel);
    devtools::property("m_grayscaleTint", node->m_grayscaleTint);
    devtools::property("m_sepiaValue", node->m_sepiaValue);
    devtools::property("m_invertColorEditRGB", node->m_invertColorEditRGB);
    devtools::property("m_invertColorR", node->m_invertColorR);
    devtools::property("m_invertColorG", node->m_invertColorG);
    devtools::property("m_invertColorB", node->m_invertColorB);
    devtools::property("m_invertColorClampRGB", node->m_invertColorClampRGB);
    devtools::property("m_hueShiftDegrees", node->m_hueShiftDegrees);
    devtools::property("m_colorChangeCR", node->m_colorChangeCR);
    devtools::property("m_colorChangeCG", node->m_colorChangeCG);
    devtools::property("m_colorChangeCB", node->m_colorChangeCB);
    devtools::property("m_colorChangeBR", node->m_colorChangeBR);
    devtools::property("m_colorChangeBG", node->m_colorChangeBG);
    devtools::property("m_colorChangeBB", node->m_colorChangeBB);
    devtools::property("m_splitTargetRows", node->m_splitTargetRows);
    devtools::property("m_splitTargetCols", node->m_splitTargetCols);
    devtools::property("m_splitActive", node->m_splitActive);
    devtools::property("m_minBlendingLayer", node->m_minBlendingLayer);
    devtools::property("m_maxBlendingLayer", node->m_maxBlendingLayer);
    devtools::property("m_zLayerDirty", node->m_zLayerDirty);
    devtools::property("m_noPlayerParticles", node->m_noPlayerParticles);
    devtools::property("m_usesShaders", node->m_usesShaders);
    devtools::label("gd::unordered_map<int, GJValueTween> m_tweenActions");
    devtools::label("gd::unordered_map<int, double> m_tweenTimes");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODAudioState>) {
devtools::registerNode<FMODAudioState>([](FMODAudioState* node) {
    devtools::label("Members for FMODAudioState:");
    devtools::property("m_interval", node->m_interval);
    devtools::property("m_elapsed", node->m_elapsed);
    devtools::property("m_unkUint64_1", node->m_unkUint64_1);
    devtools::label("gd::map<std::pair<int,int>,FMODSoundTween> m_tweensForEffectChannels");
    devtools::label("gd::map<std::pair<int,int>,FMODSoundTween> m_tweensForEffectGroups");
    devtools::label("gd::map<std::pair<int,int>,FMODSoundTween> m_tweensForMusicChannels");
    devtools::label("gd::unordered_map<int,float> m_volumeForEffectChannels");
    devtools::label("gd::unordered_map<int,float> m_volumeModForEffectChannels");
    devtools::label("gd::unordered_map<int,float> m_pitchForEffectChannels");
    devtools::label("gd::unordered_map<int,float> m_volumeForEffectGroups");
    devtools::label("gd::unordered_map<int,float> m_volumeModForEffectGroups");
    devtools::label("gd::unordered_map<int,float> m_pitchForEffectGroups");
    devtools::label("gd::unordered_map<int,float> m_volumeForMusicChannels");
    devtools::label("gd::unordered_map<int,float> m_volumeModForMusicChannels");
    devtools::label("gd::unordered_map<int,float> m_pitchForMusicChannels");
    devtools::label("gd::unordered_map<int,float> m_intervalForEffects");
    devtools::label("gd::unordered_map<int,FMODQueuedMusic> m_queuedMusicForChannels1");
    devtools::label("gd::unordered_map<int,FMODQueuedMusic> m_queuedMusicForChannels2");
    devtools::label("gd::unordered_map<int,FMODSoundState> m_soundStateForChannels");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PulseEffectAction>) {
devtools::registerNode<PulseEffectAction>([](PulseEffectAction* node) {
    devtools::label("Members for PulseEffectAction:");
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_fadeInTime", node->m_fadeInTime);
    devtools::property("m_holdTime", node->m_holdTime);
    devtools::property("m_fadeOutTime", node->m_fadeOutTime);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_currentValue", node->m_currentValue);
    devtools::property("m_color", node->m_color);
    devtools::enumerable("m_pulseEffectType", node->m_pulseEffectType, {
        { PulseEffectType::Default, "PulseEffectType::Default" },
        { PulseEffectType::Hsv, "PulseEffectType::Hsv" },
        { PulseEffectType::Color, "PulseEffectType::Color" },
    });
    devtools::property("m_colorIndex", node->m_colorIndex);
    devtools::property("m_mainOnly", node->m_mainOnly);
    devtools::property("m_detailOnly", node->m_detailOnly);
    devtools::property("m_isDynamicHsv", node->m_isDynamicHsv);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_startTime", node->m_startTime);
    devtools::label("cocos2d::ccHSVValue m_hsv");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CountTriggerAction>) {
devtools::registerNode<CountTriggerAction>([](CountTriggerAction* node) {
    devtools::label("Members for CountTriggerAction:");
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_previousCount", node->m_previousCount);
    devtools::property("m_targetCount", node->m_targetCount);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_activateGroup", node->m_activateGroup);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_multiActivate", node->m_multiActivate);
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, OpacityEffectAction>) {
devtools::registerNode<OpacityEffectAction>([](OpacityEffectAction* node) {
    devtools::label("Members for OpacityEffectAction:");
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_fromValue", node->m_fromValue);
    devtools::property("m_toValue", node->m_toValue);
    devtools::property("m_finished", node->m_finished);
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_currentValue", node->m_currentValue);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_deltaTimeRelated", node->m_deltaTimeRelated);
    devtools::property("m_durationRelated", node->m_durationRelated);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TouchToggleAction>) {
devtools::registerNode<TouchToggleAction>([](TouchToggleAction* node) {
    devtools::label("Members for TouchToggleAction:");
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_holdMode", node->m_holdMode);
    devtools::enumerable("m_touchTriggerType", node->m_touchTriggerType, {
        { TouchTriggerType::Normal, "TouchTriggerType::Normal" },
        { TouchTriggerType::ToggleOn, "TouchTriggerType::ToggleOn" },
        { TouchTriggerType::ToggleOff, "TouchTriggerType::ToggleOff" },
    });
    devtools::enumerable("m_touchTriggerControl", node->m_touchTriggerControl, {
        { TouchTriggerControl::Both, "TouchTriggerControl::Both" },
        { TouchTriggerControl::Player1, "TouchTriggerControl::Player1" },
        { TouchTriggerControl::Player2, "TouchTriggerControl::Player2" },
    });
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_dualMode", node->m_dualMode);
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CollisionTriggerAction>) {
devtools::registerNode<CollisionTriggerAction>([](CollisionTriggerAction* node) {
    devtools::label("Members for CollisionTriggerAction:");
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_blockAID", node->m_blockAID);
    devtools::property("m_blockBID", node->m_blockBID);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_triggerOnExit", node->m_triggerOnExit);
    devtools::property("m_activateGroup", node->m_activateGroup);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ToggleTriggerAction>) {
devtools::registerNode<ToggleTriggerAction>([](ToggleTriggerAction* node) {
    devtools::label("Members for ToggleTriggerAction:");
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_activateGroup", node->m_activateGroup);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SpawnTriggerAction>) {
devtools::registerNode<SpawnTriggerAction>([](SpawnTriggerAction* node) {
    devtools::label("Members for SpawnTriggerAction:");
    devtools::property("m_finished", node->m_finished);
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_spawnOrdered", node->m_spawnOrdered);
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, KeyframeObject>) {
devtools::registerNode<KeyframeObject>([](KeyframeObject* node) {
    devtools::label("Members for KeyframeObject:");
    devtools::property("m_unk000", node->m_unk000);
    devtools::property("m_unk008", node->m_unk008);
    devtools::property("m_unk00c", node->m_unk00c);
    devtools::property("m_unk010", node->m_unk010);
    devtools::property("m_unk014", node->m_unk014);
    devtools::property("m_unk018", node->m_unk018);
    devtools::property("m_unk01c", node->m_unk01c);
    devtools::property("m_unk01d", node->m_unk01d);
    devtools::property("m_unk01e", node->m_unk01e);
    devtools::property("m_unk170", node->m_unk170);
    devtools::property("m_unk178", node->m_unk178);
    devtools::property("m_unk180", node->m_unk180);
    devtools::property("m_unk184", node->m_unk184);
    devtools::property("m_unk188", node->m_unk188);
    devtools::property("m_unk190", node->m_unk190);
    devtools::property("m_unk198", node->m_unk198);
    devtools::property("m_unk1a0", node->m_unk1a0);
    devtools::property("m_unk1a8", node->m_unk1a8);
    devtools::property("m_unk1b0", node->m_unk1b0);
    devtools::property("m_unk1b8", node->m_unk1b8);
    devtools::label("tk_spline m_spline1");
    devtools::label("tk_spline m_spline2");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GroupCommandObject2>) {
devtools::registerNode<GroupCommandObject2>([](GroupCommandObject2* node) {
    devtools::label("Members for GroupCommandObject2:");
    devtools::property("m_groupCommandUniqueID", node->m_groupCommandUniqueID);
    devtools::property("m_moveOffset", node->m_moveOffset);
    devtools::enumerable("m_easingType", node->m_easingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_easingRate", node->m_easingRate);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_centerGroupID", node->m_centerGroupID);
    devtools::property("m_currentXOffset", node->m_currentXOffset);
    devtools::property("m_currentYOffset", node->m_currentYOffset);
    devtools::property("m_deltaX", node->m_deltaX);
    devtools::property("m_deltaY", node->m_deltaY);
    devtools::property("m_oldDeltaX", node->m_oldDeltaX);
    devtools::property("m_oldDeltaY", node->m_oldDeltaY);
    devtools::property("m_lockedCurrentXOffset", node->m_lockedCurrentXOffset);
    devtools::property("m_lockedCurrentYOffset", node->m_lockedCurrentYOffset);
    devtools::property("m_finished", node->m_finished);
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_finishRelated", node->m_finishRelated);
    devtools::property("m_lockToPlayerX", node->m_lockToPlayerX);
    devtools::property("m_lockToPlayerY", node->m_lockToPlayerY);
    devtools::property("m_lockToCameraX", node->m_lockToCameraX);
    devtools::property("m_lockToCameraY", node->m_lockToCameraY);
    devtools::property("m_lockedInX", node->m_lockedInX);
    devtools::property("m_lockedInY", node->m_lockedInY);
    devtools::property("m_moveModX", node->m_moveModX);
    devtools::property("m_moveModY", node->m_moveModY);
    devtools::property("m_currentRotateOrTransformValue", node->m_currentRotateOrTransformValue);
    devtools::property("m_currentRotateOrTransformDelta", node->m_currentRotateOrTransformDelta);
    devtools::property("m_someInterpValue1RelatedOne", node->m_someInterpValue1RelatedOne);
    devtools::property("m_someInterpValue2RelatedOne", node->m_someInterpValue2RelatedOne);
    devtools::property("m_rotationOffset", node->m_rotationOffset);
    devtools::property("m_lockObjectRotation", node->m_lockObjectRotation);
    devtools::property("m_targetPlayer", node->m_targetPlayer);
    devtools::property("m_followXMod", node->m_followXMod);
    devtools::property("m_followYMod", node->m_followYMod);
    devtools::property("m_commandType", node->m_commandType);
    devtools::property("m_someInterpValue1", node->m_someInterpValue1);
    devtools::property("m_someInterpValue2", node->m_someInterpValue2);
    devtools::property("m_keyframeRelated", node->m_keyframeRelated);
    devtools::property("m_targetScaleX", node->m_targetScaleX);
    devtools::property("m_targetScaleY", node->m_targetScaleY);
    devtools::property("m_transformTriggerProperty450", node->m_transformTriggerProperty450);
    devtools::property("m_transformTriggerProperty451", node->m_transformTriggerProperty451);
    devtools::property("m_someInterpValue1RelatedZero", node->m_someInterpValue1RelatedZero);
    devtools::property("m_someInterpValue2RelatedZero", node->m_someInterpValue2RelatedZero);
    devtools::property("m_onlyMove", node->m_onlyMove);
    devtools::property("m_transformRelatedFalse", node->m_transformRelatedFalse);
    devtools::property("m_relativeRotation", node->m_relativeRotation);
    devtools::property("m_someInterpValue1Related", node->m_someInterpValue1Related);
    devtools::property("m_someInterpValue2Related", node->m_someInterpValue2Related);
    devtools::property("m_followYSpeed", node->m_followYSpeed);
    devtools::property("m_followYDelay", node->m_followYDelay);
    devtools::property("m_followYOffset", node->m_followYOffset);
    devtools::property("m_followYMaxSpeed", node->m_followYMaxSpeed);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_deltaX_3", node->m_deltaX_3);
    devtools::property("m_deltaY_3", node->m_deltaY_3);
    devtools::property("m_oldDeltaX_3", node->m_oldDeltaX_3);
    devtools::property("m_oldDeltaY_3", node->m_oldDeltaY_3);
    devtools::property("m_Delta_3_Related", node->m_Delta_3_Related);
    devtools::property("m_unkDoubleMaybeUnused", node->m_unkDoubleMaybeUnused);
    devtools::property("m_actionType1", node->m_actionType1);
    devtools::property("m_actionType2", node->m_actionType2);
    devtools::property("m_actionValue1", node->m_actionValue1);
    devtools::property("m_actionValue2", node->m_actionValue2);
    devtools::property("m_someInterpValue1RelatedFalse", node->m_someInterpValue1RelatedFalse);
    devtools::property("m_deltaTimeInFloat", node->m_deltaTimeInFloat);
    devtools::property("m_alreadyUpdated", node->m_alreadyUpdated);
    devtools::property("m_doUpdate", node->m_doUpdate);
    devtools::property("m_splineRelated", node->m_splineRelated);
    devtools::property("m_gameObjectRotation", node->m_gameObjectRotation);
    devtools::property("m_someInterpValue2RelatedTrue", node->m_someInterpValue2RelatedTrue);
    devtools::property("m_unkInt204", node->m_unkInt204);
    devtools::label("gd::vector<KeyframeObject> m_keyframes");
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TimerTriggerAction>) {
devtools::registerNode<TimerTriggerAction>([](TimerTriggerAction* node) {
    devtools::label("Members for TimerTriggerAction:");
    devtools::property("m_disabled", node->m_disabled);
    devtools::property("m_time", node->m_time);
    devtools::property("m_targetTime", node->m_targetTime);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_triggerUniqueID", node->m_triggerUniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_multiActivate", node->m_multiActivate);
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EffectManagerState>) {
devtools::registerNode<EffectManagerState>([](EffectManagerState* node) {
    devtools::label("Members for EffectManagerState:");
    devtools::label("gd::vector<CAState> m_unkVecCAState");
    devtools::label("gd::vector<PulseEffectAction> m_unkVecPulseEffectAction");
    devtools::label("gd::unordered_map<int,gd::vector<PulseEffectAction>> m_unorderedMapInt_vectorPulseEffectAction");
    devtools::label("gd::unordered_map<int,gd::vector<CountTriggerAction>> m_unorderedMapInt_vectorCountTriggerAction");
    devtools::label("gd::unordered_set<int> m_unorderedSet_int1");
    devtools::label("gd::map<int,int> m_mapInt_Int");
    devtools::label("gd::unordered_map<int,OpacityEffectAction> m_unorderedMapInt_OpacityEffectAction");
    devtools::label("gd::vector<TouchToggleAction> m_vectorTouchToggleAction");
    devtools::label("gd::vector<CollisionTriggerAction> m_vectorCollisionTriggerAction");
    devtools::label("gd::vector<ToggleTriggerAction> m_vectorToggleTriggerAction");
    devtools::label("gd::vector<SpawnTriggerAction> m_vectorSpawnTriggerAction");
    devtools::label("gd::unordered_map<int,int> m_itemCountMap");
    devtools::label("gd::unordered_map<int,bool> m_unorderedMapInt_bool");
    devtools::label("gd::vector<GroupCommandObject2> m_vectorGroupCommandObject2");
    devtools::label("gd::unordered_map<int,std::pair<double,double>> m_unorderedMapInt_pair_double_double");
    devtools::label("gd::unordered_set<int> m_unorderedSet_int2");
    devtools::label("gd::unordered_map<int,TimerItem> m_timerItemMap");
    devtools::label("gd::unordered_map<int,gd::vector<TimerTriggerAction>> m_unorderedMapInt_vectorTimerTriggerAction");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CheckpointObject>) {
devtools::registerNode<CheckpointObject>([](CheckpointObject* node) {
    devtools::label("Members for CheckpointObject:");
    devtools::property("m_unke78", node->m_unke78);
    devtools::property("m_unke7c", node->m_unke7c);
    devtools::property("m_unke80", node->m_unke80);
    devtools::property("m_ground2Invisible", node->m_ground2Invisible);
    devtools::property("m_streakBlend", node->m_streakBlend);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_respawnID", node->m_respawnID);
    devtools::property("m_unk11e8", node->m_unk11e8);
    devtools::property("m_commandIndex", node->m_commandIndex);
    devtools::label("GJGameState m_gameState");
    devtools::label("GJShaderState m_shaderState");
    devtools::label("FMODAudioState m_audioState");
    devtools::label(fmt::format("GameObject* m_physicalCheckpointObject at {}", (void*)node->m_physicalCheckpointObject).c_str());
    devtools::label(fmt::format("PlayerCheckpoint* m_player1Checkpoint at {}", (void*)node->m_player1Checkpoint).c_str());
    devtools::label(fmt::format("PlayerCheckpoint* m_player2Checkpoint at {}", (void*)node->m_player2Checkpoint).c_str());
    devtools::label("gd::vector<SavedObjectStateRef> m_vectorSavedObjectStateRef");
    devtools::label("gd::vector<SavedActiveObjectState> m_vectorActiveSaveObjectState");
    devtools::label("gd::vector<SavedSpecialObjectState> m_vectorSpecialSaveObjectState");
    devtools::label("EffectManagerState m_effectManagerState");
    devtools::label(fmt::format("cocos2d::CCArray* m_gradientTriggerObjectArray at {}", (void*)node->m_gradientTriggerObjectArray).c_str());
    devtools::label("gd::unordered_map<int,SequenceTriggerState> m_sequenceTriggerStateUnorderedMap");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CollisionBlockPopup>) {
devtools::registerNode<CollisionBlockPopup>([](CollisionBlockPopup* node) {
    devtools::label("Members for CollisionBlockPopup:");
    devtools::property("m_blockID", node->m_blockID);
    devtools::property("m_dynamicBlock", node->m_dynamicBlock);
    devtools::property("m_disableDelegate", node->m_disableDelegate);
    devtools::label(fmt::format("EffectGameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gameObjects at {}", (void*)node->m_gameObjects).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_blockIDInput at {}", (void*)node->m_blockIDInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ColorAction>) {
devtools::registerNode<ColorAction>([](ColorAction* node) {
    devtools::label("Members for ColorAction:");
    devtools::property("m_stepFinished", node->m_stepFinished);
    devtools::property("m_paused", node->m_paused);
    devtools::property("m_color", node->m_color);
    devtools::property("m_currentOpacity", node->m_currentOpacity);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_fromColor", node->m_fromColor);
    devtools::property("m_toColor", node->m_toColor);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_blending", node->m_blending);
    devtools::property("m_playerColor", node->m_playerColor);
    devtools::property("m_colorID", node->m_colorID);
    devtools::property("m_fromOpacity", node->m_fromOpacity);
    devtools::property("m_toOpacity", node->m_toOpacity);
    devtools::property("m_copyID", node->m_copyID);
    devtools::property("m_copyColorCalculated", node->m_copyColorCalculated);
    devtools::property("m_copyOpacity", node->m_copyOpacity);
    devtools::property("m_copyColorLoop", node->m_copyColorLoop);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_controlID", node->m_controlID);
    devtools::property("m_legacyHSV", node->m_legacyHSV);
    devtools::property("m_actionDelay", node->m_actionDelay);
    devtools::property("m_stepInterval", node->m_stepInterval);
    devtools::label("cocos2d::ccHSVValue m_copyHSV");
    devtools::label(fmt::format("ColorActionSprite* m_colorSprite at {}", (void*)node->m_colorSprite).c_str());
    devtools::label(fmt::format("InheritanceNode* m_inheritanceNode at {}", (void*)node->m_inheritanceNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ColorAction2>) {
devtools::registerNode<ColorAction2>([](ColorAction2* node) {
    devtools::label("Members for ColorAction2:");
    devtools::property("m_stepFinished", node->m_stepFinished);
    devtools::property("m_paused", node->m_paused);
    devtools::property("m_color", node->m_color);
    devtools::property("m_currentOpacity", node->m_currentOpacity);
    devtools::property("m_deltaTime", node->m_deltaTime);
    devtools::property("m_fromColor", node->m_fromColor);
    devtools::property("m_toColor", node->m_toColor);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_blending", node->m_blending);
    devtools::property("m_playerColor", node->m_playerColor);
    devtools::property("m_colorID", node->m_colorID);
    devtools::property("m_fromOpacity", node->m_fromOpacity);
    devtools::property("m_toOpacity", node->m_toOpacity);
    devtools::property("m_copyID", node->m_copyID);
    devtools::property("m_copyColorCalculated", node->m_copyColorCalculated);
    devtools::property("m_copyOpacity", node->m_copyOpacity);
    devtools::property("m_copyColorLoop", node->m_copyColorLoop);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_legacyHSV", node->m_legacyHSV);
    devtools::property("m_actionDelay", node->m_actionDelay);
    devtools::property("m_stepInterval", node->m_stepInterval);
    devtools::label("cocos2d::ccHSVValue m_copyHSV");
    devtools::label(fmt::format("ColorActionSprite* m_colorSprite at {}", (void*)node->m_colorSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ColorActionSprite>) {
devtools::registerNode<ColorActionSprite>([](ColorActionSprite* node) {
    devtools::label("Members for ColorActionSprite:");
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_color", node->m_color);
    devtools::property("m_copyColor", node->m_copyColor);
    devtools::property("m_colorID", node->m_colorID);
    devtools::property("m_pulseColor", node->m_pulseColor);
    devtools::label(fmt::format("ColorAction* m_colorAction at {}", (void*)node->m_colorAction).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ColorChannelSprite>) {
devtools::registerNode<ColorChannelSprite>([](ColorChannelSprite* node) {
    devtools::label("Members for ColorChannelSprite:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_copyLabel at {}", (void*)node->m_copyLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_opacityLabel at {}", (void*)node->m_opacityLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_blendingLabel at {}", (void*)node->m_blendingLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ColorSelectLiveOverlay>) {
devtools::registerNode<ColorSelectLiveOverlay>([](ColorSelectLiveOverlay* node) {
    devtools::label("Members for ColorSelectLiveOverlay:");
    devtools::property("m_mainColor", node->m_mainColor);
    devtools::property("m_detailColor", node->m_detailColor);
    devtools::property("m_targetColor", node->m_targetColor);
    devtools::property("m_unk2ac", node->m_unk2ac);
    devtools::property("m_unk2b0", node->m_unk2b0);
    devtools::property("m_unk2b4", node->m_unk2b4);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_disableTextDelegate", node->m_disableTextDelegate);
    devtools::property("m_unk2c9", node->m_unk2c9);
    devtools::property("m_updateColor", node->m_updateColor);
    devtools::property("m_hue", node->m_hue);
    devtools::property("m_saturation", node->m_saturation);
    devtools::property("m_value", node->m_value);
    devtools::property("m_detailColorSelected", node->m_detailColorSelected);
    devtools::property("m_closeButtonPressed", node->m_closeButtonPressed);
    devtools::label(fmt::format("EffectGameObject* m_effectGameObject at {}", (void*)node->m_effectGameObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_barSprites at {}", (void*)node->m_barSprites).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_12buttons at {}", (void*)node->m_12buttons).c_str());
    devtools::label(fmt::format("ColorAction* m_baseColorAction at {}", (void*)node->m_baseColorAction).c_str());
    devtools::label(fmt::format("ColorAction* m_detailColorAction at {}", (void*)node->m_detailColorAction).c_str());
    devtools::label(fmt::format("ColorSelectDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("Slider* m_hueSlider at {}", (void*)node->m_hueSlider).c_str());
    devtools::label(fmt::format("Slider* m_saturationSlider at {}", (void*)node->m_saturationSlider).c_str());
    devtools::label(fmt::format("Slider* m_valueSlider at {}", (void*)node->m_valueSlider).c_str());
    devtools::label(fmt::format("Slider* m_opacitySlider at {}", (void*)node->m_opacitySlider).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_colorSprite at {}", (void*)node->m_colorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_oldColorSprite at {}", (void*)node->m_oldColorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_saturationSprite at {}", (void*)node->m_saturationSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_valueSprite at {}", (void*)node->m_valueSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_opacitySprite at {}", (void*)node->m_opacitySprite).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_colorLabel at {}", (void*)node->m_colorLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupTriggerPopup>) {
devtools::registerNode<SetupTriggerPopup>([](SetupTriggerPopup* node) {
    devtools::label("Members for SetupTriggerPopup:");
    devtools::property("m_touchTriggered", node->m_touchTriggered);
    devtools::property("m_spawnTriggered", node->m_spawnTriggered);
    devtools::property("m_multiTriggered", node->m_multiTriggered);
    devtools::property("m_width", node->m_width);
    devtools::property("m_height", node->m_height);
    devtools::property("m_disableTextDelegate", node->m_disableTextDelegate);
    devtools::enumerable("m_easingType", node->m_easingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_easingRate", node->m_easingRate);
    devtools::property("m_disableSliderDelegate", node->m_disableSliderDelegate);
    devtools::property("m_effectObjects", node->m_effectObjects);
    devtools::property("m_page", node->m_page);
    devtools::property("m_easingControlScale", node->m_easingControlScale);
    devtools::property("m_hideAll", node->m_hideAll);
    devtools::label(fmt::format("EffectGameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gameObjects at {}", (void*)node->m_gameObjects).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_touchToggle at {}", (void*)node->m_touchToggle).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_spawnToggle at {}", (void*)node->m_spawnToggle).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_multiTriggerContainer at {}", (void*)node->m_multiTriggerContainer).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_valueToggles at {}", (void*)node->m_valueToggles).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_inputNodes at {}", (void*)node->m_inputNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_valueControls at {}", (void*)node->m_valueControls).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_customValueToggles at {}", (void*)node->m_customValueToggles).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_disableButtons at {}", (void*)node->m_disableButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_easingLabel at {}", (void*)node->m_easingLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_easingRateLabel at {}", (void*)node->m_easingRateLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_easingRateButton at {}", (void*)node->m_easingRateButton).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_inputLabels at {}", (void*)node->m_inputLabels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_triggerValues at {}", (void*)node->m_triggerValues).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_minSliderValues at {}", (void*)node->m_minSliderValues).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_maxSliderValues at {}", (void*)node->m_maxSliderValues).c_str());
    devtools::label("gd::map<int, bool> m_shouldLimitValues");
    devtools::label(fmt::format("cocos2d::CCArray* m_pageContainers at {}", (void*)node->m_pageContainers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_groupContainers at {}", (void*)node->m_groupContainers).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_customEasingTags at {}", (void*)node->m_customEasingTags).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_customEasingLabels at {}", (void*)node->m_customEasingLabels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_customEasingButtons at {}", (void*)node->m_customEasingButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_customEasingScales at {}", (void*)node->m_customEasingScales).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_disabledEasingButtons at {}", (void*)node->m_disabledEasingButtons).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ColorSelectPopup>) {
devtools::registerNode<ColorSelectPopup>([](ColorSelectPopup* node) {
    devtools::label("Members for ColorSelectPopup:");
    devtools::property("m_unk3c0", node->m_unk3c0);
    devtools::property("m_originalColor", node->m_originalColor);
    devtools::property("m_currentColor", node->m_currentColor);
    devtools::property("m_fadeTime", node->m_fadeTime);
    devtools::property("m_playerColor", node->m_playerColor);
    devtools::property("m_blending", node->m_blending);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_backgroundTrigger", node->m_backgroundTrigger);
    devtools::property("m_tintGround", node->m_tintGround);
    devtools::property("m_legacyHSV", node->m_legacyHSV);
    devtools::property("m_colorTrigger", node->m_colorTrigger);
    devtools::property("m_noChannel", node->m_noChannel);
    devtools::property("m_newColorTrigger", node->m_newColorTrigger);
    devtools::property("m_colorID", node->m_colorID);
    devtools::property("m_initializing", node->m_initializing);
    devtools::property("m_copyColorID", node->m_copyColorID);
    devtools::property("m_copyOpacity", node->m_copyOpacity);
    devtools::property("m_showCopyObjects", node->m_showCopyObjects);
    devtools::label(fmt::format("cocos2d::extension::CCControlColourPicker* m_colorPicker at {}", (void*)node->m_colorPicker).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_opacityLabel at {}", (void*)node->m_opacityLabel).c_str());
    devtools::label(fmt::format("Slider* m_fadeTimeSlider at {}", (void*)node->m_fadeTimeSlider).c_str());
    devtools::label(fmt::format("Slider* m_opacitySlider at {}", (void*)node->m_opacitySlider).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_playerColor1Toggle at {}", (void*)node->m_playerColor1Toggle).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_playerColor2Toggle at {}", (void*)node->m_playerColor2Toggle).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_currentColorSprite at {}", (void*)node->m_currentColorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_originalColorSprite at {}", (void*)node->m_originalColorSprite).c_str());
    devtools::label(fmt::format("ColorSelectDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("ColorAction* m_colorAction at {}", (void*)node->m_colorAction).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_colorInput at {}", (void*)node->m_colorInput).c_str());
    devtools::label(fmt::format("ConfigureHSVWidget* m_hsvWidget at {}", (void*)node->m_hsvWidget).c_str());
    devtools::label("cocos2d::ccHSVValue m_hsv");
    devtools::label(fmt::format("cocos2d::CCArray* m_colorObjects at {}", (void*)node->m_colorObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_copyObjects at {}", (void*)node->m_copyObjects).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_copyColorInput at {}", (void*)node->m_copyColorInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_fadeTimeInput at {}", (void*)node->m_fadeTimeInput).c_str());
    devtools::label(fmt::format("void* m_unk488 at {}", (void*)node->m_unk488).c_str());
    devtools::label(fmt::format("void* m_unk490 at {}", (void*)node->m_unk490).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_rInput at {}", (void*)node->m_rInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_gInput at {}", (void*)node->m_gInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_bInput at {}", (void*)node->m_bInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_hexInput at {}", (void*)node->m_hexInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CommentCell>) {
devtools::registerNode<CommentCell>([](CommentCell* node) {
    devtools::label("Members for CommentCell:");
    devtools::property("m_accountComment", node->m_accountComment);
    devtools::property("m_unk259", node->m_unk259);
    devtools::property("m_compactMode", node->m_compactMode);
    devtools::label(fmt::format("cocos2d::CCSprite* m_iconSprite at {}", (void*)node->m_iconSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_likeLabel at {}", (void*)node->m_likeLabel).c_str());
    devtools::label(fmt::format("GJComment* m_comment at {}", (void*)node->m_comment).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CommunityCreditNode>) {
devtools::registerNode<CommunityCreditNode>([](CommunityCreditNode* node) {
    devtools::label("Members for CommunityCreditNode:");
    devtools::property("m_unlockType", node->m_unlockType);
    devtools::property("m_iconID", node->m_iconID);
    devtools::property("m_unknown", node->m_unknown);
    devtools::property("m_author", node->m_author);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CommunityCreditsPage>) {
devtools::registerNode<CommunityCreditsPage>([](CommunityCreditsPage* node) {
    devtools::label("Members for CommunityCreditsPage:");
    devtools::property("m_page", node->m_page);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_pageObjects at {}", (void*)node->m_pageObjects).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ConfigureHSVWidget>) {
devtools::registerNode<ConfigureHSVWidget>([](ConfigureHSVWidget* node) {
    devtools::label("Members for ConfigureHSVWidget:");
    devtools::property("m_mixed", node->m_mixed);
    devtools::property("m_addInputs", node->m_addInputs);
    devtools::property("m_updating", node->m_updating);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_hueLabel at {}", (void*)node->m_hueLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_saturationLabel at {}", (void*)node->m_saturationLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_brightnessLabel at {}", (void*)node->m_brightnessLabel).c_str());
    devtools::label(fmt::format("Slider* m_hueSlider at {}", (void*)node->m_hueSlider).c_str());
    devtools::label(fmt::format("Slider* m_saturationSlider at {}", (void*)node->m_saturationSlider).c_str());
    devtools::label(fmt::format("Slider* m_brightnessSlider at {}", (void*)node->m_brightnessSlider).c_str());
    devtools::label("cocos2d::ccHSVValue m_hsv");
    devtools::label(fmt::format("HSVWidgetDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_inputs at {}", (void*)node->m_inputs).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ConfigureValuePopup>) {
devtools::registerNode<ConfigureValuePopup>([](ConfigureValuePopup* node) {
    devtools::label("Members for ConfigureValuePopup:");
    devtools::property("m_value", node->m_value);
    devtools::property("m_minimum", node->m_minimum);
    devtools::property("m_maximum", node->m_maximum);
    devtools::property("m_enableDelegate", node->m_enableDelegate);
    devtools::property("m_disableTextDelegate", node->m_disableTextDelegate);
    devtools::label(fmt::format("ConfigureValuePopupDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_input at {}", (void*)node->m_input).c_str());
    devtools::label(fmt::format("Slider* m_slider at {}", (void*)node->m_slider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CountTriggerGameObject>) {
devtools::registerNode<CountTriggerGameObject>([](CountTriggerGameObject* node) {
    devtools::label("Members for CountTriggerGameObject:");
    devtools::property("m_pickupCount", node->m_pickupCount);
    devtools::property("m_pickupTriggerMode", node->m_pickupTriggerMode);
    devtools::property("m_multiActivate", node->m_multiActivate);
    devtools::property("m_isOverride", node->m_isOverride);
    devtools::property("m_pickupTriggerMultiplier", node->m_pickupTriggerMultiplier);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CreateGuidelinesLayer>) {
devtools::registerNode<CreateGuidelinesLayer>([](CreateGuidelinesLayer* node) {
    devtools::label("Members for CreateGuidelinesLayer:");
    devtools::property("m_elapsed", node->m_elapsed);
    devtools::property("m_recording", node->m_recording);
    devtools::property("m_unk2b5", node->m_unk2b5);
    devtools::property("m_guidelines", node->m_guidelines);
    devtools::property("m_guidelineString", node->m_guidelineString);
    devtools::label(fmt::format("CustomSongDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_offsetInput at {}", (void*)node->m_offsetInput).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_nonRecordingObjects at {}", (void*)node->m_nonRecordingObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_recordingObjects at {}", (void*)node->m_recordingObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_infoLabel at {}", (void*)node->m_infoLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_circleSprite at {}", (void*)node->m_circleSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CreateMenuItem>) {
devtools::registerNode<CreateMenuItem>([](CreateMenuItem* node) {
    devtools::label("Members for CreateMenuItem:");
    devtools::property("m_spriteFileName", node->m_spriteFileName);
    devtools::property("m_objectID", node->m_objectID);
    devtools::property("m_pageIndex", node->m_pageIndex);
    devtools::property("m_tabIndex", node->m_tabIndex);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CreateParticlePopup>) {
devtools::registerNode<CreateParticlePopup>([](CreateParticlePopup* node) {
    devtools::label("Members for CreateParticlePopup:");
    devtools::property("m_disableTextDelegate", node->m_disableTextDelegate);
    devtools::property("m_touchID", node->m_touchID);
    devtools::property("m_touchDelta", node->m_touchDelta);
    devtools::property("m_elapsed", node->m_elapsed);
    devtools::property("m_selectedMode", node->m_selectedMode);
    devtools::property("m_particleIndex", node->m_particleIndex);
    devtools::property("m_page", node->m_page);
    devtools::property("m_useObjectColor", node->m_useObjectColor);
    devtools::property("m_animateOnTrigger", node->m_animateOnTrigger);
    devtools::property("m_onlyAnimateActive", node->m_onlyAnimateActive);
    devtools::property("m_quickStart", node->m_quickStart);
    devtools::property("m_respawnResult", node->m_respawnResult);
    devtools::label(fmt::format("ParticleGameObject* m_targetObject at {}", (void*)node->m_targetObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_targetObjects at {}", (void*)node->m_targetObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_particles at {}", (void*)node->m_particles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_particle at {}", (void*)node->m_particle).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_standaloneParticle at {}", (void*)node->m_standaloneParticle).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_inputDicts at {}", (void*)node->m_inputDicts).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_sliderDicts at {}", (void*)node->m_sliderDicts).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pageNodes at {}", (void*)node->m_pageNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pageButtons at {}", (void*)node->m_pageButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pageMenus at {}", (void*)node->m_pageMenus).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pageObjectArrays at {}", (void*)node->m_pageObjectArrays).c_str());
    devtools::label(fmt::format("ParticlePreviewLayer* m_previewLayer at {}", (void*)node->m_previewLayer).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_mode1Button at {}", (void*)node->m_mode1Button).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_mode2Button at {}", (void*)node->m_mode2Button).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_mode3Button at {}", (void*)node->m_mode3Button).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_freeToggler at {}", (void*)node->m_freeToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_relativeToggler at {}", (void*)node->m_relativeToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_groupedToggler at {}", (void*)node->m_groupedToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_objColorToggler at {}", (void*)node->m_objColorToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_uniformColorToggler at {}", (void*)node->m_uniformColorToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_gravityToggler at {}", (void*)node->m_gravityToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_radiusToggler at {}", (void*)node->m_radiusToggler).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_selectSprite at {}", (void*)node->m_selectSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_particleColorSprite at {}", (void*)node->m_particleColorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_startColorSprite at {}", (void*)node->m_startColorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_endColorSprite at {}", (void*)node->m_endColorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gravityObjects at {}", (void*)node->m_gravityObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_radiusObjects at {}", (void*)node->m_radiusObjects).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CreatorLayer>) {
devtools::registerNode<CreatorLayer>([](CreatorLayer* node) {
    devtools::label("Members for CreatorLayer:");
    devtools::property("m_vaultDialogIndex", node->m_vaultDialogIndex);
    devtools::property("m_versusDialogIndex", node->m_versusDialogIndex);
    devtools::label(fmt::format("cocos2d::CCSprite* m_secretDoorSprite at {}", (void*)node->m_secretDoorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_questsSprite at {}", (void*)node->m_questsSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CurrencyRewardLayer>) {
devtools::registerNode<CurrencyRewardLayer>([](CurrencyRewardLayer* node) {
    devtools::label("Members for CurrencyRewardLayer:");
    devtools::property("m_orbs", node->m_orbs);
    devtools::property("m_stars", node->m_stars);
    devtools::property("m_moons", node->m_moons);
    devtools::property("m_diamonds", node->m_diamonds);
    devtools::property("m_keys", node->m_keys);
    devtools::property("m_shards", node->m_shards);
    devtools::property("m_elapsed", node->m_elapsed);
    devtools::property("m_unknown", node->m_unknown);
    devtools::property("m_time", node->m_time);
    devtools::property("m_orbsPosition", node->m_orbsPosition);
    devtools::property("m_starsPosition", node->m_starsPosition);
    devtools::property("m_moonsPosition", node->m_moonsPosition);
    devtools::property("m_diamondsPosition", node->m_diamondsPosition);
    devtools::property("m_keysPosition", node->m_keysPosition);
    devtools::property("m_shardsPosition", node->m_shardsPosition);
    devtools::property("m_particlesAdded", node->m_particlesAdded);
    devtools::property("m_objectsAdded", node->m_objectsAdded);
    devtools::property("m_rewardCount", node->m_rewardCount);
    devtools::enumerable("m_rewardType", node->m_rewardType, {
        { CurrencyRewardType::Default, "CurrencyRewardType::Default" },
        { CurrencyRewardType::Treasure, "CurrencyRewardType::Treasure" },
    });
    devtools::label(fmt::format("CurrencyRewardDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_objects at {}", (void*)node->m_objects).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_orbsLabel at {}", (void*)node->m_orbsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_starsLabel at {}", (void*)node->m_starsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_moonsLabel at {}", (void*)node->m_moonsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_diamondsLabel at {}", (void*)node->m_diamondsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_keysLabel at {}", (void*)node->m_keysLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_shardsLabel at {}", (void*)node->m_shardsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_orbsSprite at {}", (void*)node->m_orbsSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_starsSprite at {}", (void*)node->m_starsSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_moonsSprite at {}", (void*)node->m_moonsSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_diamondsSprite at {}", (void*)node->m_diamondsSprite).c_str());
    devtools::label(fmt::format("CurrencySprite* m_keysSprite at {}", (void*)node->m_keysSprite).c_str());
    devtools::label(fmt::format("CurrencySprite* m_shardsSprite at {}", (void*)node->m_shardsSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_currencyBatchNode at {}", (void*)node->m_currencyBatchNode).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_orbBatchNode at {}", (void*)node->m_orbBatchNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_mainNode at {}", (void*)node->m_mainNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CurrencySprite>) {
devtools::registerNode<CurrencySprite>([](CurrencySprite* node) {
    devtools::label("Members for CurrencySprite:");
    devtools::property("m_unkFloat1", node->m_unkFloat1);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_unkFloat3", node->m_unkFloat3);
    devtools::property("m_remaining", node->m_remaining);
    devtools::property("m_count", node->m_count);
    devtools::enumerable("m_spriteType", node->m_spriteType, {
        { CurrencySpriteType::Icon, "CurrencySpriteType::Icon" },
        { CurrencySpriteType::Orb, "CurrencySpriteType::Orb" },
        { CurrencySpriteType::Star, "CurrencySpriteType::Star" },
        { CurrencySpriteType::Diamond, "CurrencySpriteType::Diamond" },
        { CurrencySpriteType::FireShard, "CurrencySpriteType::FireShard" },
        { CurrencySpriteType::IceShard, "CurrencySpriteType::IceShard" },
        { CurrencySpriteType::PoisonShard, "CurrencySpriteType::PoisonShard" },
        { CurrencySpriteType::ShadowShard, "CurrencySpriteType::ShadowShard" },
        { CurrencySpriteType::LavaShard, "CurrencySpriteType::LavaShard" },
        { CurrencySpriteType::DemonKey, "CurrencySpriteType::DemonKey" },
        { CurrencySpriteType::EarthShard, "CurrencySpriteType::EarthShard" },
        { CurrencySpriteType::BloodShard, "CurrencySpriteType::BloodShard" },
        { CurrencySpriteType::MetalShard, "CurrencySpriteType::MetalShard" },
        { CurrencySpriteType::LightShard, "CurrencySpriteType::LightShard" },
        { CurrencySpriteType::SoulShard, "CurrencySpriteType::SoulShard" },
        { CurrencySpriteType::Moon, "CurrencySpriteType::Moon" },
        { CurrencySpriteType::GoldKey, "CurrencySpriteType::GoldKey" },
    });
    devtools::property("m_position", node->m_position);
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_particleSystem at {}", (void*)node->m_particleSystem).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_burstSprite at {}", (void*)node->m_burstSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomizeObjectLayer>) {
devtools::registerNode<CustomizeObjectLayer>([](CustomizeObjectLayer* node) {
    devtools::label("Members for CustomizeObjectLayer:");
    devtools::property("m_selectedMode", node->m_selectedMode);
    devtools::property("m_customColorChannel", node->m_customColorChannel);
    devtools::property("m_hasBaseColor", node->m_hasBaseColor);
    devtools::property("m_hasDetailColor", node->m_hasDetailColor);
    devtools::property("m_glowDisabled", node->m_glowDisabled);
    devtools::property("m_kerningAmount", node->m_kerningAmount);
    devtools::property("m_showTextInput", node->m_showTextInput);
    devtools::property("m_customColorSelected", node->m_customColorSelected);
    devtools::property("m_disableTextDelegate", node->m_disableTextDelegate);
    devtools::label(fmt::format("GameObject* m_targetObject at {}", (void*)node->m_targetObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_targetObjects at {}", (void*)node->m_targetObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_colorButtons at {}", (void*)node->m_colorButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_colorTabNodes at {}", (void*)node->m_colorTabNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_textTabNodes at {}", (void*)node->m_textTabNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unkArray at {}", (void*)node->m_unkArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_detailTabNodes at {}", (void*)node->m_detailTabNodes).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_baseButton at {}", (void*)node->m_baseButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_detailButton at {}", (void*)node->m_detailButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_textButton at {}", (void*)node->m_textButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_baseColorHSV at {}", (void*)node->m_baseColorHSV).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_detailColorHSV at {}", (void*)node->m_detailColorHSV).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_titleLabel at {}", (void*)node->m_titleLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_selectedColorLabel at {}", (void*)node->m_selectedColorLabel).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_customColorInput at {}", (void*)node->m_customColorInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_textInput at {}", (void*)node->m_textInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_kerningLabel at {}", (void*)node->m_kerningLabel).c_str());
    devtools::label(fmt::format("Slider* m_kerningSlider at {}", (void*)node->m_kerningSlider).c_str());
    devtools::label(fmt::format("ButtonSprite* m_customColorButtonSprite at {}", (void*)node->m_customColorButtonSprite).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_customColorButton at {}", (void*)node->m_customColorButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_arrowDown at {}", (void*)node->m_arrowDown).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_arrowUp at {}", (void*)node->m_arrowUp).c_str());
    devtools::label(fmt::format("cocos2d::extension::CCScale9Sprite* m_customColorInputBG at {}", (void*)node->m_customColorInputBG).c_str());
    devtools::label(fmt::format("ColorChannelSprite* m_colorSprite at {}", (void*)node->m_colorSprite).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_colorSpriteButton at {}", (void*)node->m_colorSpriteButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_liveSelectButton at {}", (void*)node->m_liveSelectButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomizeObjectSettingsPopup>) {
devtools::registerNode<CustomizeObjectSettingsPopup>([](CustomizeObjectSettingsPopup* node) {
    devtools::label("Members for CustomizeObjectSettingsPopup:");
    devtools::property("m_settingsChanged", node->m_settingsChanged);
    devtools::label(fmt::format("CustomizeObjectLayer* m_customizeLayer at {}", (void*)node->m_customizeLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomListView>) {
devtools::registerNode<CustomListView>([](CustomListView* node) {
    devtools::label("Members for CustomListView:");
    devtools::property("m_cellMode", node->m_cellMode);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomSongCell>) {
devtools::registerNode<CustomSongCell>([](CustomSongCell* node) {
    devtools::label("Members for CustomSongCell:");
    devtools::property("m_selected", node->m_selected);
    devtools::label(fmt::format("SongInfoObject* m_songInfoObject at {}", (void*)node->m_songInfoObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomSFXCell>) {
devtools::registerNode<CustomSFXCell>([](CustomSFXCell* node) {
    devtools::label("Members for CustomSFXCell:");
    devtools::property("m_selected", node->m_selected);
    devtools::property("m_compactMode", node->m_compactMode);
    devtools::label(fmt::format("SFXInfoObject* m_sfxObject at {}", (void*)node->m_sfxObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomSFXWidget>) {
devtools::registerNode<CustomSFXWidget>([](CustomSFXWidget* node) {
    devtools::label("Members for CustomSFXWidget:");
    devtools::property("m_showDelete", node->m_showDelete);
    devtools::property("m_showPlay", node->m_showPlay);
    devtools::property("m_showDownload", node->m_showDownload);
    devtools::property("m_showCancel", node->m_showCancel);
    devtools::property("m_compactMode", node->m_compactMode);
    devtools::property("m_sfxID", node->m_sfxID);
    devtools::property("m_lengthMod", node->m_lengthMod);
    devtools::label(fmt::format("SFXInfoObject* m_sfxObject at {}", (void*)node->m_sfxObject).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_buttonMenu at {}", (void*)node->m_buttonMenu).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_titleLabel at {}", (void*)node->m_titleLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_idLabel at {}", (void*)node->m_idLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_errorLabel at {}", (void*)node->m_errorLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_downloadButton at {}", (void*)node->m_downloadButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_cancelButton at {}", (void*)node->m_cancelButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_selectButton at {}", (void*)node->m_selectButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_playButton at {}", (void*)node->m_playButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteButton at {}", (void*)node->m_deleteButton).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_progressOutlineSprite at {}", (void*)node->m_progressOutlineSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_progressBarSprite at {}", (void*)node->m_progressBarSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_clockSprite at {}", (void*)node->m_clockSprite).c_str());
    devtools::label(fmt::format("CustomSFXDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomSongLayer>) {
devtools::registerNode<CustomSongLayer>([](CustomSongLayer* node) {
    devtools::label("Members for CustomSongLayer:");
    devtools::label(fmt::format("CustomSongDelegate* m_songDelegate at {}", (void*)node->m_songDelegate).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_songIDInput at {}", (void*)node->m_songIDInput).c_str());
    devtools::label(fmt::format("CustomSongWidget* m_songWidget at {}", (void*)node->m_songWidget).c_str());
    devtools::label(fmt::format("CustomSongLayerDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJAssetDownloadAction>) {
devtools::registerNode<GJAssetDownloadAction>([](GJAssetDownloadAction* node) {
    devtools::label("Members for GJAssetDownloadAction:");
    devtools::property("m_id", node->m_id);
    devtools::enumerable("m_assetType", node->m_assetType, {
        { GJAssetType::Song, "GJAssetType::Song" },
        { GJAssetType::SFX, "GJAssetType::SFX" },
    });
    devtools::property("m_status", node->m_status);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, CustomSongWidget>) {
devtools::registerNode<CustomSongWidget>([](CustomSongWidget* node) {
    devtools::label("Members for CustomSongWidget:");
    devtools::property("m_showSelectSongBtn", node->m_showSelectSongBtn);
    devtools::property("m_showPlayMusicBtn", node->m_showPlayMusicBtn);
    devtools::property("m_showDownloadBtn", node->m_showDownloadBtn);
    devtools::property("m_isNotDownloading", node->m_isNotDownloading);
    devtools::property("m_isRobtopSong", node->m_isRobtopSong);
    devtools::property("m_isMusicLibrary", node->m_isMusicLibrary);
    devtools::property("m_customSongID", node->m_customSongID);
    devtools::property("m_lengthMod", node->m_lengthMod);
    devtools::property("m_isInCell", node->m_isInCell);
    devtools::property("m_hasLibrarySongs", node->m_hasLibrarySongs);
    devtools::property("m_hasSFX", node->m_hasSFX);
    devtools::property("m_unkBool2", node->m_unkBool2);
    devtools::property("m_totalBytes", node->m_totalBytes);
    devtools::property("m_nextSongID", node->m_nextSongID);
    devtools::label(fmt::format("SongInfoObject* m_songInfoObject at {}", (void*)node->m_songInfoObject).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_buttonMenu at {}", (void*)node->m_buttonMenu).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_songLabel at {}", (void*)node->m_songLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_artistLabel at {}", (void*)node->m_artistLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_songIDLabel at {}", (void*)node->m_songIDLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_errorLabel at {}", (void*)node->m_errorLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_downloadBtn at {}", (void*)node->m_downloadBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_cancelDownloadBtn at {}", (void*)node->m_cancelDownloadBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_selectSongBtn at {}", (void*)node->m_selectSongBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_getSongInfoBtn at {}", (void*)node->m_getSongInfoBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_playbackBtn at {}", (void*)node->m_playbackBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_moreBtn at {}", (void*)node->m_moreBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteBtn at {}", (void*)node->m_deleteBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_infoBtn at {}", (void*)node->m_infoBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_sliderGroove at {}", (void*)node->m_sliderGroove).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_sliderBar at {}", (void*)node->m_sliderBar).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_ncsLogo at {}", (void*)node->m_ncsLogo).c_str());
    devtools::label(fmt::format("cocos2d::extension::CCScale9Sprite* m_bgSpr at {}", (void*)node->m_bgSpr).c_str());
    devtools::label(fmt::format("CustomSongDelegate* m_songDelegate at {}", (void*)node->m_songDelegate).c_str());
    devtools::label(fmt::format("SongPlaybackDelegate* m_playbackDelegate at {}", (void*)node->m_playbackDelegate).c_str());
    devtools::label("gd::map<int, bool> m_songs");
    devtools::label("gd::map<int, bool> m_sfx");
    devtools::label("gd::vector<GJAssetDownloadAction> m_undownloadedAssets");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DailyLevelNode>) {
devtools::registerNode<DailyLevelNode>([](DailyLevelNode* node) {
    devtools::label("Members for DailyLevelNode:");
    devtools::property("m_unkPoint", node->m_unkPoint);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::property("m_needsDownloading", node->m_needsDownloading);
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("DailyLevelPage* m_page at {}", (void*)node->m_page).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_timeLabel at {}", (void*)node->m_timeLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_skipButton at {}", (void*)node->m_skipButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DailyLevelPage>) {
devtools::registerNode<DailyLevelPage>([](DailyLevelPage* node) {
    devtools::label("Members for DailyLevelPage:");
    devtools::property("m_gettingDailyStatus", node->m_gettingDailyStatus);
    devtools::property("m_downloadStarted", node->m_downloadStarted);
    devtools::enumerable("m_type", node->m_type, {
        { GJTimedLevelType::Daily, "GJTimedLevelType::Daily" },
        { GJTimedLevelType::Weekly, "GJTimedLevelType::Weekly" },
        { GJTimedLevelType::Event, "GJTimedLevelType::Event" },
    });
    devtools::property("m_downloadLevelID", node->m_downloadLevelID);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_timeLabel at {}", (void*)node->m_timeLabel).c_str());
    devtools::label(fmt::format("LoadingCircle* m_timeCircle at {}", (void*)node->m_timeCircle).c_str());
    devtools::label(fmt::format("LoadingCircle* m_nodeCircle at {}", (void*)node->m_nodeCircle).c_str());
    devtools::label(fmt::format("DailyLevelNode* m_dailyNode at {}", (void*)node->m_dailyNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RingObject>) {
devtools::registerNode<RingObject>([](RingObject* node) {
    devtools::label("Members for RingObject:");
    devtools::property("m_claimTouch", node->m_claimTouch);
    devtools::property("m_isSpawnOnly", node->m_isSpawnOnly);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DashRingObject>) {
devtools::registerNode<DashRingObject>([](DashRingObject* node) {
    devtools::label("Members for DashRingObject:");
    devtools::property("m_dashSpeed", node->m_dashSpeed);
    devtools::property("m_endBoost", node->m_endBoost);
    devtools::property("m_maxDuration", node->m_maxDuration);
    devtools::property("m_allowCollide", node->m_allowCollide);
    devtools::property("m_stopSlide", node->m_stopSlide);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DelayedSpawnNode>) {
devtools::registerNode<DelayedSpawnNode>([](DelayedSpawnNode* node) {
    devtools::label("Members for DelayedSpawnNode:");
    devtools::property("m_spawnDelay", node->m_spawnDelay);
    devtools::label(fmt::format("EffectGameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DemonFilterSelectLayer>) {
devtools::registerNode<DemonFilterSelectLayer>([](DemonFilterSelectLayer* node) {
    devtools::label("Members for DemonFilterSelectLayer:");
    devtools::property("m_currentDemon", node->m_currentDemon);
    devtools::label(fmt::format("cocos2d::CCArray* m_demons at {}", (void*)node->m_demons).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
    devtools::label(fmt::format("DemonFilterDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DialogLayer>) {
devtools::registerNode<DialogLayer>([](DialogLayer* node) {
    devtools::label("Members for DialogLayer:");
    devtools::property("m_animateTime", node->m_animateTime);
    devtools::property("m_touchID", node->m_touchID);
    devtools::property("m_animating", node->m_animating);
    devtools::property("m_skippable", node->m_skippable);
    devtools::property("m_handleTap", node->m_handleTap);
    devtools::enumerable("m_animationType", node->m_animationType, {
        { DialogAnimationType::Instant, "DialogAnimationType::Instant" },
        { DialogAnimationType::FromCenter, "DialogAnimationType::FromCenter" },
        { DialogAnimationType::FromLeft, "DialogAnimationType::FromLeft" },
        { DialogAnimationType::FromRight, "DialogAnimationType::FromRight" },
        { DialogAnimationType::FromTop, "DialogAnimationType::FromTop" },
        { DialogAnimationType::FromTop2, "DialogAnimationType::FromTop2" },
    });
    devtools::property("m_noRemove", node->m_noRemove);
    devtools::label(fmt::format("cocos2d::CCLayer* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_characterLabel at {}", (void*)node->m_characterLabel).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_characterSprite at {}", (void*)node->m_characterSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_dialogObjects at {}", (void*)node->m_dialogObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_navButtonSprite at {}", (void*)node->m_navButtonSprite).c_str());
    devtools::label(fmt::format("DialogDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DialogObject>) {
devtools::registerNode<DialogObject>([](DialogObject* node) {
    devtools::label("Members for DialogObject:");
    devtools::property("m_text", node->m_text);
    devtools::property("m_character", node->m_character);
    devtools::property("m_characterFrame", node->m_characterFrame);
    devtools::property("m_color", node->m_color);
    devtools::property("m_textScale", node->m_textScale);
    devtools::property("m_skippable", node->m_skippable);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DrawGridLayer>) {
devtools::registerNode<DrawGridLayer>([](DrawGridLayer* node) {
    devtools::label("Members for DrawGridLayer:");
    devtools::property("m_musicTime", node->m_musicTime);
    devtools::property("m_playbackTime", node->m_playbackTime);
    devtools::property("m_oldPlaybackTime", node->m_oldPlaybackTime);
    devtools::property("m_playbackX", node->m_playbackX);
    devtools::property("m_playbackY", node->m_playbackY);
    devtools::property("m_sortEffects", node->m_sortEffects);
    devtools::property("m_timeMarkerString", node->m_timeMarkerString);
    devtools::property("m_unk258", node->m_unk258);
    devtools::property("m_currentSpeed", node->m_currentSpeed);
    devtools::property("m_slowSpeed", node->m_slowSpeed);
    devtools::property("m_normalSpeed", node->m_normalSpeed);
    devtools::property("m_fastSpeed", node->m_fastSpeed);
    devtools::property("m_fasterSpeed", node->m_fasterSpeed);
    devtools::property("m_fastestSpeed", node->m_fastestSpeed);
    devtools::property("m_updateTimeMarkers", node->m_updateTimeMarkers);
    devtools::property("m_updateSpeedObjects", node->m_updateSpeedObjects);
    devtools::property("m_gridSize", node->m_gridSize);
    devtools::label(fmt::format("std::array<cocos2d::CCPoint, 400>* m_pointArray1 at {}", (void*)node->m_pointArray1).c_str());
    devtools::label(fmt::format("std::array<cocos2d::CCPoint, 400>* m_pointArray2 at {}", (void*)node->m_pointArray2).c_str());
    devtools::label(fmt::format("std::array<cocos2d::CCPoint, 400>* m_pointArray3 at {}", (void*)node->m_pointArray3).c_str());
    devtools::label("gd::unordered_map<int, AudioLineGuideGameObject*> m_audioLineObjects");
    devtools::label(fmt::format("LevelEditorLayer* m_editorLayer at {}", (void*)node->m_editorLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_objectLayer at {}", (void*)node->m_objectLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_timeMarkers at {}", (void*)node->m_timeMarkers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_effectGameObjects at {}", (void*)node->m_effectGameObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_guideObjects at {}", (void*)node->m_guideObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_speedObjects at {}", (void*)node->m_speedObjects).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DungeonBarsSprite>) {
devtools::registerNode<DungeonBarsSprite>([](DungeonBarsSprite* node) {
    devtools::label("Members for DungeonBarsSprite:");
    devtools::label(fmt::format("cocos2d::CCSprite* m_barsSprite at {}", (void*)node->m_barsSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, DynamicBitset>) {
devtools::registerNode<DynamicBitset>([](DynamicBitset* node) {
    devtools::label("Members for DynamicBitset:");
    devtools::label("gd::vector<unsigned int> m_bits");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EditButtonBar>) {
devtools::registerNode<EditButtonBar>([](EditButtonBar* node) {
    devtools::label("Members for EditButtonBar:");
    devtools::property("m_position", node->m_position);
    devtools::property("m_tabIndex", node->m_tabIndex);
    devtools::property("m_hasCreateItems", node->m_hasCreateItems);
    devtools::label(fmt::format("cocos2d::CCArray* m_buttonArray at {}", (void*)node->m_buttonArray).c_str());
    devtools::label(fmt::format("BoomScrollLayer* m_scrollLayer at {}", (void*)node->m_scrollLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pagesArray at {}", (void*)node->m_pagesArray).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EditLevelLayer>) {
devtools::registerNode<EditLevelLayer>([](EditLevelLayer* node) {
    devtools::label("Members for EditLevelLayer:");
    devtools::property("m_exiting", node->m_exiting);
    devtools::enumerable("m_levelType", node->m_levelType, {
        { GJLevelType::Default, "GJLevelType::Default" },
        { GJLevelType::Main, "GJLevelType::Main" },
        { GJLevelType::Editor, "GJLevelType::Editor" },
        { GJLevelType::Saved, "GJLevelType::Saved" },
        { GJLevelType::SearchResult, "GJLevelType::SearchResult" },
    });
    devtools::property("m_levelName", node->m_levelName);
    devtools::label(fmt::format("cocos2d::CCMenu* m_buttonMenu at {}", (void*)node->m_buttonMenu).c_str());
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_textInputs at {}", (void*)node->m_textInputs).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_folderLabel at {}", (void*)node->m_folderLabel).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_descriptionPopup at {}", (void*)node->m_descriptionPopup).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJOptionsLayer>) {
devtools::registerNode<GJOptionsLayer>([](GJOptionsLayer* node) {
    devtools::label("Members for GJOptionsLayer:");
    devtools::property("m_gap", node->m_gap);
    devtools::property("m_page", node->m_page);
    devtools::property("m_togglesPerPage", node->m_togglesPerPage);
    devtools::property("m_toggleCount", node->m_toggleCount);
    devtools::property("m_maxPage", node->m_maxPage);
    devtools::property("m_maxLabelScale", node->m_maxLabelScale);
    devtools::property("m_maxLabelWidth", node->m_maxLabelWidth);
    devtools::property("m_offset", node->m_offset);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_values at {}", (void*)node->m_values).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_variables at {}", (void*)node->m_variables).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EditorOptionsLayer>) {
devtools::registerNode<EditorOptionsLayer>([](EditorOptionsLayer* node) {
    devtools::label("Members for EditorOptionsLayer:");
    devtools::property("m_buttonsPerRow", node->m_buttonsPerRow);
    devtools::property("m_buttonRows", node->m_buttonRows);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_buttonsPerRowLabel at {}", (void*)node->m_buttonsPerRowLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_buttonRowsLabel at {}", (void*)node->m_buttonRowsLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EditorPauseLayer>) {
devtools::registerNode<EditorPauseLayer>([](EditorPauseLayer* node) {
    devtools::label("Members for EditorPauseLayer:");
    devtools::property("m_saved", node->m_saved);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_guidelinesOffButton at {}", (void*)node->m_guidelinesOffButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_guidelinesOnButton at {}", (void*)node->m_guidelinesOnButton).c_str());
    devtools::label(fmt::format("LevelEditorLayer* m_editorLayer at {}", (void*)node->m_editorLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameObjectEditorState>) {
devtools::registerNode<GameObjectEditorState>([](GameObjectEditorState* node) {
    devtools::label("Members for GameObjectEditorState:");
    devtools::property("m_position", node->m_position);
    devtools::property("m_scaleX", node->m_scaleX);
    devtools::property("m_scaleY", node->m_scaleY);
    devtools::property("m_rotationX", node->m_rotationX);
    devtools::property("m_rotationY", node->m_rotationY);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EditorUI>) {
devtools::registerNode<EditorUI>([](EditorUI* node) {
    devtools::label("Members for EditorUI:");
    devtools::property("m_isPlayingMusic", node->m_isPlayingMusic);
    devtools::property("m_alertShown", node->m_alertShown);
    devtools::property("m_gridSize", node->m_gridSize);
    devtools::property("m_playerTouchID1", node->m_playerTouchID1);
    devtools::property("m_playerTouchID2", node->m_playerTouchID2);
    devtools::property("m_playbackActive", node->m_playbackActive);
    devtools::property("m_playbackStartWarp", node->m_playbackStartWarp);
    devtools::property("m_playbackStartTime", node->m_playbackStartTime);
    devtools::property("m_spaceSwiping", node->m_spaceSwiping);
    devtools::property("m_noSnapUndo", node->m_noSnapUndo);
    devtools::property("m_editingObject", node->m_editingObject);
    devtools::property("m_increaseScale", node->m_increaseScale);
    devtools::property("m_refreshPosition", node->m_refreshPosition);
    devtools::property("m_rotationTouchID", node->m_rotationTouchID);
    devtools::property("m_scaleTouchID", node->m_scaleTouchID);
    devtools::property("m_touchID", node->m_touchID);
    devtools::property("m_transformTouchID", node->m_transformTouchID);
    devtools::property("m_pivotPoint", node->m_pivotPoint);
    devtools::property("m_canActivateControls", node->m_canActivateControls);
    devtools::property("m_unk308", node->m_unk308);
    devtools::property("m_constrainedHeight", node->m_constrainedHeight);
    devtools::property("m_toolbarHeight", node->m_toolbarHeight);
    devtools::property("m_swipeEnabled", node->m_swipeEnabled);
    devtools::property("m_swipeActive", node->m_swipeActive);
    devtools::property("m_swipeSelected", node->m_swipeSelected);
    devtools::property("m_continuousSnap", node->m_continuousSnap);
    devtools::property("m_freeMoveEnabled", node->m_freeMoveEnabled);
    devtools::property("m_snapObjectExists", node->m_snapObjectExists);
    devtools::property("m_snapSelected", node->m_snapSelected);
    devtools::property("m_stickyControlsEnabled", node->m_stickyControlsEnabled);
    devtools::property("m_speedObjectsUpdated", node->m_speedObjectsUpdated);
    devtools::property("m_createPosition", node->m_createPosition);
    devtools::property("m_snapPosition", node->m_snapPosition);
    devtools::property("m_selectedObjectIndex", node->m_selectedObjectIndex);
    devtools::property("m_selectedMode", node->m_selectedMode);
    devtools::property("m_swipeStart", node->m_swipeStart);
    devtools::property("m_swipeEnd", node->m_swipeEnd);
    devtools::property("m_swipePosition", node->m_swipePosition);
    devtools::property("m_lastTouchPoint", node->m_lastTouchPoint);
    devtools::property("m_cameraTest", node->m_cameraTest);
    devtools::property("m_clickAtPosition", node->m_clickAtPosition);
    devtools::property("m_isDraggingCamera", node->m_isDraggingCamera);
    devtools::property("m_continueSwipe", node->m_continueSwipe);
    devtools::property("m_findSnap", node->m_findSnap);
    devtools::property("m_selectedTab", node->m_selectedTab);
    devtools::property("m_cycledObjectIndex", node->m_cycledObjectIndex);
    devtools::property("m_keyTime", node->m_keyTime);
    devtools::property("m_keyTime2", node->m_keyTime2);
    devtools::property("m_swipeModeTriggered", node->m_swipeModeTriggered);
    devtools::property("m_pressedSpace", node->m_pressedSpace);
    devtools::property("m_editorZoom", node->m_editorZoom);
    devtools::property("m_isPaused", node->m_isPaused);
    devtools::property("m_reloadItems", node->m_reloadItems);
    devtools::label("gd::unordered_map<int, GameObjectEditorState> m_objectEditorStates");
    devtools::label("GJTransformState m_transformState");
    devtools::label(fmt::format("EditButtonBar* m_customTabBar at {}", (void*)node->m_customTabBar).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_uiItems at {}", (void*)node->m_uiItems).c_str());
    devtools::label(fmt::format("UndoObject* m_undoObject at {}", (void*)node->m_undoObject).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_objectInfoLabel at {}", (void*)node->m_objectInfoLabel).c_str());
    devtools::label(fmt::format("GJRotationControl* m_rotationControl at {}", (void*)node->m_rotationControl).c_str());
    devtools::label(fmt::format("GJScaleControl* m_scaleControl at {}", (void*)node->m_scaleControl).c_str());
    devtools::label(fmt::format("GJTransformControl* m_transformControl at {}", (void*)node->m_transformControl).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_transformNode at {}", (void*)node->m_transformNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_transformChild at {}", (void*)node->m_transformChild).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_editButtonDict at {}", (void*)node->m_editButtonDict).c_str());
    devtools::label(fmt::format("EditButtonBar* m_createButtonBar at {}", (void*)node->m_createButtonBar).c_str());
    devtools::label(fmt::format("EditButtonBar* m_editButtonBar at {}", (void*)node->m_editButtonBar).c_str());
    devtools::label(fmt::format("Slider* m_positionSlider at {}", (void*)node->m_positionSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_snapPositions at {}", (void*)node->m_snapPositions).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_selectedObjects at {}", (void*)node->m_selectedObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_deleteMenu at {}", (void*)node->m_deleteMenu).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_customTabControls at {}", (void*)node->m_customTabControls).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteModeBtn at {}", (void*)node->m_deleteModeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_buildModeBtn at {}", (void*)node->m_buildModeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_editModeBtn at {}", (void*)node->m_editModeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_swipeBtn at {}", (void*)node->m_swipeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_freeMoveBtn at {}", (void*)node->m_freeMoveBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deselectBtn at {}", (void*)node->m_deselectBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_snapBtn at {}", (void*)node->m_snapBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rotateBtn at {}", (void*)node->m_rotateBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_playbackBtn at {}", (void*)node->m_playbackBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_playtestBtn at {}", (void*)node->m_playtestBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_playtestStopBtn at {}", (void*)node->m_playtestStopBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_trashBtn at {}", (void*)node->m_trashBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_linkBtn at {}", (void*)node->m_linkBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_unlinkBtn at {}", (void*)node->m_unlinkBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_undoBtn at {}", (void*)node->m_undoBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_redoBtn at {}", (void*)node->m_redoBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_editObjectBtn at {}", (void*)node->m_editObjectBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_editGroupBtn at {}", (void*)node->m_editGroupBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_editHSVBtn at {}", (void*)node->m_editHSVBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_editSpecialBtn at {}", (void*)node->m_editSpecialBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCObject* m_unk3F0 at {}", (void*)node->m_unk3F0).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_copyPasteBtn at {}", (void*)node->m_copyPasteBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_copyBtn at {}", (void*)node->m_copyBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_pasteBtn at {}", (void*)node->m_pasteBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_copyValuesBtn at {}", (void*)node->m_copyValuesBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_pasteStateBtn at {}", (void*)node->m_pasteStateBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_pasteColorBtn at {}", (void*)node->m_pasteColorBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_goToLayerBtn at {}", (void*)node->m_goToLayerBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_createButtonBars at {}", (void*)node->m_createButtonBars).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_tabsMenu at {}", (void*)node->m_tabsMenu).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_tabsArray at {}", (void*)node->m_tabsArray).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_deleteAllSprite at {}", (void*)node->m_deleteAllSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_customDeleteSprite at {}", (void*)node->m_customDeleteSprite).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteButton at {}", (void*)node->m_deleteButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteAllButton at {}", (void*)node->m_deleteAllButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteFilterNone at {}", (void*)node->m_deleteFilterNone).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteFilterStatic at {}", (void*)node->m_deleteFilterStatic).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteFilterDetails at {}", (void*)node->m_deleteFilterDetails).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_deleteFilterCustom at {}", (void*)node->m_deleteFilterCustom).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_currentLayerLabel at {}", (void*)node->m_currentLayerLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_layerNextBtn at {}", (void*)node->m_layerNextBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_layerPrevBtn at {}", (void*)node->m_layerPrevBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_goToBaseBtn at {}", (void*)node->m_goToBaseBtn).c_str());
    devtools::label(fmt::format("ButtonSprite* m_deleteGroupSprite at {}", (void*)node->m_deleteGroupSprite).c_str());
    devtools::label(fmt::format("ButtonSprite* m_deleteColorSprite at {}", (void*)node->m_deleteColorSprite).c_str());
    devtools::label(fmt::format("void* m_unk4b8 at {}", (void*)node->m_unk4b8).c_str());
    devtools::label(fmt::format("void* m_unk4c0 at {}", (void*)node->m_unk4c0).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_createButtonArray at {}", (void*)node->m_createButtonArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_customObjectButtonArray at {}", (void*)node->m_customObjectButtonArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_deleteObjects at {}", (void*)node->m_deleteObjects).c_str());
    devtools::label(fmt::format("LevelEditorLayer* m_editorLayer at {}", (void*)node->m_editorLayer).c_str());
    devtools::label(fmt::format("GameObject* m_selectedObject at {}", (void*)node->m_selectedObject).c_str());
    devtools::label(fmt::format("GameObject* m_snapObject at {}", (void*)node->m_snapObject).c_str());
    devtools::label(fmt::format("void* m_unk540 at {}", (void*)node->m_unk540).c_str());
    devtools::label(fmt::format("ColorSelectLiveOverlay* m_colorOverlay at {}", (void*)node->m_colorOverlay).c_str());
    devtools::label(fmt::format("HSVLiveOverlay* m_hsvOverlay at {}", (void*)node->m_hsvOverlay).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_layerLockSprite at {}", (void*)node->m_layerLockSprite).c_str());
    devtools::label(fmt::format("void* m_unk580 at {}", (void*)node->m_unk580).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EndLevelLayer>) {
devtools::registerNode<EndLevelLayer>([](EndLevelLayer* node) {
    devtools::label("Members for EndLevelLayer:");
    devtools::property("m_notLocal", node->m_notLocal);
    devtools::property("m_coinsVerified", node->m_coinsVerified);
    devtools::property("m_unknown3", node->m_unknown3);
    devtools::property("m_exiting", node->m_exiting);
    devtools::property("m_animateCoins", node->m_animateCoins);
    devtools::property("m_endEffectPlayed", node->m_endEffectPlayed);
    devtools::property("m_starsPosition", node->m_starsPosition);
    devtools::property("m_orbsPosition", node->m_orbsPosition);
    devtools::property("m_diamondsPosition", node->m_diamondsPosition);
    devtools::property("m_orbs", node->m_orbs);
    devtools::property("m_stars", node->m_stars);
    devtools::property("m_moons", node->m_moons);
    devtools::property("m_diamonds", node->m_diamonds);
    devtools::property("m_secretKey", node->m_secretKey);
    devtools::property("m_hidden", node->m_hidden);
    devtools::label(fmt::format("PlayLayer* m_playLayer at {}", (void*)node->m_playLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_sideMenu at {}", (void*)node->m_sideMenu).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_coinsToAnimate at {}", (void*)node->m_coinsToAnimate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EndPortalObject>) {
devtools::registerNode<EndPortalObject>([](EndPortalObject* node) {
    devtools::label("Members for EndPortalObject:");
    devtools::property("m_flippedX", node->m_flippedX);
    devtools::property("m_startPosHeightRelated", node->m_startPosHeightRelated);
    devtools::label(fmt::format("cocos2d::CCSprite* m_gradientBar at {}", (void*)node->m_gradientBar).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EndTriggerGameObject>) {
devtools::registerNode<EndTriggerGameObject>([](EndTriggerGameObject* node) {
    devtools::label("Members for EndTriggerGameObject:");
    devtools::property("m_noEffects", node->m_noEffects);
    devtools::property("m_noSFX", node->m_noSFX);
    devtools::property("m_instant", node->m_instant);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EnhancedTriggerObject>) {
devtools::registerNode<EnhancedTriggerObject>([](EnhancedTriggerObject* node) {
    devtools::label("Members for EnhancedTriggerObject:");
    devtools::property("m_minXID", node->m_minXID);
    devtools::property("m_minYID", node->m_minYID);
    devtools::property("m_maxXID", node->m_maxXID);
    devtools::property("m_maxYID", node->m_maxYID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EnterEffectObject>) {
devtools::registerNode<EnterEffectObject>([](EnterEffectObject* node) {
    devtools::label("Members for EnterEffectObject:");
    devtools::property("m_enterType", node->m_enterType);
    devtools::property("m_length", node->m_length);
    devtools::property("m_lengthVariance", node->m_lengthVariance);
    devtools::property("m_offset", node->m_offset);
    devtools::property("m_offsetVariance", node->m_offsetVariance);
    devtools::property("m_offsetY", node->m_offsetY);
    devtools::property("m_offsetYVariance", node->m_offsetYVariance);
    devtools::property("m_moveDistance", node->m_moveDistance);
    devtools::property("m_moveDistanceVariance", node->m_moveDistanceVariance);
    devtools::property("m_areaScaleX", node->m_areaScaleX);
    devtools::property("m_areaScaleXVariance", node->m_areaScaleXVariance);
    devtools::property("m_areaScaleY", node->m_areaScaleY);
    devtools::property("m_areaScaleYVariance", node->m_areaScaleYVariance);
    devtools::property("m_moveAngle", node->m_moveAngle);
    devtools::property("m_moveAngleVariance", node->m_moveAngleVariance);
    devtools::property("m_startAngle", node->m_startAngle);
    devtools::property("m_anglePosition", node->m_anglePosition);
    devtools::property("m_relative", node->m_relative);
    devtools::property("m_relativeFade", node->m_relativeFade);
    devtools::enumerable("m_easingInType", node->m_easingInType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_easingInRate", node->m_easingInRate);
    devtools::property("m_easingInBuffer", node->m_easingInBuffer);
    devtools::enumerable("m_easingOutType", node->m_easingOutType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_easingOutRate", node->m_easingOutRate);
    devtools::property("m_easingOutBuffer", node->m_easingOutBuffer);
    devtools::property("m_moveX", node->m_moveX);
    devtools::property("m_moveXVariance", node->m_moveXVariance);
    devtools::property("m_moveY", node->m_moveY);
    devtools::property("m_moveYVariance", node->m_moveYVariance);
    devtools::property("m_tintChannelID", node->m_tintChannelID);
    devtools::property("m_property224", node->m_property224);
    devtools::property("m_directionType", node->m_directionType);
    devtools::property("m_xyMode", node->m_xyMode);
    devtools::property("m_easeOutEnabled", node->m_easeOutEnabled);
    devtools::property("m_modFront", node->m_modFront);
    devtools::property("m_modBack", node->m_modBack);
    devtools::property("m_areaTint", node->m_areaTint);
    devtools::property("m_property285", node->m_property285);
    devtools::property("m_effectID", node->m_effectID);
    devtools::property("m_areaRotation", node->m_areaRotation);
    devtools::property("m_areaRotationVariance", node->m_areaRotationVariance);
    devtools::property("m_toOpacity", node->m_toOpacity);
    devtools::property("m_fromOpacity", node->m_fromOpacity);
    devtools::property("m_inbound", node->m_inbound);
    devtools::property("m_hsvEnabled", node->m_hsvEnabled);
    devtools::property("m_deadzone", node->m_deadzone);
    devtools::property("m_twoDirections", node->m_twoDirections);
    devtools::property("m_dontEditAreaParent", node->m_dontEditAreaParent);
    devtools::property("m_priority", node->m_priority);
    devtools::property("m_unk7d8", node->m_unk7d8);
    devtools::property("m_enterChannel", node->m_enterChannel);
    devtools::property("m_useEffectID", node->m_useEffectID);
    devtools::property("m_unk7e4", node->m_unk7e4);
    devtools::property("m_unk7ec", node->m_unk7ec);
    devtools::property("m_negativeTargetX", node->m_negativeTargetX);
    devtools::property("m_areaRange", node->m_areaRange);
    devtools::property("m_unk7fc", node->m_unk7fc);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, EventLinkTrigger>) {
devtools::registerNode<EventLinkTrigger>([](EventLinkTrigger* node) {
    devtools::label("Members for EventLinkTrigger:");
    devtools::property("m_resetRemap", node->m_resetRemap);
    devtools::property("m_extraID", node->m_extraID);
    devtools::property("m_extraID2", node->m_extraID2);
    devtools::label("gd::set<int> m_eventIDs");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ExplodeItemNode>) {
devtools::registerNode<ExplodeItemNode>([](ExplodeItemNode* node) {
    devtools::label("Members for ExplodeItemNode:");
    devtools::property("m_unk1", node->m_unk1);
    devtools::property("m_floorHeight", node->m_floorHeight);
    devtools::property("m_noGravity", node->m_noGravity);
    devtools::label(fmt::format("cocos2d::CCRenderTexture* m_renderTexture at {}", (void*)node->m_renderTexture).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_sprites at {}", (void*)node->m_sprites).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ExplodeItemSprite>) {
devtools::registerNode<ExplodeItemSprite>([](ExplodeItemSprite* node) {
    devtools::label("Members for ExplodeItemSprite:");
    devtools::property("m_xVelocity", node->m_xVelocity);
    devtools::property("m_yVelocity", node->m_yVelocity);
    devtools::property("m_timeRemaining", node->m_timeRemaining);
    devtools::property("m_fadeOutTime", node->m_fadeOutTime);
    devtools::property("m_rotVelocity", node->m_rotVelocity);
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_particles at {}", (void*)node->m_particles).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ExtendedLayer>) {
devtools::registerNode<ExtendedLayer>([](ExtendedLayer* node) {
    devtools::label("Members for ExtendedLayer:");
    devtools::label(fmt::format("BoomScrollLayerDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GManager>) {
devtools::registerNode<GManager>([](GManager* node) {
    devtools::label("Members for GManager:");
    devtools::property("m_fileName", node->m_fileName);
    devtools::property("m_setup", node->m_setup);
    devtools::property("m_saved", node->m_saved);
    devtools::property("m_quickSave", node->m_quickSave);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FileSaveManager>) {
devtools::registerNode<FileSaveManager>([](FileSaveManager* node) {
    devtools::label("Members for FileSaveManager:");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_storeData at {}", (void*)node->m_storeData).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FindBPMLayer>) {
devtools::registerNode<FindBPMLayer>([](FindBPMLayer* node) {
    devtools::label("Members for FindBPMLayer:");
    devtools::property("m_songID", node->m_songID);
    devtools::property("m_startOffset", node->m_startOffset);
    devtools::property("m_beats", node->m_beats);
    devtools::property("m_beatsPerMinute", node->m_beatsPerMinute);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_bpmLabel at {}", (void*)node->m_bpmLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetIDPopup>) {
devtools::registerNode<SetIDPopup>([](SetIDPopup* node) {
    devtools::label("Members for SetIDPopup:");
    devtools::property("m_value", node->m_value);
    devtools::property("m_disableDelegate", node->m_disableDelegate);
    devtools::property("m_cancelled", node->m_cancelled);
    devtools::property("m_minimum", node->m_minimum);
    devtools::property("m_maximum", node->m_maximum);
    devtools::property("m_default", node->m_default);
    devtools::label(fmt::format("CCTextInputNode* m_inputNode at {}", (void*)node->m_inputNode).c_str());
    devtools::label(fmt::format("SetIDPopupDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FindObjectPopup>) {
devtools::registerNode<FindObjectPopup>([](FindObjectPopup* node) {
    devtools::label("Members for FindObjectPopup:");
    devtools::property("m_unknownBool", node->m_unknownBool);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODMusic>) {
devtools::registerNode<FMODMusic>([](FMODMusic* node) {
    devtools::label("Members for FMODMusic:");
    devtools::property("m_channelID", node->m_channelID);
    devtools::property("m_filePath", node->m_filePath);
    devtools::property("m_ogg", node->m_ogg);
    devtools::property("m_dontReset", node->m_dontReset);
    devtools::label(fmt::format("FMOD::Sound* m_sound at {}", (void*)node->m_sound).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODQueuedEffect>) {
devtools::registerNode<FMODQueuedEffect>([](FMODQueuedEffect* node) {
    devtools::label("Members for FMODQueuedEffect:");
    devtools::property("m_filePath", node->m_filePath);
    devtools::property("m_speed", node->m_speed);
    devtools::property("m_unk024", node->m_unk024);
    devtools::property("m_volume", node->m_volume);
    devtools::property("m_pitch", node->m_pitch);
    devtools::property("m_fastFourierTransform", node->m_fastFourierTransform);
    devtools::property("m_reverb", node->m_reverb);
    devtools::property("m_start", node->m_start);
    devtools::property("m_end", node->m_end);
    devtools::property("m_fadeIn", node->m_fadeIn);
    devtools::property("m_fadeOut", node->m_fadeOut);
    devtools::property("m_loop", node->m_loop);
    devtools::property("m_effectID", node->m_effectID);
    devtools::property("m_override", node->m_override);
    devtools::property("m_unk04d", node->m_unk04d);
    devtools::property("m_channelID", node->m_channelID);
    devtools::property("m_uniqueID", node->m_uniqueID);
    devtools::property("m_minInterval", node->m_minInterval);
    devtools::property("m_group", node->m_group);
    devtools::label(fmt::format("FMOD::Sound* m_sound at {}", (void*)node->m_sound).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODAudioEngine>) {
devtools::registerNode<FMODAudioEngine>([](FMODAudioEngine* node) {
    devtools::label("Members for FMODAudioEngine:");
    devtools::property("m_musicVolume", node->m_musicVolume);
    devtools::property("m_sfxVolume", node->m_sfxVolume);
    devtools::property("m_backgroundMusicFade", node->m_backgroundMusicFade);
    devtools::property("m_musicFadeStart", node->m_musicFadeStart);
    devtools::property("m_pulse1", node->m_pulse1);
    devtools::property("m_pulse2", node->m_pulse2);
    devtools::property("m_pulse3", node->m_pulse3);
    devtools::property("m_pulseCounter", node->m_pulseCounter);
    devtools::property("m_metering", node->m_metering);
    devtools::property("m_sampleRate", node->m_sampleRate);
    devtools::property("m_reducedQuality", node->m_reducedQuality);
    devtools::property("m_allAudioPaused", node->m_allAudioPaused);
    devtools::property("m_musicOffset", node->m_musicOffset);
    devtools::property("m_stopped", node->m_stopped);
    devtools::enumerable("m_reverbPreset", node->m_reverbPreset, {
        { FMODReverbPreset::Generic, "FMODReverbPreset::Generic" },
        { FMODReverbPreset::PaddedCell, "FMODReverbPreset::PaddedCell" },
        { FMODReverbPreset::Room, "FMODReverbPreset::Room" },
        { FMODReverbPreset::Bathroom, "FMODReverbPreset::Bathroom" },
        { FMODReverbPreset::Livingroom, "FMODReverbPreset::Livingroom" },
        { FMODReverbPreset::Stoneroom, "FMODReverbPreset::Stoneroom" },
        { FMODReverbPreset::Auditorium, "FMODReverbPreset::Auditorium" },
        { FMODReverbPreset::ConvertHall, "FMODReverbPreset::ConvertHall" },
        { FMODReverbPreset::Cave, "FMODReverbPreset::Cave" },
        { FMODReverbPreset::Arena, "FMODReverbPreset::Arena" },
        { FMODReverbPreset::Hangar, "FMODReverbPreset::Hangar" },
        { FMODReverbPreset::CarpettedHallway, "FMODReverbPreset::CarpettedHallway" },
        { FMODReverbPreset::Hallway, "FMODReverbPreset::Hallway" },
        { FMODReverbPreset::StoneCorridor, "FMODReverbPreset::StoneCorridor" },
        { FMODReverbPreset::Alley, "FMODReverbPreset::Alley" },
        { FMODReverbPreset::Forest, "FMODReverbPreset::Forest" },
        { FMODReverbPreset::City, "FMODReverbPreset::City" },
        { FMODReverbPreset::Mountains, "FMODReverbPreset::Mountains" },
        { FMODReverbPreset::Quarry, "FMODReverbPreset::Quarry" },
        { FMODReverbPreset::Plain, "FMODReverbPreset::Plain" },
        { FMODReverbPreset::ParkingLot, "FMODReverbPreset::ParkingLot" },
        { FMODReverbPreset::SewerPipe, "FMODReverbPreset::SewerPipe" },
        { FMODReverbPreset::Underwater, "FMODReverbPreset::Underwater" },
    });
    devtools::property("m_showAudioVisualizer", node->m_showAudioVisualizer);
    devtools::property("m_musicVisualizerTime", node->m_musicVisualizerTime);
    devtools::property("m_musicVisualizerPeak", node->m_musicVisualizerPeak);
    devtools::property("m_musicVisualizerVolume", node->m_musicVisualizerVolume);
    devtools::property("m_sfxVisualizerTime", node->m_sfxVisualizerTime);
    devtools::property("m_sfxVisualizerPeak", node->m_sfxVisualizerPeak);
    devtools::property("m_sfxVisualizerVolume", node->m_sfxVisualizerVolume);
    devtools::label("gd::unordered_map<int, FMODMusic> m_fmodMusic");
    devtools::label("gd::unordered_map<gd::string, FMODSound> m_fmodSounds");
    devtools::label("gd::unordered_set<gd::string> m_temporarySoundPaths");
    devtools::label(fmt::format("FMOD::ChannelGroup* m_backgroundMusicChannel at {}", (void*)node->m_backgroundMusicChannel).c_str());
    devtools::label(fmt::format("FMOD::System* m_system at {}", (void*)node->m_system).c_str());
    devtools::label(fmt::format("FMOD::DSP* m_mainDSP at {}", (void*)node->m_mainDSP).c_str());
    devtools::label(fmt::format("FMOD::DSP* m_globalChannelDSP at {}", (void*)node->m_globalChannelDSP).c_str());
    devtools::label(fmt::format("FMOD::ChannelGroup* m_globalChannel at {}", (void*)node->m_globalChannel).c_str());
    devtools::label(fmt::format("FMOD::ChannelGroup* m_reverbChannel at {}", (void*)node->m_reverbChannel).c_str());
    devtools::label("FMOD_RESULT m_lastResult");
    devtools::label("FMODAudioState m_audioState");
    devtools::label("gd::vector<FMOD::Sound*> m_removedSounds");
    devtools::label("gd::unordered_map<int, FMOD::DSP*> m_channelIDToDSP");
    devtools::label("gd::unordered_map<int, FMOD::Channel*> m_channelIDToChannel");
    devtools::label("gd::unordered_set<int> m_stoppedChannels");
    devtools::label("gd::unordered_map<int, int> m_channelIDToEffectID");
    devtools::label("gd::unordered_map<int, int> m_effectIDToChannelID");
    devtools::label("gd::unordered_map<int, gd::string> m_channelIDToSoundPath");
    devtools::label("gd::vector<FMODQueuedEffect> m_queuedEffects");
    devtools::label("gd::unordered_map<gd::string, FMOD::Sound*> m_soundPathToSound");
    devtools::label("gd::unordered_map<int, FMOD::ChannelGroup*> m_globalChannelGroups");
    devtools::label("gd::unordered_map<int, FMOD::ChannelGroup*> m_reverbChannelGroups");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FMODLevelVisualizer>) {
devtools::registerNode<FMODLevelVisualizer>([](FMODLevelVisualizer* node) {
    devtools::label("Members for FMODLevelVisualizer:");
    devtools::property("m_width", node->m_width);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FollowRewardPage>) {
devtools::registerNode<FollowRewardPage>([](FollowRewardPage* node) {
    devtools::label("Members for FollowRewardPage:");
    devtools::property("m_videoPlaying", node->m_videoPlaying);
    devtools::label(fmt::format("cocos2d::CCArray* m_chests at {}", (void*)node->m_chests).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FontObject>) {
devtools::registerNode<FontObject>([](FontObject* node) {
    devtools::label("Members for FontObject:");
    devtools::label("std::array<int, 300> m_hugeIntArray");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ForceBlockGameObject>) {
devtools::registerNode<ForceBlockGameObject>([](ForceBlockGameObject* node) {
    devtools::label("Members for ForceBlockGameObject:");
    devtools::property("m_force", node->m_force);
    devtools::property("m_minForce", node->m_minForce);
    devtools::property("m_maxForce", node->m_maxForce);
    devtools::property("m_relativeForce", node->m_relativeForce);
    devtools::property("m_forceRange", node->m_forceRange);
    devtools::property("m_forceID", node->m_forceID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FRequestProfilePage>) {
devtools::registerNode<FRequestProfilePage>([](FRequestProfilePage* node) {
    devtools::label("Members for FRequestProfilePage:");
    devtools::property("m_sent", node->m_sent);
    devtools::property("m_key", node->m_key);
    devtools::property("m_itemCount", node->m_itemCount);
    devtools::property("m_pageStartIdx", node->m_pageStartIdx);
    devtools::property("m_pageEndIdx", node->m_pageEndIdx);
    devtools::property("m_page", node->m_page);
    devtools::property("m_toggledAll", node->m_toggledAll);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageLabel at {}", (void*)node->m_pageLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_errorLabel at {}", (void*)node->m_errorLabel).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_uploadPopup at {}", (void*)node->m_uploadPopup).c_str());
    devtools::label(fmt::format("void* m_unk2e8 at {}", (void*)node->m_unk2e8).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshButton at {}", (void*)node->m_refreshButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FriendRequestPopup>) {
devtools::registerNode<FriendRequestPopup>([](FriendRequestPopup* node) {
    devtools::label("Members for FriendRequestPopup:");
    devtools::label(fmt::format("void* m_unk at {}", (void*)node->m_unk).c_str());
    devtools::label(fmt::format("GJFriendRequest* m_request at {}", (void*)node->m_request).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_closeBtn at {}", (void*)node->m_closeBtn).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_popup at {}", (void*)node->m_popup).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, FriendsProfilePage>) {
devtools::registerNode<FriendsProfilePage>([](FriendsProfilePage* node) {
    devtools::label("Members for FriendsProfilePage:");
    devtools::enumerable("m_type", node->m_type, {
        { UserListType::Friends, "UserListType::Friends" },
        { UserListType::Blocked, "UserListType::Blocked" },
    });
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_noInternet at {}", (void*)node->m_noInternet).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_totalFriends at {}", (void*)node->m_totalFriends).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("void* m_unk532 at {}", (void*)node->m_unk532).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_users at {}", (void*)node->m_users).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshBtn at {}", (void*)node->m_refreshBtn).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameCell>) {
devtools::registerNode<GameCell>([](GameCell* node) {
    devtools::label("Members for GameCell:");
    devtools::property("m_gameLink", node->m_gameLink);
    devtools::label(fmt::format("void* m_unk230 at {}", (void*)node->m_unk230).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameEffectsManager>) {
devtools::registerNode<GameEffectsManager>([](GameEffectsManager* node) {
    devtools::label("Members for GameEffectsManager:");
    devtools::label(fmt::format("PlayLayer* m_playLayer at {}", (void*)node->m_playLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameLevelManager>) {
devtools::registerNode<GameLevelManager>([](GameLevelManager* node) {
    devtools::label("Members for GameLevelManager:");
    devtools::property("m_dailyTimeLeft", node->m_dailyTimeLeft);
    devtools::property("m_dailyID", node->m_dailyID);
    devtools::property("m_activeDailyID", node->m_activeDailyID);
    devtools::property("m_weeklyTimeLeft", node->m_weeklyTimeLeft);
    devtools::property("m_weeklyID", node->m_weeklyID);
    devtools::property("m_activeWeeklyID", node->m_activeWeeklyID);
    devtools::property("m_eventTimeLeft", node->m_eventTimeLeft);
    devtools::property("m_eventID", node->m_eventID);
    devtools::property("m_activeEventID", node->m_activeEventID);
    devtools::property("m_searchKey", node->m_searchKey);
    devtools::property("m_mapPackKey", node->m_mapPackKey);
    devtools::enumerable("m_leaderboardState", node->m_leaderboardState, {
        { LeaderboardState::Default, "LeaderboardState::Default" },
        { LeaderboardState::Top100, "LeaderboardState::Top100" },
        { LeaderboardState::Global, "LeaderboardState::Global" },
        { LeaderboardState::Creator, "LeaderboardState::Creator" },
        { LeaderboardState::Friends, "LeaderboardState::Friends" },
    });
    devtools::property("m_returnToLocalLevels", node->m_returnToLocalLevels);
    devtools::enumerable("m_searchType", node->m_searchType, {
        { SearchType::Search, "SearchType::Search" },
        { SearchType::Downloaded, "SearchType::Downloaded" },
        { SearchType::MostLiked, "SearchType::MostLiked" },
        { SearchType::Trending, "SearchType::Trending" },
        { SearchType::Recent, "SearchType::Recent" },
        { SearchType::UsersLevels, "SearchType::UsersLevels" },
        { SearchType::Featured, "SearchType::Featured" },
        { SearchType::Magic, "SearchType::Magic" },
        { SearchType::Sends, "SearchType::Sends" },
        { SearchType::MapPack, "SearchType::MapPack" },
        { SearchType::MapPackOnClick, "SearchType::MapPackOnClick" },
        { SearchType::Awarded, "SearchType::Awarded" },
        { SearchType::Followed, "SearchType::Followed" },
        { SearchType::Friends, "SearchType::Friends" },
        { SearchType::Users, "SearchType::Users" },
        { SearchType::LikedGDW, "SearchType::LikedGDW" },
        { SearchType::HallOfFame, "SearchType::HallOfFame" },
        { SearchType::FeaturedGDW, "SearchType::FeaturedGDW" },
        { SearchType::Similar, "SearchType::Similar" },
        { SearchType::Type19, "SearchType::Type19" },
        { SearchType::TopListsUnused, "SearchType::TopListsUnused" },
        { SearchType::DailySafe, "SearchType::DailySafe" },
        { SearchType::WeeklySafe, "SearchType::WeeklySafe" },
        { SearchType::EventSafe, "SearchType::EventSafe" },
        { SearchType::Reported, "SearchType::Reported" },
        { SearchType::LevelListsOnClick, "SearchType::LevelListsOnClick" },
        { SearchType::Type26, "SearchType::Type26" },
        { SearchType::Sent, "SearchType::Sent" },
        { SearchType::FeaturedLite, "SearchType::FeaturedLite" },
        { SearchType::Bonus, "SearchType::Bonus" },
        { SearchType::MyLevels, "SearchType::MyLevels" },
        { SearchType::SavedLevels, "SearchType::SavedLevels" },
        { SearchType::FavouriteLevels, "SearchType::FavouriteLevels" },
        { SearchType::SmartTemplates, "SearchType::SmartTemplates" },
        { SearchType::MyLists, "SearchType::MyLists" },
        { SearchType::FavouriteLists, "SearchType::FavouriteLists" },
    });
    devtools::property("m_mapPack", node->m_mapPack);
    devtools::property("m_tempSave", node->m_tempSave);
    devtools::property("m_testedNetwork", node->m_testedNetwork);
    devtools::label("gd::set<gd::string> m_queuedLists");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_mainLevels at {}", (void*)node->m_mainLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_searchFilters at {}", (void*)node->m_searchFilters).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_onlineLevels at {}", (void*)node->m_onlineLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_storedLevelData at {}", (void*)node->m_storedLevelData).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_followedCreators at {}", (void*)node->m_followedCreators).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_favoriteLists at {}", (void*)node->m_favoriteLists).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_downloadedLevels at {}", (void*)node->m_downloadedLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_likedLevels at {}", (void*)node->m_likedLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_ratedLevels at {}", (void*)node->m_ratedLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_ratedDemons at {}", (void*)node->m_ratedDemons).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_reportedLevels at {}", (void*)node->m_reportedLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_onlineFolders at {}", (void*)node->m_onlineFolders).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_localLevelsFolders at {}", (void*)node->m_localLevelsFolders).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_dailyLevels at {}", (void*)node->m_dailyLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_gauntletLevels at {}", (void*)node->m_gauntletLevels).c_str());
    devtools::label("gd::map<gd::string, bool> m_availableFilters");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_timerDict at {}", (void*)node->m_timerDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_knownUsers at {}", (void*)node->m_knownUsers).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_accountIDtoUserIDDict at {}", (void*)node->m_accountIDtoUserIDDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_userIDtoAccountIDDict at {}", (void*)node->m_userIDtoAccountIDDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_storedLevels at {}", (void*)node->m_storedLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_pageInfo at {}", (void*)node->m_pageInfo).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unkDict20 at {}", (void*)node->m_unkDict20).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_savedPacks at {}", (void*)node->m_savedPacks).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_savedGauntlets at {}", (void*)node->m_savedGauntlets).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_downloadObjects at {}", (void*)node->m_downloadObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_friendReqAndUserBlocks at {}", (void*)node->m_friendReqAndUserBlocks).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_storedUserInfo at {}", (void*)node->m_storedUserInfo).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_friendRequests at {}", (void*)node->m_friendRequests).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_userMessages at {}", (void*)node->m_userMessages).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_userReplies at {}", (void*)node->m_userReplies).c_str());
    devtools::label(fmt::format("LevelManagerDelegate* m_levelManagerDelegate at {}", (void*)node->m_levelManagerDelegate).c_str());
    devtools::label(fmt::format("LevelDownloadDelegate* m_levelDownloadDelegate at {}", (void*)node->m_levelDownloadDelegate).c_str());
    devtools::label(fmt::format("LevelCommentDelegate* m_levelCommentDelegate at {}", (void*)node->m_levelCommentDelegate).c_str());
    devtools::label(fmt::format("CommentUploadDelegate* m_commentUploadDelegate at {}", (void*)node->m_commentUploadDelegate).c_str());
    devtools::label(fmt::format("LevelUploadDelegate* m_levelUploadDelegate at {}", (void*)node->m_levelUploadDelegate).c_str());
    devtools::label(fmt::format("ListUploadDelegate* m_listUploadDelegate at {}", (void*)node->m_listUploadDelegate).c_str());
    devtools::label(fmt::format("LevelUpdateDelegate* m_levelUpdateDelegate at {}", (void*)node->m_levelUpdateDelegate).c_str());
    devtools::label(fmt::format("LeaderboardManagerDelegate* m_leaderboardManagerDelegate at {}", (void*)node->m_leaderboardManagerDelegate).c_str());
    devtools::label(fmt::format("LevelDeleteDelegate* m_levelDeleteDelegate at {}", (void*)node->m_levelDeleteDelegate).c_str());
    devtools::label(fmt::format("LevelListDeleteDelegate* m_levelListDeleteDelegate at {}", (void*)node->m_levelListDeleteDelegate).c_str());
    devtools::label(fmt::format("UserInfoDelegate* m_userInfoDelegate at {}", (void*)node->m_userInfoDelegate).c_str());
    devtools::label(fmt::format("UploadActionDelegate* m_uploadActionDelegate at {}", (void*)node->m_uploadActionDelegate).c_str());
    devtools::label(fmt::format("UserListDelegate* m_userListDelegate at {}", (void*)node->m_userListDelegate).c_str());
    devtools::label(fmt::format("FriendRequestDelegate* m_friendRequestDelegate at {}", (void*)node->m_friendRequestDelegate).c_str());
    devtools::label(fmt::format("MessageListDelegate* m_messageListDelegate at {}", (void*)node->m_messageListDelegate).c_str());
    devtools::label(fmt::format("DownloadMessageDelegate* m_downloadMessageDelegate at {}", (void*)node->m_downloadMessageDelegate).c_str());
    devtools::label(fmt::format("UploadMessageDelegate* m_uploadMessageDelegate at {}", (void*)node->m_uploadMessageDelegate).c_str());
    devtools::label(fmt::format("GJRewardDelegate* m_GJRewardDelegate at {}", (void*)node->m_GJRewardDelegate).c_str());
    devtools::label(fmt::format("GJOnlineRewardDelegate* m_GJOnlineRewardDelegate at {}", (void*)node->m_GJOnlineRewardDelegate).c_str());
    devtools::label(fmt::format("GJChallengeDelegate* m_GJChallengeDelegate at {}", (void*)node->m_GJChallengeDelegate).c_str());
    devtools::label(fmt::format("GJDailyLevelDelegate* m_GJDailyLevelDelegate at {}", (void*)node->m_GJDailyLevelDelegate).c_str());
    devtools::label(fmt::format("OnlineListDelegate* m_onlineListDelegate at {}", (void*)node->m_onlineListDelegate).c_str());
    devtools::label(fmt::format("cocos2d::CCString* m_trueString at {}", (void*)node->m_trueString).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_smartTemplates at {}", (void*)node->m_smartTemplates).c_str());
    devtools::label(fmt::format("GJSmartTemplate* m_smartTemplate at {}", (void*)node->m_smartTemplate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameLevelOptionsLayer>) {
devtools::registerNode<GameLevelOptionsLayer>([](GameLevelOptionsLayer* node) {
    devtools::label("Members for GameLevelOptionsLayer:");
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UIButtonConfig>) {
devtools::registerNode<UIButtonConfig>([](UIButtonConfig* node) {
    devtools::label("Members for UIButtonConfig:");
    devtools::property("m_width", node->m_width);
    devtools::property("m_height", node->m_height);
    devtools::property("m_deadzone", node->m_deadzone);
    devtools::property("m_scale", node->m_scale);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_radius", node->m_radius);
    devtools::property("m_modeB", node->m_modeB);
    devtools::property("m_snap", node->m_snap);
    devtools::property("m_position", node->m_position);
    devtools::property("m_oneButton", node->m_oneButton);
    devtools::property("m_player2", node->m_player2);
    devtools::property("m_split", node->m_split);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameManager>) {
devtools::registerNode<GameManager>([](GameManager* node) {
    devtools::label("Members for GameManager:");
    devtools::property("m_switchModes", node->m_switchModes);
    devtools::property("m_toFullscreen", node->m_toFullscreen);
    devtools::property("m_reloading", node->m_reloading);
    devtools::property("m_fix", node->m_fix);
    devtools::property("m_reloadTextures", node->m_reloadTextures);
    devtools::property("m_unkBool2", node->m_unkBool2);
    devtools::property("m_vsyncEnabled", node->m_vsyncEnabled);
    devtools::property("m_adTimer", node->m_adTimer);
    devtools::property("m_adCache", node->m_adCache);
    devtools::property("m_unkBool3", node->m_unkBool3);
    devtools::property("m_unkSize4_1", node->m_unkSize4_1);
    devtools::property("m_unkDouble2", node->m_unkDouble2);
    devtools::property("m_unkSize4_2", node->m_unkSize4_2);
    devtools::property("m_unkSize4_3", node->m_unkSize4_3);
    devtools::property("m_loaded", node->m_loaded);
    devtools::property("m_googlePlaySignedIn", node->m_googlePlaySignedIn);
    devtools::property("m_editorClipboard", node->m_editorClipboard);
    devtools::property("m_copiedObjectCount", node->m_copiedObjectCount);
    devtools::property("m_inMenuLayer", node->m_inMenuLayer);
    devtools::property("m_firstSetup", node->m_firstSetup);
    devtools::property("m_showedMenu", node->m_showedMenu);
    devtools::property("m_unknownBool4", node->m_unknownBool4);
    devtools::property("m_unknownBool5", node->m_unknownBool5);
    devtools::property("m_playerUDID", node->m_playerUDID);
    devtools::property("m_playerName", node->m_playerName);
    devtools::property("m_scoreUpdated", node->m_scoreUpdated);
    devtools::property("m_bgVolume", node->m_bgVolume);
    devtools::property("m_sfxVolume", node->m_sfxVolume);
    devtools::property("m_timeOffset", node->m_timeOffset);
    devtools::property("m_ratedGame", node->m_ratedGame);
    devtools::property("m_clickedFacebook", node->m_clickedFacebook);
    devtools::property("m_clickedTwitter", node->m_clickedTwitter);
    devtools::property("m_clickedYouTube", node->m_clickedYouTube);
    devtools::property("m_clickedTwitch", node->m_clickedTwitch);
    devtools::property("m_clickedDiscord", node->m_clickedDiscord);
    devtools::property("m_clickedReddit", node->m_clickedReddit);
    devtools::property("m_socialsDuration", node->m_socialsDuration);
    devtools::property("m_showedAd", node->m_showedAd);
    devtools::property("m_wasHigh", node->m_wasHigh);
    devtools::property("m_editorEnabled", node->m_editorEnabled);
    devtools::property("m_sceneEnum", node->m_sceneEnum);
    devtools::property("m_searchObjectBool", node->m_searchObjectBool);
    devtools::property("m_playerGlow", node->m_playerGlow);
    devtools::enumerable("m_playerIconType", node->m_playerIconType, {
        { IconType::Cube, "IconType::Cube" },
        { IconType::Ship, "IconType::Ship" },
        { IconType::Ball, "IconType::Ball" },
        { IconType::Ufo, "IconType::Ufo" },
        { IconType::Wave, "IconType::Wave" },
        { IconType::Robot, "IconType::Robot" },
        { IconType::Spider, "IconType::Spider" },
        { IconType::Swing, "IconType::Swing" },
        { IconType::Jetpack, "IconType::Jetpack" },
        { IconType::DeathEffect, "IconType::DeathEffect" },
        { IconType::Special, "IconType::Special" },
        { IconType::Item, "IconType::Item" },
        { IconType::ShipFire, "IconType::ShipFire" },
    });
    devtools::property("m_everyPlaySetup", node->m_everyPlaySetup);
    devtools::property("m_showSongMarkers", node->m_showSongMarkers);
    devtools::property("m_showBPMMarkers", node->m_showBPMMarkers);
    devtools::property("m_recordGameplay", node->m_recordGameplay);
    devtools::property("m_showProgressBar", node->m_showProgressBar);
    devtools::property("m_performanceMode", node->m_performanceMode);
    devtools::property("m_addGlow", node->m_addGlow);
    devtools::property("m_clickedGarage", node->m_clickedGarage);
    devtools::property("m_clickedEditor", node->m_clickedEditor);
    devtools::property("m_clickedName", node->m_clickedName);
    devtools::property("m_clickedPractice", node->m_clickedPractice);
    devtools::property("m_showedEditorGuide", node->m_showedEditorGuide);
    devtools::property("m_showedRateDiffDialog", node->m_showedRateDiffDialog);
    devtools::property("m_showedRateStarDialog", node->m_showedRateStarDialog);
    devtools::property("m_showedLowDetailDialog", node->m_showedLowDetailDialog);
    devtools::property("m_copiedColor", node->m_copiedColor);
    devtools::property("m_currentLevelID", node->m_currentLevelID);
    devtools::property("m_currentColorChannel", node->m_currentColorChannel);
    devtools::property("m_currentGroupID", node->m_currentGroupID);
    devtools::property("m_loadedBgID", node->m_loadedBgID);
    devtools::property("m_loadedGroundID", node->m_loadedGroundID);
    devtools::property("m_loadedMG", node->m_loadedMG);
    devtools::property("m_loadedFont", node->m_loadedFont);
    devtools::property("m_loadedDeathEffect", node->m_loadedDeathEffect);
    devtools::property("m_loadingBG", node->m_loadingBG);
    devtools::property("m_loadingG", node->m_loadingG);
    devtools::property("m_loadingG1", node->m_loadingG1);
    devtools::property("m_finishedLoadingG1", node->m_finishedLoadingG1);
    devtools::property("m_shouldLoadG1", node->m_shouldLoadG1);
    devtools::property("m_finishedLoadingMG1", node->m_finishedLoadingMG1);
    devtools::property("m_finishedLoadingMG2", node->m_finishedLoadingMG2);
    devtools::property("m_sessionAttempts", node->m_sessionAttempts);
    devtools::property("m_sessionAttempts2", node->m_sessionAttempts2);
    devtools::property("m_sessionNormalAttempts", node->m_sessionNormalAttempts);
    devtools::property("m_bootups", node->m_bootups);
    devtools::property("m_hasRatedGame", node->m_hasRatedGame);
    devtools::property("m_unkBool6", node->m_unkBool6);
    devtools::property("m_shouldLoadUnlockValueKeeper", node->m_shouldLoadUnlockValueKeeper);
    devtools::property("m_unkBool7", node->m_unkBool7);
    devtools::property("m_unkBool8", node->m_unkBool8);
    devtools::property("m_canGetLevelSaveData", node->m_canGetLevelSaveData);
    devtools::property("m_resolution", node->m_resolution);
    devtools::property("m_texQuality", node->m_texQuality);
    devtools::property("m_somethingInMenuLayer", node->m_somethingInMenuLayer);
    devtools::property("m_ropeGarageEnter", node->m_ropeGarageEnter);
    devtools::property("m_currentGauntlet", node->m_currentGauntlet);
    devtools::property("m_unkSize4_13", node->m_unkSize4_13);
    devtools::property("m_unkBool10", node->m_unkBool10);
    devtools::property("m_unkSize4_14", node->m_unkSize4_14);
    devtools::property("m_disableThumbstick", node->m_disableThumbstick);
    devtools::property("m_customFPSTarget", node->m_customFPSTarget);
    devtools::property("m_loadingLevel", node->m_loadingLevel);
    devtools::property("m_customMenuSongID", node->m_customMenuSongID);
    devtools::property("m_customPracticeSongID", node->m_customPracticeSongID);
    devtools::property("m_iconRequestID", node->m_iconRequestID);
    devtools::enumerable("m_localSearchType", node->m_localSearchType, {
        { SearchType::Search, "SearchType::Search" },
        { SearchType::Downloaded, "SearchType::Downloaded" },
        { SearchType::MostLiked, "SearchType::MostLiked" },
        { SearchType::Trending, "SearchType::Trending" },
        { SearchType::Recent, "SearchType::Recent" },
        { SearchType::UsersLevels, "SearchType::UsersLevels" },
        { SearchType::Featured, "SearchType::Featured" },
        { SearchType::Magic, "SearchType::Magic" },
        { SearchType::Sends, "SearchType::Sends" },
        { SearchType::MapPack, "SearchType::MapPack" },
        { SearchType::MapPackOnClick, "SearchType::MapPackOnClick" },
        { SearchType::Awarded, "SearchType::Awarded" },
        { SearchType::Followed, "SearchType::Followed" },
        { SearchType::Friends, "SearchType::Friends" },
        { SearchType::Users, "SearchType::Users" },
        { SearchType::LikedGDW, "SearchType::LikedGDW" },
        { SearchType::HallOfFame, "SearchType::HallOfFame" },
        { SearchType::FeaturedGDW, "SearchType::FeaturedGDW" },
        { SearchType::Similar, "SearchType::Similar" },
        { SearchType::Type19, "SearchType::Type19" },
        { SearchType::TopListsUnused, "SearchType::TopListsUnused" },
        { SearchType::DailySafe, "SearchType::DailySafe" },
        { SearchType::WeeklySafe, "SearchType::WeeklySafe" },
        { SearchType::EventSafe, "SearchType::EventSafe" },
        { SearchType::Reported, "SearchType::Reported" },
        { SearchType::LevelListsOnClick, "SearchType::LevelListsOnClick" },
        { SearchType::Type26, "SearchType::Type26" },
        { SearchType::Sent, "SearchType::Sent" },
        { SearchType::FeaturedLite, "SearchType::FeaturedLite" },
        { SearchType::Bonus, "SearchType::Bonus" },
        { SearchType::MyLevels, "SearchType::MyLevels" },
        { SearchType::SavedLevels, "SearchType::SavedLevels" },
        { SearchType::FavouriteLevels, "SearchType::FavouriteLevels" },
        { SearchType::SmartTemplates, "SearchType::SmartTemplates" },
        { SearchType::MyLists, "SearchType::MyLists" },
        { SearchType::FavouriteLists, "SearchType::FavouriteLists" },
    });
    devtools::enumerable("m_savedSearchType", node->m_savedSearchType, {
        { SearchType::Search, "SearchType::Search" },
        { SearchType::Downloaded, "SearchType::Downloaded" },
        { SearchType::MostLiked, "SearchType::MostLiked" },
        { SearchType::Trending, "SearchType::Trending" },
        { SearchType::Recent, "SearchType::Recent" },
        { SearchType::UsersLevels, "SearchType::UsersLevels" },
        { SearchType::Featured, "SearchType::Featured" },
        { SearchType::Magic, "SearchType::Magic" },
        { SearchType::Sends, "SearchType::Sends" },
        { SearchType::MapPack, "SearchType::MapPack" },
        { SearchType::MapPackOnClick, "SearchType::MapPackOnClick" },
        { SearchType::Awarded, "SearchType::Awarded" },
        { SearchType::Followed, "SearchType::Followed" },
        { SearchType::Friends, "SearchType::Friends" },
        { SearchType::Users, "SearchType::Users" },
        { SearchType::LikedGDW, "SearchType::LikedGDW" },
        { SearchType::HallOfFame, "SearchType::HallOfFame" },
        { SearchType::FeaturedGDW, "SearchType::FeaturedGDW" },
        { SearchType::Similar, "SearchType::Similar" },
        { SearchType::Type19, "SearchType::Type19" },
        { SearchType::TopListsUnused, "SearchType::TopListsUnused" },
        { SearchType::DailySafe, "SearchType::DailySafe" },
        { SearchType::WeeklySafe, "SearchType::WeeklySafe" },
        { SearchType::EventSafe, "SearchType::EventSafe" },
        { SearchType::Reported, "SearchType::Reported" },
        { SearchType::LevelListsOnClick, "SearchType::LevelListsOnClick" },
        { SearchType::Type26, "SearchType::Type26" },
        { SearchType::Sent, "SearchType::Sent" },
        { SearchType::FeaturedLite, "SearchType::FeaturedLite" },
        { SearchType::Bonus, "SearchType::Bonus" },
        { SearchType::MyLevels, "SearchType::MyLevels" },
        { SearchType::SavedLevels, "SearchType::SavedLevels" },
        { SearchType::FavouriteLevels, "SearchType::FavouriteLevels" },
        { SearchType::SmartTemplates, "SearchType::SmartTemplates" },
        { SearchType::MyLists, "SearchType::MyLists" },
        { SearchType::FavouriteLists, "SearchType::FavouriteLists" },
    });
    devtools::property("m_levelSearchType", node->m_levelSearchType);
    devtools::property("m_dpadLayout1", node->m_dpadLayout1);
    devtools::property("m_dpadLayout2", node->m_dpadLayout2);
    devtools::property("m_dpadLayout3", node->m_dpadLayout3);
    devtools::property("m_dpadLayoutDual1", node->m_dpadLayoutDual1);
    devtools::property("m_dpadLayoutDual2", node->m_dpadLayoutDual2);
    devtools::property("m_dpadLayoutDual3", node->m_dpadLayoutDual3);
    devtools::property("m_leaderboardLevelID", node->m_leaderboardLevelID);
    devtools::property("m_leaderboardLevelTime", node->m_leaderboardLevelTime);
    devtools::property("m_leaderboardLevelPoints", node->m_leaderboardLevelPoints);
    devtools::property("m_shouldResetShader", node->m_shouldResetShader);
    devtools::property("m_practicePos", node->m_practicePos);
    devtools::property("m_practiceOpacity", node->m_practiceOpacity);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_mainFramesForAnimation at {}", (void*)node->m_mainFramesForAnimation).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_detailFramesForAnimation at {}", (void*)node->m_detailFramesForAnimation).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_frameTimeForAnimation at {}", (void*)node->m_frameTimeForAnimation).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_framesForAnimation at {}", (void*)node->m_framesForAnimation).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_defaultFrames at {}", (void*)node->m_defaultFrames).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_valueKeeper at {}", (void*)node->m_valueKeeper).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unlockValueKeeper at {}", (void*)node->m_unlockValueKeeper).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_customObjectDict at {}", (void*)node->m_customObjectDict).c_str());
    devtools::label(fmt::format("PlayLayer* m_playLayer at {}", (void*)node->m_playLayer).c_str());
    devtools::label(fmt::format("LevelEditorLayer* m_levelEditorLayer at {}", (void*)node->m_levelEditorLayer).c_str());
    devtools::label(fmt::format("GJBaseGameLayer* m_gameLayer at {}", (void*)node->m_gameLayer).c_str());
    devtools::label(fmt::format("LevelSelectLayer* m_levelSelectLayer at {}", (void*)node->m_levelSelectLayer).c_str());
    devtools::label(fmt::format("MenuLayer* m_menuLayer at {}", (void*)node->m_menuLayer).c_str());
    devtools::label(fmt::format("void* m_premiumPopup at {}", (void*)node->m_premiumPopup).c_str());
    devtools::label("geode::SeedValueRSV m_playerUserID");
    devtools::label("geode::SeedValueRSV m_playerFrame");
    devtools::label("geode::SeedValueRSV m_playerShip");
    devtools::label("geode::SeedValueRSV m_playerBall");
    devtools::label("geode::SeedValueRSV m_playerBird");
    devtools::label("geode::SeedValueRSV m_playerDart");
    devtools::label("geode::SeedValueRSV m_playerRobot");
    devtools::label("geode::SeedValueRSV m_playerSpider");
    devtools::label("geode::SeedValueRSV m_playerSwing");
    devtools::label("geode::SeedValueRSV m_playerColor");
    devtools::label("geode::SeedValueRSV m_playerColor2");
    devtools::label("geode::SeedValueRSV m_playerGlowColor");
    devtools::label("geode::SeedValueRSV m_playerStreak");
    devtools::label("geode::SeedValueRSV m_playerShipFire");
    devtools::label("geode::SeedValueRSV m_playerDeathEffect");
    devtools::label("geode::SeedValueRSV m_playerJetpack");
    devtools::label("geode::SeedValueRS m_chk");
    devtools::label("geode::SeedValueSR m_secretNumber");
    devtools::label(fmt::format("GameRateDelegate* m_gameRateDelegate1 at {}", (void*)node->m_gameRateDelegate1).c_str());
    devtools::label(fmt::format("GameRateDelegate* m_gameRateDelegate2 at {}", (void*)node->m_gameRateDelegate2).c_str());
    devtools::label("geode::SeedValueRSV m_hasRP");
    devtools::label(fmt::format("DailyLevelPage* m_dailyLevelPage at {}", (void*)node->m_dailyLevelPage).c_str());
    devtools::label("gd::map<int, int> m_iconLoadCounts");
    devtools::label("gd::map<int, gd::map<int, int>> m_iconRequests");
    devtools::label("gd::map<int, bool> m_isIconBeingLoaded");
    devtools::label("gd::vector<int> m_keyStartForIcon");
    devtools::label("gd::map<int, gd::vector<cocos2d::CCObject*>> m_iconDelegates");
    devtools::label(fmt::format("cocos2d::CCArray* m_unkArray at {}", (void*)node->m_unkArray).c_str());
    devtools::label(fmt::format("RewardedVideoDelegate* m_rewardedVideoDelegate at {}", (void*)node->m_rewardedVideoDelegate).c_str());
    devtools::label("UIButtonConfig m_dpad1");
    devtools::label("UIButtonConfig m_dpad2");
    devtools::label("UIButtonConfig m_dpad3");
    devtools::label("UIButtonConfig m_dpad4");
    devtools::label("UIButtonConfig m_dpad5");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameObjectCopy>) {
devtools::registerNode<GameObjectCopy>([](GameObjectCopy* node) {
    devtools::label("Members for GameObjectCopy:");
    devtools::property("m_position", node->m_position);
    devtools::property("m_rotationX", node->m_rotationX);
    devtools::property("m_rotationY", node->m_rotationY);
    devtools::property("m_isFlipX", node->m_isFlipX);
    devtools::property("m_isFlipY", node->m_isFlipY);
    devtools::property("m_customScaleX", node->m_customScaleX);
    devtools::property("m_customScaleY", node->m_customScaleY);
    devtools::label(fmt::format("GameObject* m_object at {}", (void*)node->m_object).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameOptionsLayer>) {
devtools::registerNode<GameOptionsLayer>([](GameOptionsLayer* node) {
    devtools::label("Members for GameOptionsLayer:");
    devtools::property("m_practiceDialogIndex", node->m_practiceDialogIndex);
    devtools::label(fmt::format("GJBaseGameLayer* m_baseGameLayer at {}", (void*)node->m_baseGameLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameOptionsTrigger>) {
devtools::registerNode<GameOptionsTrigger>([](GameOptionsTrigger* node) {
    devtools::label("Members for GameOptionsTrigger:");
    devtools::enumerable("m_streakAdditive", node->m_streakAdditive, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_unlinkDualGravity", node->m_unlinkDualGravity, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_hideGround", node->m_hideGround, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_hideP1", node->m_hideP1, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_hideP2", node->m_hideP2, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_disableP1Controls", node->m_disableP1Controls, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_disableP2Controls", node->m_disableP2Controls, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_hideMG", node->m_hideMG, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_hideAttempts", node->m_hideAttempts, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_editRespawnTime", node->m_editRespawnTime, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::property("m_respawnTime", node->m_respawnTime);
    devtools::enumerable("m_audioOnDeath", node->m_audioOnDeath, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_noDeathSFX", node->m_noDeathSFX, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
    devtools::enumerable("m_boostSlide", node->m_boostSlide, {
        { GameOptionsSetting::Off, "GameOptionsSetting::Off" },
        { GameOptionsSetting::Disabled, "GameOptionsSetting::Disabled" },
        { GameOptionsSetting::On, "GameOptionsSetting::On" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GameStatsManager>) {
devtools::registerNode<GameStatsManager>([](GameStatsManager* node) {
    devtools::label("Members for GameStatsManager:");
    devtools::property("m_usePlayerStatsCCDictionary", node->m_usePlayerStatsCCDictionary);
    devtools::property("m_challengeTime", node->m_challengeTime);
    devtools::property("m_skipIncrementChallenge", node->m_skipIncrementChallenge);
    devtools::property("m_pathBugFixed", node->m_pathBugFixed);
    devtools::property("m_tryFixPathBug", node->m_tryFixPathBug);
    devtools::property("m_activePath", node->m_activePath);
    devtools::label(fmt::format("cocos2d::CCString* m_trueString at {}", (void*)node->m_trueString).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_allStoreItems at {}", (void*)node->m_allStoreItems).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_storeItems at {}", (void*)node->m_storeItems).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_allTreasureRoomChests at {}", (void*)node->m_allTreasureRoomChests).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_allTreasureRoomChestItems at {}", (void*)node->m_allTreasureRoomChestItems).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_allSpecialChests at {}", (void*)node->m_allSpecialChests).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_allSpecialChestItems at {}", (void*)node->m_allSpecialChestItems).c_str());
    devtools::label("gd::unordered_map<gd::string, gd::string> m_specialRewardDescriptions");
    devtools::label("gd::unordered_map<gd::string, gd::string> m_createSpecialChestItemsMap");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_specialChestsLite at {}", (void*)node->m_specialChestsLite).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_storeItemArray at {}", (void*)node->m_storeItemArray).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_rewardItems at {}", (void*)node->m_rewardItems).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_dailyChests at {}", (void*)node->m_dailyChests).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_worldAdvertChests at {}", (void*)node->m_worldAdvertChests).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_activeChallenges at {}", (void*)node->m_activeChallenges).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_upcomingChallenges at {}", (void*)node->m_upcomingChallenges).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_playerStats at {}", (void*)node->m_playerStats).c_str());
    devtools::label("gd::unordered_map<int, int> m_playerStatsRandMap");
    devtools::label("gd::unordered_map<int, int> m_playerStatsSeedMap");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_completedLevels at {}", (void*)node->m_completedLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_verifiedUserCoins at {}", (void*)node->m_verifiedUserCoins).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_pendingUserCoins at {}", (void*)node->m_pendingUserCoins).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_purchasedItems at {}", (void*)node->m_purchasedItems).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_onlineCurrencyScores at {}", (void*)node->m_onlineCurrencyScores).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_mainCurrencyScores at {}", (void*)node->m_mainCurrencyScores).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_gauntletCurrencyScores at {}", (void*)node->m_gauntletCurrencyScores).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_timelyCurrencyScores at {}", (void*)node->m_timelyCurrencyScores).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_onlineStars at {}", (void*)node->m_onlineStars).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_timelyStars at {}", (void*)node->m_timelyStars).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_gauntletDiamondScores at {}", (void*)node->m_gauntletDiamondScores).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_timelyDiamondScores at {}", (void*)node->m_timelyDiamondScores).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unusedCurrencyAwardDict at {}", (void*)node->m_unusedCurrencyAwardDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_challengeDiamonds at {}", (void*)node->m_challengeDiamonds).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_completedMappacks at {}", (void*)node->m_completedMappacks).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_completedLists at {}", (void*)node->m_completedLists).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_weeklyChest at {}", (void*)node->m_weeklyChest).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_eventChest at {}", (void*)node->m_eventChest).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_treasureRoomChests at {}", (void*)node->m_treasureRoomChests).c_str());
    devtools::label("geode::SeedValueRSV m_bonusKey");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_miscChests at {}", (void*)node->m_miscChests).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_enabledItems at {}", (void*)node->m_enabledItems).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_wraithChests at {}", (void*)node->m_wraithChests).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unkDict at {}", (void*)node->m_unkDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unlockedItems at {}", (void*)node->m_unlockedItems).c_str());
    devtools::label("gd::map<std::pair<int, UnlockType>, int> m_accountIDForIcon");
    devtools::label("gd::map<int, gd::string> m_usernameForAccountID");
    devtools::label("gd::set<std::pair<UnlockType, int>> m_wraithIcons");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GauntletLayer>) {
devtools::registerNode<GauntletLayer>([](GauntletLayer* node) {
    devtools::label("Members for GauntletLayer:");
    devtools::enumerable("m_gauntletType", node->m_gauntletType, {
        { GauntletType::Fire, "GauntletType::Fire" },
        { GauntletType::Ice, "GauntletType::Ice" },
        { GauntletType::Poison, "GauntletType::Poison" },
        { GauntletType::Shadow, "GauntletType::Shadow" },
        { GauntletType::Lava, "GauntletType::Lava" },
        { GauntletType::Bonus, "GauntletType::Bonus" },
        { GauntletType::Chaos, "GauntletType::Chaos" },
        { GauntletType::Demon, "GauntletType::Demon" },
        { GauntletType::Time, "GauntletType::Time" },
        { GauntletType::Crystal, "GauntletType::Crystal" },
        { GauntletType::Magic, "GauntletType::Magic" },
        { GauntletType::Spike, "GauntletType::Spike" },
        { GauntletType::Monster, "GauntletType::Monster" },
        { GauntletType::Doom, "GauntletType::Doom" },
        { GauntletType::Death, "GauntletType::Death" },
        { GauntletType::Forest, "GauntletType::Forest" },
        { GauntletType::Rune, "GauntletType::Rune" },
        { GauntletType::Force, "GauntletType::Force" },
        { GauntletType::Spooky, "GauntletType::Spooky" },
        { GauntletType::Dragon, "GauntletType::Dragon" },
        { GauntletType::Water, "GauntletType::Water" },
        { GauntletType::Haunted, "GauntletType::Haunted" },
        { GauntletType::Acid, "GauntletType::Acid" },
        { GauntletType::Witch, "GauntletType::Witch" },
        { GauntletType::Power, "GauntletType::Power" },
        { GauntletType::Potion, "GauntletType::Potion" },
        { GauntletType::Snake, "GauntletType::Snake" },
        { GauntletType::Toxic, "GauntletType::Toxic" },
        { GauntletType::Halloween, "GauntletType::Halloween" },
        { GauntletType::Treasure, "GauntletType::Treasure" },
        { GauntletType::Ghost, "GauntletType::Ghost" },
        { GauntletType::Spider, "GauntletType::Spider" },
        { GauntletType::Gem, "GauntletType::Gem" },
        { GauntletType::Inferno, "GauntletType::Inferno" },
        { GauntletType::Portal, "GauntletType::Portal" },
        { GauntletType::Strange, "GauntletType::Strange" },
        { GauntletType::Fantasy, "GauntletType::Fantasy" },
        { GauntletType::Christmas, "GauntletType::Christmas" },
        { GauntletType::Surprise, "GauntletType::Surprise" },
        { GauntletType::Mystery, "GauntletType::Mystery" },
        { GauntletType::Cursed, "GauntletType::Cursed" },
        { GauntletType::Cyborg, "GauntletType::Cyborg" },
        { GauntletType::Castle, "GauntletType::Castle" },
        { GauntletType::Grave, "GauntletType::Grave" },
        { GauntletType::Temple, "GauntletType::Temple" },
        { GauntletType::World, "GauntletType::World" },
        { GauntletType::Galaxy, "GauntletType::Galaxy" },
        { GauntletType::Universe, "GauntletType::Universe" },
        { GauntletType::Discord, "GauntletType::Discord" },
        { GauntletType::Split, "GauntletType::Split" },
        { GauntletType::NCS, "GauntletType::NCS" },
        { GauntletType::NCS2, "GauntletType::NCS2" },
        { GauntletType::Space, "GauntletType::Space" },
        { GauntletType::Cosmos, "GauntletType::Cosmos" },
    });
    devtools::label(fmt::format("cocos2d::CCArray* m_levels at {}", (void*)node->m_levels).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_backgroundSprite at {}", (void*)node->m_backgroundSprite).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_activeItemButton at {}", (void*)node->m_activeItemButton).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_activeObjects at {}", (void*)node->m_activeObjects).c_str());
    devtools::label(fmt::format("TextArea* m_tryAgainText at {}", (void*)node->m_tryAgainText).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GauntletNode>) {
devtools::registerNode<GauntletNode>([](GauntletNode* node) {
    devtools::label("Members for GauntletNode:");
    devtools::label(fmt::format("cocos2d::CCNode* m_gauntletInfoNode at {}", (void*)node->m_gauntletInfoNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_rewardNode at {}", (void*)node->m_rewardNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GauntletSelectLayer>) {
devtools::registerNode<GauntletSelectLayer>([](GauntletSelectLayer* node) {
    devtools::label("Members for GauntletSelectLayer:");
    devtools::property("m_exiting", node->m_exiting);
    devtools::property("m_playing", node->m_playing);
    devtools::property("m_playBlocked", node->m_playBlocked);
    devtools::label(fmt::format("cocos2d::CCSprite* m_backgroundSprite at {}", (void*)node->m_backgroundSprite).c_str());
    devtools::label(fmt::format("BoomScrollLayer* m_scrollLayer at {}", (void*)node->m_scrollLayer).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftButton at {}", (void*)node->m_leftButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightButton at {}", (void*)node->m_rightButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshButton at {}", (void*)node->m_refreshButton).c_str());
    devtools::label(fmt::format("TextArea* m_tryAgainText at {}", (void*)node->m_tryAgainText).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_gauntlets at {}", (void*)node->m_gauntlets).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GauntletSprite>) {
devtools::registerNode<GauntletSprite>([](GauntletSprite* node) {
    devtools::label("Members for GauntletSprite:");
    devtools::enumerable("m_gauntletType", node->m_gauntletType, {
        { GauntletType::Fire, "GauntletType::Fire" },
        { GauntletType::Ice, "GauntletType::Ice" },
        { GauntletType::Poison, "GauntletType::Poison" },
        { GauntletType::Shadow, "GauntletType::Shadow" },
        { GauntletType::Lava, "GauntletType::Lava" },
        { GauntletType::Bonus, "GauntletType::Bonus" },
        { GauntletType::Chaos, "GauntletType::Chaos" },
        { GauntletType::Demon, "GauntletType::Demon" },
        { GauntletType::Time, "GauntletType::Time" },
        { GauntletType::Crystal, "GauntletType::Crystal" },
        { GauntletType::Magic, "GauntletType::Magic" },
        { GauntletType::Spike, "GauntletType::Spike" },
        { GauntletType::Monster, "GauntletType::Monster" },
        { GauntletType::Doom, "GauntletType::Doom" },
        { GauntletType::Death, "GauntletType::Death" },
        { GauntletType::Forest, "GauntletType::Forest" },
        { GauntletType::Rune, "GauntletType::Rune" },
        { GauntletType::Force, "GauntletType::Force" },
        { GauntletType::Spooky, "GauntletType::Spooky" },
        { GauntletType::Dragon, "GauntletType::Dragon" },
        { GauntletType::Water, "GauntletType::Water" },
        { GauntletType::Haunted, "GauntletType::Haunted" },
        { GauntletType::Acid, "GauntletType::Acid" },
        { GauntletType::Witch, "GauntletType::Witch" },
        { GauntletType::Power, "GauntletType::Power" },
        { GauntletType::Potion, "GauntletType::Potion" },
        { GauntletType::Snake, "GauntletType::Snake" },
        { GauntletType::Toxic, "GauntletType::Toxic" },
        { GauntletType::Halloween, "GauntletType::Halloween" },
        { GauntletType::Treasure, "GauntletType::Treasure" },
        { GauntletType::Ghost, "GauntletType::Ghost" },
        { GauntletType::Spider, "GauntletType::Spider" },
        { GauntletType::Gem, "GauntletType::Gem" },
        { GauntletType::Inferno, "GauntletType::Inferno" },
        { GauntletType::Portal, "GauntletType::Portal" },
        { GauntletType::Strange, "GauntletType::Strange" },
        { GauntletType::Fantasy, "GauntletType::Fantasy" },
        { GauntletType::Christmas, "GauntletType::Christmas" },
        { GauntletType::Surprise, "GauntletType::Surprise" },
        { GauntletType::Mystery, "GauntletType::Mystery" },
        { GauntletType::Cursed, "GauntletType::Cursed" },
        { GauntletType::Cyborg, "GauntletType::Cyborg" },
        { GauntletType::Castle, "GauntletType::Castle" },
        { GauntletType::Grave, "GauntletType::Grave" },
        { GauntletType::Temple, "GauntletType::Temple" },
        { GauntletType::World, "GauntletType::World" },
        { GauntletType::Galaxy, "GauntletType::Galaxy" },
        { GauntletType::Universe, "GauntletType::Universe" },
        { GauntletType::Discord, "GauntletType::Discord" },
        { GauntletType::Split, "GauntletType::Split" },
        { GauntletType::NCS, "GauntletType::NCS" },
        { GauntletType::NCS2, "GauntletType::NCS2" },
        { GauntletType::Space, "GauntletType::Space" },
        { GauntletType::Cosmos, "GauntletType::Cosmos" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GhostTrailEffect>) {
devtools::registerNode<GhostTrailEffect>([](GhostTrailEffect* node) {
    devtools::label("Members for GhostTrailEffect:");
    devtools::property("m_snapshotInterval", node->m_snapshotInterval);
    devtools::property("m_fadeInterval", node->m_fadeInterval);
    devtools::property("m_ghostScale", node->m_ghostScale);
    devtools::property("m_scaleTwice", node->m_scaleTwice);
    devtools::property("m_playerScale", node->m_playerScale);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_color", node->m_color);
    devtools::property("m_position", node->m_position);
    devtools::property("m_unk194", node->m_unk194);
    devtools::label("cocos2d::_ccBlendFunc m_blendFunc");
    devtools::label(fmt::format("cocos2d::CCSprite* m_iconSprite at {}", (void*)node->m_iconSprite).c_str());
    devtools::label(fmt::format("PlayerObject* m_playerObject at {}", (void*)node->m_playerObject).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_objectLayer at {}", (void*)node->m_objectLayer).c_str());
    devtools::label(fmt::format("void* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJAccountManager>) {
devtools::registerNode<GJAccountManager>([](GJAccountManager* node) {
    devtools::label("Members for GJAccountManager:");
    devtools::property("m_username", node->m_username);
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_unkInt1", node->m_unkInt1);
    devtools::property("m_unkInt2", node->m_unkInt2);
    devtools::property("m_GJP2", node->m_GJP2);
    devtools::property("m_gameManagerSize", node->m_gameManagerSize);
    devtools::property("m_localLevelsSize", node->m_localLevelsSize);
    devtools::property("m_password", node->m_password);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_activeDownloads at {}", (void*)node->m_activeDownloads).c_str());
    devtools::label(fmt::format("GJAccountRegisterDelegate* m_accountRegisterDelegate at {}", (void*)node->m_accountRegisterDelegate).c_str());
    devtools::label(fmt::format("GJAccountLoginDelegate* m_accountLoginDelegate at {}", (void*)node->m_accountLoginDelegate).c_str());
    devtools::label(fmt::format("GJAccountDelegate* m_accountDelegate at {}", (void*)node->m_accountDelegate).c_str());
    devtools::label(fmt::format("GJAccountBackupDelegate* m_backupDelegate at {}", (void*)node->m_backupDelegate).c_str());
    devtools::label(fmt::format("GJAccountSyncDelegate* m_syncDelegate at {}", (void*)node->m_syncDelegate).c_str());
    devtools::label(fmt::format("GJAccountSettingsDelegate* m_accountSettingsDelegate at {}", (void*)node->m_accountSettingsDelegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJAccountSettingsLayer>) {
devtools::registerNode<GJAccountSettingsLayer>([](GJAccountSettingsLayer* node) {
    devtools::label("Members for GJAccountSettingsLayer:");
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_messageStatus", node->m_messageStatus);
    devtools::property("m_friendStatus", node->m_friendStatus);
    devtools::property("m_commentHistoryStatus", node->m_commentHistoryStatus);
    devtools::property("m_youtubeURL", node->m_youtubeURL);
    devtools::property("m_twitterURL", node->m_twitterURL);
    devtools::property("m_twitchURL", node->m_twitchURL);
    devtools::label(fmt::format("CCTextInputNode* m_youtubeInput at {}", (void*)node->m_youtubeInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_twitterInput at {}", (void*)node->m_twitterInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_twitchInput at {}", (void*)node->m_twitchInput).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_messageSettings at {}", (void*)node->m_messageSettings).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_friendRequestSettings at {}", (void*)node->m_friendRequestSettings).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_commentSettings at {}", (void*)node->m_commentSettings).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJActionManager>) {
devtools::registerNode<GJActionManager>([](GJActionManager* node) {
    devtools::label("Members for GJActionManager:");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_internalActions at {}", (void*)node->m_internalActions).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PlayerButtonCommand>) {
devtools::registerNode<PlayerButtonCommand>([](PlayerButtonCommand* node) {
    devtools::label("Members for PlayerButtonCommand:");
    devtools::enumerable("m_button", node->m_button, {
        { PlayerButton::Jump, "PlayerButton::Jump" },
        { PlayerButton::Left, "PlayerButton::Left" },
        { PlayerButton::Right, "PlayerButton::Right" },
    });
    devtools::property("m_isPush", node->m_isPush);
    devtools::property("m_isPlayer2", node->m_isPlayer2);
    devtools::property("m_step", node->m_step);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJBaseGameLayer>) {
devtools::registerNode<GJBaseGameLayer>([](GJBaseGameLayer* node) {
    devtools::label("Members for GJBaseGameLayer:");
    devtools::enumerable("m_playbackMode", node->m_playbackMode, {
        { PlaybackMode::Not, "PlaybackMode::Not" },
        { PlaybackMode::Playing, "PlaybackMode::Playing" },
        { PlaybackMode::Paused, "PlaybackMode::Paused" },
    });
    devtools::property("m_lowDetailMode", node->m_lowDetailMode);
    devtools::property("m_extraLDM", node->m_extraLDM);
    devtools::property("m_ignoreDamage", node->m_ignoreDamage);
    devtools::property("m_enable22Changes", node->m_enable22Changes);
    devtools::property("m_allowStaticRotate", node->m_allowStaticRotate);
    devtools::property("m_fixNegativeScale", node->m_fixNegativeScale);
    devtools::property("m_startingFromBeginning", node->m_startingFromBeginning);
    devtools::property("m_visibleObjectsCount", node->m_visibleObjectsCount);
    devtools::property("m_visibleObjectsIndex", node->m_visibleObjectsIndex);
    devtools::property("m_visibleObjects2Count", node->m_visibleObjects2Count);
    devtools::property("m_visibleObjects2Index", node->m_visibleObjects2Index);
    devtools::property("m_unked0", node->m_unked0);
    devtools::property("m_disabledObjectsCount", node->m_disabledObjectsCount);
    devtools::property("m_unked8", node->m_unked8);
    devtools::property("m_areaObjectsCount", node->m_areaObjectsCount);
    devtools::property("m_processedAreaObjectsCount", node->m_processedAreaObjectsCount);
    devtools::property("m_unkee4", node->m_unkee4);
    devtools::property("m_disabledObjectsIndex", node->m_disabledObjectsIndex);
    devtools::property("m_unkeec", node->m_unkeec);
    devtools::property("m_areaObjectsIndex", node->m_areaObjectsIndex);
    devtools::property("m_processedAreaObjectsIndex", node->m_processedAreaObjectsIndex);
    devtools::property("m_lastUsedLinkedID", node->m_lastUsedLinkedID);
    devtools::property("m_increasedLayerCapacity", node->m_increasedLayerCapacity);
    devtools::property("m_enterEasingValuesIndex", node->m_enterEasingValuesIndex);
    devtools::property("m_dualTouchTrigger", node->m_dualTouchTrigger);
    devtools::property("m_clicks", node->m_clicks);
    devtools::property("m_attempts", node->m_attempts);
    devtools::property("m_jumping", node->m_jumping);
    devtools::property("m_leftSectionIndex", node->m_leftSectionIndex);
    devtools::property("m_rightSectionIndex", node->m_rightSectionIndex);
    devtools::property("m_bottomSectionIndex", node->m_bottomSectionIndex);
    devtools::property("m_topSectionIndex", node->m_topSectionIndex);
    devtools::property("m_isEditor", node->m_isEditor);
    devtools::property("m_blending", node->m_blending);
    devtools::property("m_isPlatformer", node->m_isPlatformer);
    devtools::property("m_particleCount", node->m_particleCount);
    devtools::property("m_customParticleCount", node->m_customParticleCount);
    devtools::property("m_particleSystemLimit", node->m_particleSystemLimit);
    devtools::property("m_activeGradients", node->m_activeGradients);
    devtools::property("m_objectsDeactivated", node->m_objectsDeactivated);
    devtools::property("m_areaObjectsUpdated", node->m_areaObjectsUpdated);
    devtools::property("m_useReplay", node->m_useReplay);
    devtools::property("m_unk3189", node->m_unk3189);
    devtools::property("m_solidCollisionObjectsCount", node->m_solidCollisionObjectsCount);
    devtools::property("m_solidCollisionObjectsIndex", node->m_solidCollisionObjectsIndex);
    devtools::property("m_hazardCollisionObjectsCount", node->m_hazardCollisionObjectsCount);
    devtools::property("m_hazardCollisionObjectsIndex", node->m_hazardCollisionObjectsIndex);
    devtools::property("m_isPracticeMode", node->m_isPracticeMode);
    devtools::property("m_practiceMusicSync", node->m_practiceMusicSync);
    devtools::property("m_loadingProgress", node->m_loadingProgress);
    devtools::property("m_unk31f8", node->m_unk31f8);
    devtools::property("m_cameraFlip", node->m_cameraFlip);
    devtools::property("m_cameraWidthOffset", node->m_cameraWidthOffset);
    devtools::property("m_cameraHeightOffset", node->m_cameraHeightOffset);
    devtools::property("m_updateGroundShadows", node->m_updateGroundShadows);
    devtools::property("m_levelLength", node->m_levelLength);
    devtools::property("m_resetActiveObjects", node->m_resetActiveObjects);
    devtools::property("m_skipArtReload", node->m_skipArtReload);
    devtools::property("m_isTestMode", node->m_isTestMode);
    devtools::property("m_freezeStartCamera", node->m_freezeStartCamera);
    devtools::property("m_unk322a", node->m_unk322a);
    devtools::property("m_cameraUnzoomedHeightOffset", node->m_cameraUnzoomedHeightOffset);
    devtools::property("m_targetCameraHeightOffset", node->m_targetCameraHeightOffset);
    devtools::property("m_calculateTargetHeightOffset", node->m_calculateTargetHeightOffset);
    devtools::property("m_staticCameraShake", node->m_staticCameraShake);
    devtools::property("m_skipCameraShake", node->m_skipCameraShake);
    devtools::property("m_playerDied", node->m_playerDied);
    devtools::property("m_extraDelta", node->m_extraDelta);
    devtools::property("m_started", node->m_started);
    devtools::property("m_unk3251", node->m_unk3251);
    devtools::property("m_cameraWidth", node->m_cameraWidth);
    devtools::property("m_cameraHeight", node->m_cameraHeight);
    devtools::property("m_cameraUnzoomedX", node->m_cameraUnzoomedX);
    devtools::property("m_halfCameraWidth", node->m_halfCameraWidth);
    devtools::property("m_activeObjectsCount", node->m_activeObjectsCount);
    devtools::property("m_activeObjectsIndex", node->m_activeObjectsIndex);
    devtools::property("m_lightBGColor", node->m_lightBGColor);
    devtools::property("m_resumeTimer", node->m_resumeTimer);
    devtools::property("m_recordInputs", node->m_recordInputs);
    devtools::property("m_unk32a1", node->m_unk32a1);
    devtools::property("m_unk32a2", node->m_unk32a2);
    devtools::property("m_unk32a3", node->m_unk32a3);
    devtools::property("m_unk32a4", node->m_unk32a4);
    devtools::property("m_recordString", node->m_recordString);
    devtools::property("m_unk32d0", node->m_unk32d0);
    devtools::property("m_unk32d4", node->m_unk32d4);
    devtools::property("m_queueInterval", node->m_queueInterval);
    devtools::property("m_coinsCollected", node->m_coinsCollected);
    devtools::property("m_replayRandSeed", node->m_replayRandSeed);
    devtools::property("m_unk32ec", node->m_unk32ec);
    devtools::property("m_currentStep", node->m_currentStep);
    devtools::property("m_queuedRecordedButtonsSize", node->m_queuedRecordedButtonsSize);
    devtools::property("m_portalIndicators", node->m_portalIndicators);
    devtools::property("m_orbIndicators", node->m_orbIndicators);
    devtools::property("m_unk3380", node->m_unk3380);
    devtools::property("m_hideGround", node->m_hideGround);
    devtools::property("m_keepGroupParents", node->m_keepGroupParents);
    devtools::property("m_keyframeGroup", node->m_keyframeGroup);
    devtools::property("m_timePlayed", node->m_timePlayed);
    devtools::property("m_levelEndAnimationStarted", node->m_levelEndAnimationStarted);
    devtools::property("m_points", node->m_points);
    devtools::property("m_pointsString", node->m_pointsString);
    devtools::property("m_calcNonEffectObjectsSize", node->m_calcNonEffectObjectsSize);
    devtools::property("m_calcCollisionBlockObjectsSize", node->m_calcCollisionBlockObjectsSize);
    devtools::property("m_calcCollisionBlockObjects2Size", node->m_calcCollisionBlockObjects2Size);
    devtools::property("m_sectionXFactor", node->m_sectionXFactor);
    devtools::property("m_sectionYFactor", node->m_sectionYFactor);
    devtools::property("m_maxGameplayY", node->m_maxGameplayY);
    devtools::property("m_songTriggerInterval", node->m_songTriggerInterval);
    devtools::property("m_showAudioVisualizer", node->m_showAudioVisualizer);
    devtools::property("m_areaMovedCount", node->m_areaMovedCount);
    devtools::property("m_areaScaledCount", node->m_areaScaledCount);
    devtools::property("m_areaRotatedCount", node->m_areaRotatedCount);
    devtools::property("m_areaColorCount", node->m_areaColorCount);
    devtools::property("m_areaMovedCountTotal", node->m_areaMovedCountTotal);
    devtools::property("m_areaScaledCountTotal", node->m_areaScaledCountTotal);
    devtools::property("m_areaRotatedCountTotal", node->m_areaRotatedCountTotal);
    devtools::property("m_areaColorCountTotal", node->m_areaColorCountTotal);
    devtools::property("m_movedCount", node->m_movedCount);
    devtools::property("m_scaledCount", node->m_scaledCount);
    devtools::property("m_rotatedCount", node->m_rotatedCount);
    devtools::property("m_followedCount", node->m_followedCount);
    devtools::property("m_areaMovedCountDisplay", node->m_areaMovedCountDisplay);
    devtools::property("m_areaScaledCountDisplay", node->m_areaScaledCountDisplay);
    devtools::property("m_areaRotatedCountDisplay", node->m_areaRotatedCountDisplay);
    devtools::property("m_areaColorCountDisplay", node->m_areaColorCountDisplay);
    devtools::property("m_areaMovedCountTotalDisplay", node->m_areaMovedCountTotalDisplay);
    devtools::property("m_areaScaledCountTotalDisplay", node->m_areaScaledCountTotalDisplay);
    devtools::property("m_areaRotatedCountTotalDisplay", node->m_areaRotatedCountTotalDisplay);
    devtools::property("m_areaColorCountTotalDisplay", node->m_areaColorCountTotalDisplay);
    devtools::property("m_movedCountDisplay", node->m_movedCountDisplay);
    devtools::property("m_scaledCountDisplay", node->m_scaledCountDisplay);
    devtools::property("m_rotatedCountDisplay", node->m_rotatedCountDisplay);
    devtools::property("m_followedCountDisplay", node->m_followedCountDisplay);
    devtools::property("m_loadingStartPosition", node->m_loadingStartPosition);
    devtools::property("m_processingAudioTriggers", node->m_processingAudioTriggers);
    devtools::property("m_audioPaused", node->m_audioPaused);
    devtools::property("m_startOptimization", node->m_startOptimization);
    devtools::property("m_isDebugDrawEnabled", node->m_isDebugDrawEnabled);
    devtools::property("m_disablePlayerHitbox", node->m_disablePlayerHitbox);
    devtools::label("GJGameState m_gameState");
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label("gd::vector<SFXTriggerGameObject*> m_activeSfxTriggers");
    devtools::label("gd::vector<void*> m_unk8a0");
    devtools::label(fmt::format("cocos2d::CCNode* m_hoverNode at {}", (void*)node->m_hoverNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_areaTransformNode at {}", (void*)node->m_areaTransformNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_areaSkewNode at {}", (void*)node->m_areaSkewNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_areaScaleNode at {}", (void*)node->m_areaScaleNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_areaRotateNode at {}", (void*)node->m_areaRotateNode).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_areaTransformNode2 at {}", (void*)node->m_areaTransformNode2).c_str());
    devtools::label(fmt::format("OBB2D* m_obb2 at {}", (void*)node->m_obb2).c_str());
    devtools::label("gd::vector<gd::unordered_map<int,int>> m_spawnRemapTriggers");
    devtools::label("gd::unordered_map<int, cocos2d::CCPoint> m_uiObjectPositions");
    devtools::label(fmt::format("GJEffectManager* m_effectManager at {}", (void*)node->m_effectManager).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT5 at {}", (void*)node->m_gameBlendingLayerT5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT5 at {}", (void*)node->m_fireBlendingLayerT5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT5 at {}", (void*)node->m_pixelBlendingLayerT5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT5 at {}", (void*)node->m_particleBlendingLayerT5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT5 at {}", (void*)node->m_game2BlendingLayerT5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerT4 at {}", (void*)node->m_gameLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT4 at {}", (void*)node->m_gameBlendingLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerT4 at {}", (void*)node->m_glowLayerT4).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerT4 at {}", (void*)node->m_specialLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerT4 at {}", (void*)node->m_textLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerT4 at {}", (void*)node->m_textBlendingLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerT4 at {}", (void*)node->m_fireLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT4 at {}", (void*)node->m_fireBlendingLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerT4 at {}", (void*)node->m_pixelLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT4 at {}", (void*)node->m_pixelBlendingLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerT4 at {}", (void*)node->m_particleLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT4 at {}", (void*)node->m_particleBlendingLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerT4 at {}", (void*)node->m_game2LayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT4 at {}", (void*)node->m_game2BlendingLayerT4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerT3 at {}", (void*)node->m_gameLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT3 at {}", (void*)node->m_gameBlendingLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerT3 at {}", (void*)node->m_glowLayerT3).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerT3 at {}", (void*)node->m_specialLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerT3 at {}", (void*)node->m_textLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerT3 at {}", (void*)node->m_textBlendingLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerT3 at {}", (void*)node->m_fireLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT3 at {}", (void*)node->m_fireBlendingLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerT3 at {}", (void*)node->m_pixelLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT3 at {}", (void*)node->m_pixelBlendingLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerT3 at {}", (void*)node->m_particleLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT3 at {}", (void*)node->m_particleBlendingLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerT3 at {}", (void*)node->m_game2LayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT3 at {}", (void*)node->m_game2BlendingLayerT3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerT2 at {}", (void*)node->m_gameLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT2 at {}", (void*)node->m_gameBlendingLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerT2 at {}", (void*)node->m_glowLayerT2).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerT2 at {}", (void*)node->m_specialLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerT2 at {}", (void*)node->m_textLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerT2 at {}", (void*)node->m_textBlendingLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerT2 at {}", (void*)node->m_fireLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT2 at {}", (void*)node->m_fireBlendingLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerT2 at {}", (void*)node->m_pixelLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT2 at {}", (void*)node->m_pixelBlendingLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerT2 at {}", (void*)node->m_particleLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT2 at {}", (void*)node->m_particleBlendingLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerT2 at {}", (void*)node->m_game2LayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT2 at {}", (void*)node->m_game2BlendingLayerT2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerT1 at {}", (void*)node->m_gameLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT1 at {}", (void*)node->m_gameBlendingLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerT1 at {}", (void*)node->m_glowLayerT1).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerT1 at {}", (void*)node->m_specialLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerT1 at {}", (void*)node->m_textLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerT1 at {}", (void*)node->m_textBlendingLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerT1 at {}", (void*)node->m_fireLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT1 at {}", (void*)node->m_fireBlendingLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerT1 at {}", (void*)node->m_pixelLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT1 at {}", (void*)node->m_pixelBlendingLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerT1 at {}", (void*)node->m_particleLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT1 at {}", (void*)node->m_particleBlendingLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerT1 at {}", (void*)node->m_game2LayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT1 at {}", (void*)node->m_game2BlendingLayerT1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerB0 at {}", (void*)node->m_game2LayerB0).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB0 at {}", (void*)node->m_gameBlendingLayerB0).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB0 at {}", (void*)node->m_fireBlendingLayerB0).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB0 at {}", (void*)node->m_pixelBlendingLayerB0).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB0 at {}", (void*)node->m_particleBlendingLayerB0).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB0 at {}", (void*)node->m_game2BlendingLayerB0).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerB1 at {}", (void*)node->m_gameLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB1 at {}", (void*)node->m_gameBlendingLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerB1 at {}", (void*)node->m_glowLayerB1).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerB1 at {}", (void*)node->m_specialLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerB1 at {}", (void*)node->m_textLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerB1 at {}", (void*)node->m_textBlendingLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerB1 at {}", (void*)node->m_fireLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB1 at {}", (void*)node->m_fireBlendingLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerB1 at {}", (void*)node->m_pixelLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB1 at {}", (void*)node->m_pixelBlendingLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerB1 at {}", (void*)node->m_particleLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB1 at {}", (void*)node->m_particleBlendingLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerB1 at {}", (void*)node->m_game2LayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB1 at {}", (void*)node->m_game2BlendingLayerB1).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerB2 at {}", (void*)node->m_gameLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB2 at {}", (void*)node->m_gameBlendingLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerB2 at {}", (void*)node->m_glowLayerB2).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerB2 at {}", (void*)node->m_specialLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerB2 at {}", (void*)node->m_textLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerB2 at {}", (void*)node->m_textBlendingLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerB2 at {}", (void*)node->m_fireLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB2 at {}", (void*)node->m_fireBlendingLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerB2 at {}", (void*)node->m_pixelLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB2 at {}", (void*)node->m_pixelBlendingLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerB2 at {}", (void*)node->m_particleLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB2 at {}", (void*)node->m_particleBlendingLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerB2 at {}", (void*)node->m_game2LayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB2 at {}", (void*)node->m_game2BlendingLayerB2).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerB3 at {}", (void*)node->m_gameLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB3 at {}", (void*)node->m_gameBlendingLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerB3 at {}", (void*)node->m_glowLayerB3).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerB3 at {}", (void*)node->m_specialLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerB3 at {}", (void*)node->m_textLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerB3 at {}", (void*)node->m_textBlendingLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerB3 at {}", (void*)node->m_fireLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB3 at {}", (void*)node->m_fireBlendingLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerB3 at {}", (void*)node->m_pixelLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB3 at {}", (void*)node->m_pixelBlendingLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerB3 at {}", (void*)node->m_particleLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB3 at {}", (void*)node->m_particleBlendingLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerB3 at {}", (void*)node->m_game2LayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB3 at {}", (void*)node->m_game2BlendingLayerB3).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerB4 at {}", (void*)node->m_gameLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB4 at {}", (void*)node->m_gameBlendingLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerB4 at {}", (void*)node->m_glowLayerB4).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerB4 at {}", (void*)node->m_specialLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerB4 at {}", (void*)node->m_textLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerB4 at {}", (void*)node->m_textBlendingLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerB4 at {}", (void*)node->m_fireLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB4 at {}", (void*)node->m_fireBlendingLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerB4 at {}", (void*)node->m_pixelLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB4 at {}", (void*)node->m_pixelBlendingLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerB4 at {}", (void*)node->m_particleLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB4 at {}", (void*)node->m_particleBlendingLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerB4 at {}", (void*)node->m_game2LayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB4 at {}", (void*)node->m_game2BlendingLayerB4).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameLayerB5 at {}", (void*)node->m_gameLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB5 at {}", (void*)node->m_gameBlendingLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_glowLayerB5 at {}", (void*)node->m_glowLayerB5).c_str());
    devtools::label(fmt::format("CCNodeContainer* m_specialLayerB5 at {}", (void*)node->m_specialLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textLayerB5 at {}", (void*)node->m_textLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_textBlendingLayerB5 at {}", (void*)node->m_textBlendingLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireLayerB5 at {}", (void*)node->m_fireLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB5 at {}", (void*)node->m_fireBlendingLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelLayerB5 at {}", (void*)node->m_pixelLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB5 at {}", (void*)node->m_pixelBlendingLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleLayerB5 at {}", (void*)node->m_particleLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB5 at {}", (void*)node->m_particleBlendingLayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2LayerB5 at {}", (void*)node->m_game2LayerB5).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB5 at {}", (void*)node->m_game2BlendingLayerB5).c_str());
    devtools::label(fmt::format("PlayerObject* m_player1 at {}", (void*)node->m_player1).c_str());
    devtools::label(fmt::format("PlayerObject* m_player2 at {}", (void*)node->m_player2).c_str());
    devtools::label(fmt::format("LevelSettingsObject* m_levelSettings at {}", (void*)node->m_levelSettings).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_objects at {}", (void*)node->m_objects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_collisionBlocks at {}", (void*)node->m_collisionBlocks).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_spawnObjectsArray at {}", (void*)node->m_spawnObjectsArray).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_spawnObjects at {}", (void*)node->m_spawnObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_unkdd0 at {}", (void*)node->m_unkdd0).c_str());
    devtools::label("gd::vector<GameObject*> m_unkdd8");
    devtools::label("gd::vector<GameObject*> m_disabledObjects");
    devtools::label("gd::vector<GameObject*> m_unke08");
    devtools::label("gd::vector<GameObject*> m_areaObjects");
    devtools::label("gd::vector<GameObject*> m_processedAreaObjects");
    devtools::label("gd::unordered_map<int, gd::vector<GameObject*>> m_visibilityGroups");
    devtools::label("gd::vector<GameObject*> m_visibleObjects");
    devtools::label("gd::vector<GameObject*> m_visibleObjects2");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_groupDict at {}", (void*)node->m_groupDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_staticGroupDict at {}", (void*)node->m_staticGroupDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_optimizedGroupDict at {}", (void*)node->m_optimizedGroupDict).c_str());
    devtools::label("gd::vector<cocos2d::CCArray*> m_groups");
    devtools::label("gd::vector<cocos2d::CCArray*> m_staticGroups");
    devtools::label("gd::vector<cocos2d::CCArray*> m_optimizedGroups");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_parentGroupsDict at {}", (void*)node->m_parentGroupsDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_parentGroupIDs at {}", (void*)node->m_parentGroupIDs).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_removedParentGroupIDs at {}", (void*)node->m_removedParentGroupIDs).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_targetGroupsArray at {}", (void*)node->m_targetGroupsArray).c_str());
    devtools::label("gd::unordered_map<int, std::pair<int, int>> m_targetGroups");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_linkedGroupDict at {}", (void*)node->m_linkedGroupDict).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_objectParent at {}", (void*)node->m_objectParent).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_inShaderParent at {}", (void*)node->m_inShaderParent).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_aboveShaderParent at {}", (void*)node->m_aboveShaderParent).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_objectLayer at {}", (void*)node->m_objectLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_inShaderObjectLayer at {}", (void*)node->m_inShaderObjectLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_aboveShaderObjectLayer at {}", (void*)node->m_aboveShaderObjectLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_background at {}", (void*)node->m_background).c_str());
    devtools::label(fmt::format("void* m_unk1000 at {}", (void*)node->m_unk1000).c_str());
    devtools::label(fmt::format("GJGroundLayer* m_groundLayer at {}", (void*)node->m_groundLayer).c_str());
    devtools::label(fmt::format("GJGroundLayer* m_groundLayer2 at {}", (void*)node->m_groundLayer2).c_str());
    devtools::label(fmt::format("GJMGLayer* m_middleground at {}", (void*)node->m_middleground).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_batchNodes at {}", (void*)node->m_batchNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_objectsToDeactivate at {}", (void*)node->m_objectsToDeactivate).c_str());
    devtools::label("gd::unordered_map<int, gd::vector<LabelGameObject*>> m_labelObjects");
    devtools::label("gd::unordered_map<int, gd::vector<LabelGameObject*>> m_timeLabelObjects");
    devtools::label("gd::set<std::tuple<int, int, int>> m_spawnTuples");
    devtools::label("std::array<float, 2000> m_varianceValues");
    devtools::label("gd::map<std::pair<int, int>, std::pair<float, float>> m_destroyObjectValues");
    devtools::label("gd::vector<float> m_enterEasingValues");
    devtools::label("gd::unordered_map<int, int> m_enterEasingIndices");
    devtools::label(fmt::format("GameObject* m_player1CollisionBlock at {}", (void*)node->m_player1CollisionBlock).c_str());
    devtools::label(fmt::format("GameObject* m_player2CollisionBlock at {}", (void*)node->m_player2CollisionBlock).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_particlesDict at {}", (void*)node->m_particlesDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_customParticles at {}", (void*)node->m_customParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unclaimedParticles at {}", (void*)node->m_unclaimedParticles).c_str());
    devtools::label("gd::unordered_map<int, gd::string> m_particleCountToParticleString");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_claimedParticles at {}", (void*)node->m_claimedParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_temporaryParticles at {}", (void*)node->m_temporaryParticles).c_str());
    devtools::label("gd::unordered_set<int> m_customParticlesUIDs");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_gradientLayers at {}", (void*)node->m_gradientLayers).c_str());
    devtools::label(fmt::format("ShaderLayer* m_shaderLayer at {}", (void*)node->m_shaderLayer).c_str());
    devtools::label(fmt::format("StartPosObject* m_startPosObject at {}", (void*)node->m_startPosObject).c_str());
    devtools::label("gd::vector<GameObject*> m_solidCollisionObjects");
    devtools::label("gd::vector<GameObject*> m_hazardCollisionObjects");
    devtools::label("gd::vector<SequenceTriggerGameObject*> m_sequenceTriggers");
    devtools::label(fmt::format("cocos2d::CCNode* m_flashNode at {}", (void*)node->m_flashNode).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_collectedItems at {}", (void*)node->m_collectedItems).c_str());
    devtools::label(fmt::format("EndPortalObject* m_endPortal at {}", (void*)node->m_endPortal).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_glitterParticles at {}", (void*)node->m_glitterParticles).c_str());
    devtools::label(fmt::format("AudioEffectsLayer* m_audioEffectsLayer at {}", (void*)node->m_audioEffectsLayer).c_str());
    devtools::label(fmt::format("OBB2D* m_cameraObb2 at {}", (void*)node->m_cameraObb2).c_str());
    devtools::label("gd::vector<GameObject*> m_activeObjects");
    devtools::label(fmt::format("cocos2d::CCObject* m_unk32c8 at {}", (void*)node->m_unk32c8).c_str());
    devtools::label("gd::vector<PlayerButtonCommand> m_queuedButtons");
    devtools::label("gd::vector<PlayerButtonCommand> m_queuedRecordedButtons");
    devtools::label("gd::vector<PlayerButtonCommand> m_queuedReplayButtons");
    devtools::label("gd::vector<void*> m_unk3340");
    devtools::label("gd::vector<void*> m_unk3358");
    devtools::label(fmt::format("cocos2d::CCArray* m_indicatorSprites at {}", (void*)node->m_indicatorSprites).c_str());
    devtools::label("gd::vector<int> m_unk3388");
    devtools::label("gd::vector<int> m_unk33a0");
    devtools::label(fmt::format("cocos2d::CCArray* m_unk33c0 at {}", (void*)node->m_unk33c0).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_objectsToMove at {}", (void*)node->m_objectsToMove).c_str());
    devtools::label("gd::unordered_map<int, GameObject*> m_savePositionObjects");
    devtools::label("gd::unordered_map<int, int> m_savePositionValues");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_keyframeGroups at {}", (void*)node->m_keyframeGroups).c_str());
    devtools::label(fmt::format("UILayer* m_uiLayer at {}", (void*)node->m_uiLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_uiObjects at {}", (void*)node->m_uiObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_uiObjectLayers at {}", (void*)node->m_uiObjectLayers).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_uiTriggerUI at {}", (void*)node->m_uiTriggerUI).c_str());
    devtools::label("gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_sections");
    devtools::label("gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_nonEffectObjects");
    devtools::label("gd::vector<gd::vector<GameObject*>*> m_collisionBlockSections");
    devtools::label("gd::vector<GameObject*> m_calcNonEffectObjects");
    devtools::label("gd::vector<GameObject*> m_calcCollisionBlockObjects");
    devtools::label("gd::vector<GameObject*> m_calcCollisionBlockObjects2");
    devtools::label("gd::vector<gd::vector<int>*> m_sectionSizes");
    devtools::label("gd::vector<gd::vector<int>*> m_nonEffectObjectsSizes");
    devtools::label("gd::vector<gd::vector<int>*> m_collisionBlockSectionSizes");
    devtools::label("gd::vector<gd::vector<bool>*> m_nonEffectObjectsFlags");
    devtools::label("gd::unordered_map<int, int> m_stickyGroups");
    devtools::label(fmt::format("FMODLevelVisualizer* m_audioVisualizerBG at {}", (void*)node->m_audioVisualizerBG).c_str());
    devtools::label(fmt::format("FMODLevelVisualizer* m_audioVisualizerSFX at {}", (void*)node->m_audioVisualizerSFX).c_str());
    devtools::label(fmt::format("GJGameLoadingLayer* m_loadingLayer at {}", (void*)node->m_loadingLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCDrawNode* m_debugDrawNode at {}", (void*)node->m_debugDrawNode).c_str());
    devtools::label(fmt::format("std::array<cocos2d::CCPoint, 400>* m_debugDrawPoints at {}", (void*)node->m_debugDrawPoints).c_str());
    devtools::label(fmt::format("GameObject* m_anticheatSpike at {}", (void*)node->m_anticheatSpike).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJBigSprite>) {
devtools::registerNode<GJBigSprite>([](GJBigSprite* node) {
    devtools::label("Members for GJBigSprite:");
    devtools::property("m_scaleX", node->m_scaleX);
    devtools::property("m_scaleY", node->m_scaleY);
    devtools::property("m_loadSprites", node->m_loadSprites);
    devtools::property("m_unloadingAll", node->m_unloadingAll);
    devtools::label("gd::vector<bool> m_spritesLoaded");
    devtools::label(fmt::format("cocos2d::CCArray* m_spriteNodes at {}", (void*)node->m_spriteNodes).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJBigSpriteNode>) {
devtools::registerNode<GJBigSpriteNode>([](GJBigSpriteNode* node) {
    devtools::label("Members for GJBigSpriteNode:");
    devtools::property("m_spriteName", node->m_spriteName);
    devtools::property("m_spriteRect", node->m_spriteRect);
    devtools::property("m_spriteVisible", node->m_spriteVisible);
    devtools::label(fmt::format("cocos2d::CCSprite* m_sprite at {}", (void*)node->m_sprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJChestSprite>) {
devtools::registerNode<GJChestSprite>([](GJChestSprite* node) {
    devtools::label("Members for GJChestSprite:");
    devtools::property("m_chestType", node->m_chestType);
    devtools::enumerable("m_spriteState", node->m_spriteState, {
        { ChestSpriteState::Locked, "ChestSpriteState::Locked" },
        { ChestSpriteState::Closed, "ChestSpriteState::Closed" },
        { ChestSpriteState::Opening, "ChestSpriteState::Opening" },
        { ChestSpriteState::Opened, "ChestSpriteState::Opened" },
    });
    devtools::property("m_dark", node->m_dark);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJColorSetupLayer>) {
devtools::registerNode<GJColorSetupLayer>([](GJColorSetupLayer* node) {
    devtools::label("Members for GJColorSetupLayer:");
    devtools::property("m_page", node->m_page);
    devtools::property("m_colorsPerPage", node->m_colorsPerPage);
    devtools::property("m_totalPages", node->m_totalPages);
    devtools::property("m_closeOnSelect", node->m_closeOnSelect);
    devtools::property("m_colorID", node->m_colorID);
    devtools::label(fmt::format("LevelSettingsObject* m_settingsObject at {}", (void*)node->m_settingsObject).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unk290 at {}", (void*)node->m_unk290).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unk298 at {}", (void*)node->m_unk298).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_colorLabels at {}", (void*)node->m_colorLabels).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_colorSprites at {}", (void*)node->m_colorSprites).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("ColorSetupDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJComment>) {
devtools::registerNode<GJComment>([](GJComment* node) {
    devtools::label("Members for GJComment:");
    devtools::property("m_commentString", node->m_commentString);
    devtools::property("m_userName", node->m_userName);
    devtools::property("m_commentID", node->m_commentID);
    devtools::property("m_userID", node->m_userID);
    devtools::property("m_likeCount", node->m_likeCount);
    devtools::property("m_levelID", node->m_levelID);
    devtools::property("m_isSpam", node->m_isSpam);
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_uploadDate", node->m_uploadDate);
    devtools::property("m_commentDeleted", node->m_commentDeleted);
    devtools::property("m_percentage", node->m_percentage);
    devtools::property("m_modBadge", node->m_modBadge);
    devtools::property("m_color", node->m_color);
    devtools::property("m_hasLevelID", node->m_hasLevelID);
    devtools::property("m_unkMultiplayerBool", node->m_unkMultiplayerBool);
    devtools::label(fmt::format("GJUserScore* m_userScore at {}", (void*)node->m_userScore).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJCommentListLayer>) {
devtools::registerNode<GJCommentListLayer>([](GJCommentListLayer* node) {
    devtools::label("Members for GJCommentListLayer:");
    devtools::label(fmt::format("BoomListView* m_list at {}", (void*)node->m_list).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJDifficultySprite>) {
devtools::registerNode<GJDifficultySprite>([](GJDifficultySprite* node) {
    devtools::label("Members for GJDifficultySprite:");
    devtools::enumerable("m_featureState", node->m_featureState, {
        { GJFeatureState::None, "GJFeatureState::None" },
        { GJFeatureState::Featured, "GJFeatureState::Featured" },
        { GJFeatureState::Epic, "GJFeatureState::Epic" },
        { GJFeatureState::Legendary, "GJFeatureState::Legendary" },
        { GJFeatureState::Mythic, "GJFeatureState::Mythic" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJEffectManager>) {
devtools::registerNode<GJEffectManager>([](GJEffectManager* node) {
    devtools::label("Members for GJEffectManager:");
    devtools::property("m_unk780", node->m_unk780);
    devtools::property("m_unk784", node->m_unk784);
    devtools::property("m_unk788", node->m_unk788);
    devtools::property("m_unk78C", node->m_unk78C);
    devtools::property("m_unk790", node->m_unk790);
    devtools::property("m_unk794", node->m_unk794);
    devtools::property("m_unk798", node->m_unk798);
    devtools::label(fmt::format("TriggerEffectDelegate* m_triggerEffectDelegate at {}", (void*)node->m_triggerEffectDelegate).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unkObject148 at {}", (void*)node->m_unkObject148).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unkDict150 at {}", (void*)node->m_unkDict150).c_str());
    devtools::label("gd::vector<PulseEffectAction> m_pulseEffectVector");
    devtools::label("gd::unordered_map<int, gd::vector<PulseEffectAction>> m_pulseEffectMap");
    devtools::label("gd::unordered_map<int, OpacityEffectAction> m_opacityEffectMap");
    devtools::label("gd::vector<TouchToggleAction> m_unkVector1e0");
    devtools::label("gd::unordered_map<int, gd::vector<CountTriggerAction>> m_countTriggerActions");
    devtools::label("gd::vector<CollisionTriggerAction> m_unkVector230");
    devtools::label("gd::vector<ToggleTriggerAction> m_unkVector248");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_colorActionDict at {}", (void*)node->m_colorActionDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unkDict268 at {}", (void*)node->m_unkDict268).c_str());
    devtools::label("gd::vector<InheritanceNode*> m_unkVector270");
    devtools::label("gd::unordered_map<int, bool> m_unkMap288");
    devtools::label("gd::vector<ColorAction*> m_colorActionVector");
    devtools::label("gd::vector<ColorActionSprite*> m_colorActionSpriteVector");
    devtools::label("gd::vector<bool> m_unkVector2f0");
    devtools::label("gd::unordered_map<int, int> m_itemCountMap");
    devtools::label("gd::unordered_map<int, int> m_persistentItemCountMap");
    devtools::label("gd::unordered_set<int> m_persistentTimerItemSet");
    devtools::label("gd::unordered_map<int, TimerItem> m_timerItemMap");
    devtools::label("gd::unordered_map<int, gd::vector<TimerTriggerAction>> m_unkMap3f8");
    devtools::label(fmt::format("cocos2d::CCArray* m_unkArray430 at {}", (void*)node->m_unkArray430).c_str());
    devtools::label("gd::vector<bool> m_unkVector438");
    devtools::label("gd::unordered_set<int> m_unkMap460");
    devtools::label("gd::set<std::pair<int, int>> m_unkMap498");
    devtools::label("gd::unordered_set<int> m_unkMap4c8");
    devtools::label("gd::vector<SpawnTriggerAction> m_spawnTriggerActions");
    devtools::label("gd::vector<GroupCommandObject2*> m_unkVector518");
    devtools::label("gd::vector<GroupCommandObject2*> m_unkVector530");
    devtools::label("gd::vector<cocos2d::CCObject*> m_unkVector548");
    devtools::label("gd::vector<GroupCommandObject2> m_unkVector560");
    devtools::label("gd::unordered_map<int, std::pair<double, double>> m_unkMap578");
    devtools::label("gd::vector<GroupCommandObject2*> m_unkVector5b0");
    devtools::label("gd::unordered_map<int, gd::vector<GroupCommandObject2*>> m_unkMap5c8");
    devtools::label("gd::vector<GroupCommandObject2*> m_unkVector600");
    devtools::label("gd::unordered_map<int, CCMoveCNode*> m_unkMap618");
    devtools::label("gd::unordered_map<int, CCMoveCNode*> m_unkMap650");
    devtools::label("gd::unordered_map<int, CCMoveCNode*> m_unkMap688");
    devtools::label("gd::vector<CCMoveCNode*> m_unkVector6c0");
    devtools::label("gd::vector<CCMoveCNode*> m_unkVector6d8");
    devtools::label("gd::vector<CCMoveCNode*> m_unkVector6f0");
    devtools::label("gd::vector<DynamicMoveCalculation> m_unkVector708");
    devtools::label("gd::map<std::pair<int, int>, gd::vector<GroupCommandObject2*>> m_unkMap770");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJGroundLayer>) {
devtools::registerNode<GJGroundLayer>([](GJGroundLayer* node) {
    devtools::label("Members for GJGroundLayer:");
    devtools::property("m_textureWidth", node->m_textureWidth);
    devtools::property("m_showGround", node->m_showGround);
    devtools::property("m_blendLine", node->m_blendLine);
    devtools::property("m_ground1Offset", node->m_ground1Offset);
    devtools::property("m_lineType", node->m_lineType);
    devtools::property("m_groundWidth", node->m_groundWidth);
    devtools::property("m_showGround1", node->m_showGround1);
    devtools::property("m_showGround2", node->m_showGround2);
    devtools::property("m_unk1cc", node->m_unk1cc);
    devtools::property("m_cameraRotated", node->m_cameraRotated);
    devtools::label(fmt::format("cocos2d::CCSprite* m_ground1Sprite at {}", (void*)node->m_ground1Sprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_ground2Sprite at {}", (void*)node->m_ground2Sprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_lineSprite at {}", (void*)node->m_lineSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJFollowCommandLayer>) {
devtools::registerNode<GJFollowCommandLayer>([](GJFollowCommandLayer* node) {
    devtools::label("Members for GJFollowCommandLayer:");
    devtools::property("m_moveTime", node->m_moveTime);
    devtools::property("m_xMod", node->m_xMod);
    devtools::property("m_yMod", node->m_yMod);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_followGroupID", node->m_followGroupID);
    devtools::label(fmt::format("CCTextInputNode* m_moveTimeInput at {}", (void*)node->m_moveTimeInput).c_str());
    devtools::label(fmt::format("Slider* m_moveTimeSlider at {}", (void*)node->m_moveTimeSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_xModInput at {}", (void*)node->m_xModInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_yModInput at {}", (void*)node->m_yModInput).c_str());
    devtools::label(fmt::format("Slider* m_xModSlider at {}", (void*)node->m_xModSlider).c_str());
    devtools::label(fmt::format("Slider* m_yModSlider at {}", (void*)node->m_yModSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_followIDInput at {}", (void*)node->m_followIDInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJFriendRequest>) {
devtools::registerNode<GJFriendRequest>([](GJFriendRequest* node) {
    devtools::label("Members for GJFriendRequest:");
    devtools::property("m_requestID", node->m_requestID);
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_unusedToAccountID", node->m_unusedToAccountID);
    devtools::property("m_message", node->m_message);
    devtools::property("m_uploadDate", node->m_uploadDate);
    devtools::property("m_isRead", node->m_isRead);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJGameLevel>) {
devtools::registerNode<GJGameLevel>([](GJGameLevel* node) {
    devtools::label("Members for GJGameLevel:");
    devtools::property("m_levelName", node->m_levelName);
    devtools::property("m_levelDesc", node->m_levelDesc);
    devtools::property("m_levelString", node->m_levelString);
    devtools::property("m_creatorName", node->m_creatorName);
    devtools::property("m_recordString", node->m_recordString);
    devtools::property("m_uploadDate", node->m_uploadDate);
    devtools::property("m_updateDate", node->m_updateDate);
    devtools::property("m_lockedEditorLayers", node->m_lockedEditorLayers);
    devtools::property("m_savedCameraPositions", node->m_savedCameraPositions);
    devtools::property("m_previewLock", node->m_previewLock);
    devtools::enumerable("m_difficulty", node->m_difficulty, {
        { GJDifficulty::NA, "GJDifficulty::NA" },
        { GJDifficulty::Auto, "GJDifficulty::Auto" },
        { GJDifficulty::Easy, "GJDifficulty::Easy" },
        { GJDifficulty::Normal, "GJDifficulty::Normal" },
        { GJDifficulty::Hard, "GJDifficulty::Hard" },
        { GJDifficulty::Harder, "GJDifficulty::Harder" },
        { GJDifficulty::Insane, "GJDifficulty::Insane" },
        { GJDifficulty::Demon, "GJDifficulty::Demon" },
        { GJDifficulty::DemonEasy, "GJDifficulty::DemonEasy" },
        { GJDifficulty::DemonMedium, "GJDifficulty::DemonMedium" },
        { GJDifficulty::DemonInsane, "GJDifficulty::DemonInsane" },
        { GJDifficulty::DemonExtreme, "GJDifficulty::DemonExtreme" },
    });
    devtools::property("m_audioTrack", node->m_audioTrack);
    devtools::property("m_songID", node->m_songID);
    devtools::property("m_levelRev", node->m_levelRev);
    devtools::property("m_unlisted", node->m_unlisted);
    devtools::property("m_friendsOnly", node->m_friendsOnly);
    devtools::property("m_levelIndex", node->m_levelIndex);
    devtools::property("m_ratings", node->m_ratings);
    devtools::property("m_ratingsSum", node->m_ratingsSum);
    devtools::property("m_downloads", node->m_downloads);
    devtools::property("m_isEditable", node->m_isEditable);
    devtools::property("m_gauntletLevel", node->m_gauntletLevel);
    devtools::property("m_gauntletLevel2", node->m_gauntletLevel2);
    devtools::property("m_workingTime", node->m_workingTime);
    devtools::property("m_workingTime2", node->m_workingTime2);
    devtools::property("m_lowDetailMode", node->m_lowDetailMode);
    devtools::property("m_lowDetailModeToggled", node->m_lowDetailModeToggled);
    devtools::property("m_disableShakeToggled", node->m_disableShakeToggled);
    devtools::property("m_selected", node->m_selected);
    devtools::property("m_localOrSaved", node->m_localOrSaved);
    devtools::property("m_disableShake", node->m_disableShake);
    devtools::property("m_isVerifiedRaw", node->m_isVerifiedRaw);
    devtools::property("m_isUploaded", node->m_isUploaded);
    devtools::property("m_hasBeenModified", node->m_hasBeenModified);
    devtools::property("m_levelVersion", node->m_levelVersion);
    devtools::property("m_gameVersion", node->m_gameVersion);
    devtools::property("m_chk", node->m_chk);
    devtools::property("m_isChkValid", node->m_isChkValid);
    devtools::property("m_isCompletionLegitimate", node->m_isCompletionLegitimate);
    devtools::property("m_practicePercent", node->m_practicePercent);
    devtools::property("m_likes", node->m_likes);
    devtools::property("m_dislikes", node->m_dislikes);
    devtools::property("m_levelLength", node->m_levelLength);
    devtools::property("m_featured", node->m_featured);
    devtools::property("m_isEpic", node->m_isEpic);
    devtools::property("m_levelFavorited", node->m_levelFavorited);
    devtools::property("m_levelFolder", node->m_levelFolder);
    devtools::property("m_demonDifficulty", node->m_demonDifficulty);
    devtools::property("m_autoLevel", node->m_autoLevel);
    devtools::property("m_coins", node->m_coins);
    devtools::property("m_twoPlayerMode", node->m_twoPlayerMode);
    devtools::property("m_failedPasswordAttempts", node->m_failedPasswordAttempts);
    devtools::property("m_starsRequested", node->m_starsRequested);
    devtools::property("m_showedSongWarning", node->m_showedSongWarning);
    devtools::property("m_starRatings", node->m_starRatings);
    devtools::property("m_starRatingsSum", node->m_starRatingsSum);
    devtools::property("m_maxStarRatings", node->m_maxStarRatings);
    devtools::property("m_minStarRatings", node->m_minStarRatings);
    devtools::property("m_demonVotes", node->m_demonVotes);
    devtools::property("m_rateStars", node->m_rateStars);
    devtools::property("m_rateFeature", node->m_rateFeature);
    devtools::property("m_rateUser", node->m_rateUser);
    devtools::property("m_dontSave", node->m_dontSave);
    devtools::property("m_levelNotDownloaded", node->m_levelNotDownloaded);
    devtools::property("m_requiredCoins", node->m_requiredCoins);
    devtools::property("m_isUnlocked", node->m_isUnlocked);
    devtools::property("m_lastCameraPos", node->m_lastCameraPos);
    devtools::property("m_lastEditorZoom", node->m_lastEditorZoom);
    devtools::property("m_lastBuildTab", node->m_lastBuildTab);
    devtools::property("m_lastBuildPage", node->m_lastBuildPage);
    devtools::property("m_lastBuildGroupID", node->m_lastBuildGroupID);
    devtools::enumerable("m_levelType", node->m_levelType, {
        { GJLevelType::Default, "GJLevelType::Default" },
        { GJLevelType::Main, "GJLevelType::Main" },
        { GJLevelType::Editor, "GJLevelType::Editor" },
        { GJLevelType::Saved, "GJLevelType::Saved" },
        { GJLevelType::SearchResult, "GJLevelType::SearchResult" },
    });
    devtools::property("m_M_ID", node->m_M_ID);
    devtools::property("m_tempName", node->m_tempName);
    devtools::property("m_capacityString", node->m_capacityString);
    devtools::property("m_highObjectsEnabled", node->m_highObjectsEnabled);
    devtools::property("m_unlimitedObjectsEnabled", node->m_unlimitedObjectsEnabled);
    devtools::property("m_personalBests", node->m_personalBests);
    devtools::property("m_timestamp", node->m_timestamp);
    devtools::property("m_listPosition", node->m_listPosition);
    devtools::property("m_songIDs", node->m_songIDs);
    devtools::property("m_sfxIDs", node->m_sfxIDs);
    devtools::property("m_54", node->m_54);
    devtools::property("m_bestTime", node->m_bestTime);
    devtools::property("m_bestPoints", node->m_bestPoints);
    devtools::property("m_platformerSeed", node->m_platformerSeed);
    devtools::property("m_localBestTimes", node->m_localBestTimes);
    devtools::property("m_localBestPoints", node->m_localBestPoints);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_lastBuildSave at {}", (void*)node->m_lastBuildSave).c_str());
    devtools::label("geode::SeedValueRSV m_levelID");
    devtools::label("geode::SeedValueRSV m_userID");
    devtools::label("geode::SeedValueRSV m_accountID");
    devtools::label("geode::SeedValueRSV m_objectCount");
    devtools::label("geode::SeedValueRS m_isVerified");
    devtools::label("geode::SeedValueRSV m_attempts");
    devtools::label("geode::SeedValueRSV m_jumps");
    devtools::label("geode::SeedValueRSV m_clicks");
    devtools::label("geode::SeedValueRSV m_attemptTime");
    devtools::label("geode::SeedValueVSR m_normalPercent");
    devtools::label("geode::SeedValueRSV m_orbCompletion");
    devtools::label("geode::SeedValueRSV m_newNormalPercent2");
    devtools::label("geode::SeedValueRSV m_dailyID");
    devtools::label("geode::SeedValueRSV m_demon");
    devtools::label("geode::SeedValueRSV m_stars");
    devtools::label("geode::SeedValueRSV m_coinsVerified");
    devtools::label("geode::SeedValueRS m_password");
    devtools::label("geode::SeedValueRSV m_originalLevel");
    devtools::label("geode::SeedValueRSV m_firstCoinVerified");
    devtools::label("geode::SeedValueRSV m_secondCoinVerified");
    devtools::label("geode::SeedValueRSV m_thirdCoinVerified");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJGameLoadingLayer>) {
devtools::registerNode<GJGameLoadingLayer>([](GJGameLoadingLayer* node) {
    devtools::label("Members for GJGameLoadingLayer:");
    devtools::property("m_editor", node->m_editor);
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJGarageLayer>) {
devtools::registerNode<GJGarageLayer>([](GJGarageLayer* node) {
    devtools::label("Members for GJGarageLayer:");
    devtools::property("m_hasClosed", node->m_hasClosed);
    devtools::enumerable("m_iconType", node->m_iconType, {
        { IconType::Cube, "IconType::Cube" },
        { IconType::Ship, "IconType::Ship" },
        { IconType::Ball, "IconType::Ball" },
        { IconType::Ufo, "IconType::Ufo" },
        { IconType::Wave, "IconType::Wave" },
        { IconType::Robot, "IconType::Robot" },
        { IconType::Spider, "IconType::Spider" },
        { IconType::Swing, "IconType::Swing" },
        { IconType::Jetpack, "IconType::Jetpack" },
        { IconType::DeathEffect, "IconType::DeathEffect" },
        { IconType::Special, "IconType::Special" },
        { IconType::Item, "IconType::Item" },
        { IconType::ShipFire, "IconType::ShipFire" },
    });
    devtools::property("m_iconID", node->m_iconID);
    devtools::enumerable("m_selectedIconType", node->m_selectedIconType, {
        { IconType::Cube, "IconType::Cube" },
        { IconType::Ship, "IconType::Ship" },
        { IconType::Ball, "IconType::Ball" },
        { IconType::Ufo, "IconType::Ufo" },
        { IconType::Wave, "IconType::Wave" },
        { IconType::Robot, "IconType::Robot" },
        { IconType::Spider, "IconType::Spider" },
        { IconType::Swing, "IconType::Swing" },
        { IconType::Jetpack, "IconType::Jetpack" },
        { IconType::DeathEffect, "IconType::DeathEffect" },
        { IconType::Special, "IconType::Special" },
        { IconType::Item, "IconType::Item" },
        { IconType::ShipFire, "IconType::ShipFire" },
    });
    devtools::property("m_videoPlaying", node->m_videoPlaying);
    devtools::label(fmt::format("CCTextInputNode* m_usernameInput at {}", (void*)node->m_usernameInput).c_str());
    devtools::label(fmt::format("SimplePlayer* m_playerObject at {}", (void*)node->m_playerObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_tabButtons at {}", (void*)node->m_tabButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pageButtons at {}", (void*)node->m_pageButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_unknown at {}", (void*)node->m_unknown).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_supporter at {}", (void*)node->m_supporter).c_str());
    devtools::label("gd::map<IconType, int> m_iconPages");
    devtools::label(fmt::format("cocos2d::CCSprite* m_cursor1 at {}", (void*)node->m_cursor1).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_cursor2 at {}", (void*)node->m_cursor2).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_currentIcon at {}", (void*)node->m_currentIcon).c_str());
    devtools::label(fmt::format("ListButtonBar* m_iconSelection at {}", (void*)node->m_iconSelection).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftArrow at {}", (void*)node->m_leftArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightArrow at {}", (void*)node->m_rightArrow).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_navDotMenu at {}", (void*)node->m_navDotMenu).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJGradientLayer>) {
devtools::registerNode<GJGradientLayer>([](GJGradientLayer* node) {
    devtools::label("Members for GJGradientLayer:");
    devtools::property("m_baseColor", node->m_baseColor);
    devtools::property("m_detailColor", node->m_detailColor);
    devtools::property("m_gradientPosition", node->m_gradientPosition);
    devtools::property("m_noScale", node->m_noScale);
    devtools::property("m_blendingMode", node->m_blendingMode);
    devtools::property("m_blendingLayer", node->m_blendingLayer);
    devtools::property("m_gradientID", node->m_gradientID);
    devtools::label(fmt::format("GradientTriggerObject* m_triggerObject at {}", (void*)node->m_triggerObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJHttpResult>) {
devtools::registerNode<GJHttpResult>([](GJHttpResult* node) {
    devtools::label("Members for GJHttpResult:");
    devtools::property("m_success", node->m_success);
    devtools::property("m_response", node->m_response);
    devtools::property("m_requestTag", node->m_requestTag);
    devtools::enumerable("m_httpType", node->m_httpType, {
        { GJHttpType::UploadLevel, "GJHttpType::UploadLevel" },
        { GJHttpType::GetOnlineLevels, "GJHttpType::GetOnlineLevels" },
        { GJHttpType::GetMapPacks, "GJHttpType::GetMapPacks" },
        { GJHttpType::DownloadLevel, "GJHttpType::DownloadLevel" },
        { GJHttpType::UpdateLevel, "GJHttpType::UpdateLevel" },
        { GJHttpType::RateStars, "GJHttpType::RateStars" },
        { GJHttpType::DeleteServerLevel, "GJHttpType::DeleteServerLevel" },
        { GJHttpType::SetLevelStars, "GJHttpType::SetLevelStars" },
        { GJHttpType::SetLevelFeatured, "GJHttpType::SetLevelFeatured" },
        { GJHttpType::UpdateUserScore, "GJHttpType::UpdateUserScore" },
        { GJHttpType::GetLeaderboardScores, "GJHttpType::GetLeaderboardScores" },
        { GJHttpType::GetLevelComments, "GJHttpType::GetLevelComments" },
        { GJHttpType::UploadComment, "GJHttpType::UploadComment" },
        { GJHttpType::DeleteComment, "GJHttpType::DeleteComment" },
        { GJHttpType::LikeItem, "GJHttpType::LikeItem" },
        { GJHttpType::RestoreItems, "GJHttpType::RestoreItems" },
        { GJHttpType::SubmitUserInfo, "GJHttpType::SubmitUserInfo" },
        { GJHttpType::ReportLevel, "GJHttpType::ReportLevel" },
        { GJHttpType::GetSongInfo, "GJHttpType::GetSongInfo" },
        { GJHttpType::BackupAccount, "GJHttpType::BackupAccount" },
        { GJHttpType::SyncAccount, "GJHttpType::SyncAccount" },
        { GJHttpType::RegisterAccount, "GJHttpType::RegisterAccount" },
        { GJHttpType::LoginAccount, "GJHttpType::LoginAccount" },
        { GJHttpType::UpdateDescription, "GJHttpType::UpdateDescription" },
        { GJHttpType::GetAccountComments, "GJHttpType::GetAccountComments" },
        { GJHttpType::UpdateAccountSettings, "GJHttpType::UpdateAccountSettings" },
        { GJHttpType::GetGJUserInfo, "GJHttpType::GetGJUserInfo" },
        { GJHttpType::GetFriendRequests, "GJHttpType::GetFriendRequests" },
        { GJHttpType::UploadFriendRequest, "GJHttpType::UploadFriendRequest" },
        { GJHttpType::DeleteFriendRequest, "GJHttpType::DeleteFriendRequest" },
        { GJHttpType::AcceptFriendRequest, "GJHttpType::AcceptFriendRequest" },
        { GJHttpType::ReadFriendRequest, "GJHttpType::ReadFriendRequest" },
        { GJHttpType::RemoveFriend, "GJHttpType::RemoveFriend" },
        { GJHttpType::BlockUser, "GJHttpType::BlockUser" },
        { GJHttpType::UnblockUser, "GJHttpType::UnblockUser" },
        { GJHttpType::GetUserList, "GJHttpType::GetUserList" },
        { GJHttpType::GetUserMessages, "GJHttpType::GetUserMessages" },
        { GJHttpType::DownloadUserMessage, "GJHttpType::DownloadUserMessage" },
        { GJHttpType::DeleteUserMessages, "GJHttpType::DeleteUserMessages" },
        { GJHttpType::UploadUserMessage, "GJHttpType::UploadUserMessage" },
        { GJHttpType::GetUsers, "GJHttpType::GetUsers" },
        { GJHttpType::BanUser, "GJHttpType::BanUser" },
        { GJHttpType::RequestUserAccess, "GJHttpType::RequestUserAccess" },
        { GJHttpType::GetLevelSaveData, "GJHttpType::GetLevelSaveData" },
        { GJHttpType::SuggestLevelStars, "GJHttpType::SuggestLevelStars" },
        { GJHttpType::GetGJRewards, "GJHttpType::GetGJRewards" },
        { GJHttpType::GetGJChallenges, "GJHttpType::GetGJChallenges" },
        { GJHttpType::GetGJDailyLevelState, "GJHttpType::GetGJDailyLevelState" },
        { GJHttpType::Unknown49, "GJHttpType::Unknown49" },
        { GJHttpType::RateDemon, "GJHttpType::RateDemon" },
        { GJHttpType::GetLevelLeaderboard, "GJHttpType::GetLevelLeaderboard" },
        { GJHttpType::GetGauntlets, "GJHttpType::GetGauntlets" },
        { GJHttpType::GetTopArtists, "GJHttpType::GetTopArtists" },
        { GJHttpType::GetAccountBackupURL, "GJHttpType::GetAccountBackupURL" },
        { GJHttpType::GetAccountSyncURL, "GJHttpType::GetAccountSyncURL" },
        { GJHttpType::NetworkTest, "GJHttpType::NetworkTest" },
        { GJHttpType::JoinLobby, "GJHttpType::JoinLobby" },
        { GJHttpType::ExitLobby, "GJHttpType::ExitLobby" },
        { GJHttpType::GetCustomContentURL, "GJHttpType::GetCustomContentURL" },
        { GJHttpType::GetLevelLists, "GJHttpType::GetLevelLists" },
        { GJHttpType::UploadLevelList, "GJHttpType::UploadLevelList" },
        { GJHttpType::DeleteServerLevelList, "GJHttpType::DeleteServerLevelList" },
        { GJHttpType::GetNews, "GJHttpType::GetNews" },
        { GJHttpType::GetGJSecretReward, "GJHttpType::GetGJSecretReward" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJItemIcon>) {
devtools::registerNode<GJItemIcon>([](GJItemIcon* node) {
    devtools::label("Members for GJItemIcon:");
    devtools::property("m_iconRequestID", node->m_iconRequestID);
    devtools::property("m_playerSize", node->m_playerSize);
    devtools::property("m_isIcon", node->m_isIcon);
    devtools::property("m_unlockID", node->m_unlockID);
    devtools::enumerable("m_unlockType", node->m_unlockType, {
        { UnlockType::Cube, "UnlockType::Cube" },
        { UnlockType::Col1, "UnlockType::Col1" },
        { UnlockType::Col2, "UnlockType::Col2" },
        { UnlockType::Ship, "UnlockType::Ship" },
        { UnlockType::Ball, "UnlockType::Ball" },
        { UnlockType::Bird, "UnlockType::Bird" },
        { UnlockType::Dart, "UnlockType::Dart" },
        { UnlockType::Robot, "UnlockType::Robot" },
        { UnlockType::Spider, "UnlockType::Spider" },
        { UnlockType::Streak, "UnlockType::Streak" },
        { UnlockType::Death, "UnlockType::Death" },
        { UnlockType::GJItem, "UnlockType::GJItem" },
        { UnlockType::Swing, "UnlockType::Swing" },
        { UnlockType::Jetpack, "UnlockType::Jetpack" },
        { UnlockType::ShipFire, "UnlockType::ShipFire" },
    });
    devtools::label(fmt::format("cocos2d::CCSprite* m_player at {}", (void*)node->m_player).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJLevelList>) {
devtools::registerNode<GJLevelList>([](GJLevelList* node) {
    devtools::label("Members for GJLevelList:");
    devtools::property("m_listID", node->m_listID);
    devtools::property("m_listVersion", node->m_listVersion);
    devtools::property("m_downloads", node->m_downloads);
    devtools::property("m_likes", node->m_likes);
    devtools::property("m_difficulty", node->m_difficulty);
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_folder", node->m_folder);
    devtools::property("m_listRevision", node->m_listRevision);
    devtools::property("m_listOrder", node->m_listOrder);
    devtools::property("m_original", node->m_original);
    devtools::property("m_diamonds", node->m_diamonds);
    devtools::property("m_levelsToClaim", node->m_levelsToClaim);
    devtools::property("m_isEditable", node->m_isEditable);
    devtools::property("m_unlisted", node->m_unlisted);
    devtools::property("m_friendsOnly", node->m_friendsOnly);
    devtools::property("m_uploaded", node->m_uploaded);
    devtools::property("m_favorite", node->m_favorite);
    devtools::property("m_featured", node->m_featured);
    devtools::property("m_onlineLevelsLoaded", node->m_onlineLevelsLoaded);
    devtools::property("m_creatorName", node->m_creatorName);
    devtools::property("m_listName", node->m_listName);
    devtools::property("m_unkString", node->m_unkString);
    devtools::property("m_levelsString", node->m_levelsString);
    devtools::property("m_listDesc", node->m_listDesc);
    devtools::property("m_uploadDate", node->m_uploadDate);
    devtools::property("m_updateDate", node->m_updateDate);
    devtools::enumerable("m_listType", node->m_listType, {
        { GJLevelType::Default, "GJLevelType::Default" },
        { GJLevelType::Main, "GJLevelType::Main" },
        { GJLevelType::Editor, "GJLevelType::Editor" },
        { GJLevelType::Saved, "GJLevelType::Saved" },
        { GJLevelType::SearchResult, "GJLevelType::SearchResult" },
    });
    devtools::property("m_M_ID", node->m_M_ID);
    devtools::label("gd::vector<int> m_levels");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_levelsDict at {}", (void*)node->m_levelsDict).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJLevelScoreCell>) {
devtools::registerNode<GJLevelScoreCell>([](GJLevelScoreCell* node) {
    devtools::label("Members for GJLevelScoreCell:");
    devtools::label(fmt::format("GJUserScore* m_userScore at {}", (void*)node->m_userScore).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJListLayer>) {
devtools::registerNode<GJListLayer>([](GJListLayer* node) {
    devtools::label("Members for GJListLayer:");
    devtools::label(fmt::format("BoomListView* m_listView at {}", (void*)node->m_listView).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJLocalLevelScoreCell>) {
devtools::registerNode<GJLocalLevelScoreCell>([](GJLocalLevelScoreCell* node) {
    devtools::label("Members for GJLocalLevelScoreCell:");
    devtools::label(fmt::format("GJLocalScore* m_localScore at {}", (void*)node->m_localScore).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJLocalScore>) {
devtools::registerNode<GJLocalScore>([](GJLocalScore* node) {
    devtools::label("Members for GJLocalScore:");
    devtools::property("m_points", node->m_points);
    devtools::enumerable("m_type", node->m_type, {
        { LevelLeaderboardType::Friends, "LevelLeaderboardType::Friends" },
        { LevelLeaderboardType::Global, "LevelLeaderboardType::Global" },
        { LevelLeaderboardType::Weekly, "LevelLeaderboardType::Weekly" },
        { LevelLeaderboardType::Local, "LevelLeaderboardType::Local" },
    });
    devtools::property("m_unk040", node->m_unk040);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJMapObject>) {
devtools::registerNode<GJMapObject>([](GJMapObject* node) {
    devtools::label("Members for GJMapObject:");
    devtools::property("m_jumpStopTime", node->m_jumpStopTime);
    devtools::property("m_objectOrigin", node->m_objectOrigin);
    devtools::property("m_objectOffset", node->m_objectOffset);
    devtools::property("m_monsterIdle", node->m_monsterIdle);
    devtools::property("m_monsterMoving", node->m_monsterMoving);
    devtools::property("m_moveStopTime", node->m_moveStopTime);
    devtools::property("m_monstersTouched", node->m_monstersTouched);
    devtools::label(fmt::format("cocos2d::CCNode* m_mainNode at {}", (void*)node->m_mainNode).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_shadowSprite at {}", (void*)node->m_shadowSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJMapPack>) {
devtools::registerNode<GJMapPack>([](GJMapPack* node) {
    devtools::label("Members for GJMapPack:");
    devtools::property("m_packID", node->m_packID);
    devtools::enumerable("m_difficulty", node->m_difficulty, {
        { GJDifficulty::NA, "GJDifficulty::NA" },
        { GJDifficulty::Auto, "GJDifficulty::Auto" },
        { GJDifficulty::Easy, "GJDifficulty::Easy" },
        { GJDifficulty::Normal, "GJDifficulty::Normal" },
        { GJDifficulty::Hard, "GJDifficulty::Hard" },
        { GJDifficulty::Harder, "GJDifficulty::Harder" },
        { GJDifficulty::Insane, "GJDifficulty::Insane" },
        { GJDifficulty::Demon, "GJDifficulty::Demon" },
        { GJDifficulty::DemonEasy, "GJDifficulty::DemonEasy" },
        { GJDifficulty::DemonMedium, "GJDifficulty::DemonMedium" },
        { GJDifficulty::DemonInsane, "GJDifficulty::DemonInsane" },
        { GJDifficulty::DemonExtreme, "GJDifficulty::DemonExtreme" },
    });
    devtools::property("m_stars", node->m_stars);
    devtools::property("m_coins", node->m_coins);
    devtools::property("m_packName", node->m_packName);
    devtools::property("m_levelStrings", node->m_levelStrings);
    devtools::property("m_textColour", node->m_textColour);
    devtools::property("m_barColour", node->m_barColour);
    devtools::property("m_MId", node->m_MId);
    devtools::property("m_isGauntlet", node->m_isGauntlet);
    devtools::label(fmt::format("cocos2d::CCArray* m_levels at {}", (void*)node->m_levels).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJMessageCell>) {
devtools::registerNode<GJMessageCell>([](GJMessageCell* node) {
    devtools::label("Members for GJMessageCell:");
    devtools::label(fmt::format("GJUserMessage* m_message at {}", (void*)node->m_message).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_popup at {}", (void*)node->m_popup).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_toggler at {}", (void*)node->m_toggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJMessagePopup>) {
devtools::registerNode<GJMessagePopup>([](GJMessagePopup* node) {
    devtools::label("Members for GJMessagePopup:");
    devtools::property("m_actionSuccess", node->m_actionSuccess);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_errorLabel at {}", (void*)node->m_errorLabel).c_str());
    devtools::label(fmt::format("GJUserMessage* m_message at {}", (void*)node->m_message).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_closeButton at {}", (void*)node->m_closeButton).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_uploadPopup at {}", (void*)node->m_uploadPopup).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJMGLayer>) {
devtools::registerNode<GJMGLayer>([](GJMGLayer* node) {
    devtools::label("Members for GJMGLayer:");
    devtools::property("m_textureWidth", node->m_textureWidth);
    devtools::property("m_showGround", node->m_showGround);
    devtools::property("m_groundWidth", node->m_groundWidth);
    devtools::property("m_showGround1", node->m_showGround1);
    devtools::property("m_showGround2", node->m_showGround2);
    devtools::property("m_unk1c4", node->m_unk1c4);
    devtools::property("m_cameraRotated", node->m_cameraRotated);
    devtools::property("m_blendMG1", node->m_blendMG1);
    devtools::property("m_blendMG2", node->m_blendMG2);
    devtools::property("m_groundScale", node->m_groundScale);
    devtools::property("m_ground2Offset", node->m_ground2Offset);
    devtools::label(fmt::format("cocos2d::CCSprite* m_ground1Sprite at {}", (void*)node->m_ground1Sprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_ground2Sprite at {}", (void*)node->m_ground2Sprite).c_str());
    devtools::label(fmt::format("void* m_unk1b0 at {}", (void*)node->m_unk1b0).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_mg1BatchNode at {}", (void*)node->m_mg1BatchNode).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_mg2BatchNode at {}", (void*)node->m_mg2BatchNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJMoreGamesLayer>) {
devtools::registerNode<GJMoreGamesLayer>([](GJMoreGamesLayer* node) {
    devtools::label("Members for GJMoreGamesLayer:");
    devtools::label(fmt::format("cocos2d::CCArray* m_moreGamesList at {}", (void*)node->m_moreGamesList).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJMultiplayerManager>) {
devtools::registerNode<GJMultiplayerManager>([](GJMultiplayerManager* node) {
    devtools::label("Members for GJMultiplayerManager:");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_activeDownloads at {}", (void*)node->m_activeDownloads).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_lobbyScores at {}", (void*)node->m_lobbyScores).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_scoreArrays at {}", (void*)node->m_scoreArrays).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_lobbyComments at {}", (void*)node->m_lobbyComments).c_str());
    devtools::label(fmt::format("GJMPDelegate* m_mpDelegate at {}", (void*)node->m_mpDelegate).c_str());
    devtools::label(fmt::format("UploadActionDelegate* m_uploadDelegate at {}", (void*)node->m_uploadDelegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJPathPage>) {
devtools::registerNode<GJPathPage>([](GJPathPage* node) {
    devtools::label("Members for GJPathPage:");
    devtools::property("m_pathNumber", node->m_pathNumber);
    devtools::property("m_animationPlaying", node->m_animationPlaying);
    devtools::property("m_dialogIndex", node->m_dialogIndex);
    devtools::label(fmt::format("GJPathsLayer* m_pathsLayer at {}", (void*)node->m_pathsLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJPathRewardPopup>) {
devtools::registerNode<GJPathRewardPopup>([](GJPathRewardPopup* node) {
    devtools::label("Members for GJPathRewardPopup:");
    devtools::property("m_pathNumber", node->m_pathNumber);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJPathsLayer>) {
devtools::registerNode<GJPathsLayer>([](GJPathsLayer* node) {
    devtools::label("Members for GJPathsLayer:");
    devtools::property("m_exiting", node->m_exiting);
    devtools::label(fmt::format("cocos2d::CCSprite* m_closeSprite at {}", (void*)node->m_closeSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJPathSprite>) {
devtools::registerNode<GJPathSprite>([](GJPathSprite* node) {
    devtools::label("Members for GJPathSprite:");
    devtools::property("m_pathNumber", node->m_pathNumber);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJPFollowCommandLayer>) {
devtools::registerNode<GJPFollowCommandLayer>([](GJPFollowCommandLayer* node) {
    devtools::label("Members for GJPFollowCommandLayer:");
    devtools::property("m_moveTime", node->m_moveTime);
    devtools::property("m_delay", node->m_delay);
    devtools::property("m_speed", node->m_speed);
    devtools::property("m_offset", node->m_offset);
    devtools::property("m_maxSpeed", node->m_maxSpeed);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::label(fmt::format("CCTextInputNode* m_moveTimeInput at {}", (void*)node->m_moveTimeInput).c_str());
    devtools::label(fmt::format("Slider* m_moveTimeSlider at {}", (void*)node->m_moveTimeSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_speedInput at {}", (void*)node->m_speedInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_delayInput at {}", (void*)node->m_delayInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_offsetInput at {}", (void*)node->m_offsetInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_maxSpeedInput at {}", (void*)node->m_maxSpeedInput).c_str());
    devtools::label(fmt::format("Slider* m_speedSlider at {}", (void*)node->m_speedSlider).c_str());
    devtools::label(fmt::format("Slider* m_delaySlider at {}", (void*)node->m_delaySlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJPromoPopup>) {
devtools::registerNode<GJPromoPopup>([](GJPromoPopup* node) {
    devtools::label("Members for GJPromoPopup:");
    devtools::property("m_promoFrame", node->m_promoFrame);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJRequestCell>) {
devtools::registerNode<GJRequestCell>([](GJRequestCell* node) {
    devtools::label("Members for GJRequestCell:");
    devtools::label(fmt::format("GJUserScore* m_score at {}", (void*)node->m_score).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_popup at {}", (void*)node->m_popup).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_toggler at {}", (void*)node->m_toggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJRewardItem>) {
devtools::registerNode<GJRewardItem>([](GJRewardItem* node) {
    devtools::label("Members for GJRewardItem:");
    devtools::property("m_chestID", node->m_chestID);
    devtools::property("m_timeRemaining", node->m_timeRemaining);
    devtools::enumerable("m_rewardType", node->m_rewardType, {
        { GJRewardType::Unknown, "GJRewardType::Unknown" },
        { GJRewardType::Small, "GJRewardType::Small" },
        { GJRewardType::Large, "GJRewardType::Large" },
        { GJRewardType::SmallTreasure, "GJRewardType::SmallTreasure" },
        { GJRewardType::LargeTreasure, "GJRewardType::LargeTreasure" },
        { GJRewardType::Key10Treasure, "GJRewardType::Key10Treasure" },
        { GJRewardType::Key25Treasure, "GJRewardType::Key25Treasure" },
        { GJRewardType::Key50Treasure, "GJRewardType::Key50Treasure" },
        { GJRewardType::Key100Treasure, "GJRewardType::Key100Treasure" },
        { GJRewardType::Gold, "GJRewardType::Gold" },
    });
    devtools::property("m_unk", node->m_unk);
    devtools::label(fmt::format("cocos2d::CCArray* m_rewardObjects at {}", (void*)node->m_rewardObjects).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJRewardObject>) {
devtools::registerNode<GJRewardObject>([](GJRewardObject* node) {
    devtools::label("Members for GJRewardObject:");
    devtools::enumerable("m_specialRewardItem", node->m_specialRewardItem, {
        { SpecialRewardItem::FireShard, "SpecialRewardItem::FireShard" },
        { SpecialRewardItem::IceShard, "SpecialRewardItem::IceShard" },
        { SpecialRewardItem::PoisonShard, "SpecialRewardItem::PoisonShard" },
        { SpecialRewardItem::ShadowShard, "SpecialRewardItem::ShadowShard" },
        { SpecialRewardItem::LavaShard, "SpecialRewardItem::LavaShard" },
        { SpecialRewardItem::BonusKey, "SpecialRewardItem::BonusKey" },
        { SpecialRewardItem::Orbs, "SpecialRewardItem::Orbs" },
        { SpecialRewardItem::Diamonds, "SpecialRewardItem::Diamonds" },
        { SpecialRewardItem::CustomItem, "SpecialRewardItem::CustomItem" },
        { SpecialRewardItem::EarthShard, "SpecialRewardItem::EarthShard" },
        { SpecialRewardItem::BloodShard, "SpecialRewardItem::BloodShard" },
        { SpecialRewardItem::MetalShard, "SpecialRewardItem::MetalShard" },
        { SpecialRewardItem::LightShard, "SpecialRewardItem::LightShard" },
        { SpecialRewardItem::SoulShard, "SpecialRewardItem::SoulShard" },
        { SpecialRewardItem::GoldKey, "SpecialRewardItem::GoldKey" },
    });
    devtools::enumerable("m_unlockType", node->m_unlockType, {
        { UnlockType::Cube, "UnlockType::Cube" },
        { UnlockType::Col1, "UnlockType::Col1" },
        { UnlockType::Col2, "UnlockType::Col2" },
        { UnlockType::Ship, "UnlockType::Ship" },
        { UnlockType::Ball, "UnlockType::Ball" },
        { UnlockType::Bird, "UnlockType::Bird" },
        { UnlockType::Dart, "UnlockType::Dart" },
        { UnlockType::Robot, "UnlockType::Robot" },
        { UnlockType::Spider, "UnlockType::Spider" },
        { UnlockType::Streak, "UnlockType::Streak" },
        { UnlockType::Death, "UnlockType::Death" },
        { UnlockType::GJItem, "UnlockType::GJItem" },
        { UnlockType::Swing, "UnlockType::Swing" },
        { UnlockType::Jetpack, "UnlockType::Jetpack" },
        { UnlockType::ShipFire, "UnlockType::ShipFire" },
    });
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_total", node->m_total);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJRobotSprite>) {
devtools::registerNode<GJRobotSprite>([](GJRobotSprite* node) {
    devtools::label("Members for GJRobotSprite:");
    devtools::property("m_hasExtra", node->m_hasExtra);
    devtools::property("m_color", node->m_color);
    devtools::property("m_secondColor", node->m_secondColor);
    devtools::enumerable("m_iconType", node->m_iconType, {
        { IconType::Cube, "IconType::Cube" },
        { IconType::Ship, "IconType::Ship" },
        { IconType::Ball, "IconType::Ball" },
        { IconType::Ufo, "IconType::Ufo" },
        { IconType::Wave, "IconType::Wave" },
        { IconType::Robot, "IconType::Robot" },
        { IconType::Spider, "IconType::Spider" },
        { IconType::Swing, "IconType::Swing" },
        { IconType::Jetpack, "IconType::Jetpack" },
        { IconType::DeathEffect, "IconType::DeathEffect" },
        { IconType::Special, "IconType::Special" },
        { IconType::Item, "IconType::Item" },
        { IconType::ShipFire, "IconType::ShipFire" },
    });
    devtools::property("m_iconRequestID", node->m_iconRequestID);
    devtools::label(fmt::format("cocos2d::CCArray* m_unkArray at {}", (void*)node->m_unkArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_secondArray at {}", (void*)node->m_secondArray).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_glowSprite at {}", (void*)node->m_glowSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_extraSprite at {}", (void*)node->m_extraSprite).c_str());
    devtools::label(fmt::format("CCSpritePart* m_headSprite at {}", (void*)node->m_headSprite).c_str());
    devtools::label(fmt::format("CCSpritePart* m_footSprite at {}", (void*)node->m_footSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJRotateCommandLayer>) {
devtools::registerNode<GJRotateCommandLayer>([](GJRotateCommandLayer* node) {
    devtools::label("Members for GJRotateCommandLayer:");
    devtools::property("m_moveTime", node->m_moveTime);
    devtools::enumerable("m_rotateEasingType", node->m_rotateEasingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_rotateEasingRate", node->m_rotateEasingRate);
    devtools::property("m_degrees", node->m_degrees);
    devtools::property("m_times360", node->m_times360);
    devtools::property("m_disableTextChanged", node->m_disableTextChanged);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_centerGroupID", node->m_centerGroupID);
    devtools::property("m_lockObjectRotation", node->m_lockObjectRotation);
    devtools::property("m_followP1", node->m_followP1);
    devtools::property("m_followP2", node->m_followP2);
    devtools::label(fmt::format("CCTextInputNode* m_moveTimeInput at {}", (void*)node->m_moveTimeInput).c_str());
    devtools::label(fmt::format("Slider* m_moveTimeSlider at {}", (void*)node->m_moveTimeSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_rotateEasingLabel at {}", (void*)node->m_rotateEasingLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rotateEasingRateButton at {}", (void*)node->m_rotateEasingRateButton).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_rotateEasingRateLabel at {}", (void*)node->m_rotateEasingRateLabel).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_degreesInput at {}", (void*)node->m_degreesInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_timesInput at {}", (void*)node->m_timesInput).c_str());
    devtools::label(fmt::format("Slider* m_degreesSlider at {}", (void*)node->m_degreesSlider).c_str());
    devtools::label(fmt::format("Slider* m_timesSlider at {}", (void*)node->m_timesSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_centerIDInput at {}", (void*)node->m_centerIDInput).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_followP1Toggler at {}", (void*)node->m_followP1Toggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_followP2Toggler at {}", (void*)node->m_followP2Toggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJRotationControl>) {
devtools::registerNode<GJRotationControl>([](GJRotationControl* node) {
    devtools::label("Members for GJRotationControl:");
    devtools::property("m_cursorDifference", node->m_cursorDifference);
    devtools::property("m_controlPosition", node->m_controlPosition);
    devtools::property("m_startingRotation", node->m_startingRotation);
    devtools::property("m_currentRotation", node->m_currentRotation);
    devtools::property("m_touchID", node->m_touchID);
    devtools::label(fmt::format("cocos2d::CCSprite* m_controlSprite at {}", (void*)node->m_controlSprite).c_str());
    devtools::label(fmt::format("GJRotationControlDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJScaleControl>) {
devtools::registerNode<GJScaleControl>([](GJScaleControl* node) {
    devtools::label("Members for GJScaleControl:");
    devtools::property("m_touchID", node->m_touchID);
    devtools::property("m_valueX", node->m_valueX);
    devtools::property("m_valueY", node->m_valueY);
    devtools::property("m_unkSize4", node->m_unkSize4);
    devtools::property("m_changedValueX", node->m_changedValueX);
    devtools::property("m_changedValueY", node->m_changedValueY);
    devtools::property("m_scale1Lock", node->m_scale1Lock);
    devtools::property("m_scaleButtonType", node->m_scaleButtonType);
    devtools::property("m_upperBound", node->m_upperBound);
    devtools::property("m_lowerBound", node->m_lowerBound);
    devtools::property("m_senderTag", node->m_senderTag);
    devtools::property("m_scaleLocked", node->m_scaleLocked);
    devtools::label(fmt::format("Slider* m_sliderX at {}", (void*)node->m_sliderX).c_str());
    devtools::label(fmt::format("Slider* m_sliderY at {}", (void*)node->m_sliderY).c_str());
    devtools::label(fmt::format("Slider* m_sliderXY at {}", (void*)node->m_sliderXY).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_scaleXLabel at {}", (void*)node->m_scaleXLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_scaleYLabel at {}", (void*)node->m_scaleYLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_scaleLabel at {}", (void*)node->m_scaleLabel).c_str());
    devtools::label(fmt::format("GJScaleControlDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_scaleLockButton at {}", (void*)node->m_scaleLockButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJScoreCell>) {
devtools::registerNode<GJScoreCell>([](GJScoreCell* node) {
    devtools::label("Members for GJScoreCell:");
    devtools::label(fmt::format("GJUserScore* m_score at {}", (void*)node->m_score).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJSearchObject>) {
devtools::registerNode<GJSearchObject>([](GJSearchObject* node) {
    devtools::label("Members for GJSearchObject:");
    devtools::enumerable("m_searchType", node->m_searchType, {
        { SearchType::Search, "SearchType::Search" },
        { SearchType::Downloaded, "SearchType::Downloaded" },
        { SearchType::MostLiked, "SearchType::MostLiked" },
        { SearchType::Trending, "SearchType::Trending" },
        { SearchType::Recent, "SearchType::Recent" },
        { SearchType::UsersLevels, "SearchType::UsersLevels" },
        { SearchType::Featured, "SearchType::Featured" },
        { SearchType::Magic, "SearchType::Magic" },
        { SearchType::Sends, "SearchType::Sends" },
        { SearchType::MapPack, "SearchType::MapPack" },
        { SearchType::MapPackOnClick, "SearchType::MapPackOnClick" },
        { SearchType::Awarded, "SearchType::Awarded" },
        { SearchType::Followed, "SearchType::Followed" },
        { SearchType::Friends, "SearchType::Friends" },
        { SearchType::Users, "SearchType::Users" },
        { SearchType::LikedGDW, "SearchType::LikedGDW" },
        { SearchType::HallOfFame, "SearchType::HallOfFame" },
        { SearchType::FeaturedGDW, "SearchType::FeaturedGDW" },
        { SearchType::Similar, "SearchType::Similar" },
        { SearchType::Type19, "SearchType::Type19" },
        { SearchType::TopListsUnused, "SearchType::TopListsUnused" },
        { SearchType::DailySafe, "SearchType::DailySafe" },
        { SearchType::WeeklySafe, "SearchType::WeeklySafe" },
        { SearchType::EventSafe, "SearchType::EventSafe" },
        { SearchType::Reported, "SearchType::Reported" },
        { SearchType::LevelListsOnClick, "SearchType::LevelListsOnClick" },
        { SearchType::Type26, "SearchType::Type26" },
        { SearchType::Sent, "SearchType::Sent" },
        { SearchType::FeaturedLite, "SearchType::FeaturedLite" },
        { SearchType::Bonus, "SearchType::Bonus" },
        { SearchType::MyLevels, "SearchType::MyLevels" },
        { SearchType::SavedLevels, "SearchType::SavedLevels" },
        { SearchType::FavouriteLevels, "SearchType::FavouriteLevels" },
        { SearchType::SmartTemplates, "SearchType::SmartTemplates" },
        { SearchType::MyLists, "SearchType::MyLists" },
        { SearchType::FavouriteLists, "SearchType::FavouriteLists" },
    });
    devtools::property("m_searchQuery", node->m_searchQuery);
    devtools::property("m_difficulty", node->m_difficulty);
    devtools::property("m_length", node->m_length);
    devtools::property("m_page", node->m_page);
    devtools::property("m_starFilter", node->m_starFilter);
    devtools::property("m_noStarFilter", node->m_noStarFilter);
    devtools::property("m_total", node->m_total);
    devtools::property("m_uncompletedFilter", node->m_uncompletedFilter);
    devtools::property("m_completedFilter", node->m_completedFilter);
    devtools::property("m_featuredFilter", node->m_featuredFilter);
    devtools::property("m_originalFilter", node->m_originalFilter);
    devtools::property("m_twoPlayerFilter", node->m_twoPlayerFilter);
    devtools::property("m_coinsFilter", node->m_coinsFilter);
    devtools::property("m_epicFilter", node->m_epicFilter);
    devtools::property("m_legendaryFilter", node->m_legendaryFilter);
    devtools::property("m_mythicFilter", node->m_mythicFilter);
    devtools::enumerable("m_demonFilter", node->m_demonFilter, {
        { GJDifficulty::NA, "GJDifficulty::NA" },
        { GJDifficulty::Auto, "GJDifficulty::Auto" },
        { GJDifficulty::Easy, "GJDifficulty::Easy" },
        { GJDifficulty::Normal, "GJDifficulty::Normal" },
        { GJDifficulty::Hard, "GJDifficulty::Hard" },
        { GJDifficulty::Harder, "GJDifficulty::Harder" },
        { GJDifficulty::Insane, "GJDifficulty::Insane" },
        { GJDifficulty::Demon, "GJDifficulty::Demon" },
        { GJDifficulty::DemonEasy, "GJDifficulty::DemonEasy" },
        { GJDifficulty::DemonMedium, "GJDifficulty::DemonMedium" },
        { GJDifficulty::DemonInsane, "GJDifficulty::DemonInsane" },
        { GJDifficulty::DemonExtreme, "GJDifficulty::DemonExtreme" },
    });
    devtools::property("m_folder", node->m_folder);
    devtools::property("m_songID", node->m_songID);
    devtools::property("m_customSongFilter", node->m_customSongFilter);
    devtools::property("m_songFilter", node->m_songFilter);
    devtools::property("m_searchIsOverlay", node->m_searchIsOverlay);
    devtools::property("m_searchMode", node->m_searchMode);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJShopLayer>) {
devtools::registerNode<GJShopLayer>([](GJShopLayer* node) {
    devtools::label("Members for GJShopLayer:");
    devtools::property("m_closing", node->m_closing);
    devtools::enumerable("m_type", node->m_type, {
        { ShopType::Normal, "ShopType::Normal" },
        { ShopType::Secret, "ShopType::Secret" },
        { ShopType::Community, "ShopType::Community" },
        { ShopType::Mechanic, "ShopType::Mechanic" },
        { ShopType::Diamond, "ShopType::Diamond" },
        { ShopType::Paths, "ShopType::Paths" },
    });
    devtools::property("m_sheetName", node->m_sheetName);
    devtools::property("m_videoPlaying", node->m_videoPlaying);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::property("m_zolgurothDialogIndex", node->m_zolgurothDialogIndex);
    devtools::property("m_affordDialogIndex", node->m_affordDialogIndex);
    devtools::label(fmt::format("CCCounterLabel* m_currencyLabel at {}", (void*)node->m_currencyLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_shopItems at {}", (void*)node->m_shopItems).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_unkNode1 at {}", (void*)node->m_unkNode1).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_unkNode2 at {}", (void*)node->m_unkNode2).c_str());
    devtools::label(fmt::format("AnimatedShopKeeper* m_shopKeeper at {}", (void*)node->m_shopKeeper).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJSmartBlockPreview>) {
devtools::registerNode<GJSmartBlockPreview>([](GJSmartBlockPreview* node) {
    devtools::label("Members for GJSmartBlockPreview:");
    devtools::property("m_prefabKey", node->m_prefabKey);
    devtools::property("m_selected", node->m_selected);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_infoLabel at {}", (void*)node->m_infoLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_selectSprite at {}", (void*)node->m_selectSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJSmartPrefab>) {
devtools::registerNode<GJSmartPrefab>([](GJSmartPrefab* node) {
    devtools::label("Members for GJSmartPrefab:");
    devtools::property("m_prefabKey", node->m_prefabKey);
    devtools::property("m_prefabData", node->m_prefabData);
    devtools::property("m_prefabID", node->m_prefabID);
    devtools::property("m_prefabChance", node->m_prefabChance);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJSmartTemplate>) {
devtools::registerNode<GJSmartTemplate>([](GJSmartTemplate* node) {
    devtools::label("Members for GJSmartTemplate:");
    devtools::property("m_allowFlipX", node->m_allowFlipX);
    devtools::property("m_allowFlipY", node->m_allowFlipY);
    devtools::property("m_allowRotation", node->m_allowRotation);
    devtools::property("m_ignoreCorners", node->m_ignoreCorners);
    devtools::property("m_templateName", node->m_templateName);
    devtools::property("m_unk0a8", node->m_unk0a8);
    devtools::property("m_nameIndex", node->m_nameIndex);
    devtools::property("m_prefabIndex", node->m_prefabIndex);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_prefabArrays at {}", (void*)node->m_prefabArrays).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_remapDict1 at {}", (void*)node->m_remapDict1).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_remapDict2 at {}", (void*)node->m_remapDict2).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_remapDict3 at {}", (void*)node->m_remapDict3).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_remapDict4 at {}", (void*)node->m_remapDict4).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_remapDict5 at {}", (void*)node->m_remapDict5).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_remapDict6 at {}", (void*)node->m_remapDict6).c_str());
    devtools::label("gd::map<gd::string, SmartPrefabResult> m_prefabResults");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJSongBrowser>) {
devtools::registerNode<GJSongBrowser>([](GJSongBrowser* node) {
    devtools::label("Members for GJSongBrowser:");
    devtools::property("m_page", node->m_page);
    devtools::property("m_songID", node->m_songID);
    devtools::property("m_selected", node->m_selected);
    devtools::property("m_unk298", node->m_unk298);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightArrow at {}", (void*)node->m_rightArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftArrow at {}", (void*)node->m_leftArrow).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_countText at {}", (void*)node->m_countText).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_downloadedSongs at {}", (void*)node->m_downloadedSongs).c_str());
    devtools::label(fmt::format("CustomListView* m_listView at {}", (void*)node->m_listView).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJSpecialColorSelect>) {
devtools::registerNode<GJSpecialColorSelect>([](GJSpecialColorSelect* node) {
    devtools::label("Members for GJSpecialColorSelect:");
    devtools::property("m_colorID", node->m_colorID);
    devtools::label(fmt::format("GJSpecialColorSelectDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_buttonSprites at {}", (void*)node->m_buttonSprites).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJSpriteColor>) {
devtools::registerNode<GJSpriteColor>([](GJSpriteColor* node) {
    devtools::label("Members for GJSpriteColor:");
    devtools::property("m_colorID", node->m_colorID);
    devtools::property("m_defaultColorID", node->m_defaultColorID);
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_baseOpacity", node->m_baseOpacity);
    devtools::property("m_usesHSV", node->m_usesHSV);
    devtools::property("m_usesCustomBlend", node->m_usesCustomBlend);
    devtools::property("m_customColor", node->m_customColor);
    devtools::label("cocos2d::ccHSVValue m_hsv");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJStoreItem>) {
devtools::registerNode<GJStoreItem>([](GJStoreItem* node) {
    devtools::label("Members for GJStoreItem:");
    devtools::enumerable("m_shopType", node->m_shopType, {
        { ShopType::Normal, "ShopType::Normal" },
        { ShopType::Secret, "ShopType::Secret" },
        { ShopType::Community, "ShopType::Community" },
        { ShopType::Mechanic, "ShopType::Mechanic" },
        { ShopType::Diamond, "ShopType::Diamond" },
        { ShopType::Paths, "ShopType::Paths" },
    });
    devtools::label("geode::SeedValueRSV m_index");
    devtools::label("geode::SeedValueRSV m_typeID");
    devtools::label("geode::SeedValueRSV m_unlockType");
    devtools::label("geode::SeedValueRSV m_price");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJTransformControl>) {
devtools::registerNode<GJTransformControl>([](GJTransformControl* node) {
    devtools::label("Members for GJTransformControl:");
    devtools::property("m_touchID", node->m_touchID);
    devtools::property("m_transformButtonType", node->m_transformButtonType);
    devtools::property("m_cursorDifference", node->m_cursorDifference);
    devtools::property("m_topRight", node->m_topRight);
    devtools::property("m_bottomLeft", node->m_bottomLeft);
    devtools::property("m_topRightPosition", node->m_topRightPosition);
    devtools::property("m_bottomLeftPosition", node->m_bottomLeftPosition);
    devtools::property("m_topRightOrigin", node->m_topRightOrigin);
    devtools::property("m_bottomLeftOrigin", node->m_bottomLeftOrigin);
    devtools::property("m_rotatePosition", node->m_rotatePosition);
    devtools::property("m_scaleX", node->m_scaleX);
    devtools::property("m_scaleY", node->m_scaleY);
    devtools::property("m_warpLocked", node->m_warpLocked);
    devtools::property("m_rotationX", node->m_rotationX);
    devtools::property("m_rotationY", node->m_rotationY);
    devtools::property("m_rotation", node->m_rotation);
    devtools::property("m_buttonScale", node->m_buttonScale);
    devtools::label(fmt::format("cocos2d::CCNode* m_mainNodeParent at {}", (void*)node->m_mainNodeParent).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_mainNode at {}", (void*)node->m_mainNode).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_objects at {}", (void*)node->m_objects).c_str());
    devtools::label(fmt::format("GJTransformControlDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_warpSprites at {}", (void*)node->m_warpSprites).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_warpLockButton at {}", (void*)node->m_warpLockButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJUINode>) {
devtools::registerNode<GJUINode>([](GJUINode* node) {
    devtools::label("Members for GJUINode:");
    devtools::property("m_rect", node->m_rect);
    devtools::property("m_touchID", node->m_touchID);
    devtools::property("m_touchDelta", node->m_touchDelta);
    devtools::property("m_touchPosition", node->m_touchPosition);
    devtools::property("m_radius", node->m_radius);
    devtools::property("m_deadzone", node->m_deadzone);
    devtools::property("m_drawLines", node->m_drawLines);
    devtools::property("m_modeB", node->m_modeB);
    devtools::property("m_snap", node->m_snap);
    devtools::property("m_swiping", node->m_swiping);
    devtools::property("m_moving", node->m_moving);
    devtools::property("m_player2", node->m_player2);
    devtools::property("m_oneButton", node->m_oneButton);
    devtools::property("m_split", node->m_split);
    devtools::enumerable("m_currentButton", node->m_currentButton, {
        { PlayerButton::Jump, "PlayerButton::Jump" },
        { PlayerButton::Left, "PlayerButton::Left" },
        { PlayerButton::Right, "PlayerButton::Right" },
    });
    devtools::label(fmt::format("cocos2d::CCSprite* m_firstSprite at {}", (void*)node->m_firstSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_secondSprite at {}", (void*)node->m_secondSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJUserCell>) {
devtools::registerNode<GJUserCell>([](GJUserCell* node) {
    devtools::label("Members for GJUserCell:");
    devtools::label(fmt::format("GJUserScore* m_userScore at {}", (void*)node->m_userScore).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_uploadPopup at {}", (void*)node->m_uploadPopup).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJUserMessage>) {
devtools::registerNode<GJUserMessage>([](GJUserMessage* node) {
    devtools::label("Members for GJUserMessage:");
    devtools::property("m_messageID", node->m_messageID);
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_userID", node->m_userID);
    devtools::property("m_title", node->m_title);
    devtools::property("m_content", node->m_content);
    devtools::property("m_username", node->m_username);
    devtools::property("m_uploadDate", node->m_uploadDate);
    devtools::property("m_read", node->m_read);
    devtools::property("m_outgoing", node->m_outgoing);
    devtools::property("m_toggled", node->m_toggled);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJUserScore>) {
devtools::registerNode<GJUserScore>([](GJUserScore* node) {
    devtools::label("Members for GJUserScore:");
    devtools::property("m_userName", node->m_userName);
    devtools::property("m_userUDID", node->m_userUDID);
    devtools::property("m_scoreType", node->m_scoreType);
    devtools::property("m_userID", node->m_userID);
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_stars", node->m_stars);
    devtools::property("m_moons", node->m_moons);
    devtools::property("m_diamonds", node->m_diamonds);
    devtools::property("m_demons", node->m_demons);
    devtools::property("m_playerRank", node->m_playerRank);
    devtools::property("m_creatorPoints", node->m_creatorPoints);
    devtools::property("m_secretCoins", node->m_secretCoins);
    devtools::property("m_userCoins", node->m_userCoins);
    devtools::property("m_iconID", node->m_iconID);
    devtools::property("m_color1", node->m_color1);
    devtools::property("m_color2", node->m_color2);
    devtools::property("m_color3", node->m_color3);
    devtools::property("m_special", node->m_special);
    devtools::enumerable("m_iconType", node->m_iconType, {
        { IconType::Cube, "IconType::Cube" },
        { IconType::Ship, "IconType::Ship" },
        { IconType::Ball, "IconType::Ball" },
        { IconType::Ufo, "IconType::Ufo" },
        { IconType::Wave, "IconType::Wave" },
        { IconType::Robot, "IconType::Robot" },
        { IconType::Spider, "IconType::Spider" },
        { IconType::Swing, "IconType::Swing" },
        { IconType::Jetpack, "IconType::Jetpack" },
        { IconType::DeathEffect, "IconType::DeathEffect" },
        { IconType::Special, "IconType::Special" },
        { IconType::Item, "IconType::Item" },
        { IconType::ShipFire, "IconType::ShipFire" },
    });
    devtools::property("m_messageState", node->m_messageState);
    devtools::property("m_friendStatus", node->m_friendStatus);
    devtools::property("m_commentHistoryStatus", node->m_commentHistoryStatus);
    devtools::property("m_youtubeURL", node->m_youtubeURL);
    devtools::property("m_twitterURL", node->m_twitterURL);
    devtools::property("m_twitchURL", node->m_twitchURL);
    devtools::property("m_playerCube", node->m_playerCube);
    devtools::property("m_playerShip", node->m_playerShip);
    devtools::property("m_playerBall", node->m_playerBall);
    devtools::property("m_playerUfo", node->m_playerUfo);
    devtools::property("m_playerWave", node->m_playerWave);
    devtools::property("m_playerRobot", node->m_playerRobot);
    devtools::property("m_playerSpider", node->m_playerSpider);
    devtools::property("m_playerSwing", node->m_playerSwing);
    devtools::property("m_playerJetpack", node->m_playerJetpack);
    devtools::property("m_playerStreak", node->m_playerStreak);
    devtools::property("m_glowEnabled", node->m_glowEnabled);
    devtools::property("m_playerExplosion", node->m_playerExplosion);
    devtools::property("m_modBadge", node->m_modBadge);
    devtools::property("m_globalRank", node->m_globalRank);
    devtools::property("m_friendReqStatus", node->m_friendReqStatus);
    devtools::property("m_newMsgCount", node->m_newMsgCount);
    devtools::property("m_friendReqCount", node->m_friendReqCount);
    devtools::property("m_newFriendCount", node->m_newFriendCount);
    devtools::property("m_newFriendRequest", node->m_newFriendRequest);
    devtools::property("m_toggled", node->m_toggled);
    devtools::property("m_unkString", node->m_unkString);
    devtools::property("m_unkInt", node->m_unkInt);
    devtools::property("m_unkInt2", node->m_unkInt2);
    devtools::property("m_demonInfo", node->m_demonInfo);
    devtools::property("m_starsInfo", node->m_starsInfo);
    devtools::property("m_platformerInfo", node->m_platformerInfo);
    devtools::property("m_levelMode", node->m_levelMode);
    devtools::enumerable("m_leaderboardMode", node->m_leaderboardMode, {
        { LevelLeaderboardMode::Time, "LevelLeaderboardMode::Time" },
        { LevelLeaderboardMode::Points, "LevelLeaderboardMode::Points" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJWorldNode>) {
devtools::registerNode<GJWorldNode>([](GJWorldNode* node) {
    devtools::label("Members for GJWorldNode:");
    devtools::property("m_unlocked", node->m_unlocked);
    devtools::property("m_levelPosition", node->m_levelPosition);
    devtools::property("m_particleColor", node->m_particleColor);
    devtools::property("m_islandType", node->m_islandType);
    devtools::property("m_islandUnlocked", node->m_islandUnlocked);
    devtools::label(fmt::format("cocos2d::CCArray* m_activeObjects at {}", (void*)node->m_activeObjects).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_activeButton at {}", (void*)node->m_activeButton).c_str());
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("WorldSelectLayer* m_selectLayer at {}", (void*)node->m_selectLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_arrowSprite at {}", (void*)node->m_arrowSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GJWriteMessagePopup>) {
devtools::registerNode<GJWriteMessagePopup>([](GJWriteMessagePopup* node) {
    devtools::label("Members for GJWriteMessagePopup:");
    devtools::property("m_unk298", node->m_unk298);
    devtools::property("m_messageID", node->m_messageID);
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_messageText", node->m_messageText);
    devtools::property("m_subjectText", node->m_subjectText);
    devtools::property("m_uploadSuccess", node->m_uploadSuccess);
    devtools::label(fmt::format("CCTextInputNode* m_messageInput at {}", (void*)node->m_messageInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_subjectInput at {}", (void*)node->m_subjectInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_messageCountLabel at {}", (void*)node->m_messageCountLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_subjectCountLabel at {}", (void*)node->m_subjectCountLabel).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_uploadPopup at {}", (void*)node->m_uploadPopup).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GooglePlayManager>) {
devtools::registerNode<GooglePlayManager>([](GooglePlayManager* node) {
    devtools::label("Members for GooglePlayManager:");
    devtools::label(fmt::format("GooglePlayDelegate* m_delegate1 at {}", (void*)node->m_delegate1).c_str());
    devtools::label(fmt::format("GooglePlayDelegate* m_delegate2 at {}", (void*)node->m_delegate2).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GradientTriggerObject>) {
devtools::registerNode<GradientTriggerObject>([](GradientTriggerObject* node) {
    devtools::label("Members for GradientTriggerObject:");
    devtools::property("m_blendingLayer", node->m_blendingLayer);
    devtools::property("m_blendingMode", node->m_blendingMode);
    devtools::property("m_gradientID", node->m_gradientID);
    devtools::property("m_upBottomLeftID", node->m_upBottomLeftID);
    devtools::property("m_downBottomRightID", node->m_downBottomRightID);
    devtools::property("m_leftTopLeftID", node->m_leftTopLeftID);
    devtools::property("m_rightTopRightID", node->m_rightTopRightID);
    devtools::property("m_vertexMode", node->m_vertexMode);
    devtools::property("m_disable", node->m_disable);
    devtools::property("m_disableAll", node->m_disableAll);
    devtools::property("m_previewOpacity", node->m_previewOpacity);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, GraphicsReloadLayer>) {
devtools::registerNode<GraphicsReloadLayer>([](GraphicsReloadLayer* node) {
    devtools::label("Members for GraphicsReloadLayer:");
    devtools::enumerable("m_quality", node->m_quality, {
        { cocos2d::TextureQuality::kTextureQualityLow, "cocos2d::TextureQuality::kTextureQualityLow" },
        { cocos2d::TextureQuality::kTextureQualityMedium, "cocos2d::TextureQuality::kTextureQualityMedium" },
        { cocos2d::TextureQuality::kTextureQualityHigh, "cocos2d::TextureQuality::kTextureQualityHigh" },
    });
    devtools::property("m_resolution", node->m_resolution);
    devtools::property("m_windowed", node->m_windowed);
    devtools::property("m_borderless", node->m_borderless);
    devtools::property("m_fix", node->m_fix);
    devtools::property("m_changedResolution", node->m_changedResolution);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, HardStreak>) {
devtools::registerNode<HardStreak>([](HardStreak* node) {
    devtools::label("Members for HardStreak:");
    devtools::property("m_currentPoint", node->m_currentPoint);
    devtools::property("m_waveSize", node->m_waveSize);
    devtools::property("m_pulseSize", node->m_pulseSize);
    devtools::property("m_isSolid", node->m_isSolid);
    devtools::property("m_isFlipped", node->m_isFlipped);
    devtools::property("m_drawStreak", node->m_drawStreak);
    devtools::label(fmt::format("cocos2d::CCArray* m_pointArray at {}", (void*)node->m_pointArray).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, HSVLiveOverlay>) {
devtools::registerNode<HSVLiveOverlay>([](HSVLiveOverlay* node) {
    devtools::label("Members for HSVLiveOverlay:");
    devtools::property("m_activeTab", node->m_activeTab);
    devtools::property("m_unkBool1", node->m_unkBool1);
    devtools::property("m_unkBool2", node->m_unkBool2);
    devtools::property("m_unkBool3", node->m_unkBool3);
    devtools::label(fmt::format("GameObject* m_object at {}", (void*)node->m_object).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_objects at {}", (void*)node->m_objects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_controls at {}", (void*)node->m_controls).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unkArray at {}", (void*)node->m_unkArray).c_str());
    devtools::label(fmt::format("ColorSelectDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("ConfigureHSVWidget* m_widget at {}", (void*)node->m_widget).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, HSVWidgetPopup>) {
devtools::registerNode<HSVWidgetPopup>([](HSVWidgetPopup* node) {
    devtools::label("Members for HSVWidgetPopup:");
    devtools::label(fmt::format("ConfigureHSVWidget* m_widget at {}", (void*)node->m_widget).c_str());
    devtools::label(fmt::format("HSVWidgetDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, InfoAlertButton>) {
devtools::registerNode<InfoAlertButton>([](InfoAlertButton* node) {
    devtools::label("Members for InfoAlertButton:");
    devtools::property("m_title", node->m_title);
    devtools::property("m_description", node->m_description);
    devtools::property("m_textScale", node->m_textScale);
    devtools::property("m_scroll", node->m_scroll);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, InfoLayer>) {
devtools::registerNode<InfoLayer>([](InfoLayer* node) {
    devtools::label("Members for InfoLayer:");
    devtools::property("m_commentKey", node->m_commentKey);
    devtools::property("m_itemCount", node->m_itemCount);
    devtools::property("m_pageStartIdx", node->m_pageStartIdx);
    devtools::property("m_pageEndIdx", node->m_pageEndIdx);
    devtools::property("m_page", node->m_page);
    devtools::property("m_canUpdateUserScore", node->m_canUpdateUserScore);
    devtools::enumerable("m_mode", node->m_mode, {
        { CommentKeyType::Level, "CommentKeyType::Level" },
        { CommentKeyType::User, "CommentKeyType::User" },
        { CommentKeyType::LevelList, "CommentKeyType::LevelList" },
    });
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("GJUserScore* m_score at {}", (void*)node->m_score).c_str());
    devtools::label(fmt::format("GJLevelList* m_levelList at {}", (void*)node->m_levelList).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageLabel at {}", (void*)node->m_pageLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_noComments at {}", (void*)node->m_noComments).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_list at {}", (void*)node->m_list).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightArrow at {}", (void*)node->m_rightArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftArrow at {}", (void*)node->m_leftArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_likeBtn at {}", (void*)node->m_likeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_timeBtn at {}", (void*)node->m_timeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_reportBtn at {}", (void*)node->m_reportBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_commentsBtn at {}", (void*)node->m_commentsBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshCommentsBtn at {}", (void*)node->m_refreshCommentsBtn).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, InheritanceNode>) {
devtools::registerNode<InheritanceNode>([](InheritanceNode* node) {
    devtools::label("Members for InheritanceNode:");
    devtools::property("m_colorID", node->m_colorID);
    devtools::property("m_unk050", node->m_unk050);
    devtools::property("m_unk051", node->m_unk051);
    devtools::label(fmt::format("InheritanceNode* m_inheritanceNode at {}", (void*)node->m_inheritanceNode).c_str());
    devtools::label(fmt::format("ColorAction* m_colorAction at {}", (void*)node->m_colorAction).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ItemInfoPopup>) {
devtools::registerNode<ItemInfoPopup>([](ItemInfoPopup* node) {
    devtools::label("Members for ItemInfoPopup:");
    devtools::property("m_itemID", node->m_itemID);
    devtools::enumerable("m_unlockType", node->m_unlockType, {
        { UnlockType::Cube, "UnlockType::Cube" },
        { UnlockType::Col1, "UnlockType::Col1" },
        { UnlockType::Col2, "UnlockType::Col2" },
        { UnlockType::Ship, "UnlockType::Ship" },
        { UnlockType::Ball, "UnlockType::Ball" },
        { UnlockType::Bird, "UnlockType::Bird" },
        { UnlockType::Dart, "UnlockType::Dart" },
        { UnlockType::Robot, "UnlockType::Robot" },
        { UnlockType::Spider, "UnlockType::Spider" },
        { UnlockType::Streak, "UnlockType::Streak" },
        { UnlockType::Death, "UnlockType::Death" },
        { UnlockType::GJItem, "UnlockType::GJItem" },
        { UnlockType::Swing, "UnlockType::Swing" },
        { UnlockType::Jetpack, "UnlockType::Jetpack" },
        { UnlockType::ShipFire, "UnlockType::ShipFire" },
    });
    devtools::property("m_accountID", node->m_accountID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ItemTriggerGameObject>) {
devtools::registerNode<ItemTriggerGameObject>([](ItemTriggerGameObject* node) {
    devtools::label("Members for ItemTriggerGameObject:");
    devtools::property("m_item1Mode", node->m_item1Mode);
    devtools::property("m_item2Mode", node->m_item2Mode);
    devtools::property("m_targetItemMode", node->m_targetItemMode);
    devtools::property("m_mod1", node->m_mod1);
    devtools::property("m_mod2", node->m_mod2);
    devtools::property("m_resultType1", node->m_resultType1);
    devtools::property("m_resultType2", node->m_resultType2);
    devtools::property("m_resultType3", node->m_resultType3);
    devtools::property("m_tolerance", node->m_tolerance);
    devtools::property("m_roundType1", node->m_roundType1);
    devtools::property("m_roundType2", node->m_roundType2);
    devtools::property("m_signType1", node->m_signType1);
    devtools::property("m_signType2", node->m_signType2);
    devtools::property("m_persistent", node->m_persistent);
    devtools::property("m_targetAll", node->m_targetAll);
    devtools::property("m_reset", node->m_reset);
    devtools::property("m_timer", node->m_timer);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, KeybindingsLayer>) {
devtools::registerNode<KeybindingsLayer>([](KeybindingsLayer* node) {
    devtools::label("Members for KeybindingsLayer:");
    devtools::property("m_page", node->m_page);
    devtools::property("m_keyCount", node->m_keyCount);
    devtools::property("m_maxPage", node->m_maxPage);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_values at {}", (void*)node->m_values).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_variables at {}", (void*)node->m_variables).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, KeybindingsManager>) {
devtools::registerNode<KeybindingsManager>([](KeybindingsManager* node) {
    devtools::label("Members for KeybindingsManager:");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_keyToCommandDict at {}", (void*)node->m_keyToCommandDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_commandToKeyDict at {}", (void*)node->m_commandToKeyDict).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, KeyframeAnimTriggerObject>) {
devtools::registerNode<KeyframeAnimTriggerObject>([](KeyframeAnimTriggerObject* node) {
    devtools::label("Members for KeyframeAnimTriggerObject:");
    devtools::property("m_timeMod", node->m_timeMod);
    devtools::property("m_positionXMod", node->m_positionXMod);
    devtools::property("m_positionYMod", node->m_positionYMod);
    devtools::property("m_rotationMod", node->m_rotationMod);
    devtools::property("m_scaleXMod", node->m_scaleXMod);
    devtools::property("m_scaleYMod", node->m_scaleYMod);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, KeyframeGameObject>) {
devtools::registerNode<KeyframeGameObject>([](KeyframeGameObject* node) {
    devtools::label("Members for KeyframeGameObject:");
    devtools::property("m_keyframeGroup", node->m_keyframeGroup);
    devtools::property("m_keyframeIndex", node->m_keyframeIndex);
    devtools::property("m_referenceOnly", node->m_referenceOnly);
    devtools::property("m_proximity", node->m_proximity);
    devtools::property("m_curve", node->m_curve);
    devtools::property("m_closeLoop", node->m_closeLoop);
    devtools::property("m_timeMode", node->m_timeMode);
    devtools::property("m_unk760", node->m_unk760);
    devtools::property("m_spawnDelay", node->m_spawnDelay);
    devtools::property("m_previewArt", node->m_previewArt);
    devtools::property("m_keyframeActive", node->m_keyframeActive);
    devtools::property("m_autoLayer", node->m_autoLayer);
    devtools::property("m_direction", node->m_direction);
    devtools::property("m_revolutions", node->m_revolutions);
    devtools::property("m_lineOpacity", node->m_lineOpacity);
    devtools::label(fmt::format("cocos2d::CCArray* m_shadowObjects at {}", (void*)node->m_shadowObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_previewSprite at {}", (void*)node->m_previewSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LabelGameObject>) {
devtools::registerNode<LabelGameObject>([](LabelGameObject* node) {
    devtools::label("Members for LabelGameObject:");
    devtools::property("m_labelDirty", node->m_labelDirty);
    devtools::property("m_labelString", node->m_labelString);
    devtools::property("m_labelColorLocked", node->m_labelColorLocked);
    devtools::property("m_alignment", node->m_alignment);
    devtools::property("m_showSecondsOnly", node->m_showSecondsOnly);
    devtools::property("m_shownSpecial", node->m_shownSpecial);
    devtools::property("m_isTimeCounter", node->m_isTimeCounter);
    devtools::property("m_kerning", node->m_kerning);
    devtools::property("m_updateLabel", node->m_updateLabel);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_label at {}", (void*)node->m_label).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LeaderboardsLayer>) {
devtools::registerNode<LeaderboardsLayer>([](LeaderboardsLayer* node) {
    devtools::label("Members for LeaderboardsLayer:");
    devtools::enumerable("m_state", node->m_state, {
        { LeaderboardState::Default, "LeaderboardState::Default" },
        { LeaderboardState::Top100, "LeaderboardState::Top100" },
        { LeaderboardState::Global, "LeaderboardState::Global" },
        { LeaderboardState::Creator, "LeaderboardState::Creator" },
        { LeaderboardState::Friends, "LeaderboardState::Friends" },
    });
    devtools::label(fmt::format("GJListLayer* m_list at {}", (void*)node->m_list).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_userScores at {}", (void*)node->m_userScores).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_topBtn at {}", (void*)node->m_topBtn).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_globalBtn at {}", (void*)node->m_globalBtn).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_creatorsBtn at {}", (void*)node->m_creatorsBtn).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_friendsBtn at {}", (void*)node->m_friendsBtn).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("TextArea* m_noInternet at {}", (void*)node->m_noInternet).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_tabs at {}", (void*)node->m_tabs).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelAreaInnerLayer>) {
devtools::registerNode<LevelAreaInnerLayer>([](LevelAreaInnerLayer* node) {
    devtools::label("Members for LevelAreaInnerLayer:");
    devtools::property("m_enteringLevel", node->m_enteringLevel);
    devtools::property("m_levelID", node->m_levelID);
    devtools::property("m_exiting", node->m_exiting);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextFloorButton at {}", (void*)node->m_nextFloorButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelAreaLayer>) {
devtools::registerNode<LevelAreaLayer>([](LevelAreaLayer* node) {
    devtools::label("Members for LevelAreaLayer:");
    devtools::property("m_enteringTower", node->m_enteringTower);
    devtools::property("m_exiting", node->m_exiting);
    devtools::label(fmt::format("cocos2d::CCSprite* m_towerSprite at {}", (void*)node->m_towerSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_godRays at {}", (void*)node->m_godRays).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelBrowserLayer>) {
devtools::registerNode<LevelBrowserLayer>([](LevelBrowserLayer* node) {
    devtools::label("Members for LevelBrowserLayer:");
    devtools::property("m_unk", node->m_unk);
    devtools::property("m_allSelected", node->m_allSelected);
    devtools::property("m_itemCount", node->m_itemCount);
    devtools::property("m_pageStartIdx", node->m_pageStartIdx);
    devtools::property("m_pageEndIdx", node->m_pageEndIdx);
    devtools::property("m_lastPage", node->m_lastPage);
    devtools::property("m_isOverlay", node->m_isOverlay);
    devtools::property("m_zOffset", node->m_zOffset);
    devtools::property("m_unk2", node->m_unk2);
    devtools::property("m_listHeight", node->m_listHeight);
    devtools::property("m_unkFloat", node->m_unkFloat);
    devtools::property("m_unkFloat2", node->m_unkFloat2);
    devtools::property("m_cached", node->m_cached);
    devtools::label(fmt::format("TextArea* m_noInternet at {}", (void*)node->m_noInternet).c_str());
    devtools::label(fmt::format("GJListLayer* m_list at {}", (void*)node->m_list).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightArrow at {}", (void*)node->m_rightArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftArrow at {}", (void*)node->m_leftArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_lastBtn at {}", (void*)node->m_lastBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_cancelSearchBtn at {}", (void*)node->m_cancelSearchBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshBtn at {}", (void*)node->m_refreshBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_levels at {}", (void*)node->m_levels).c_str());
    devtools::label(fmt::format("GJSearchObject* m_searchObject at {}", (void*)node->m_searchObject).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_countText at {}", (void*)node->m_countText).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageText at {}", (void*)node->m_pageText).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_pageBtn at {}", (void*)node->m_pageBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_folderText at {}", (void*)node->m_folderText).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_folderBtn at {}", (void*)node->m_folderBtn).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_allObjectsToggler at {}", (void*)node->m_allObjectsToggler).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("cocos2d::CCScene* m_scene at {}", (void*)node->m_scene).c_str());
    devtools::label(fmt::format("TableViewCellDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelCell>) {
devtools::registerNode<LevelCell>([](LevelCell* node) {
    devtools::label("Members for LevelCell:");
    devtools::property("m_cellDrawn", node->m_cellDrawn);
    devtools::property("m_point", node->m_point);
    devtools::property("m_compactView", node->m_compactView);
    devtools::property("m_cellMode", node->m_cellMode);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_button at {}", (void*)node->m_button).c_str());
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_toggler at {}", (void*)node->m_toggler).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_mainMenu at {}", (void*)node->m_mainMenu).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelEditorLayer>) {
devtools::registerNode<LevelEditorLayer>([](LevelEditorLayer* node) {
    devtools::label("Members for LevelEditorLayer:");
    devtools::property("m_drawTriggerBoxes", node->m_drawTriggerBoxes);
    devtools::property("m_showGrid", node->m_showGrid);
    devtools::property("m_hideGridOnPlay", node->m_hideGridOnPlay);
    devtools::property("m_drawEffectLines", node->m_drawEffectLines);
    devtools::property("m_showGround", node->m_showGround);
    devtools::property("m_showDurationLines", node->m_showDurationLines);
    devtools::property("m_increaseMaxUndoRedo", node->m_increaseMaxUndoRedo);
    devtools::property("m_hideBackground", node->m_hideBackground);
    devtools::property("m_gv0120", node->m_gv0120);
    devtools::property("m_layerLockingEnabled", node->m_layerLockingEnabled);
    devtools::property("m_playtestOrderChanged", node->m_playtestOrderChanged);
    devtools::property("m_previewParticles", node->m_previewParticles);
    devtools::property("m_previewAnimations", node->m_previewAnimations);
    devtools::property("m_previewShaders", node->m_previewShaders);
    devtools::property("m_hideParticleIcons", node->m_hideParticleIcons);
    devtools::property("m_alwaysHideParticleIcons", node->m_alwaysHideParticleIcons);
    devtools::property("m_playTestSmoothFix", node->m_playTestSmoothFix);
    devtools::property("m_hasHighDetail", node->m_hasHighDetail);
    devtools::property("m_unk36ca", node->m_unk36ca);
    devtools::property("m_unk36cc", node->m_unk36cc);
    devtools::property("m_collisionBlocksAdded", node->m_collisionBlocksAdded);
    devtools::property("m_unk36d4", node->m_unk36d4);
    devtools::property("m_keepEditorLayer", node->m_keepEditorLayer);
    devtools::property("m_unk3751", node->m_unk3751);
    devtools::property("m_triggersChanged", node->m_triggersChanged);
    devtools::property("m_colorTriggersChanged", node->m_colorTriggersChanged);
    devtools::property("m_pulseTriggersChanged", node->m_pulseTriggersChanged);
    devtools::property("m_alphaTriggersChanged", node->m_alphaTriggersChanged);
    devtools::property("m_spawnTriggersChanged", node->m_spawnTriggersChanged);
    devtools::property("m_spawnOrderObjectsChanged", node->m_spawnOrderObjectsChanged);
    devtools::property("m_sortSpawnNodes", node->m_sortSpawnNodes);
    devtools::property("m_initializing", node->m_initializing);
    devtools::property("m_currentLayer", node->m_currentLayer);
    devtools::property("m_playtestZoom", node->m_playtestZoom);
    devtools::property("m_playtestTimeWarp", node->m_playtestTimeWarp);
    devtools::property("m_playtestCameraZoom", node->m_playtestCameraZoom);
    devtools::property("m_trailTimer", node->m_trailTimer);
    devtools::property("m_soloMode", node->m_soloMode);
    devtools::property("m_nonSquareRotation", node->m_nonSquareRotation);
    devtools::property("m_updateColorSprites", node->m_updateColorSprites);
    devtools::property("m_previewMode", node->m_previewMode);
    devtools::property("m_alwaysPreviewMode", node->m_alwaysPreviewMode);
    devtools::property("m_levelString", node->m_levelString);
    devtools::property("m_previewPosition", node->m_previewPosition);
    devtools::property("m_sessionTime", node->m_sessionTime);
    devtools::property("m_removingAll", node->m_removingAll);
    devtools::property("m_playbackOrder", node->m_playbackOrder);
    devtools::property("m_duplicateKeyframeGroup", node->m_duplicateKeyframeGroup);
    devtools::property("m_playbackActive", node->m_playbackActive);
    devtools::property("m_activateAudioTriggers", node->m_activateAudioTriggers);
    devtools::label(fmt::format("cocos2d::CCArray* m_durationObjects at {}", (void*)node->m_durationObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pulseTriggers at {}", (void*)node->m_pulseTriggers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_colorTriggers at {}", (void*)node->m_colorTriggers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_alphaTriggers at {}", (void*)node->m_alphaTriggers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_spawnTriggers at {}", (void*)node->m_spawnTriggers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_moveTriggers at {}", (void*)node->m_moveTriggers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_cameraGuideTriggers at {}", (void*)node->m_cameraGuideTriggers).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_particleObjects at {}", (void*)node->m_particleObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_keyframeObjects at {}", (void*)node->m_keyframeObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unk3720 at {}", (void*)node->m_unk3720).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_playtestTriggers at {}", (void*)node->m_playtestTriggers).c_str());
    devtools::label(fmt::format("GameObject* m_copyStateObject at {}", (void*)node->m_copyStateObject).c_str());
    devtools::label(fmt::format("ParticleGameObject* m_particleObject at {}", (void*)node->m_particleObject).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unk3740 at {}", (void*)node->m_unk3740).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unk3748 at {}", (void*)node->m_unk3748).c_str());
    devtools::label("geode::SeedValueRSV m_coinCount");
    devtools::label(fmt::format("cocos2d::CCArray* m_spawnOrderObjects at {}", (void*)node->m_spawnOrderObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unk3778 at {}", (void*)node->m_unk3778).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_unk3780 at {}", (void*)node->m_unk3780).c_str());
    devtools::label(fmt::format("OBB2D* m_currentOBB2D at {}", (void*)node->m_currentOBB2D).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_playtestDeathSprite at {}", (void*)node->m_playtestDeathSprite).c_str());
    devtools::label(fmt::format("EditorUI* m_editorUI at {}", (void*)node->m_editorUI).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_undoObjects at {}", (void*)node->m_undoObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_redoObjects at {}", (void*)node->m_redoObjects).c_str());
    devtools::label("geode::SeedValueRSV m_objectCount");
    devtools::label(fmt::format("DrawGridLayer* m_drawGridLayer at {}", (void*)node->m_drawGridLayer).c_str());
    devtools::label("gd::vector<GameObject*> m_objectVector");
    devtools::label("gd::vector<GameObject*> m_loadedMoveObjects");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_triggerGroupsDict at {}", (void*)node->m_triggerGroupsDict).c_str());
    devtools::label("gd::vector<cocos2d::CCArray*> m_triggerGroups");
    devtools::label("gd::vector<cocos2d::CCPoint> m_playerPoints");
    devtools::label("gd::vector<gd::vector<cocos2d::CCPoint>> m_player2Points");
    devtools::label("gd::vector<cocos2d::CCPoint> m_touchPoints");
    devtools::label("gd::vector<bool> m_sortedGroups");
    devtools::label("gd::vector<bool> m_toggledGroups");
    devtools::label("gd::vector<bool> m_lockedLayers");
    devtools::label("gd::vector<cocos2d::CCPoint> m_savedPositions");
    devtools::label("gd::vector<bool> m_blendingColors");
    devtools::label("gd::vector<bool> m_blendingColors2");
    devtools::label("gd::vector<unsigned char> m_toggledGroupStates");
    devtools::label("gd::vector<float> m_spawnGroupDelays");
    devtools::label(fmt::format("EffectGameObject* m_playbackObject at {}", (void*)node->m_playbackObject).c_str());
    devtools::label("gd::vector<DelayedSpawnNode*> m_delayedSpawnNodes");
    devtools::label("gd::vector<DelayedSpawnNode*> m_delayedSpawnNodes2");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelFeatureLayer>) {
devtools::registerNode<LevelFeatureLayer>([](LevelFeatureLayer* node) {
    devtools::label("Members for LevelFeatureLayer:");
    devtools::property("m_levelID", node->m_levelID);
    devtools::property("m_featurePosition", node->m_featurePosition);
    devtools::property("m_epicOnly", node->m_epicOnly);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_featureLabel at {}", (void*)node->m_featureLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_epicSprite at {}", (void*)node->m_epicSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelInfoLayer>) {
devtools::registerNode<LevelInfoLayer>([](LevelInfoLayer* node) {
    devtools::label("Members for LevelInfoLayer:");
    devtools::property("m_isBusy", node->m_isBusy);
    devtools::enumerable("m_levelType", node->m_levelType, {
        { GJLevelType::Default, "GJLevelType::Default" },
        { GJLevelType::Main, "GJLevelType::Main" },
        { GJLevelType::Editor, "GJLevelType::Editor" },
        { GJLevelType::Saved, "GJLevelType::Saved" },
        { GJLevelType::SearchResult, "GJLevelType::SearchResult" },
    });
    devtools::property("m_noUpdateAlert", node->m_noUpdateAlert);
    devtools::property("m_enterTransitionFinished", node->m_enterTransitionFinished);
    devtools::property("m_iconOffset", node->m_iconOffset);
    devtools::property("m_basePosition", node->m_basePosition);
    devtools::property("m_baseStarsY", node->m_baseStarsY);
    devtools::property("m_challenge", node->m_challenge);
    devtools::label(fmt::format("cocos2d::CCMenu* m_playBtnMenu at {}", (void*)node->m_playBtnMenu).c_str());
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_coins at {}", (void*)node->m_coins).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_likeBtn at {}", (void*)node->m_likeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_starRateBtn at {}", (void*)node->m_starRateBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_demonRateBtn at {}", (void*)node->m_demonRateBtn).c_str());
    devtools::label(fmt::format("void* m_unk2 at {}", (void*)node->m_unk2).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_lengthLabel at {}", (void*)node->m_lengthLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_exactLengthLabel at {}", (void*)node->m_exactLengthLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_downloadsLabel at {}", (void*)node->m_downloadsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_likesLabel at {}", (void*)node->m_likesLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_orbsLabel at {}", (void*)node->m_orbsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_folderLabel at {}", (void*)node->m_folderLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_cloneBtn at {}", (void*)node->m_cloneBtn).c_str());
    devtools::label(fmt::format("void* m_unk3 at {}", (void*)node->m_unk3).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_likesIcon at {}", (void*)node->m_likesIcon).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_orbsIcon at {}", (void*)node->m_orbsIcon).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("GJDifficultySprite* m_difficultySprite at {}", (void*)node->m_difficultySprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_starsIcon at {}", (void*)node->m_starsIcon).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_starsLabel at {}", (void*)node->m_starsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_icons at {}", (void*)node->m_icons).c_str());
    devtools::label(fmt::format("cocos2d::CCScene* m_playScene at {}", (void*)node->m_playScene).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_playSprite at {}", (void*)node->m_playSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCProgressTimer* m_progressTimer at {}", (void*)node->m_progressTimer).c_str());
    devtools::label(fmt::format("CustomSongWidget* m_songWidget at {}", (void*)node->m_songWidget).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelLeaderboard>) {
devtools::registerNode<LevelLeaderboard>([](LevelLeaderboard* node) {
    devtools::label("Members for LevelLeaderboard:");
    devtools::enumerable("m_type", node->m_type, {
        { LevelLeaderboardType::Friends, "LevelLeaderboardType::Friends" },
        { LevelLeaderboardType::Global, "LevelLeaderboardType::Global" },
        { LevelLeaderboardType::Weekly, "LevelLeaderboardType::Weekly" },
        { LevelLeaderboardType::Local, "LevelLeaderboardType::Local" },
    });
    devtools::enumerable("m_mode", node->m_mode, {
        { LevelLeaderboardMode::Time, "LevelLeaderboardMode::Time" },
        { LevelLeaderboardMode::Points, "LevelLeaderboardMode::Points" },
    });
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_scores at {}", (void*)node->m_scores).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_list at {}", (void*)node->m_list).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("TextArea* m_noInternet at {}", (void*)node->m_noInternet).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshBtn at {}", (void*)node->m_refreshBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_timeBtn at {}", (void*)node->m_timeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_pointsBtn at {}", (void*)node->m_pointsBtn).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelListCell>) {
devtools::registerNode<LevelListCell>([](LevelListCell* node) {
    devtools::label("Members for LevelListCell:");
    devtools::property("m_addingLevel", node->m_addingLevel);
    devtools::label(fmt::format("GJLevelList* m_levelList at {}", (void*)node->m_levelList).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelListLayer>) {
devtools::registerNode<LevelListLayer>([](LevelListLayer* node) {
    devtools::label("Members for LevelListLayer:");
    devtools::property("m_searchKey1", node->m_searchKey1);
    devtools::property("m_searchKey2", node->m_searchKey2);
    devtools::property("m_exiting", node->m_exiting);
    devtools::property("m_editMode", node->m_editMode);
    devtools::property("m_rewardPosition", node->m_rewardPosition);
    devtools::property("m_exited", node->m_exited);
    devtools::label(fmt::format("cocos2d::CCMenu* m_buttonMenu at {}", (void*)node->m_buttonMenu).c_str());
    devtools::label(fmt::format("GJLevelList* m_levelList at {}", (void*)node->m_levelList).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_likeButton at {}", (void*)node->m_likeButton).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_titleInput at {}", (void*)node->m_titleInput).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_objects at {}", (void*)node->m_objects).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_diffSprite at {}", (void*)node->m_diffSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_featureSprite at {}", (void*)node->m_featureSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelOptionsLayer>) {
devtools::registerNode<LevelOptionsLayer>([](LevelOptionsLayer* node) {
    devtools::label("Members for LevelOptionsLayer:");
    devtools::label(fmt::format("LevelSettingsObject* m_settingsObject at {}", (void*)node->m_settingsObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelPage>) {
devtools::registerNode<LevelPage>([](LevelPage* node) {
    devtools::label("Members for LevelPage:");
    devtools::property("m_isBusy", node->m_isBusy);
    devtools::property("m_progressWidth", node->m_progressWidth);
    devtools::property("m_levelDisplaySize", node->m_levelDisplaySize);
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_levelMenu at {}", (void*)node->m_levelMenu).c_str());
    devtools::label(fmt::format("cocos2d::extension::CCScale9Sprite* m_levelDisplay at {}", (void*)node->m_levelDisplay).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_normalProgressLabel at {}", (void*)node->m_normalProgressLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_practiceProgressLabel at {}", (void*)node->m_practiceProgressLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_nameLabel at {}", (void*)node->m_nameLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_starsLabel at {}", (void*)node->m_starsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_normalProgressBar at {}", (void*)node->m_normalProgressBar).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_practiceProgressBar at {}", (void*)node->m_practiceProgressBar).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_difficultySprite at {}", (void*)node->m_difficultySprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_starsSprite at {}", (void*)node->m_starsSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_coins at {}", (void*)node->m_coins).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_dynamicObjects at {}", (void*)node->m_dynamicObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_levelObjects at {}", (void*)node->m_levelObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_progressObjects at {}", (void*)node->m_progressObjects).c_str());
    devtools::label(fmt::format("GameObject* m_coinObject at {}", (void*)node->m_coinObject).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_secretDoor at {}", (void*)node->m_secretDoor).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelSearchLayer>) {
devtools::registerNode<LevelSearchLayer>([](LevelSearchLayer* node) {
    devtools::label("Members for LevelSearchLayer:");
    devtools::property("m_type", node->m_type);
    devtools::label(fmt::format("CCTextInputNode* m_searchInput at {}", (void*)node->m_searchInput).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_starsSprite at {}", (void*)node->m_starsSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_difficultySprites at {}", (void*)node->m_difficultySprites).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_lengthSprites at {}", (void*)node->m_lengthSprites).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_difficultyDict at {}", (void*)node->m_difficultyDict).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_lastDifficultySprite at {}", (void*)node->m_lastDifficultySprite).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_demonTypeButton at {}", (void*)node->m_demonTypeButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelSelectLayer>) {
devtools::registerNode<LevelSelectLayer>([](LevelSelectLayer* node) {
    devtools::label("Members for LevelSelectLayer:");
    devtools::property("m_width", node->m_width);
    devtools::property("m_unknown", node->m_unknown);
    devtools::property("m_scrolls", node->m_scrolls);
    devtools::property("m_masterDetectiveUnlocked", node->m_masterDetectiveUnlocked);
    devtools::label(fmt::format("cocos2d::CCSprite* m_backgroundSprite at {}", (void*)node->m_backgroundSprite).c_str());
    devtools::label(fmt::format("GJGroundLayer* m_groundLayer at {}", (void*)node->m_groundLayer).c_str());
    devtools::label(fmt::format("BoomScrollLayer* m_scrollLayer at {}", (void*)node->m_scrollLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelSettingsLayer>) {
devtools::registerNode<LevelSettingsLayer>([](LevelSettingsLayer* node) {
    devtools::label("Members for LevelSettingsLayer:");
    devtools::enumerable("m_speed", node->m_speed, {
        { Speed::Normal, "Speed::Normal" },
        { Speed::Slow, "Speed::Slow" },
        { Speed::Fast, "Speed::Fast" },
        { Speed::Faster, "Speed::Faster" },
        { Speed::Fastest, "Speed::Fastest" },
    });
    devtools::property("m_disableInput", node->m_disableInput);
    devtools::label(fmt::format("SongSelectNode* m_songSelectNode at {}", (void*)node->m_songSelectNode).c_str());
    devtools::label(fmt::format("ColorChannelSprite* m_bgColorSprite at {}", (void*)node->m_bgColorSprite).c_str());
    devtools::label(fmt::format("ColorChannelSprite* m_gColorSprite at {}", (void*)node->m_gColorSprite).c_str());
    devtools::label(fmt::format("ColorChannelSprite* m_g2ColorSprite at {}", (void*)node->m_g2ColorSprite).c_str());
    devtools::label(fmt::format("ColorChannelSprite* m_lineColorSprite at {}", (void*)node->m_lineColorSprite).c_str());
    devtools::label(fmt::format("ColorChannelSprite* m_mgColorSprite at {}", (void*)node->m_mgColorSprite).c_str());
    devtools::label(fmt::format("ColorChannelSprite* m_mg2ColorSprite at {}", (void*)node->m_mg2ColorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_moreColorsSprite at {}", (void*)node->m_moreColorsSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_backgroundSprite at {}", (void*)node->m_backgroundSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_groundSprite at {}", (void*)node->m_groundSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_middlegroundSprite at {}", (void*)node->m_middlegroundSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_speedSprite at {}", (void*)node->m_speedSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_modeSprite at {}", (void*)node->m_modeSprite).c_str());
    devtools::label(fmt::format("LevelSettingsObject* m_settingsObject at {}", (void*)node->m_settingsObject).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_modeToggles at {}", (void*)node->m_modeToggles).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_speedButtons at {}", (void*)node->m_speedButtons).c_str());
    devtools::label(fmt::format("LevelSettingsDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("LevelEditorLayer* m_editorLayer at {}", (void*)node->m_editorLayer).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_orderInput at {}", (void*)node->m_orderInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_channelInput at {}", (void*)node->m_channelInput).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_classicButton at {}", (void*)node->m_classicButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_platformerButton at {}", (void*)node->m_platformerButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LevelSettingsObject>) {
devtools::registerNode<LevelSettingsObject>([](LevelSettingsObject* node) {
    devtools::label("Members for LevelSettingsObject:");
    devtools::property("m_startMode", node->m_startMode);
    devtools::enumerable("m_startSpeed", node->m_startSpeed, {
        { Speed::Normal, "Speed::Normal" },
        { Speed::Slow, "Speed::Slow" },
        { Speed::Fast, "Speed::Fast" },
        { Speed::Faster, "Speed::Faster" },
        { Speed::Fastest, "Speed::Fastest" },
    });
    devtools::property("m_startMini", node->m_startMini);
    devtools::property("m_startDual", node->m_startDual);
    devtools::property("m_mirrorMode", node->m_mirrorMode);
    devtools::property("m_rotateGameplay", node->m_rotateGameplay);
    devtools::property("m_twoPlayerMode", node->m_twoPlayerMode);
    devtools::property("m_platformerMode", node->m_platformerMode);
    devtools::property("m_songOffset", node->m_songOffset);
    devtools::property("m_fadeIn", node->m_fadeIn);
    devtools::property("m_fadeOut", node->m_fadeOut);
    devtools::property("m_dontReset", node->m_dontReset);
    devtools::property("m_backgroundIndex", node->m_backgroundIndex);
    devtools::property("m_groundIndex", node->m_groundIndex);
    devtools::property("m_fontIndex", node->m_fontIndex);
    devtools::property("m_middleGroundIndex", node->m_middleGroundIndex);
    devtools::property("m_startsWithStartPos", node->m_startsWithStartPos);
    devtools::property("m_isFlipped", node->m_isFlipped);
    devtools::property("m_reverseGameplay", node->m_reverseGameplay);
    devtools::property("m_disableStartPos", node->m_disableStartPos);
    devtools::property("m_targetOrder", node->m_targetOrder);
    devtools::property("m_targetChannel", node->m_targetChannel);
    devtools::property("m_guidelineString", node->m_guidelineString);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::property("m_colorPage", node->m_colorPage);
    devtools::property("m_groundLineIndex", node->m_groundLineIndex);
    devtools::property("m_propertykA23", node->m_propertykA23);
    devtools::property("m_propertykA24", node->m_propertykA24);
    devtools::property("m_noTimePenalty", node->m_noTimePenalty);
    devtools::property("m_propertykA44", node->m_propertykA44);
    devtools::property("m_resetCamera", node->m_resetCamera);
    devtools::property("m_spawnGroup", node->m_spawnGroup);
    devtools::property("m_allowMultiRotation", node->m_allowMultiRotation);
    devtools::property("m_enablePlayerSqueeze", node->m_enablePlayerSqueeze);
    devtools::property("m_fixGravityBug", node->m_fixGravityBug);
    devtools::property("m_fixNegativeScale", node->m_fixNegativeScale);
    devtools::property("m_fixRobotJump", node->m_fixRobotJump);
    devtools::property("m_dynamicLevelHeight", node->m_dynamicLevelHeight);
    devtools::property("m_sortGroups", node->m_sortGroups);
    devtools::property("m_fixRadiusCollision", node->m_fixRadiusCollision);
    devtools::property("m_enable22Changes", node->m_enable22Changes);
    devtools::property("m_allowStaticRotate", node->m_allowStaticRotate);
    devtools::property("m_reverseSync", node->m_reverseSync);
    devtools::property("m_decreaseBoostSlide", node->m_decreaseBoostSlide);
    devtools::label(fmt::format("GJEffectManager* m_effectManager at {}", (void*)node->m_effectManager).c_str());
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LikeItemLayer>) {
devtools::registerNode<LikeItemLayer>([](LikeItemLayer* node) {
    devtools::label("Members for LikeItemLayer:");
    devtools::enumerable("m_itemType", node->m_itemType, {
        { LikeItemType::Unknown, "LikeItemType::Unknown" },
        { LikeItemType::Level, "LikeItemType::Level" },
        { LikeItemType::Comment, "LikeItemType::Comment" },
        { LikeItemType::AccountComment, "LikeItemType::AccountComment" },
        { LikeItemType::LevelList, "LikeItemType::LevelList" },
    });
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_commentSourceID", node->m_commentSourceID);
    devtools::label(fmt::format("LikeItemDelegate* m_likeDelegate at {}", (void*)node->m_likeDelegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ListButtonBar>) {
devtools::registerNode<ListButtonBar>([](ListButtonBar* node) {
    devtools::label("Members for ListButtonBar:");
    devtools::property("m_useMoveAnimation", node->m_useMoveAnimation);
    devtools::label(fmt::format("BoomScrollLayer* m_scrollLayer at {}", (void*)node->m_scrollLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_pages at {}", (void*)node->m_pages).c_str());
    devtools::label(fmt::format("ListButtonBarDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ListCell>) {
devtools::registerNode<ListCell>([](ListCell* node) {
    devtools::label("Members for ListCell:");
    devtools::property("m_unk230", node->m_unk230);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LoadingCircle>) {
devtools::registerNode<LoadingCircle>([](LoadingCircle* node) {
    devtools::label("Members for LoadingCircle:");
    devtools::property("m_fade", node->m_fade);
    devtools::label(fmt::format("cocos2d::CCSprite* m_sprite at {}", (void*)node->m_sprite).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_parentLayer at {}", (void*)node->m_parentLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LoadingLayer>) {
devtools::registerNode<LoadingLayer>([](LoadingLayer* node) {
    devtools::label("Members for LoadingLayer:");
    devtools::property("m_unknown", node->m_unknown);
    devtools::property("m_unknown2", node->m_unknown2);
    devtools::property("m_loadStep", node->m_loadStep);
    devtools::property("m_sliderGrooveXPos", node->m_sliderGrooveXPos);
    devtools::property("m_sliderGrooveHeight", node->m_sliderGrooveHeight);
    devtools::property("m_fromRefresh", node->m_fromRefresh);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_caption at {}", (void*)node->m_caption).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_sliderBar at {}", (void*)node->m_sliderBar).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, LocalLevelManager>) {
devtools::registerNode<LocalLevelManager>([](LocalLevelManager* node) {
    devtools::label("Members for LocalLevelManager:");
    devtools::label(fmt::format("cocos2d::CCArray* m_localLevels at {}", (void*)node->m_localLevels).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_localLists at {}", (void*)node->m_localLists).c_str());
    devtools::label("gd::unordered_map<int, gd::string> m_mainLevels");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MapPackCell>) {
devtools::registerNode<MapPackCell>([](MapPackCell* node) {
    devtools::label("Members for MapPackCell:");
    devtools::label(fmt::format("GJMapPack* m_mapPack at {}", (void*)node->m_mapPack).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_viewButton at {}", (void*)node->m_viewButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rewardButton at {}", (void*)node->m_rewardButton).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_rewardLabels at {}", (void*)node->m_rewardLabels).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_rewardSprites at {}", (void*)node->m_rewardSprites).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MapSelectLayer>) {
devtools::registerNode<MapSelectLayer>([](MapSelectLayer* node) {
    devtools::label("Members for MapSelectLayer:");
    devtools::property("m_unloadTexturesOnExit", node->m_unloadTexturesOnExit);
    devtools::property("m_backPressed", node->m_backPressed);
    devtools::property("m_blockExit", node->m_blockExit);
    devtools::property("m_inTouch", node->m_inTouch);
    devtools::property("m_lastTouchTime", node->m_lastTouchTime);
    devtools::property("m_editMode", node->m_editMode);
    devtools::property("m_lastTouchPos", node->m_lastTouchPos);
    devtools::property("m_mapPos", node->m_mapPos);
    devtools::label(fmt::format("GJBigSprite* m_bigSprite at {}", (void*)node->m_bigSprite).c_str());
    devtools::label(fmt::format("SimplePlayer* m_player at {}", (void*)node->m_player).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_monsters at {}", (void*)node->m_monsters).c_str());
    devtools::label(fmt::format("LevelEditorLayer* m_editorLayer at {}", (void*)node->m_editorLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MenuGameLayer>) {
devtools::registerNode<MenuGameLayer>([](MenuGameLayer* node) {
    devtools::label("Members for MenuGameLayer:");
    devtools::property("m_videoOptionsOpen", node->m_videoOptionsOpen);
    devtools::property("m_deltaCount", node->m_deltaCount);
    devtools::property("m_isDestroyingPlayer", node->m_isDestroyingPlayer);
    devtools::property("m_initCount", node->m_initCount);
    devtools::property("m_realBackgroundPosition", node->m_realBackgroundPosition);
    devtools::property("m_backgroundWrapPosition", node->m_backgroundWrapPosition);
    devtools::label(fmt::format("PlayerObject* m_playerObject at {}", (void*)node->m_playerObject).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_backgroundSprite at {}", (void*)node->m_backgroundSprite).c_str());
    devtools::label(fmt::format("GJGroundLayer* m_groundLayer at {}", (void*)node->m_groundLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MenuLayer>) {
devtools::registerNode<MenuLayer>([](MenuLayer* node) {
    devtools::label("Members for MenuLayer:");
    devtools::property("m_showingTOS", node->m_showingTOS);
    devtools::label(fmt::format("cocos2d::CCSprite* m_gpSprite at {}", (void*)node->m_gpSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_viewProfileSprite at {}", (void*)node->m_viewProfileSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_profileLabel at {}", (void*)node->m_profileLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_profileButton at {}", (void*)node->m_profileButton).c_str());
    devtools::label(fmt::format("void* m_unknown at {}", (void*)node->m_unknown).c_str());
    devtools::label(fmt::format("MenuGameLayer* m_menuGameLayer at {}", (void*)node->m_menuGameLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MessagesProfilePage>) {
devtools::registerNode<MessagesProfilePage>([](MessagesProfilePage* node) {
    devtools::label("Members for MessagesProfilePage:");
    devtools::property("m_sentMessages", node->m_sentMessages);
    devtools::property("m_messageKey", node->m_messageKey);
    devtools::property("m_itemCount", node->m_itemCount);
    devtools::property("m_pageStartIdx", node->m_pageStartIdx);
    devtools::property("m_pageEndIdx", node->m_pageEndIdx);
    devtools::property("m_page", node->m_page);
    devtools::property("m_toggledAll", node->m_toggledAll);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_levelsLabel at {}", (void*)node->m_levelsLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_errorLabel at {}", (void*)node->m_errorLabel).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_actionPopup at {}", (void*)node->m_actionPopup).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshButton at {}", (void*)node->m_refreshButton).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_toggleAllToggler at {}", (void*)node->m_toggleAllToggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MoreOptionsLayer>) {
devtools::registerNode<MoreOptionsLayer>([](MoreOptionsLayer* node) {
    devtools::label("Members for MoreOptionsLayer:");
    devtools::property("m_page", node->m_page);
    devtools::property("m_toggleCount", node->m_toggleCount);
    devtools::property("m_pageCount", node->m_pageCount);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_variables at {}", (void*)node->m_variables).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_objects at {}", (void*)node->m_objects).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftBtn at {}", (void*)node->m_leftBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightBtn at {}", (void*)node->m_rightBtn).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_offsetInput at {}", (void*)node->m_offsetInput).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_gpSignInBtn at {}", (void*)node->m_gpSignInBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_gpSignOutBtn at {}", (void*)node->m_gpSignOutBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_categoryLabel at {}", (void*)node->m_categoryLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MoreSearchLayer>) {
devtools::registerNode<MoreSearchLayer>([](MoreSearchLayer* node) {
    devtools::label("Members for MoreSearchLayer:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_audioTrackName at {}", (void*)node->m_audioTrackName).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_songLeftBtn at {}", (void*)node->m_songLeftBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_songRightBtn at {}", (void*)node->m_songRightBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_normalBtn at {}", (void*)node->m_normalBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_customBtn at {}", (void*)node->m_customBtn).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_enterSongID at {}", (void*)node->m_enterSongID).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_commonSongNodes at {}", (void*)node->m_commonSongNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_normalSongNodes at {}", (void*)node->m_normalSongNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_customSongNodes at {}", (void*)node->m_customSongNodes).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MoreVideoOptionsLayer>) {
devtools::registerNode<MoreVideoOptionsLayer>([](MoreVideoOptionsLayer* node) {
    devtools::label("Members for MoreVideoOptionsLayer:");
    devtools::property("m_page", node->m_page);
    devtools::property("m_toggleCount", node->m_toggleCount);
    devtools::property("m_pageCount", node->m_pageCount);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_values at {}", (void*)node->m_values).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_variables at {}", (void*)node->m_variables).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_fpsInput at {}", (void*)node->m_fpsInput).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_fpsNodes at {}", (void*)node->m_fpsNodes).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MPLobbyLayer>) {
devtools::registerNode<MPLobbyLayer>([](MPLobbyLayer* node) {
    devtools::label("Members for MPLobbyLayer:");
    devtools::property("m_lobbyID", node->m_lobbyID);
    devtools::property("m_lobbyDelay", node->m_lobbyDelay);
    devtools::property("m_awaitingLobby", node->m_awaitingLobby);
    devtools::property("m_lobbyJoined", node->m_lobbyJoined);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_lobbyLabel at {}", (void*)node->m_lobbyLabel).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_uploadPopup at {}", (void*)node->m_uploadPopup).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_commentInput at {}", (void*)node->m_commentInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MultilineBitmapFont>) {
devtools::registerNode<MultilineBitmapFont>([](MultilineBitmapFont* node) {
    devtools::label("Members for MultilineBitmapFont:");
    devtools::property("m_unkInt", node->m_unkInt);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::property("m_height", node->m_height);
    devtools::property("m_width", node->m_width);
    devtools::property("m_position", node->m_position);
    devtools::property("m_maxWidth", node->m_maxWidth);
    devtools::property("m_disableColor", node->m_disableColor);
    devtools::label("std::array<int, 300> m_hugeIntArray");
    devtools::label(fmt::format("cocos2d::CCArray* m_specialDescriptors at {}", (void*)node->m_specialDescriptors).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_characters at {}", (void*)node->m_characters).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_lines at {}", (void*)node->m_lines).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MusicArtistObject>) {
devtools::registerNode<MusicArtistObject>([](MusicArtistObject* node) {
    devtools::label("Members for MusicArtistObject:");
    devtools::property("m_artistID", node->m_artistID);
    devtools::property("m_artistName", node->m_artistName);
    devtools::property("m_artistURL", node->m_artistURL);
    devtools::property("m_artistYouTube", node->m_artistYouTube);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MusicBrowser>) {
devtools::registerNode<MusicBrowser>([](MusicBrowser* node) {
    devtools::label("Members for MusicBrowser:");
    devtools::enumerable("m_songType", node->m_songType, {
        { GJSongType::Music, "GJSongType::Music" },
        { GJSongType::NCS, "GJSongType::NCS" },
    });
    devtools::property("m_songID", node->m_songID);
    devtools::property("m_libraryVersion", node->m_libraryVersion);
    devtools::property("m_gettingURL", node->m_gettingURL);
    devtools::property("m_selectedCell", node->m_selectedCell);
    devtools::property("m_autoUpdating", node->m_autoUpdating);
    devtools::label(fmt::format("MusicSearchResult* m_searchResult at {}", (void*)node->m_searchResult).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_infoLabel at {}", (void*)node->m_infoLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageLabel at {}", (void*)node->m_pageLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshButton at {}", (void*)node->m_refreshButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_clearSearchButton at {}", (void*)node->m_clearSearchButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_tagFilterButton at {}", (void*)node->m_tagFilterButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_artistFilterButton at {}", (void*)node->m_artistFilterButton).c_str());
    devtools::label(fmt::format("LoadingCircleSprite* m_circleSprite at {}", (void*)node->m_circleSprite).c_str());
    devtools::label(fmt::format("MusicBrowserDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("Slider* m_playSlider at {}", (void*)node->m_playSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_playLabel at {}", (void*)node->m_playLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_playButton at {}", (void*)node->m_playButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MusicDelegateHandler>) {
devtools::registerNode<MusicDelegateHandler>([](MusicDelegateHandler* node) {
    devtools::label("Members for MusicDelegateHandler:");
    devtools::label(fmt::format("MusicDownloadDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MusicDownloadManager>) {
devtools::registerNode<MusicDownloadManager>([](MusicDownloadManager* node) {
    devtools::label("Members for MusicDownloadManager:");
    devtools::property("m_songPriority", node->m_songPriority);
    devtools::property("m_customContentURL", node->m_customContentURL);
    devtools::property("m_sfxLibraryVersion", node->m_sfxLibraryVersion);
    devtools::property("m_sfxObjectCount", node->m_sfxObjectCount);
    devtools::property("m_requestedSfxLibraryDownloaded", node->m_requestedSfxLibraryDownloaded);
    devtools::property("m_musicLibraryVersion", node->m_musicLibraryVersion);
    devtools::property("m_musicObjectCount", node->m_musicObjectCount);
    devtools::property("m_ncsSongCount", node->m_ncsSongCount);
    devtools::property("m_downloadingMusicLibrary", node->m_downloadingMusicLibrary);
    devtools::property("m_triedToLoadLibraries", node->m_triedToLoadLibraries);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_activeDownloads at {}", (void*)node->m_activeDownloads).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_musicDownloadDelegates at {}", (void*)node->m_musicDownloadDelegates).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_songObjects at {}", (void*)node->m_songObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_MDLM003 at {}", (void*)node->m_MDLM003).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_sfxObjects at {}", (void*)node->m_sfxObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_sfxArtists at {}", (void*)node->m_sfxArtists).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_musicObjects at {}", (void*)node->m_musicObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_musicArtists at {}", (void*)node->m_musicArtists).c_str());
    devtools::label("gd::map<int, gd::string> m_musicTags");
    devtools::label("gd::unordered_set<int> m_resourceSfxUnorderedSet");
    devtools::label("gd::unordered_set<int> m_resourceSongUnorderedSet");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, MusicSearchResult>) {
devtools::registerNode<MusicSearchResult>([](MusicSearchResult* node) {
    devtools::label("Members for MusicSearchResult:");
    devtools::property("m_startIndex", node->m_startIndex);
    devtools::property("m_audioType", node->m_audioType);
    devtools::property("m_searchQuery", node->m_searchQuery);
    devtools::enumerable("m_sortType", node->m_sortType, {
        { AudioSortType::NameAscending, "AudioSortType::NameAscending" },
        { AudioSortType::NameDescending, "AudioSortType::NameDescending" },
        { AudioSortType::LengthAscending, "AudioSortType::LengthAscending" },
        { AudioSortType::LengthDescending, "AudioSortType::LengthDescending" },
        { AudioSortType::IDAscending, "AudioSortType::IDAscending" },
        { AudioSortType::IDDescending, "AudioSortType::IDDescending" },
        { AudioSortType::SongOrder, "AudioSortType::SongOrder" },
    });
    devtools::property("m_tagFilter", node->m_tagFilter);
    devtools::property("m_artistFilter", node->m_artistFilter);
    devtools::enumerable("m_songType", node->m_songType, {
        { GJSongType::Music, "GJSongType::Music" },
        { GJSongType::NCS, "GJSongType::NCS" },
    });
    devtools::label(fmt::format("cocos2d::CCArray* m_filterObjects at {}", (void*)node->m_filterObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_tagFilterObjects at {}", (void*)node->m_tagFilterObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_artistFilterObjects at {}", (void*)node->m_artistFilterObjects).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, NCSInfoLayer>) {
devtools::registerNode<NCSInfoLayer>([](NCSInfoLayer* node) {
    devtools::label("Members for NCSInfoLayer:");
    devtools::label(fmt::format("CustomSongLayer* m_songLayer at {}", (void*)node->m_songLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, NodePoint>) {
devtools::registerNode<NodePoint>([](NodePoint* node) {
    devtools::label("Members for NodePoint:");
    devtools::property("m_point", node->m_point);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, NumberInputLayer>) {
devtools::registerNode<NumberInputLayer>([](NumberInputLayer* node) {
    devtools::label("Members for NumberInputLayer:");
    devtools::property("m_minimum", node->m_minimum);
    devtools::property("m_maximum", node->m_maximum);
    devtools::property("m_inputString", node->m_inputString);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_inputLabel at {}", (void*)node->m_inputLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_okButton at {}", (void*)node->m_okButton).c_str());
    devtools::label(fmt::format("NumberInputDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, OBB2D>) {
devtools::registerNode<OBB2D>([](OBB2D* node) {
    devtools::label("Members for OBB2D:");
    devtools::property("m_center", node->m_center);
    devtools::label("std::array<cocos2d::CCPoint, 4> m_corners");
    devtools::label("std::array<cocos2d::CCPoint, 4> m_positions");
    devtools::label("std::array<cocos2d::CCPoint, 4> m_edges");
    devtools::label("std::array<double, 2> m_projections");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ObjectManager>) {
devtools::registerNode<ObjectManager>([](ObjectManager* node) {
    devtools::label("Members for ObjectManager:");
    devtools::label(fmt::format("cocos2d::CCDictionary* m_objectDefinitions at {}", (void*)node->m_objectDefinitions).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_loadedAnimations at {}", (void*)node->m_loadedAnimations).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ObjectToolbox>) {
devtools::registerNode<ObjectToolbox>([](ObjectToolbox* node) {
    devtools::label("Members for ObjectToolbox:");
    devtools::label("gd::map<int, gd::string> m_allKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, OptionsCell>) {
devtools::registerNode<OptionsCell>([](OptionsCell* node) {
    devtools::label("Members for OptionsCell:");
    devtools::label(fmt::format("OptionsObject* m_optionsObject at {}", (void*)node->m_optionsObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, OptionsLayer>) {
devtools::registerNode<OptionsLayer>([](OptionsLayer* node) {
    devtools::label("Members for OptionsLayer:");
    devtools::property("m_layerChoice", node->m_layerChoice);
    devtools::property("m_recordReplays", node->m_recordReplays);
    devtools::property("m_lastVaultDialog", node->m_lastVaultDialog);
    devtools::label(fmt::format("cocos2d::CCMenu* m_optionsMenu at {}", (void*)node->m_optionsMenu).c_str());
    devtools::label(fmt::format("void* m_unknown at {}", (void*)node->m_unknown).c_str());
    devtools::label(fmt::format("Slider* m_musicSlider at {}", (void*)node->m_musicSlider).c_str());
    devtools::label(fmt::format("Slider* m_sfxSlider at {}", (void*)node->m_sfxSlider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, OptionsObject>) {
devtools::registerNode<OptionsObject>([](OptionsObject* node) {
    devtools::label("Members for OptionsObject:");
    devtools::property("m_optionID", node->m_optionID);
    devtools::property("m_enabled", node->m_enabled);
    devtools::property("m_name", node->m_name);
    devtools::property("m_count", node->m_count);
    devtools::label(fmt::format("OptionsObjectDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, OptionsScrollLayer>) {
devtools::registerNode<OptionsScrollLayer>([](OptionsScrollLayer* node) {
    devtools::label("Members for OptionsScrollLayer:");
    devtools::property("m_recreateList", node->m_recreateList);
    devtools::property("m_minCount", node->m_minCount);
    devtools::label(fmt::format("cocos2d::CCArray* m_optionObjects at {}", (void*)node->m_optionObjects).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ParentalOptionsLayer>) {
devtools::registerNode<ParentalOptionsLayer>([](ParentalOptionsLayer* node) {
    devtools::label("Members for ParentalOptionsLayer:");
    devtools::property("m_page", node->m_page);
    devtools::property("m_toggleCount", node->m_toggleCount);
    devtools::property("m_maxPage", node->m_maxPage);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_values at {}", (void*)node->m_values).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_variables at {}", (void*)node->m_variables).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ParticleGameObject>) {
devtools::registerNode<ParticleGameObject>([](ParticleGameObject* node) {
    devtools::label("Members for ParticleGameObject:");
    devtools::property("m_particleData", node->m_particleData);
    devtools::property("m_updatedParticleData", node->m_updatedParticleData);
    devtools::property("m_hasUniformObjectColor", node->m_hasUniformObjectColor);
    devtools::property("m_popupPage", node->m_popupPage);
    devtools::property("m_shouldQuickStart", node->m_shouldQuickStart);
    devtools::property("m_respawnResult", node->m_respawnResult);
    devtools::property("m_startingRespawn", node->m_startingRespawn);
    devtools::property("m_notPreviewing", node->m_notPreviewing);
    devtools::label("cocos2d::ParticleStruct m_particleStruct");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ParticlePreviewLayer>) {
devtools::registerNode<ParticlePreviewLayer>([](ParticlePreviewLayer* node) {
    devtools::label("Members for ParticlePreviewLayer:");
    devtools::property("m_particleMode", node->m_particleMode);
    devtools::property("m_drawMode", node->m_drawMode);
    devtools::property("m_gravityMode", node->m_gravityMode);
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_particleSystem at {}", (void*)node->m_particleSystem).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PauseLayer>) {
devtools::registerNode<PauseLayer>([](PauseLayer* node) {
    devtools::label("Members for PauseLayer:");
    devtools::property("m_unfocused", node->m_unfocused);
    devtools::property("m_tryingQuit", node->m_tryingQuit);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PlayerCheckpoint>) {
devtools::registerNode<PlayerCheckpoint>([](PlayerCheckpoint* node) {
    devtools::label("Members for PlayerCheckpoint:");
    devtools::property("m_position", node->m_position);
    devtools::property("m_lastPosition", node->m_lastPosition);
    devtools::property("m_yVelocity", node->m_yVelocity);
    devtools::property("m_isUpsideDown", node->m_isUpsideDown);
    devtools::property("m_isSideways", node->m_isSideways);
    devtools::property("m_isShip", node->m_isShip);
    devtools::property("m_isBall", node->m_isBall);
    devtools::property("m_isBird", node->m_isBird);
    devtools::property("m_isSwing", node->m_isSwing);
    devtools::property("m_isDart", node->m_isDart);
    devtools::property("m_isRobot", node->m_isRobot);
    devtools::property("m_isSpider", node->m_isSpider);
    devtools::property("m_isOnGround", node->m_isOnGround);
    devtools::enumerable("m_ghostType", node->m_ghostType, {
        { GhostType::Disabled, "GhostType::Disabled" },
        { GhostType::Enabled, "GhostType::Enabled" },
    });
    devtools::property("m_miniMode", node->m_miniMode);
    devtools::property("m_speed", node->m_speed);
    devtools::property("m_hidden", node->m_hidden);
    devtools::property("m_goingLeft", node->m_goingLeft);
    devtools::property("m_reverseSpeed", node->m_reverseSpeed);
    devtools::property("m_dashing", node->m_dashing);
    devtools::property("m_dashX", node->m_dashX);
    devtools::property("m_dashY", node->m_dashY);
    devtools::property("m_dashAngle", node->m_dashAngle);
    devtools::property("m_dashStartTime", node->m_dashStartTime);
    devtools::property("m_platformerCheckpoint", node->m_platformerCheckpoint);
    devtools::property("m_lastFlipTime", node->m_lastFlipTime);
    devtools::property("m_gravityMod", node->m_gravityMod);
    devtools::property("m_decreaseBoostSlide", node->m_decreaseBoostSlide);
    devtools::property("m_followRelated", node->m_followRelated);
    devtools::property("m_followRelated2", node->m_followRelated2);
    devtools::label(fmt::format("DashRingObject* m_dashRingObject at {}", (void*)node->m_dashRingObject).c_str());
    devtools::label("gd::vector<float> m_playerFollowFloats");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PlayerControlGameObject>) {
devtools::registerNode<PlayerControlGameObject>([](PlayerControlGameObject* node) {
    devtools::label("Members for PlayerControlGameObject:");
    devtools::property("m_stopJump", node->m_stopJump);
    devtools::property("m_stopMove", node->m_stopMove);
    devtools::property("m_stopRotation", node->m_stopRotation);
    devtools::property("m_stopSlide", node->m_stopSlide);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PlayerFireBoostSprite>) {
devtools::registerNode<PlayerFireBoostSprite>([](PlayerFireBoostSprite* node) {
    devtools::label("Members for PlayerFireBoostSprite:");
    devtools::property("m_size", node->m_size);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PlayerObject>) {
devtools::registerNode<PlayerObject>([](PlayerObject* node) {
    devtools::label("Members for PlayerObject:");
    devtools::property("m_wasTeleported", node->m_wasTeleported);
    devtools::property("m_fixGravityBug", node->m_fixGravityBug);
    devtools::property("m_reverseSync", node->m_reverseSync);
    devtools::property("m_yVelocityBeforeSlope", node->m_yVelocityBeforeSlope);
    devtools::property("m_dashX", node->m_dashX);
    devtools::property("m_dashY", node->m_dashY);
    devtools::property("m_dashAngle", node->m_dashAngle);
    devtools::property("m_dashStartTime", node->m_dashStartTime);
    devtools::property("m_slopeStartTime", node->m_slopeStartTime);
    devtools::property("m_justPlacedStreak", node->m_justPlacedStreak);
    devtools::property("m_lastCollisionBottom", node->m_lastCollisionBottom);
    devtools::property("m_lastCollisionTop", node->m_lastCollisionTop);
    devtools::property("m_lastCollisionLeft", node->m_lastCollisionLeft);
    devtools::property("m_lastCollisionRight", node->m_lastCollisionRight);
    devtools::property("m_unk50C", node->m_unk50C);
    devtools::property("m_unk510", node->m_unk510);
    devtools::property("m_slopeAngle", node->m_slopeAngle);
    devtools::property("m_slopeSlidingMaybeRotated", node->m_slopeSlidingMaybeRotated);
    devtools::property("m_quickCheckpointMode", node->m_quickCheckpointMode);
    devtools::property("m_maybeSavedPlayerFrame", node->m_maybeSavedPlayerFrame);
    devtools::property("m_scaleXRelated2", node->m_scaleXRelated2);
    devtools::property("m_groundYVelocity", node->m_groundYVelocity);
    devtools::property("m_yVelocityRelated", node->m_yVelocityRelated);
    devtools::property("m_scaleXRelated3", node->m_scaleXRelated3);
    devtools::property("m_scaleXRelated4", node->m_scaleXRelated4);
    devtools::property("m_scaleXRelated5", node->m_scaleXRelated5);
    devtools::property("m_isCollidingWithSlope", node->m_isCollidingWithSlope);
    devtools::property("m_isBallRotating", node->m_isBallRotating);
    devtools::property("m_unk669", node->m_unk669);
    devtools::property("unk_584", node->unk_584);
    devtools::property("m_collidingWithSlopeId", node->m_collidingWithSlopeId);
    devtools::property("m_slopeFlipGravityRelated", node->m_slopeFlipGravityRelated);
    devtools::property("m_slopeAngleRadians", node->m_slopeAngleRadians);
    devtools::property("m_rotationSpeed", node->m_rotationSpeed);
    devtools::property("m_rotateSpeed", node->m_rotateSpeed);
    devtools::property("m_isRotating", node->m_isRotating);
    devtools::property("m_isBallRotating2", node->m_isBallRotating2);
    devtools::property("m_hasGlow", node->m_hasGlow);
    devtools::property("m_isHidden", node->m_isHidden);
    devtools::enumerable("m_ghostType", node->m_ghostType, {
        { GhostType::Disabled, "GhostType::Disabled" },
        { GhostType::Enabled, "GhostType::Enabled" },
    });
    devtools::property("m_speedMultiplier", node->m_speedMultiplier);
    devtools::property("m_yStart", node->m_yStart);
    devtools::property("m_gravity", node->m_gravity);
    devtools::property("m_trailingParticleLife", node->m_trailingParticleLife);
    devtools::property("m_unk648", node->m_unk648);
    devtools::property("m_gameModeChangedTime", node->m_gameModeChangedTime);
    devtools::property("m_padRingRelated", node->m_padRingRelated);
    devtools::property("m_maybeReducedEffects", node->m_maybeReducedEffects);
    devtools::property("m_maybeIsFalling", node->m_maybeIsFalling);
    devtools::property("m_shouldTryPlacingCheckpoint", node->m_shouldTryPlacingCheckpoint);
    devtools::property("m_playEffects", node->m_playEffects);
    devtools::property("m_maybeCanRunIntoBlocks", node->m_maybeCanRunIntoBlocks);
    devtools::property("m_hasGroundParticles", node->m_hasGroundParticles);
    devtools::property("m_hasShipParticles", node->m_hasShipParticles);
    devtools::property("m_isOnGround3", node->m_isOnGround3);
    devtools::property("m_checkpointTimeout", node->m_checkpointTimeout);
    devtools::property("m_lastCheckpointTime", node->m_lastCheckpointTime);
    devtools::property("m_lastJumpTime", node->m_lastJumpTime);
    devtools::property("m_lastFlipTime", node->m_lastFlipTime);
    devtools::property("m_flashTime", node->m_flashTime);
    devtools::property("m_flashRelated", node->m_flashRelated);
    devtools::property("m_flashRelated1", node->m_flashRelated1);
    devtools::property("m_colorRelated2", node->m_colorRelated2);
    devtools::property("m_flashRelated3", node->m_flashRelated3);
    devtools::property("m_lastSpiderFlipTime", node->m_lastSpiderFlipTime);
    devtools::property("m_unkBool5", node->m_unkBool5);
    devtools::property("m_maybeIsVehicleGlowing", node->m_maybeIsVehicleGlowing);
    devtools::property("m_switchWaveTrailColor", node->m_switchWaveTrailColor);
    devtools::property("m_practiceDeathEffect", node->m_practiceDeathEffect);
    devtools::property("m_accelerationOrSpeed", node->m_accelerationOrSpeed);
    devtools::property("m_snapDistance", node->m_snapDistance);
    devtools::property("m_ringJumpRelated", node->m_ringJumpRelated);
    devtools::property("m_onFlyCheckpointTries", node->m_onFlyCheckpointTries);
    devtools::property("m_maybeSpriteRelated", node->m_maybeSpriteRelated);
    devtools::property("m_useLandParticles0", node->m_useLandParticles0);
    devtools::property("m_landParticlesAngle", node->m_landParticlesAngle);
    devtools::property("m_landParticleRelatedY", node->m_landParticleRelatedY);
    devtools::property("m_playerStreak", node->m_playerStreak);
    devtools::property("m_streakStrokeWidth", node->m_streakStrokeWidth);
    devtools::property("m_disableStreakTint", node->m_disableStreakTint);
    devtools::property("m_alwaysShowStreak", node->m_alwaysShowStreak);
    devtools::enumerable("m_shipStreakType", node->m_shipStreakType, {
        { ShipStreak::None, "ShipStreak::None" },
        { ShipStreak::ShipFire1, "ShipStreak::ShipFire1" },
        { ShipStreak::ShipFire2, "ShipStreak::ShipFire2" },
        { ShipStreak::ShipFire3, "ShipStreak::ShipFire3" },
        { ShipStreak::ShipFire4, "ShipStreak::ShipFire4" },
        { ShipStreak::ShipFire5, "ShipStreak::ShipFire5" },
        { ShipStreak::ShipFire6, "ShipStreak::ShipFire6" },
    });
    devtools::property("m_slopeRotation", node->m_slopeRotation);
    devtools::property("m_currentSlopeYVelocity", node->m_currentSlopeYVelocity);
    devtools::property("m_unk3d0", node->m_unk3d0);
    devtools::property("m_blackOrbRelated", node->m_blackOrbRelated);
    devtools::property("m_unk3e0", node->m_unk3e0);
    devtools::property("m_unk3e1", node->m_unk3e1);
    devtools::property("m_isAccelerating", node->m_isAccelerating);
    devtools::property("m_isCurrentSlopeTop", node->m_isCurrentSlopeTop);
    devtools::property("m_collidedTopMinY", node->m_collidedTopMinY);
    devtools::property("m_collidedBottomMaxY", node->m_collidedBottomMaxY);
    devtools::property("m_collidedLeftMaxX", node->m_collidedLeftMaxX);
    devtools::property("m_collidedRightMinX", node->m_collidedRightMinX);
    devtools::property("m_fadeOutStreak", node->m_fadeOutStreak);
    devtools::property("m_canPlaceCheckpoint", node->m_canPlaceCheckpoint);
    devtools::property("m_colorRelated", node->m_colorRelated);
    devtools::property("m_secondColorRelated", node->m_secondColorRelated);
    devtools::property("m_hasCustomGlowColor", node->m_hasCustomGlowColor);
    devtools::property("m_glowColor", node->m_glowColor);
    devtools::property("m_maybeIsColliding", node->m_maybeIsColliding);
    devtools::property("m_jumpBuffered", node->m_jumpBuffered);
    devtools::property("m_stateRingJump", node->m_stateRingJump);
    devtools::property("m_wasJumpBuffered", node->m_wasJumpBuffered);
    devtools::property("m_wasRobotJump", node->m_wasRobotJump);
    devtools::property("m_stateJumpBuffered", node->m_stateJumpBuffered);
    devtools::property("m_stateRingJump2", node->m_stateRingJump2);
    devtools::property("m_touchedRing", node->m_touchedRing);
    devtools::property("m_touchedCustomRing", node->m_touchedCustomRing);
    devtools::property("m_touchedGravityPortal", node->m_touchedGravityPortal);
    devtools::property("m_maybeTouchedBreakableBlock", node->m_maybeTouchedBreakableBlock);
    devtools::property("m_touchedPad", node->m_touchedPad);
    devtools::property("m_yVelocity", node->m_yVelocity);
    devtools::property("m_fallSpeed", node->m_fallSpeed);
    devtools::property("m_isOnSlope", node->m_isOnSlope);
    devtools::property("m_wasOnSlope", node->m_wasOnSlope);
    devtools::property("m_slopeVelocity", node->m_slopeVelocity);
    devtools::property("m_maybeUpsideDownSlope", node->m_maybeUpsideDownSlope);
    devtools::property("m_isShip", node->m_isShip);
    devtools::property("m_isBird", node->m_isBird);
    devtools::property("m_isBall", node->m_isBall);
    devtools::property("m_isDart", node->m_isDart);
    devtools::property("m_isRobot", node->m_isRobot);
    devtools::property("m_isSpider", node->m_isSpider);
    devtools::property("m_isUpsideDown", node->m_isUpsideDown);
    devtools::property("m_isDead", node->m_isDead);
    devtools::property("m_isOnGround", node->m_isOnGround);
    devtools::property("m_isGoingLeft", node->m_isGoingLeft);
    devtools::property("m_isSideways", node->m_isSideways);
    devtools::property("m_isSwing", node->m_isSwing);
    devtools::property("m_reverseRelated", node->m_reverseRelated);
    devtools::property("m_maybeReverseSpeed", node->m_maybeReverseSpeed);
    devtools::property("m_maybeReverseAcceleration", node->m_maybeReverseAcceleration);
    devtools::property("m_xVelocityRelated2", node->m_xVelocityRelated2);
    devtools::property("m_isDashing", node->m_isDashing);
    devtools::property("m_unk9e8", node->m_unk9e8);
    devtools::property("m_groundObjectMaterial", node->m_groundObjectMaterial);
    devtools::property("m_vehicleSize", node->m_vehicleSize);
    devtools::property("m_playerSpeed", node->m_playerSpeed);
    devtools::property("m_shipRotation", node->m_shipRotation);
    devtools::property("m_lastPortalPos", node->m_lastPortalPos);
    devtools::property("m_unkUnused3", node->m_unkUnused3);
    devtools::property("m_isOnGround2", node->m_isOnGround2);
    devtools::property("m_lastLandTime", node->m_lastLandTime);
    devtools::property("m_platformerVelocityRelated", node->m_platformerVelocityRelated);
    devtools::property("m_maybeIsBoosted", node->m_maybeIsBoosted);
    devtools::property("m_scaleXRelatedTime", node->m_scaleXRelatedTime);
    devtools::property("m_decreaseBoostSlide", node->m_decreaseBoostSlide);
    devtools::property("m_unkA29", node->m_unkA29);
    devtools::property("m_isLocked", node->m_isLocked);
    devtools::property("m_controlsDisabled", node->m_controlsDisabled);
    devtools::property("m_lastGroundedPos", node->m_lastGroundedPos);
    devtools::property("m_hasEverJumped", node->m_hasEverJumped);
    devtools::property("m_hasEverHitRing", node->m_hasEverHitRing);
    devtools::property("m_playerColor1", node->m_playerColor1);
    devtools::property("m_playerColor2", node->m_playerColor2);
    devtools::property("m_position", node->m_position);
    devtools::property("m_isSecondPlayer", node->m_isSecondPlayer);
    devtools::property("m_unkA99", node->m_unkA99);
    devtools::property("m_totalTime", node->m_totalTime);
    devtools::property("m_isBeingSpawnedByDualPortal", node->m_isBeingSpawnedByDualPortal);
    devtools::property("m_audioScale", node->m_audioScale);
    devtools::property("m_unkAngle1", node->m_unkAngle1);
    devtools::property("m_yVelocityRelated3", node->m_yVelocityRelated3);
    devtools::property("m_defaultMiniIcon", node->m_defaultMiniIcon);
    devtools::property("m_swapColors", node->m_swapColors);
    devtools::property("m_switchDashFireColor", node->m_switchDashFireColor);
    devtools::property("m_followRelated", node->m_followRelated);
    devtools::property("m_unk838", node->m_unk838);
    devtools::property("m_stateOnGround", node->m_stateOnGround);
    devtools::property("m_stateUnk", node->m_stateUnk);
    devtools::property("m_stateNoStickX", node->m_stateNoStickX);
    devtools::property("m_stateNoStickY", node->m_stateNoStickY);
    devtools::property("m_stateUnk2", node->m_stateUnk2);
    devtools::property("m_stateBoostX", node->m_stateBoostX);
    devtools::property("m_stateBoostY", node->m_stateBoostY);
    devtools::property("m_maybeStateForce2", node->m_maybeStateForce2);
    devtools::property("m_stateScale", node->m_stateScale);
    devtools::property("m_platformerXVelocity", node->m_platformerXVelocity);
    devtools::property("m_holdingRight", node->m_holdingRight);
    devtools::property("m_holdingLeft", node->m_holdingLeft);
    devtools::property("m_leftPressedFirst", node->m_leftPressedFirst);
    devtools::property("m_scaleXRelated", node->m_scaleXRelated);
    devtools::property("m_maybeHasStopped", node->m_maybeHasStopped);
    devtools::property("m_xVelocityRelated", node->m_xVelocityRelated);
    devtools::property("m_maybeGoingCorrectSlopeDirection", node->m_maybeGoingCorrectSlopeDirection);
    devtools::property("m_isSliding", node->m_isSliding);
    devtools::property("m_maybeSlopeForce", node->m_maybeSlopeForce);
    devtools::property("m_isOnIce", node->m_isOnIce);
    devtools::property("m_physDeltaRelated", node->m_physDeltaRelated);
    devtools::property("m_isOnGround4", node->m_isOnGround4);
    devtools::property("m_maybeSlidingTime", node->m_maybeSlidingTime);
    devtools::property("m_maybeSlidingStartTime", node->m_maybeSlidingStartTime);
    devtools::property("m_changedDirectionsTime", node->m_changedDirectionsTime);
    devtools::property("m_slopeEndTime", node->m_slopeEndTime);
    devtools::property("m_isMoving", node->m_isMoving);
    devtools::property("m_platformerMovingLeft", node->m_platformerMovingLeft);
    devtools::property("m_platformerMovingRight", node->m_platformerMovingRight);
    devtools::property("m_isSlidingRight", node->m_isSlidingRight);
    devtools::property("m_maybeChangedDirectionAngle", node->m_maybeChangedDirectionAngle);
    devtools::property("m_unkUnused2", node->m_unkUnused2);
    devtools::property("m_isPlatformer", node->m_isPlatformer);
    devtools::property("m_stateNoAutoJump", node->m_stateNoAutoJump);
    devtools::property("m_stateDartSlide", node->m_stateDartSlide);
    devtools::property("m_stateHitHead", node->m_stateHitHead);
    devtools::property("m_stateFlipGravity", node->m_stateFlipGravity);
    devtools::property("m_gravityMod", node->m_gravityMod);
    devtools::property("m_stateForce", node->m_stateForce);
    devtools::property("m_stateForceVector", node->m_stateForceVector);
    devtools::property("m_affectedByForces", node->m_affectedByForces);
    devtools::property("m_somethingPlayerSpeedTime", node->m_somethingPlayerSpeedTime);
    devtools::property("m_playerSpeedAC", node->m_playerSpeedAC);
    devtools::property("m_fixRobotJump", node->m_fixRobotJump);
    devtools::property("m_inputsLocked", node->m_inputsLocked);
    devtools::property("m_currentRobotAnimation", node->m_currentRobotAnimation);
    devtools::property("m_gv0123", node->m_gv0123);
    devtools::property("m_iconRequestID", node->m_iconRequestID);
    devtools::property("m_unkUnused", node->m_unkUnused);
    devtools::property("m_isOutOfBounds", node->m_isOutOfBounds);
    devtools::property("m_fallStartY", node->m_fallStartY);
    devtools::property("m_disablePlayerSqueeze", node->m_disablePlayerSqueeze);
    devtools::property("m_robotAnimation1Enabled", node->m_robotAnimation1Enabled);
    devtools::property("m_robotAnimation2Enabled", node->m_robotAnimation2Enabled);
    devtools::property("m_spiderAnimationEnabled", node->m_spiderAnimationEnabled);
    devtools::property("m_ignoreDamage", node->m_ignoreDamage);
    devtools::property("m_enable22Changes", node->m_enable22Changes);
    devtools::label(fmt::format("cocos2d::CCNode* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
    devtools::label(fmt::format("DashRingObject* m_dashRing at {}", (void*)node->m_dashRing).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_maybeLastGroundObject at {}", (void*)node->m_maybeLastGroundObject).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_collisionLogTop at {}", (void*)node->m_collisionLogTop).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_collisionLogBottom at {}", (void*)node->m_collisionLogBottom).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_collisionLogLeft at {}", (void*)node->m_collisionLogLeft).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_collisionLogRight at {}", (void*)node->m_collisionLogRight).c_str());
    devtools::label(fmt::format("GameObject* m_currentSlope2 at {}", (void*)node->m_currentSlope2).c_str());
    devtools::label(fmt::format("GameObject* m_preLastGroundObject at {}", (void*)node->m_preLastGroundObject).c_str());
    devtools::label(fmt::format("GameObject* m_collidedObject at {}", (void*)node->m_collidedObject).c_str());
    devtools::label(fmt::format("GameObject* m_lastGroundObject at {}", (void*)node->m_lastGroundObject).c_str());
    devtools::label(fmt::format("GameObject* m_collidingWithLeft at {}", (void*)node->m_collidingWithLeft).c_str());
    devtools::label(fmt::format("GameObject* m_collidingWithRight at {}", (void*)node->m_collidingWithRight).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_dashFireSprite at {}", (void*)node->m_dashFireSprite).c_str());
    devtools::label(fmt::format("GameObject* m_currentPotentialSlope at {}", (void*)node->m_currentPotentialSlope).c_str());
    devtools::label(fmt::format("GameObject* m_currentSlope at {}", (void*)node->m_currentSlope).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_particleSystems at {}", (void*)node->m_particleSystems).c_str());
    devtools::label("gd::unordered_map<int, GJPointDouble> m_rotateObjectsRelated");
    devtools::label("gd::unordered_map<int, GameObject*> m_potentialSlopeMap");
    devtools::label(fmt::format("GhostTrailEffect* m_ghostTrail at {}", (void*)node->m_ghostTrail).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_iconSprite at {}", (void*)node->m_iconSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_iconSpriteSecondary at {}", (void*)node->m_iconSpriteSecondary).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_iconSpriteWhitener at {}", (void*)node->m_iconSpriteWhitener).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_iconGlow at {}", (void*)node->m_iconGlow).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_vehicleSprite at {}", (void*)node->m_vehicleSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_vehicleSpriteSecondary at {}", (void*)node->m_vehicleSpriteSecondary).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_birdVehicle at {}", (void*)node->m_birdVehicle).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_vehicleSpriteWhitener at {}", (void*)node->m_vehicleSpriteWhitener).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_vehicleGlow at {}", (void*)node->m_vehicleGlow).c_str());
    devtools::label(fmt::format("PlayerFireBoostSprite* m_swingFireMiddle at {}", (void*)node->m_swingFireMiddle).c_str());
    devtools::label(fmt::format("PlayerFireBoostSprite* m_swingFireBottom at {}", (void*)node->m_swingFireBottom).c_str());
    devtools::label(fmt::format("PlayerFireBoostSprite* m_swingFireTop at {}", (void*)node->m_swingFireTop).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_dashSpritesContainer at {}", (void*)node->m_dashSpritesContainer).c_str());
    devtools::label(fmt::format("cocos2d::CCMotionStreak* m_regularTrail at {}", (void*)node->m_regularTrail).c_str());
    devtools::label(fmt::format("cocos2d::CCMotionStreak* m_shipStreak at {}", (void*)node->m_shipStreak).c_str());
    devtools::label(fmt::format("HardStreak* m_waveTrail at {}", (void*)node->m_waveTrail).c_str());
    devtools::label("gd::unordered_set<int> m_ringRelatedSet");
    devtools::label(fmt::format("GameObject* m_objectSnappedTo at {}", (void*)node->m_objectSnappedTo).c_str());
    devtools::label(fmt::format("CheckpointObject* m_pendingCheckpoint at {}", (void*)node->m_pendingCheckpoint).c_str());
    devtools::label(fmt::format("GJRobotSprite* m_robotSprite at {}", (void*)node->m_robotSprite).c_str());
    devtools::label(fmt::format("GJSpiderSprite* m_spiderSprite at {}", (void*)node->m_spiderSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_playerGroundParticles at {}", (void*)node->m_playerGroundParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_trailingParticles at {}", (void*)node->m_trailingParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_shipClickParticles at {}", (void*)node->m_shipClickParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles at {}", (void*)node->m_vehicleGroundParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_ufoClickParticles at {}", (void*)node->m_ufoClickParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_robotBurstParticles at {}", (void*)node->m_robotBurstParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_dashParticles at {}", (void*)node->m_dashParticles).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_swingBurstParticles1 at {}", (void*)node->m_swingBurstParticles1).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_swingBurstParticles2 at {}", (void*)node->m_swingBurstParticles2).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_landParticles0 at {}", (void*)node->m_landParticles0).c_str());
    devtools::label(fmt::format("cocos2d::CCParticleSystemQuad* m_landParticles1 at {}", (void*)node->m_landParticles1).c_str());
    devtools::label("geode::SeedValueRSV m_jumpRelatedAC2");
    devtools::label(fmt::format("cocos2d::CCArray* m_touchingRings at {}", (void*)node->m_touchingRings).c_str());
    devtools::label("gd::unordered_set<int> m_touchedRings");
    devtools::label(fmt::format("GameObject* m_lastActivatedPortal at {}", (void*)node->m_lastActivatedPortal).c_str());
    devtools::label("gd::vector<float> m_playerFollowFloats");
    devtools::label("gd::map<int, bool> m_jumpPadRelated");
    devtools::label("gd::map<int, bool> m_holdingButtons");
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_robotBatchNode at {}", (void*)node->m_robotBatchNode).c_str());
    devtools::label(fmt::format("cocos2d::CCSpriteBatchNode* m_spiderBatchNode at {}", (void*)node->m_spiderBatchNode).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unk958 at {}", (void*)node->m_unk958).c_str());
    devtools::label(fmt::format("PlayerFireBoostSprite* m_robotFire at {}", (void*)node->m_robotFire).c_str());
    devtools::label(fmt::format("GJBaseGameLayer* m_gameLayer at {}", (void*)node->m_gameLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_parentLayer at {}", (void*)node->m_parentLayer).c_str());
    devtools::label(fmt::format("GJActionManager* m_actionManager at {}", (void*)node->m_actionManager).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PlayLayer>) {
devtools::registerNode<PlayLayer>([](PlayLayer* node) {
    devtools::label("Members for PlayLayer:");
    devtools::property("m_unk36c8", node->m_unk36c8);
    devtools::property("m_unk36cc", node->m_unk36cc);
    devtools::property("m_unk36cd", node->m_unk36cd);
    devtools::property("m_unk36ce", node->m_unk36ce);
    devtools::property("m_unk36cf", node->m_unk36cf);
    devtools::property("m_damageVerified", node->m_damageVerified);
    devtools::property("m_passedIntegrity", node->m_passedIntegrity);
    devtools::property("m_objectsCreated", node->m_objectsCreated);
    devtools::property("m_unk3768", node->m_unk3768);
    devtools::property("m_platformerRestart", node->m_platformerRestart);
    devtools::property("m_unk376d", node->m_unk376d);
    devtools::property("m_isIgnoreDamageEnabled", node->m_isIgnoreDamageEnabled);
    devtools::property("m_unk3778", node->m_unk3778);
    devtools::property("m_unk377c", node->m_unk377c);
    devtools::property("m_unk3780", node->m_unk3780);
    devtools::property("m_unk3784", node->m_unk3784);
    devtools::property("m_unk3788", node->m_unk3788);
    devtools::property("m_unk378c", node->m_unk378c);
    devtools::property("m_endChecked", node->m_endChecked);
    devtools::property("m_endXPosition", node->m_endXPosition);
    devtools::property("m_unk37b0", node->m_unk37b0);
    devtools::property("m_unk37b1", node->m_unk37b1);
    devtools::property("m_enterEffectPosition", node->m_enterEffectPosition);
    devtools::property("m_isSilent", node->m_isSilent);
    devtools::property("m_unk37cc", node->m_unk37cc);
    devtools::property("m_unk37e0", node->m_unk37e0);
    devtools::property("m_pulseRodIndex", node->m_pulseRodIndex);
    devtools::property("m_maxObjectX", node->m_maxObjectX);
    devtools::property("m_decimalPercentage", node->m_decimalPercentage);
    devtools::property("m_hintShown", node->m_hintShown);
    devtools::property("m_progressWidth", node->m_progressWidth);
    devtools::property("m_progressHeight", node->m_progressHeight);
    devtools::property("m_totalGravityEffects", node->m_totalGravityEffects);
    devtools::property("m_activeGravityEffects", node->m_activeGravityEffects);
    devtools::property("m_gravityEffectIndex", node->m_gravityEffectIndex);
    devtools::property("m_doNot", node->m_doNot);
    devtools::property("m_unk383c", node->m_unk383c);
    devtools::property("m_skipAudioStep", node->m_skipAudioStep);
    devtools::property("m_jumps", node->m_jumps);
    devtools::property("m_hasJumped", node->m_hasJumped);
    devtools::property("m_uncommittedJumps", node->m_uncommittedJumps);
    devtools::property("m_showLeaderboardPercentage", node->m_showLeaderboardPercentage);
    devtools::property("m_hasCompletedLevel", node->m_hasCompletedLevel);
    devtools::property("m_inResetDelay", node->m_inResetDelay);
    devtools::property("m_lastAttemptPercent", node->m_lastAttemptPercent);
    devtools::property("m_endLayerStars", node->m_endLayerStars);
    devtools::property("m_orbs", node->m_orbs);
    devtools::property("m_diamonds", node->m_diamonds);
    devtools::property("m_secretKey", node->m_secretKey);
    devtools::property("m_recordingStopped", node->m_recordingStopped);
    devtools::property("m_unk38b0", node->m_unk38b0);
    devtools::property("m_unk38b8", node->m_unk38b8);
    devtools::property("m_unk38c0", node->m_unk38c0);
    devtools::property("m_unk38c8", node->m_unk38c8);
    devtools::property("m_unk38cc", node->m_unk38cc);
    devtools::property("m_unk38d0", node->m_unk38d0);
    devtools::property("m_attemptTime", node->m_attemptTime);
    devtools::property("m_bestAttemptTime", node->m_bestAttemptTime);
    devtools::property("m_pauseTime", node->m_pauseTime);
    devtools::property("m_currentTime", node->m_currentTime);
    devtools::property("m_pauseDelta", node->m_pauseDelta);
    devtools::property("m_unk3900", node->m_unk3900);
    devtools::property("m_glitterEnabled", node->m_glitterEnabled);
    devtools::property("m_bgEffectDisabled", node->m_bgEffectDisabled);
    devtools::property("m_unk3906", node->m_unk3906);
    devtools::property("m_isPaused", node->m_isPaused);
    devtools::property("m_disableGravityEffect", node->m_disableGravityEffect);
    devtools::property("m_unk3918", node->m_unk3918);
    devtools::property("m_unk3920", node->m_unk3920);
    devtools::property("m_nextColorKey", node->m_nextColorKey);
    devtools::property("m_tryPlaceCheckpoint", node->m_tryPlaceCheckpoint);
    devtools::property("m_musicPrepared", node->m_musicPrepared);
    devtools::property("m_endPosition", node->m_endPosition);
    devtools::label("geode::SeedValueRSV m_damageVerifiedIndex");
    devtools::label("gd::vector<gd::string> m_objectStrings");
    devtools::label(fmt::format("cocos2d::CCArray* m_coinArray at {}", (void*)node->m_coinArray).c_str());
    devtools::label("gd::vector<GameObject*> m_dynamicSaveObjects");
    devtools::label("gd::vector<GameObject*> m_activeSaveObjects1");
    devtools::label("gd::vector<GameObject*> m_activeSaveObjects2");
    devtools::label("gd::vector<SavedObjectStateRef> m_dynamicSaveObjects2");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_statusLabel at {}", (void*)node->m_statusLabel).c_str());
    devtools::label(fmt::format("CheckpointObject* m_currentCheckpoint at {}", (void*)node->m_currentCheckpoint).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_checkpointArray at {}", (void*)node->m_checkpointArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_speedObjects at {}", (void*)node->m_speedObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_unk37c0 at {}", (void*)node->m_unk37c0).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_circleWaveArray at {}", (void*)node->m_circleWaveArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_collectibles at {}", (void*)node->m_collectibles).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_attemptLabel at {}", (void*)node->m_attemptLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_percentageLabel at {}", (void*)node->m_percentageLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_progressBar at {}", (void*)node->m_progressBar).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_progressFill at {}", (void*)node->m_progressFill).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gravityEffects at {}", (void*)node->m_gravityEffects).c_str());
    devtools::label("gd::unordered_set<int> m_blendingColors");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_infoLabel at {}", (void*)node->m_infoLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_colorKeyDict at {}", (void*)node->m_colorKeyDict).c_str());
    devtools::label("gd::vector<cocos2d::ccColor3B> m_keyColors");
    devtools::label("gd::vector<float> m_keyOpacities");
    devtools::label("DynamicBitset m_keyPulses");
    devtools::label(fmt::format("CheckpointGameObject* m_activatedCheckpoint at {}", (void*)node->m_activatedCheckpoint).c_str());
    devtools::label(fmt::format("EndTriggerGameObject* m_platformerEndTrigger at {}", (void*)node->m_platformerEndTrigger).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PointNode>) {
devtools::registerNode<PointNode>([](PointNode* node) {
    devtools::label("Members for PointNode:");
    devtools::property("m_point", node->m_point);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PriceLabel>) {
devtools::registerNode<PriceLabel>([](PriceLabel* node) {
    devtools::label("Members for PriceLabel:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_priceLabel at {}", (void*)node->m_priceLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_coinSprite at {}", (void*)node->m_coinSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ProfilePage>) {
devtools::registerNode<ProfilePage>([](ProfilePage* node) {
    devtools::label("Members for ProfilePage:");
    devtools::property("m_accountID", node->m_accountID);
    devtools::property("m_ownProfile", node->m_ownProfile);
    devtools::property("m_profileKey", node->m_profileKey);
    devtools::property("m_unk", node->m_unk);
    devtools::property("m_itemCount", node->m_itemCount);
    devtools::property("m_pageStartIdx", node->m_pageStartIdx);
    devtools::property("m_pageEndIdx", node->m_pageEndIdx);
    devtools::property("m_page", node->m_page);
    devtools::property("m_unk2", node->m_unk2);
    devtools::label(fmt::format("GJUserScore* m_score at {}", (void*)node->m_score).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_somethingWentWrong at {}", (void*)node->m_somethingWentWrong).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_usernameLabel at {}", (void*)node->m_usernameLabel).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_list at {}", (void*)node->m_list).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightArrow at {}", (void*)node->m_rightArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftArrow at {}", (void*)node->m_leftArrow).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_followBtn at {}", (void*)node->m_followBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_buttons at {}", (void*)node->m_buttons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_arrayWithUsernameLabel at {}", (void*)node->m_arrayWithUsernameLabel).c_str());
    devtools::label(fmt::format("LoadingCircle* m_circle at {}", (void*)node->m_circle).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_popupDelegate at {}", (void*)node->m_popupDelegate).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshBtn at {}", (void*)node->m_refreshBtn).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PromoInterstitial>) {
devtools::registerNode<PromoInterstitial>([](PromoInterstitial* node) {
    devtools::label("Members for PromoInterstitial:");
    devtools::property("m_fullVersion", node->m_fullVersion);
    devtools::property("m_promoTouched", node->m_promoTouched);
    devtools::property("m_marketLink", node->m_marketLink);
    devtools::property("m_showAdBanner", node->m_showAdBanner);
    devtools::label(fmt::format("cocos2d::CCMenu* m_closeMenu at {}", (void*)node->m_closeMenu).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, PurchaseItemPopup>) {
devtools::registerNode<PurchaseItemPopup>([](PurchaseItemPopup* node) {
    devtools::label("Members for PurchaseItemPopup:");
    devtools::label(fmt::format("GJStoreItem* m_storeItem at {}", (void*)node->m_storeItem).c_str());
    devtools::label(fmt::format("GJPurchaseDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RateDemonLayer>) {
devtools::registerNode<RateDemonLayer>([](RateDemonLayer* node) {
    devtools::label("Members for RateDemonLayer:");
    devtools::property("m_uploadFinished", node->m_uploadFinished);
    devtools::property("m_levelID", node->m_levelID);
    devtools::property("m_demonRate", node->m_demonRate);
    devtools::property("m_moderator", node->m_moderator);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_submitButton at {}", (void*)node->m_submitButton).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_demons at {}", (void*)node->m_demons).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_popup at {}", (void*)node->m_popup).c_str());
    devtools::label(fmt::format("RateLevelDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RateLevelLayer>) {
devtools::registerNode<RateLevelLayer>([](RateLevelLayer* node) {
    devtools::label("Members for RateLevelLayer:");
    devtools::property("m_levelID", node->m_levelID);
    devtools::property("m_levelRate", node->m_levelRate);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_submitButton at {}", (void*)node->m_submitButton).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_difficulties at {}", (void*)node->m_difficulties).c_str());
    devtools::label(fmt::format("RateLevelDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RateStarsLayer>) {
devtools::registerNode<RateStarsLayer>([](RateStarsLayer* node) {
    devtools::label("Members for RateStarsLayer:");
    devtools::property("m_uploadFinished", node->m_uploadFinished);
    devtools::property("m_moderator", node->m_moderator);
    devtools::property("m_levelID", node->m_levelID);
    devtools::property("m_starsRate", node->m_starsRate);
    devtools::property("m_coinsToggled", node->m_coinsToggled);
    devtools::property("m_featureState", node->m_featureState);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_submitButton at {}", (void*)node->m_submitButton).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_buttons at {}", (void*)node->m_buttons).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_coinSprite at {}", (void*)node->m_coinSprite).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_popup at {}", (void*)node->m_popup).c_str());
    devtools::label(fmt::format("GJDifficultySprite* m_difficultySprite at {}", (void*)node->m_difficultySprite).c_str());
    devtools::label(fmt::format("RateLevelDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RetryLevelLayer>) {
devtools::registerNode<RetryLevelLayer>([](RetryLevelLayer* node) {
    devtools::label("Members for RetryLevelLayer:");
    devtools::property("m_exitingMenu", node->m_exitingMenu);
    devtools::property("m_unk1e9", node->m_unk1e9);
    devtools::label(fmt::format("cocos2d::CCMenu* m_mainMenu at {}", (void*)node->m_mainMenu).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RewardsPage>) {
devtools::registerNode<RewardsPage>([](RewardsPage* node) {
    devtools::label("Members for RewardsPage:");
    devtools::property("m_leftOpen", node->m_leftOpen);
    devtools::property("m_rightOpen", node->m_rightOpen);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_leftLabel at {}", (void*)node->m_leftLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_rightLabel at {}", (void*)node->m_rightLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftChest at {}", (void*)node->m_leftChest).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightChest at {}", (void*)node->m_rightChest).c_str());
    devtools::label(fmt::format("RewardUnlockLayer* m_openLayer at {}", (void*)node->m_openLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RewardUnlockLayer>) {
devtools::registerNode<RewardUnlockLayer>([](RewardUnlockLayer* node) {
    devtools::label("Members for RewardUnlockLayer:");
    devtools::property("m_chestType", node->m_chestType);
    devtools::property("m_rewardCollected", node->m_rewardCollected);
    devtools::property("m_animationPlayed", node->m_animationPlayed);
    devtools::property("m_unkFloat", node->m_unkFloat);
    devtools::label(fmt::format("cocos2d::CCArray* m_backgroundObjects at {}", (void*)node->m_backgroundObjects).c_str());
    devtools::label(fmt::format("RewardsPage* m_rewardsPage at {}", (void*)node->m_rewardsPage).c_str());
    devtools::label(fmt::format("GJChestSprite* m_chestSprite at {}", (void*)node->m_chestSprite).c_str());
    devtools::label(fmt::format("GJRewardItem* m_rewardItem at {}", (void*)node->m_rewardItem).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_wrongLabel at {}", (void*)node->m_wrongLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_closeBtn at {}", (void*)node->m_closeBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rewardBtn at {}", (void*)node->m_rewardBtn).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, RotateGameplayGameObject>) {
devtools::registerNode<RotateGameplayGameObject>([](RotateGameplayGameObject* node) {
    devtools::label("Members for RotateGameplayGameObject:");
    devtools::property("m_moveDirection", node->m_moveDirection);
    devtools::property("m_groundDirection", node->m_groundDirection);
    devtools::property("m_editVelocity", node->m_editVelocity);
    devtools::property("m_overrideVelocity", node->m_overrideVelocity);
    devtools::property("m_velocityModX", node->m_velocityModX);
    devtools::property("m_velocityModY", node->m_velocityModY);
    devtools::property("m_changeChannel", node->m_changeChannel);
    devtools::property("m_channelOnly", node->m_channelOnly);
    devtools::property("m_targetChannelID", node->m_targetChannelID);
    devtools::property("m_instantOffset", node->m_instantOffset);
    devtools::property("m_dontSlide", node->m_dontSlide);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ScrollingLayer>) {
devtools::registerNode<ScrollingLayer>([](ScrollingLayer* node) {
    devtools::label("Members for ScrollingLayer:");
    devtools::property("m_position", node->m_position);
    devtools::property("m_size", node->m_size);
    devtools::property("m_touchStartPosition", node->m_touchStartPosition);
    devtools::property("m_touchPosition", node->m_touchPosition);
    devtools::property("m_startOffset", node->m_startOffset);
    devtools::property("m_scrollFactor", node->m_scrollFactor);
    devtools::property("m_touchID", node->m_touchID);
    devtools::label(fmt::format("cocos2d::CCLayer* m_contentLayer at {}", (void*)node->m_contentLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_parentLayer at {}", (void*)node->m_parentLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SearchButton>) {
devtools::registerNode<SearchButton>([](SearchButton* node) {
    devtools::label("Members for SearchButton:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_label at {}", (void*)node->m_label).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_icon at {}", (void*)node->m_icon).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetTextPopup>) {
devtools::registerNode<SetTextPopup>([](SetTextPopup* node) {
    devtools::label("Members for SetTextPopup:");
    devtools::property("m_disableDelegate", node->m_disableDelegate);
    devtools::property("m_value", node->m_value);
    devtools::label(fmt::format("CCTextInputNode* m_input at {}", (void*)node->m_input).c_str());
    devtools::label(fmt::format("SetTextPopupDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretGame01Layer>) {
devtools::registerNode<SecretGame01Layer>([](SecretGame01Layer* node) {
    devtools::label("Members for SecretGame01Layer:");
    devtools::property("m_selectedObject", node->m_selectedObject);
    devtools::property("m_gameDifficulty", node->m_gameDifficulty);
    devtools::property("m_gameActive", node->m_gameActive);
    devtools::property("m_timeElapsed", node->m_timeElapsed);
    devtools::property("m_gameTime", node->m_gameTime);
    devtools::label(fmt::format("cocos2d::CCArray* m_gameObjects at {}", (void*)node->m_gameObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_requiredObjects at {}", (void*)node->m_requiredObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_mainMenu at {}", (void*)node->m_mainMenu).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_timeBarSprite at {}", (void*)node->m_timeBarSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretLayer>) {
devtools::registerNode<SecretLayer>([](SecretLayer* node) {
    devtools::label("Members for SecretLayer:");
    devtools::property("m_basicMessageIndex", node->m_basicMessageIndex);
    devtools::property("m_selectedThread", node->m_selectedThread);
    devtools::property("m_threadMessageIndex", node->m_threadMessageIndex);
    devtools::property("m_basicMessageCount", node->m_basicMessageCount);
    devtools::property("m_doomedIndex", node->m_doomedIndex);
    devtools::property("m_threadTag", node->m_threadTag);
    devtools::label(fmt::format("CCTextInputNode* m_searchInput at {}", (void*)node->m_searchInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_messageLabel at {}", (void*)node->m_messageLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_submitButton at {}", (void*)node->m_submitButton).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_messageThreads at {}", (void*)node->m_messageThreads).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretLayer2>) {
devtools::registerNode<SecretLayer2>([](SecretLayer2* node) {
    devtools::label("Members for SecretLayer2:");
    devtools::property("m_threadTag", node->m_threadTag);
    devtools::property("m_basicMessageIndex", node->m_basicMessageIndex);
    devtools::property("m_selectedThread", node->m_selectedThread);
    devtools::property("m_threadMessageIndex", node->m_threadMessageIndex);
    devtools::property("m_basicMessageCount", node->m_basicMessageCount);
    devtools::property("m_errorMessageIndex", node->m_errorMessageIndex);
    devtools::property("m_exiting", node->m_exiting);
    devtools::property("m_doorDialogIndex", node->m_doorDialogIndex);
    devtools::label(fmt::format("CCTextInputNode* m_searchInput at {}", (void*)node->m_searchInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_messageLabel at {}", (void*)node->m_messageLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_submitButton at {}", (void*)node->m_submitButton).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_messageThreads at {}", (void*)node->m_messageThreads).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_secretLevelButton at {}", (void*)node->m_secretLevelButton).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_secretLevelLabels at {}", (void*)node->m_secretLevelLabels).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_secretDoorButton at {}", (void*)node->m_secretDoorButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretLayer3>) {
devtools::registerNode<SecretLayer3>([](SecretLayer3* node) {
    devtools::label("Members for SecretLayer3:");
    devtools::property("m_lockInput", node->m_lockInput);
    devtools::label(fmt::format("DungeonBarsSprite* m_dungeonBars at {}", (void*)node->m_dungeonBars).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_locksArray at {}", (void*)node->m_locksArray).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_demonEyes at {}", (void*)node->m_demonEyes).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_demonBody at {}", (void*)node->m_demonBody).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_secretChest at {}", (void*)node->m_secretChest).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretLayer4>) {
devtools::registerNode<SecretLayer4>([](SecretLayer4* node) {
    devtools::label("Members for SecretLayer4:");
    devtools::property("m_threadTag", node->m_threadTag);
    devtools::property("m_basicMessageIndex", node->m_basicMessageIndex);
    devtools::property("m_selectedThread", node->m_selectedThread);
    devtools::property("m_threadMessageIndex", node->m_threadMessageIndex);
    devtools::property("m_basicMessageCount", node->m_basicMessageCount);
    devtools::property("m_errorMessageIndex", node->m_errorMessageIndex);
    devtools::property("m_exiting", node->m_exiting);
    devtools::label(fmt::format("CCTextInputNode* m_searchInput at {}", (void*)node->m_searchInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_messageLabel at {}", (void*)node->m_messageLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_submitButton at {}", (void*)node->m_submitButton).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_messageThreads at {}", (void*)node->m_messageThreads).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretLayer5>) {
devtools::registerNode<SecretLayer5>([](SecretLayer5* node) {
    devtools::label("Members for SecretLayer5:");
    devtools::property("m_threadTag", node->m_threadTag);
    devtools::property("m_basicMessageIndex", node->m_basicMessageIndex);
    devtools::property("m_selectedThread", node->m_selectedThread);
    devtools::property("m_threadMessageIndex", node->m_threadMessageIndex);
    devtools::property("m_basicMessageCount", node->m_basicMessageCount);
    devtools::property("m_errorMessageIndex", node->m_errorMessageIndex);
    devtools::property("m_exiting", node->m_exiting);
    devtools::property("m_loading", node->m_loading);
    devtools::property("m_rewardStatus", node->m_rewardStatus);
    devtools::property("m_chestID", node->m_chestID);
    devtools::property("m_uiLocked", node->m_uiLocked);
    devtools::property("m_chatIndex", node->m_chatIndex);
    devtools::label(fmt::format("CCTextInputNode* m_textInput at {}", (void*)node->m_textInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_messageLabel at {}", (void*)node->m_messageLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_wraithButton at {}", (void*)node->m_wraithButton).c_str());
    devtools::label(fmt::format("void* m_unk1f0 at {}", (void*)node->m_unk1f0).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_torchFires at {}", (void*)node->m_torchFires).c_str());
    devtools::label(fmt::format("CCSpriteWithHue* m_wraithSprite at {}", (void*)node->m_wraithSprite).c_str());
    devtools::label(fmt::format("CCSpriteGrayscale* m_wraithGraySprite at {}", (void*)node->m_wraithGraySprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_eyesSprite at {}", (void*)node->m_eyesSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_background at {}", (void*)node->m_background).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_lockSprite at {}", (void*)node->m_lockSprite).c_str());
    devtools::label("gd::vector<int> m_soundEffects");
    devtools::label(fmt::format("cocos2d::extension::CCScale9Sprite* m_inputBackground at {}", (void*)node->m_inputBackground).c_str());
    devtools::label(fmt::format("LoadingCircleSprite* m_circleSprite at {}", (void*)node->m_circleSprite).c_str());
    devtools::label(fmt::format("TextArea* m_messageArea at {}", (void*)node->m_messageArea).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretLayer6>) {
devtools::registerNode<SecretLayer6>([](SecretLayer6* node) {
    devtools::label("Members for SecretLayer6:");
    devtools::label(fmt::format("SecretGame01Layer* m_gameLayer at {}", (void*)node->m_gameLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SecretRewardsLayer>) {
devtools::registerNode<SecretRewardsLayer>([](SecretRewardsLayer* node) {
    devtools::label("Members for SecretRewardsLayer:");
    devtools::property("m_unkSize4_1", node->m_unkSize4_1);
    devtools::property("m_unkSize4_2", node->m_unkSize4_2);
    devtools::property("m_scratchDialogIndex", node->m_scratchDialogIndex);
    devtools::property("m_potborDialogIndex", node->m_potborDialogIndex);
    devtools::property("m_diamondDialogIndex", node->m_diamondDialogIndex);
    devtools::property("m_mechanicDialogIndex", node->m_mechanicDialogIndex);
    devtools::property("m_inMainLayer", node->m_inMainLayer);
    devtools::enumerable("m_rewardType", node->m_rewardType, {
        { GJRewardType::Unknown, "GJRewardType::Unknown" },
        { GJRewardType::Small, "GJRewardType::Small" },
        { GJRewardType::Large, "GJRewardType::Large" },
        { GJRewardType::SmallTreasure, "GJRewardType::SmallTreasure" },
        { GJRewardType::LargeTreasure, "GJRewardType::LargeTreasure" },
        { GJRewardType::Key10Treasure, "GJRewardType::Key10Treasure" },
        { GJRewardType::Key25Treasure, "GJRewardType::Key25Treasure" },
        { GJRewardType::Key50Treasure, "GJRewardType::Key50Treasure" },
        { GJRewardType::Key100Treasure, "GJRewardType::Key100Treasure" },
        { GJRewardType::Gold, "GJRewardType::Gold" },
    });
    devtools::property("m_lockedDialogIndex", node->m_lockedDialogIndex);
    devtools::label(fmt::format("cocos2d::CCLayer* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLayer* m_secondaryLayer at {}", (void*)node->m_secondaryLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_chestLabel at {}", (void*)node->m_chestLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_chestCounter at {}", (void*)node->m_chestCounter).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_goldPriceSprite at {}", (void*)node->m_goldPriceSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_chestCounters at {}", (void*)node->m_chestCounters).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_keysLabel at {}", (void*)node->m_keysLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_goldKeysLabel at {}", (void*)node->m_goldKeysLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_keySprite at {}", (void*)node->m_keySprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_goldKeySprite at {}", (void*)node->m_goldKeySprite).c_str());
    devtools::label(fmt::format("void* m_unknown at {}", (void*)node->m_unknown).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_leftButton at {}", (void*)node->m_leftButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_rightButton at {}", (void*)node->m_rightButton).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_backSprite at {}", (void*)node->m_backSprite).c_str());
    devtools::label(fmt::format("BoomScrollLayer* m_mainScrollLayer at {}", (void*)node->m_mainScrollLayer).c_str());
    devtools::label(fmt::format("BoomScrollLayer* m_secondaryScrollLayer at {}", (void*)node->m_secondaryScrollLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_backgroundSprite at {}", (void*)node->m_backgroundSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SelectArtLayer>) {
devtools::registerNode<SelectArtLayer>([](SelectArtLayer* node) {
    devtools::label("Members for SelectArtLayer:");
    devtools::property("m_art", node->m_art);
    devtools::property("m_line", node->m_line);
    devtools::enumerable("m_type", node->m_type, {
        { SelectArtType::Background, "SelectArtType::Background" },
        { SelectArtType::Ground, "SelectArtType::Ground" },
        { SelectArtType::Middleground, "SelectArtType::Middleground" },
    });
    devtools::label(fmt::format("cocos2d::CCArray* m_artSprites at {}", (void*)node->m_artSprites).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_lineSprites at {}", (void*)node->m_lineSprites).c_str());
    devtools::label(fmt::format("SelectArtDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SelectEventLayer>) {
devtools::registerNode<SelectEventLayer>([](SelectEventLayer* node) {
    devtools::label("Members for SelectEventLayer:");
    devtools::property("m_eventsChanged", node->m_eventsChanged);
    devtools::property("m_unk3b4", node->m_unk3b4);
    devtools::property("m_toggleCount", node->m_toggleCount);
    devtools::property("m_maxPage", node->m_maxPage);
    devtools::label(fmt::format("SetupEventLinkPopup* m_eventLinkPopup at {}", (void*)node->m_eventLinkPopup).c_str());
    devtools::label("gd::map<int, gd::string> m_eventInfos");
    devtools::label("gd::set<int> m_eventIDs");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SelectFontLayer>) {
devtools::registerNode<SelectFontLayer>([](SelectFontLayer* node) {
    devtools::label("Members for SelectFontLayer:");
    devtools::property("m_font", node->m_font);
    devtools::label(fmt::format("LevelEditorLayer* m_editorLayer at {}", (void*)node->m_editorLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_fontLabel at {}", (void*)node->m_fontLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SelectListIconLayer>) {
devtools::registerNode<SelectListIconLayer>([](SelectListIconLayer* node) {
    devtools::label("Members for SelectListIconLayer:");
    devtools::property("m_currentDifficulty", node->m_currentDifficulty);
    devtools::label(fmt::format("cocos2d::CCArray* m_difficulties at {}", (void*)node->m_difficulties).c_str());
    devtools::label(fmt::format("SelectListIconDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SelectPremadeLayer>) {
devtools::registerNode<SelectPremadeLayer>([](SelectPremadeLayer* node) {
    devtools::label("Members for SelectPremadeLayer:");
    devtools::label(fmt::format("SelectPremadeDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SelectSettingLayer>) {
devtools::registerNode<SelectSettingLayer>([](SelectSettingLayer* node) {
    devtools::label("Members for SelectSettingLayer:");
    devtools::property("m_settingID", node->m_settingID);
    devtools::enumerable("m_type", node->m_type, {
        { SelectSettingType::StartingModeClassic, "SelectSettingType::StartingModeClassic" },
        { SelectSettingType::StartingModePlatformer, "SelectSettingType::StartingModePlatformer" },
        { SelectSettingType::StartingSpeed, "SelectSettingType::StartingSpeed" },
    });
    devtools::label(fmt::format("cocos2d::CCArray* m_settingSprites at {}", (void*)node->m_settingSprites).c_str());
    devtools::label(fmt::format("SelectSettingDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SelectSFXSortLayer>) {
devtools::registerNode<SelectSFXSortLayer>([](SelectSFXSortLayer* node) {
    devtools::label("Members for SelectSFXSortLayer:");
    devtools::enumerable("m_sortType", node->m_sortType, {
        { AudioSortType::NameAscending, "AudioSortType::NameAscending" },
        { AudioSortType::NameDescending, "AudioSortType::NameDescending" },
        { AudioSortType::LengthAscending, "AudioSortType::LengthAscending" },
        { AudioSortType::LengthDescending, "AudioSortType::LengthDescending" },
        { AudioSortType::IDAscending, "AudioSortType::IDAscending" },
        { AudioSortType::IDDescending, "AudioSortType::IDDescending" },
        { AudioSortType::SongOrder, "AudioSortType::SongOrder" },
    });
    devtools::label(fmt::format("SelectSFXSortDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SequenceTriggerGameObject>) {
devtools::registerNode<SequenceTriggerGameObject>([](SequenceTriggerGameObject* node) {
    devtools::label("Members for SequenceTriggerGameObject:");
    devtools::property("m_minInt", node->m_minInt);
    devtools::property("m_sequenceMode", node->m_sequenceMode);
    devtools::property("m_resetMode", node->m_resetMode);
    devtools::property("m_reset", node->m_reset);
    devtools::property("m_sequenceTotalCount", node->m_sequenceTotalCount);
    devtools::property("m_uniqueRemap", node->m_uniqueRemap);
    devtools::label("gd::unordered_map<int, float> m_sequenceTimes");
    devtools::label("gd::unordered_map<int, int> m_sequenceIndices");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetFolderPopup>) {
devtools::registerNode<SetFolderPopup>([](SetFolderPopup* node) {
    devtools::label("Members for SetFolderPopup:");
    devtools::property("m_isCreated", node->m_isCreated);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_titleLabel at {}", (void*)node->m_titleLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetGroupIDLayer>) {
devtools::registerNode<SetGroupIDLayer>([](SetGroupIDLayer* node) {
    devtools::label("Members for SetGroupIDLayer:");
    devtools::property("m_showChannelOrder", node->m_showChannelOrder);
    devtools::property("m_channelValue", node->m_channelValue);
    devtools::property("m_channelUpdated", node->m_channelUpdated);
    devtools::property("m_groupIDValue", node->m_groupIDValue);
    devtools::property("m_editorLayerValue", node->m_editorLayerValue);
    devtools::property("m_editorLayer2Value", node->m_editorLayer2Value);
    devtools::property("m_zOrderValue", node->m_zOrderValue);
    devtools::enumerable("m_zLayerValue", node->m_zLayerValue, {
        { ZLayer::B5, "ZLayer::B5" },
        { ZLayer::B4, "ZLayer::B4" },
        { ZLayer::B3, "ZLayer::B3" },
        { ZLayer::B2, "ZLayer::B2" },
        { ZLayer::B1, "ZLayer::B1" },
        { ZLayer::Default, "ZLayer::Default" },
        { ZLayer::T1, "ZLayer::T1" },
        { ZLayer::T2, "ZLayer::T2" },
        { ZLayer::T3, "ZLayer::T3" },
        { ZLayer::T4, "ZLayer::T4" },
    });
    devtools::property("m_orderValue", node->m_orderValue);
    devtools::property("m_channelOrderEdited", node->m_channelOrderEdited);
    devtools::property("m_editorLayerEdited", node->m_editorLayerEdited);
    devtools::property("m_removeGroupsLock", node->m_removeGroupsLock);
    devtools::property("m_groupToRemove", node->m_groupToRemove);
    devtools::property("m_addedGroup", node->m_addedGroup);
    devtools::property("m_reverseChanged", node->m_reverseChanged);
    devtools::property("m_hasTargetObjects", node->m_hasTargetObjects);
    devtools::property("m_unk2ff", node->m_unk2ff);
    devtools::property("m_unk300", node->m_unk300);
    devtools::property("m_nextFreeID", node->m_nextFreeID);
    devtools::label(fmt::format("GameObject* m_targetObject at {}", (void*)node->m_targetObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_targetObjects at {}", (void*)node->m_targetObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_zLayerButtons at {}", (void*)node->m_zLayerButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_groupIDObjects at {}", (void*)node->m_groupIDObjects).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_editorLayerInput at {}", (void*)node->m_editorLayerInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_editorLayer2Input at {}", (void*)node->m_editorLayer2Input).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_zOrderInput at {}", (void*)node->m_zOrderInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_groupIDInput at {}", (void*)node->m_groupIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_orderInput at {}", (void*)node->m_orderInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_channelInput at {}", (void*)node->m_channelInput).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_parentGroups at {}", (void*)node->m_parentGroups).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetLevelOrderPopup>) {
devtools::registerNode<SetLevelOrderPopup>([](SetLevelOrderPopup* node) {
    devtools::label("Members for SetLevelOrderPopup:");
    devtools::property("m_levelID", node->m_levelID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetTargetIDLayer>) {
devtools::registerNode<SetTargetIDLayer>([](SetTargetIDLayer* node) {
    devtools::label("Members for SetTargetIDLayer:");
    devtools::property("m_objectID", node->m_objectID);
    devtools::property("m_minimumID", node->m_minimumID);
    devtools::property("m_maximumID", node->m_maximumID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupAnimationPopup>) {
devtools::registerNode<SetupAnimationPopup>([](SetupAnimationPopup* node) {
    devtools::label("Members for SetupAnimationPopup:");
    devtools::property("m_targetID", node->m_targetID);
    devtools::property("m_animationID", node->m_animationID);
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_animationIDInput at {}", (void*)node->m_animationIDInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupAreaMoveTriggerPopup>) {
devtools::registerNode<SetupAreaMoveTriggerPopup>([](SetupAreaMoveTriggerPopup* node) {
    devtools::label("Members for SetupAreaMoveTriggerPopup:");
    devtools::label(fmt::format("cocos2d::CCArray* m_modeButtons at {}", (void*)node->m_modeButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_targetButtons at {}", (void*)node->m_targetButtons).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupAreaTintTriggerPopup>) {
devtools::registerNode<SetupAreaTintTriggerPopup>([](SetupAreaTintTriggerPopup* node) {
    devtools::label("Members for SetupAreaTintTriggerPopup:");
    devtools::property("m_hsvChanged", node->m_hsvChanged);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_hsvButton at {}", (void*)node->m_hsvButton).c_str());
    devtools::label("cocos2d::ccHSVValue m_hsvValue");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupArtSwitchPopup>) {
devtools::registerNode<SetupArtSwitchPopup>([](SetupArtSwitchPopup* node) {
    devtools::label("Members for SetupArtSwitchPopup:");
    devtools::enumerable("m_artType", node->m_artType, {
        { SelectArtType::Background, "SelectArtType::Background" },
        { SelectArtType::Ground, "SelectArtType::Ground" },
        { SelectArtType::Middleground, "SelectArtType::Middleground" },
    });
    devtools::label(fmt::format("cocos2d::CCSprite* m_artSprite at {}", (void*)node->m_artSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupAudioLineGuidePopup>) {
devtools::registerNode<SetupAudioLineGuidePopup>([](SetupAudioLineGuidePopup* node) {
    devtools::label("Members for SetupAudioLineGuidePopup:");
    devtools::label(fmt::format("cocos2d::CCSprite* m_speedSprite at {}", (void*)node->m_speedSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupAudioTriggerPopup>) {
devtools::registerNode<SetupAudioTriggerPopup>([](SetupAudioTriggerPopup* node) {
    devtools::label("Members for SetupAudioTriggerPopup:");
    devtools::label(fmt::format("cocos2d::CCArray* m_proximityButtons at {}", (void*)node->m_proximityButtons).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupCameraEdgePopup>) {
devtools::registerNode<SetupCameraEdgePopup>([](SetupCameraEdgePopup* node) {
    devtools::label("Members for SetupCameraEdgePopup:");
    devtools::property("m_targetID", node->m_targetID);
    devtools::property("m_edgeDirection", node->m_edgeDirection);
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_directionToggles at {}", (void*)node->m_directionToggles).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupCameraModePopup>) {
devtools::registerNode<SetupCameraModePopup>([](SetupCameraModePopup* node) {
    devtools::label("Members for SetupCameraModePopup:");
    devtools::property("m_cameraEasing", node->m_cameraEasing);
    devtools::property("m_cameraPadding", node->m_cameraPadding);
    devtools::property("m_freeMode", node->m_freeMode);
    devtools::property("m_cameraSettingsEnabled", node->m_cameraSettingsEnabled);
    devtools::property("m_cameraModeObjects", node->m_cameraModeObjects);
    devtools::label(fmt::format("cocos2d::CCArray* m_freeModeObjects at {}", (void*)node->m_freeModeObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_cameraSettingsObjects at {}", (void*)node->m_cameraSettingsObjects).c_str());
    devtools::label(fmt::format("Slider* m_cameraEasingSlider at {}", (void*)node->m_cameraEasingSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraEasingLabel at {}", (void*)node->m_cameraEasingLabel).c_str());
    devtools::label(fmt::format("Slider* m_cameraPaddingSlider at {}", (void*)node->m_cameraPaddingSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraPaddingLabel at {}", (void*)node->m_cameraPaddingLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupCameraOffsetTrigger>) {
devtools::registerNode<SetupCameraOffsetTrigger>([](SetupCameraOffsetTrigger* node) {
    devtools::label("Members for SetupCameraOffsetTrigger:");
    devtools::property("m_moveTime", node->m_moveTime);
    devtools::enumerable("m_cameraEasingType", node->m_cameraEasingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_cameraEasingRate", node->m_cameraEasingRate);
    devtools::property("m_offsetX", node->m_offsetX);
    devtools::property("m_offsetY", node->m_offsetY);
    devtools::property("m_targetMode", node->m_targetMode);
    devtools::label(fmt::format("CCTextInputNode* m_moveTimeInput at {}", (void*)node->m_moveTimeInput).c_str());
    devtools::label(fmt::format("Slider* m_moveTimeSlider at {}", (void*)node->m_moveTimeSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraEasingLabel at {}", (void*)node->m_cameraEasingLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_cameraEasingRateButton at {}", (void*)node->m_cameraEasingRateButton).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraEasingRateLabel at {}", (void*)node->m_cameraEasingRateLabel).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_offsetXInput at {}", (void*)node->m_offsetXInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_offsetYInput at {}", (void*)node->m_offsetYInput).c_str());
    devtools::label(fmt::format("Slider* m_offsetXSlider at {}", (void*)node->m_offsetXSlider).c_str());
    devtools::label(fmt::format("Slider* m_offsetYSlider at {}", (void*)node->m_offsetYSlider).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_xOnlyToggler at {}", (void*)node->m_xOnlyToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_yOnlyToggler at {}", (void*)node->m_yOnlyToggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupCameraRotatePopup>) {
devtools::registerNode<SetupCameraRotatePopup>([](SetupCameraRotatePopup* node) {
    devtools::label("Members for SetupCameraRotatePopup:");
    devtools::property("m_moveTime", node->m_moveTime);
    devtools::enumerable("m_cameraEasingType", node->m_cameraEasingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_cameraEasingRate", node->m_cameraEasingRate);
    devtools::property("m_degrees", node->m_degrees);
    devtools::label(fmt::format("CCTextInputNode* m_moveTimeInput at {}", (void*)node->m_moveTimeInput).c_str());
    devtools::label(fmt::format("Slider* m_moveTimeSlider at {}", (void*)node->m_moveTimeSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraEasingLabel at {}", (void*)node->m_cameraEasingLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_cameraEasingRateButton at {}", (void*)node->m_cameraEasingRateButton).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraEasingRateLabel at {}", (void*)node->m_cameraEasingRateLabel).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_degreesInput at {}", (void*)node->m_degreesInput).c_str());
    devtools::label(fmt::format("Slider* m_degreesSlider at {}", (void*)node->m_degreesSlider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupCollisionTriggerPopup>) {
devtools::registerNode<SetupCollisionTriggerPopup>([](SetupCollisionTriggerPopup* node) {
    devtools::label("Members for SetupCollisionTriggerPopup:");
    devtools::property("m_blockAID", node->m_blockAID);
    devtools::property("m_blockBID", node->m_blockBID);
    devtools::property("m_targetID", node->m_targetID);
    devtools::property("m_activateGroup", node->m_activateGroup);
    devtools::property("m_triggerOnExit", node->m_triggerOnExit);
    devtools::property("m_targetP1", node->m_targetP1);
    devtools::property("m_targetP2", node->m_targetP2);
    devtools::property("m_targetPP", node->m_targetPP);
    devtools::label(fmt::format("CCTextInputNode* m_blockAInput at {}", (void*)node->m_blockAInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_blockBInput at {}", (void*)node->m_blockBInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupCountTriggerPopup>) {
devtools::registerNode<SetupCountTriggerPopup>([](SetupCountTriggerPopup* node) {
    devtools::label("Members for SetupCountTriggerPopup:");
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_targetID", node->m_targetID);
    devtools::property("m_targetCount", node->m_targetCount);
    devtools::property("m_activateGroup", node->m_activateGroup);
    devtools::property("m_multiActivate", node->m_multiActivate);
    devtools::label(fmt::format("CCTextInputNode* m_itemIDInput at {}", (void*)node->m_itemIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetCountInput at {}", (void*)node->m_targetCountInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupEndPopup>) {
devtools::registerNode<SetupEndPopup>([](SetupEndPopup* node) {
    devtools::label("Members for SetupEndPopup:");
    devtools::property("m_reversed", node->m_reversed);
    devtools::property("m_lockY", node->m_lockY);
    devtools::property("m_groupID", node->m_groupID);
    devtools::property("m_multiActivate", node->m_multiActivate);
    devtools::label(fmt::format("CCTextInputNode* m_groupIDInput at {}", (void*)node->m_groupIDInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupEnterEffectPopup>) {
devtools::registerNode<SetupEnterEffectPopup>([](SetupEnterEffectPopup* node) {
    devtools::label("Members for SetupEnterEffectPopup:");
    devtools::property("m_objectID", node->m_objectID);
    devtools::property("m_enterType", node->m_enterType);
    devtools::property("m_hsvChanged", node->m_hsvChanged);
    devtools::label(fmt::format("CCMenuItemToggler* m_enterOnlyToggler at {}", (void*)node->m_enterOnlyToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_exitOnlyToggler at {}", (void*)node->m_exitOnlyToggler).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_hsvButton at {}", (void*)node->m_hsvButton).c_str());
    devtools::label("cocos2d::ccHSVValue m_hsvValue");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupEnterTriggerPopup>) {
devtools::registerNode<SetupEnterTriggerPopup>([](SetupEnterTriggerPopup* node) {
    devtools::label("Members for SetupEnterTriggerPopup:");
    devtools::property("m_enterType", node->m_enterType);
    devtools::label(fmt::format("CCMenuItemToggler* m_enterOnlyToggler at {}", (void*)node->m_enterOnlyToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_exitOnlyToggler at {}", (void*)node->m_exitOnlyToggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupGradientPopup>) {
devtools::registerNode<SetupGradientPopup>([](SetupGradientPopup* node) {
    devtools::label("Members for SetupGradientPopup:");
    devtools::property("m_blendingMode", node->m_blendingMode);
    devtools::property("m_blendingLayer", node->m_blendingLayer);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_blendingLabel at {}", (void*)node->m_blendingLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_layerButtons at {}", (void*)node->m_layerButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gradientLabels at {}", (void*)node->m_gradientLabels).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupGravityModPopup>) {
devtools::registerNode<SetupGravityModPopup>([](SetupGravityModPopup* node) {
    devtools::label("Members for SetupGravityModPopup:");
    devtools::property("m_gravityMod", node->m_gravityMod);
    devtools::property("m_gravityTrigger", node->m_gravityTrigger);
    devtools::property("m_minValue", node->m_minValue);
    devtools::property("m_maxValue", node->m_maxValue);
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_disableDelegate", node->m_disableDelegate);
    devtools::label(fmt::format("EffectGameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gameObjects at {}", (void*)node->m_gameObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_gravityModLabel at {}", (void*)node->m_gravityModLabel).c_str());
    devtools::label(fmt::format("Slider* m_gravityModSlider at {}", (void*)node->m_gravityModSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_itemIDInput at {}", (void*)node->m_itemIDInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupInstantCountPopup>) {
devtools::registerNode<SetupInstantCountPopup>([](SetupInstantCountPopup* node) {
    devtools::label("Members for SetupInstantCountPopup:");
    devtools::property("m_itemID", node->m_itemID);
    devtools::property("m_targetID", node->m_targetID);
    devtools::property("m_targetCount", node->m_targetCount);
    devtools::property("m_activateGroup", node->m_activateGroup);
    devtools::property("m_mode", node->m_mode);
    devtools::label(fmt::format("CCTextInputNode* m_itemIDInput at {}", (void*)node->m_itemIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetIDInput at {}", (void*)node->m_targetIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_targetCountInput at {}", (void*)node->m_targetCountInput).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_equalsToggler at {}", (void*)node->m_equalsToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_largerToggler at {}", (void*)node->m_largerToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_smallerToggler at {}", (void*)node->m_smallerToggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupItemCompareTriggerPopup>) {
devtools::registerNode<SetupItemCompareTriggerPopup>([](SetupItemCompareTriggerPopup* node) {
    devtools::label("Members for SetupItemCompareTriggerPopup:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_formulaLabel at {}", (void*)node->m_formulaLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupItemEditTriggerPopup>) {
devtools::registerNode<SetupItemEditTriggerPopup>([](SetupItemEditTriggerPopup* node) {
    devtools::label("Members for SetupItemEditTriggerPopup:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_formulaLabel at {}", (void*)node->m_formulaLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupKeyframePopup>) {
devtools::registerNode<SetupKeyframePopup>([](SetupKeyframePopup* node) {
    devtools::label("Members for SetupKeyframePopup:");
    devtools::property("m_groupIDChanged", node->m_groupIDChanged);
    devtools::label(fmt::format("cocos2d::CCArray* m_timeModeToggles at {}", (void*)node->m_timeModeToggles).c_str());
    devtools::label(fmt::format("LevelEditorLayer* m_editorLayer at {}", (void*)node->m_editorLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupMGTrigger>) {
devtools::registerNode<SetupMGTrigger>([](SetupMGTrigger* node) {
    devtools::label("Members for SetupMGTrigger:");
    devtools::property("m_moveTime", node->m_moveTime);
    devtools::enumerable("m_mgEasingType", node->m_mgEasingType, {
        { EasingType::None, "EasingType::None" },
        { EasingType::EaseInOut, "EasingType::EaseInOut" },
        { EasingType::EaseIn, "EasingType::EaseIn" },
        { EasingType::EaseOut, "EasingType::EaseOut" },
        { EasingType::ElasticInOut, "EasingType::ElasticInOut" },
        { EasingType::ElasticIn, "EasingType::ElasticIn" },
        { EasingType::ElasticOut, "EasingType::ElasticOut" },
        { EasingType::BounceInOut, "EasingType::BounceInOut" },
        { EasingType::BounceIn, "EasingType::BounceIn" },
        { EasingType::BounceOut, "EasingType::BounceOut" },
        { EasingType::ExponentialInOut, "EasingType::ExponentialInOut" },
        { EasingType::ExponentialIn, "EasingType::ExponentialIn" },
        { EasingType::ExponentialOut, "EasingType::ExponentialOut" },
        { EasingType::SineInOut, "EasingType::SineInOut" },
        { EasingType::SineIn, "EasingType::SineIn" },
        { EasingType::SineOut, "EasingType::SineOut" },
        { EasingType::BackInOut, "EasingType::BackInOut" },
        { EasingType::BackIn, "EasingType::BackIn" },
        { EasingType::BackOut, "EasingType::BackOut" },
    });
    devtools::property("m_mgEasingRate", node->m_mgEasingRate);
    devtools::property("m_offsetY", node->m_offsetY);
    devtools::label(fmt::format("CCTextInputNode* m_moveTimeInput at {}", (void*)node->m_moveTimeInput).c_str());
    devtools::label(fmt::format("Slider* m_moveTimeSlider at {}", (void*)node->m_moveTimeSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_mgEasingLabel at {}", (void*)node->m_mgEasingLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_mgEasingRateButton at {}", (void*)node->m_mgEasingRateButton).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_mgEasingRateLabel at {}", (void*)node->m_mgEasingRateLabel).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_offsetYInput at {}", (void*)node->m_offsetYInput).c_str());
    devtools::label(fmt::format("Slider* m_offsetYSlider at {}", (void*)node->m_offsetYSlider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupMoveCommandPopup>) {
devtools::registerNode<SetupMoveCommandPopup>([](SetupMoveCommandPopup* node) {
    devtools::label("Members for SetupMoveCommandPopup:");
    devtools::property("m_smallStep", node->m_smallStep);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupObjectOptionsPopup>) {
devtools::registerNode<SetupObjectOptionsPopup>([](SetupObjectOptionsPopup* node) {
    devtools::label("Members for SetupObjectOptionsPopup:");
    devtools::property("m_iceBlock", node->m_iceBlock);
    devtools::property("m_dontFade", node->m_dontFade);
    devtools::property("m_dontEnter", node->m_dontEnter);
    devtools::property("m_noEffects", node->m_noEffects);
    devtools::property("m_noParticle", node->m_noParticle);
    devtools::property("m_noTouch", node->m_noTouch);
    devtools::property("m_passable", node->m_passable);
    devtools::property("m_hide", node->m_hide);
    devtools::property("m_nonStickX", node->m_nonStickX);
    devtools::property("m_nonStickY", node->m_nonStickY);
    devtools::property("m_extraSticky", node->m_extraSticky);
    devtools::property("m_dontBoostY", node->m_dontBoostY);
    devtools::property("m_dontBoostX", node->m_dontBoostX);
    devtools::property("m_noAudioScale", node->m_noAudioScale);
    devtools::property("m_scaleStick", node->m_scaleStick);
    devtools::property("m_highDetail", node->m_highDetail);
    devtools::property("m_groupParent", node->m_groupParent);
    devtools::property("m_areaParent", node->m_areaParent);
    devtools::property("m_gripSlope", node->m_gripSlope);
    devtools::property("m_noGlow", node->m_noGlow);
    devtools::property("m_reverse", node->m_reverse);
    devtools::property("m_extendedCollision", node->m_extendedCollision);
    devtools::property("m_unk2a6", node->m_unk2a6);
    devtools::property("m_effectObject", node->m_effectObject);
    devtools::property("m_singlePlayerTouch", node->m_singlePlayerTouch);
    devtools::property("m_centerEffect", node->m_centerEffect);
    devtools::label(fmt::format("GameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gameObjects at {}", (void*)node->m_gameObjects).c_str());
    devtools::label(fmt::format("SetGroupIDLayer* m_groupIDLayer at {}", (void*)node->m_groupIDLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupOpacityPopup>) {
devtools::registerNode<SetupOpacityPopup>([](SetupOpacityPopup* node) {
    devtools::label("Members for SetupOpacityPopup:");
    devtools::property("m_opacity", node->m_opacity);
    devtools::property("m_fadeTime", node->m_fadeTime);
    devtools::property("m_groupID", node->m_groupID);
    devtools::label(fmt::format("CCTextInputNode* m_groupIDInput at {}", (void*)node->m_groupIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_fadeTimeInput at {}", (void*)node->m_fadeTimeInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_opacityLabel at {}", (void*)node->m_opacityLabel).c_str());
    devtools::label(fmt::format("Slider* m_fadeTimeSlider at {}", (void*)node->m_fadeTimeSlider).c_str());
    devtools::label(fmt::format("Slider* m_opacitySlider at {}", (void*)node->m_opacitySlider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupOptionsTriggerPopup>) {
devtools::registerNode<SetupOptionsTriggerPopup>([](SetupOptionsTriggerPopup* node) {
    devtools::label("Members for SetupOptionsTriggerPopup:");
    devtools::property("m_togglePosition", node->m_togglePosition);
    devtools::property("m_togglePage", node->m_togglePage);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupPortalPopup>) {
devtools::registerNode<SetupPortalPopup>([](SetupPortalPopup* node) {
    devtools::label("Members for SetupPortalPopup:");
    devtools::property("m_cameraEasing", node->m_cameraEasing);
    devtools::property("m_cameraPadding", node->m_cameraPadding);
    devtools::property("m_freeMode", node->m_freeMode);
    devtools::property("m_cameraSettingsEnabled", node->m_cameraSettingsEnabled);
    devtools::property("m_disableDelegate", node->m_disableDelegate);
    devtools::label(fmt::format("EffectGameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gameObjects at {}", (void*)node->m_gameObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_freeModeObjects at {}", (void*)node->m_freeModeObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_cameraSettingsObjects at {}", (void*)node->m_cameraSettingsObjects).c_str());
    devtools::label(fmt::format("Slider* m_cameraEasingSlider at {}", (void*)node->m_cameraEasingSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraEasingLabel at {}", (void*)node->m_cameraEasingLabel).c_str());
    devtools::label(fmt::format("Slider* m_cameraPaddingSlider at {}", (void*)node->m_cameraPaddingSlider).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_cameraPaddingLabel at {}", (void*)node->m_cameraPaddingLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupPulsePopup>) {
devtools::registerNode<SetupPulsePopup>([](SetupPulsePopup* node) {
    devtools::label("Members for SetupPulsePopup:");
    devtools::property("m_unk3c0", node->m_unk3c0);
    devtools::property("m_originalColor", node->m_originalColor);
    devtools::property("m_currentColor", node->m_currentColor);
    devtools::property("m_groupMainOnly", node->m_groupMainOnly);
    devtools::property("m_groupSecondaryOnly", node->m_groupSecondaryOnly);
    devtools::property("m_staticHSV", node->m_staticHSV);
    devtools::property("m_targetGroupID", node->m_targetGroupID);
    devtools::property("m_copyColorID", node->m_copyColorID);
    devtools::property("m_colorInitializing", node->m_colorInitializing);
    devtools::property("m_fadeInTime", node->m_fadeInTime);
    devtools::property("m_holdTime", node->m_holdTime);
    devtools::property("m_fadeOutTime", node->m_fadeOutTime);
    devtools::property("m_pulseMode", node->m_pulseMode);
    devtools::property("m_pulseTargetType", node->m_pulseTargetType);
    devtools::property("m_modesInitializing", node->m_modesInitializing);
    devtools::property("m_pulseExclusive", node->m_pulseExclusive);
    devtools::label(fmt::format("cocos2d::extension::CCControlColourPicker* m_colorPicker at {}", (void*)node->m_colorPicker).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_colorObjects at {}", (void*)node->m_colorObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_hsvObjects at {}", (void*)node->m_hsvObjects).c_str());
    devtools::label(fmt::format("Slider* m_fadeInSlider at {}", (void*)node->m_fadeInSlider).c_str());
    devtools::label(fmt::format("Slider* m_holdSlider at {}", (void*)node->m_holdSlider).c_str());
    devtools::label(fmt::format("Slider* m_fadeOutSlider at {}", (void*)node->m_fadeOutSlider).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_channelButton at {}", (void*)node->m_channelButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_groupButton at {}", (void*)node->m_groupButton).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_idLabel at {}", (void*)node->m_idLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_currentColorSprite at {}", (void*)node->m_currentColorSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_originalColorSprite at {}", (void*)node->m_originalColorSprite).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_colorButton at {}", (void*)node->m_colorButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_hsvButton at {}", (void*)node->m_hsvButton).c_str());
    devtools::label(fmt::format("ConfigureHSVWidget* m_hsvWidget at {}", (void*)node->m_hsvWidget).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_specialColorButton at {}", (void*)node->m_specialColorButton).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_fadeInInput at {}", (void*)node->m_fadeInInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_holdInput at {}", (void*)node->m_holdInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_fadeOutInput at {}", (void*)node->m_fadeOutInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_idInput at {}", (void*)node->m_idInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_colorIDInput at {}", (void*)node->m_colorIDInput).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_mainOnlyToggler at {}", (void*)node->m_mainOnlyToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_secondaryOnlyToggler at {}", (void*)node->m_secondaryOnlyToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_staticHSVToggler at {}", (void*)node->m_staticHSVToggler).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_mainOnlyLabel at {}", (void*)node->m_mainOnlyLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_secondaryOnlyLabel at {}", (void*)node->m_secondaryOnlyLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_staticHSVLabel at {}", (void*)node->m_staticHSVLabel).c_str());
    devtools::label("cocos2d::ccHSVValue m_hsv");
    devtools::label(fmt::format("CCTextInputNode* m_rInput at {}", (void*)node->m_rInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_gInput at {}", (void*)node->m_gInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_bInput at {}", (void*)node->m_bInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_hexInput at {}", (void*)node->m_hexInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupRandAdvTriggerPopup>) {
devtools::registerNode<SetupRandAdvTriggerPopup>([](SetupRandAdvTriggerPopup* node) {
    devtools::label("Members for SetupRandAdvTriggerPopup:");
    devtools::property("m_performedAction", node->m_performedAction);
    devtools::property("m_groupToRemove", node->m_groupToRemove);
    devtools::property("m_removingGroup", node->m_removingGroup);
    devtools::label(fmt::format("cocos2d::CCArray* m_groupButtons at {}", (void*)node->m_groupButtons).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_groupIDInput at {}", (void*)node->m_groupIDInput).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_chanceInput at {}", (void*)node->m_chanceInput).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupRandTriggerPopup>) {
devtools::registerNode<SetupRandTriggerPopup>([](SetupRandTriggerPopup* node) {
    devtools::label("Members for SetupRandTriggerPopup:");
    devtools::property("m_chancePercent", node->m_chancePercent);
    devtools::property("m_groupID1", node->m_groupID1);
    devtools::property("m_groupID2", node->m_groupID2);
    devtools::label(fmt::format("CCTextInputNode* m_chanceInput at {}", (void*)node->m_chanceInput).c_str());
    devtools::label(fmt::format("Slider* m_chanceSlider at {}", (void*)node->m_chanceSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_groupID1Input at {}", (void*)node->m_groupID1Input).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_groupID2Input at {}", (void*)node->m_groupID2Input).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupReverbPopup>) {
devtools::registerNode<SetupReverbPopup>([](SetupReverbPopup* node) {
    devtools::label("Members for SetupReverbPopup:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_reverbLabel at {}", (void*)node->m_reverbLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupSequenceTriggerPopup>) {
devtools::registerNode<SetupSequenceTriggerPopup>([](SetupSequenceTriggerPopup* node) {
    devtools::label("Members for SetupSequenceTriggerPopup:");
    devtools::property("m_unk3b0", node->m_unk3b0);
    devtools::property("m_unk3b1", node->m_unk3b1);
    devtools::property("m_unk3c0", node->m_unk3c0);
    devtools::property("m_unk3c4", node->m_unk3c4);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_selectedButton at {}", (void*)node->m_selectedButton).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_groupButtons at {}", (void*)node->m_groupButtons).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupSFXPopup>) {
devtools::registerNode<SetupSFXPopup>([](SetupSFXPopup* node) {
    devtools::label("Members for SetupSFXPopup:");
    devtools::property("m_sfxID", node->m_sfxID);
    devtools::property("m_sfxLength", node->m_sfxLength);
    devtools::label(fmt::format("CustomSFXWidget* m_sfxWidget at {}", (void*)node->m_sfxWidget).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupShaderEffectPopup>) {
devtools::registerNode<SetupShaderEffectPopup>([](SetupShaderEffectPopup* node) {
    devtools::label("Members for SetupShaderEffectPopup:");
    devtools::property("m_zLayerMin", node->m_zLayerMin);
    devtools::property("m_zLayerMax", node->m_zLayerMax);
    devtools::property("m_changeMin", node->m_changeMin);
    devtools::property("m_objectID", node->m_objectID);
    devtools::label(fmt::format("cocos2d::CCArray* m_zLayerSprites at {}", (void*)node->m_zLayerSprites).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupShakePopup>) {
devtools::registerNode<SetupShakePopup>([](SetupShakePopup* node) {
    devtools::label("Members for SetupShakePopup:");
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_strength", node->m_strength);
    devtools::property("m_interval", node->m_interval);
    devtools::label(fmt::format("CCTextInputNode* m_durationInput at {}", (void*)node->m_durationInput).c_str());
    devtools::label(fmt::format("Slider* m_durationSlider at {}", (void*)node->m_durationSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_strengthInput at {}", (void*)node->m_strengthInput).c_str());
    devtools::label(fmt::format("Slider* m_strengthSlider at {}", (void*)node->m_strengthSlider).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_intervalInput at {}", (void*)node->m_intervalInput).c_str());
    devtools::label(fmt::format("Slider* m_intervalSlider at {}", (void*)node->m_intervalSlider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupSmartBlockLayer>) {
devtools::registerNode<SetupSmartBlockLayer>([](SetupSmartBlockLayer* node) {
    devtools::label("Members for SetupSmartBlockLayer:");
    devtools::property("m_referenceOnly", node->m_referenceOnly);
    devtools::property("m_allowRotation", node->m_allowRotation);
    devtools::property("m_allowFlipX", node->m_allowFlipX);
    devtools::property("m_allowFlipY", node->m_allowFlipY);
    devtools::property("m_useNearby", node->m_useNearby);
    devtools::property("m_dontDelete", node->m_dontDelete);
    devtools::property("m_ignoreCorners", node->m_ignoreCorners);
    devtools::property("m_specialTemplate", node->m_specialTemplate);
    devtools::label(fmt::format("SmartGameObject* m_gameObject at {}", (void*)node->m_gameObject).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_gameObjects at {}", (void*)node->m_gameObjects).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupSmartTemplateLayer>) {
devtools::registerNode<SetupSmartTemplateLayer>([](SetupSmartTemplateLayer* node) {
    devtools::label("Members for SetupSmartTemplateLayer:");
    devtools::label(fmt::format("GJSmartTemplate* m_smartTemplate at {}", (void*)node->m_smartTemplate).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_nameInput at {}", (void*)node->m_nameInput).c_str());
    devtools::label(fmt::format("cocos2d::CCNode* m_unk298 at {}", (void*)node->m_unk298).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupSongTriggerPopup>) {
devtools::registerNode<SetupSongTriggerPopup>([](SetupSongTriggerPopup* node) {
    devtools::label("Members for SetupSongTriggerPopup:");
    devtools::label(fmt::format("SongSelectNode* m_selectNode at {}", (void*)node->m_selectNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupSpawnPopup>) {
devtools::registerNode<SetupSpawnPopup>([](SetupSpawnPopup* node) {
    devtools::label("Members for SetupSpawnPopup:");
    devtools::property("m_isBusy", node->m_isBusy);
    devtools::property("m_remapOriginalID", node->m_remapOriginalID);
    devtools::property("m_remapNewID", node->m_remapNewID);
    devtools::label(fmt::format("cocos2d::CCArray* m_remapButtons at {}", (void*)node->m_remapButtons).c_str());
    devtools::label("gd::vector<int> m_remapGroups");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupTeleportPopup>) {
devtools::registerNode<SetupTeleportPopup>([](SetupTeleportPopup* node) {
    devtools::label("Members for SetupTeleportPopup:");
    devtools::label(fmt::format("cocos2d::CCArray* m_teleportGravityToggles at {}", (void*)node->m_teleportGravityToggles).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupTimeWarpPopup>) {
devtools::registerNode<SetupTimeWarpPopup>([](SetupTimeWarpPopup* node) {
    devtools::label("Members for SetupTimeWarpPopup:");
    devtools::property("m_timeWarpMod", node->m_timeWarpMod);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_timeWarpLabel at {}", (void*)node->m_timeWarpLabel).c_str());
    devtools::label(fmt::format("Slider* m_timeWarpSlider at {}", (void*)node->m_timeWarpSlider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SetupTouchTogglePopup>) {
devtools::registerNode<SetupTouchTogglePopup>([](SetupTouchTogglePopup* node) {
    devtools::label("Members for SetupTouchTogglePopup:");
    devtools::property("m_groupID", node->m_groupID);
    devtools::property("m_holdMode", node->m_holdMode);
    devtools::property("m_toggleMode", node->m_toggleMode);
    devtools::property("m_playerMode", node->m_playerMode);
    devtools::property("m_dualMode", node->m_dualMode);
    devtools::label(fmt::format("CCTextInputNode* m_groupIDInput at {}", (void*)node->m_groupIDInput).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_toggleOnToggler at {}", (void*)node->m_toggleOnToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_toggleOffToggler at {}", (void*)node->m_toggleOffToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_p1OnlyToggler at {}", (void*)node->m_p1OnlyToggler).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_p2OnlyToggler at {}", (void*)node->m_p2OnlyToggler).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXBrowser>) {
devtools::registerNode<SFXBrowser>([](SFXBrowser* node) {
    devtools::label("Members for SFXBrowser:");
    devtools::property("m_sfxID", node->m_sfxID);
    devtools::property("m_libraryVersion", node->m_libraryVersion);
    devtools::property("m_cellAmount", node->m_cellAmount);
    devtools::property("m_gettingURL", node->m_gettingURL);
    devtools::property("m_selectedCell", node->m_selectedCell);
    devtools::property("m_snapToSelected", node->m_snapToSelected);
    devtools::property("m_compactMode", node->m_compactMode);
    devtools::enumerable("m_sortType", node->m_sortType, {
        { AudioSortType::NameAscending, "AudioSortType::NameAscending" },
        { AudioSortType::NameDescending, "AudioSortType::NameDescending" },
        { AudioSortType::LengthAscending, "AudioSortType::LengthAscending" },
        { AudioSortType::LengthDescending, "AudioSortType::LengthDescending" },
        { AudioSortType::IDAscending, "AudioSortType::IDAscending" },
        { AudioSortType::IDDescending, "AudioSortType::IDDescending" },
        { AudioSortType::SongOrder, "AudioSortType::SongOrder" },
    });
    devtools::property("m_autoUpdating", node->m_autoUpdating);
    devtools::label(fmt::format("SFXSearchResult* m_searchResult at {}", (void*)node->m_searchResult).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_sfxObjects at {}", (void*)node->m_sfxObjects).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_nameLabel at {}", (void*)node->m_nameLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pathLabel at {}", (void*)node->m_pathLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_infoLabel at {}", (void*)node->m_infoLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageLabel at {}", (void*)node->m_pageLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_searchLabel at {}", (void*)node->m_searchLabel).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_backButton at {}", (void*)node->m_backButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_refreshButton at {}", (void*)node->m_refreshButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_clearSearchButton at {}", (void*)node->m_clearSearchButton).c_str());
    devtools::label(fmt::format("LoadingCircleSprite* m_circleSprite at {}", (void*)node->m_circleSprite).c_str());
    devtools::label(fmt::format("SFXBrowserDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXInfoObject>) {
devtools::registerNode<SFXInfoObject>([](SFXInfoObject* node) {
    devtools::label("Members for SFXInfoObject:");
    devtools::property("m_sfxID", node->m_sfxID);
    devtools::property("m_folderID", node->m_folderID);
    devtools::property("m_size", node->m_size);
    devtools::property("m_duration", node->m_duration);
    devtools::property("m_folder", node->m_folder);
    devtools::property("m_unk049", node->m_unk049);
    devtools::property("m_name", node->m_name);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXFolderObject>) {
devtools::registerNode<SFXFolderObject>([](SFXFolderObject* node) {
    devtools::label("Members for SFXFolderObject:");
    devtools::label(fmt::format("cocos2d::CCArray* m_sfxObjects at {}", (void*)node->m_sfxObjects).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXSearchResult>) {
devtools::registerNode<SFXSearchResult>([](SFXSearchResult* node) {
    devtools::label("Members for SFXSearchResult:");
    devtools::property("m_folderID", node->m_folderID);
    devtools::label(fmt::format("SFXFolderObject* m_folderObject at {}", (void*)node->m_folderObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SFXTriggerGameObject>) {
devtools::registerNode<SFXTriggerGameObject>([](SFXTriggerGameObject* node) {
    devtools::label("Members for SFXTriggerGameObject:");
    devtools::property("m_soundPath", node->m_soundPath);
    devtools::property("m_soundID", node->m_soundID);
    devtools::property("m_pitch", node->m_pitch);
    devtools::property("m_speed", node->m_speed);
    devtools::property("m_pitchIndex", node->m_pitchIndex);
    devtools::property("m_volume", node->m_volume);
    devtools::property("m_start", node->m_start);
    devtools::property("m_fadeIn", node->m_fadeIn);
    devtools::property("m_end", node->m_end);
    devtools::property("m_fadeOut", node->m_fadeOut);
    devtools::property("m_reverb", node->m_reverb);
    devtools::property("m_fastFourierTransform", node->m_fastFourierTransform);
    devtools::property("m_loop", node->m_loop);
    devtools::property("m_stopLoop", node->m_stopLoop);
    devtools::property("m_dontReset", node->m_dontReset);
    devtools::property("m_unique", node->m_unique);
    devtools::property("m_override", node->m_override);
    devtools::property("m_sfxUniqueID", node->m_sfxUniqueID);
    devtools::property("m_volumeNear", node->m_volumeNear);
    devtools::property("m_volumeMedium", node->m_volumeMedium);
    devtools::property("m_volumeFar", node->m_volumeFar);
    devtools::property("m_minDistNear", node->m_minDistNear);
    devtools::property("m_minDistMedium", node->m_minDistMedium);
    devtools::property("m_minDistFar", node->m_minDistFar);
    devtools::property("m_proximityMode", node->m_proximityMode);
    devtools::property("m_cameraDistance", node->m_cameraDistance);
    devtools::property("m_preload", node->m_preload);
    devtools::property("m_ignoreVolumeTest", node->m_ignoreVolumeTest);
    devtools::property("m_minInterval", node->m_minInterval);
    devtools::property("m_sfxGroup", node->m_sfxGroup);
    devtools::property("m_stop", node->m_stop);
    devtools::property("m_changeSpeed", node->m_changeSpeed);
    devtools::property("m_changeVolume", node->m_changeVolume);
    devtools::property("m_groupID", node->m_groupID);
    devtools::property("m_unk788", node->m_unk788);
    devtools::enumerable("m_reverbPreset", node->m_reverbPreset, {
        { FMODReverbPreset::Generic, "FMODReverbPreset::Generic" },
        { FMODReverbPreset::PaddedCell, "FMODReverbPreset::PaddedCell" },
        { FMODReverbPreset::Room, "FMODReverbPreset::Room" },
        { FMODReverbPreset::Bathroom, "FMODReverbPreset::Bathroom" },
        { FMODReverbPreset::Livingroom, "FMODReverbPreset::Livingroom" },
        { FMODReverbPreset::Stoneroom, "FMODReverbPreset::Stoneroom" },
        { FMODReverbPreset::Auditorium, "FMODReverbPreset::Auditorium" },
        { FMODReverbPreset::ConvertHall, "FMODReverbPreset::ConvertHall" },
        { FMODReverbPreset::Cave, "FMODReverbPreset::Cave" },
        { FMODReverbPreset::Arena, "FMODReverbPreset::Arena" },
        { FMODReverbPreset::Hangar, "FMODReverbPreset::Hangar" },
        { FMODReverbPreset::CarpettedHallway, "FMODReverbPreset::CarpettedHallway" },
        { FMODReverbPreset::Hallway, "FMODReverbPreset::Hallway" },
        { FMODReverbPreset::StoneCorridor, "FMODReverbPreset::StoneCorridor" },
        { FMODReverbPreset::Alley, "FMODReverbPreset::Alley" },
        { FMODReverbPreset::Forest, "FMODReverbPreset::Forest" },
        { FMODReverbPreset::City, "FMODReverbPreset::City" },
        { FMODReverbPreset::Mountains, "FMODReverbPreset::Mountains" },
        { FMODReverbPreset::Quarry, "FMODReverbPreset::Quarry" },
        { FMODReverbPreset::Plain, "FMODReverbPreset::Plain" },
        { FMODReverbPreset::ParkingLot, "FMODReverbPreset::ParkingLot" },
        { FMODReverbPreset::SewerPipe, "FMODReverbPreset::SewerPipe" },
        { FMODReverbPreset::Underwater, "FMODReverbPreset::Underwater" },
    });
    devtools::property("m_reverbEnabled", node->m_reverbEnabled);
    devtools::property("m_soundDuration", node->m_soundDuration);
    devtools::property("m_applyDisabled", node->m_applyDisabled);
    devtools::property("m_speedVariance", node->m_speedVariance);
    devtools::property("m_pitchVariance", node->m_pitchVariance);
    devtools::property("m_volumeVariance", node->m_volumeVariance);
    devtools::property("m_pitchSteps", node->m_pitchSteps);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ShaderGameObject>) {
devtools::registerNode<ShaderGameObject>([](ShaderGameObject* node) {
    devtools::label("Members for ShaderGameObject:");
    devtools::property("m_speed", node->m_speed);
    devtools::property("m_strength", node->m_strength);
    devtools::property("m_outer", node->m_outer);
    devtools::property("m_timeOff", node->m_timeOff);
    devtools::property("m_waveWidth", node->m_waveWidth);
    devtools::property("m_targetX", node->m_targetX);
    devtools::property("m_targetY", node->m_targetY);
    devtools::property("m_fadeIn", node->m_fadeIn);
    devtools::property("m_fadeOut", node->m_fadeOut);
    devtools::property("m_screenOffsetX", node->m_screenOffsetX);
    devtools::property("m_screenOffsetY", node->m_screenOffsetY);
    devtools::property("m_invert", node->m_invert);
    devtools::property("m_inner", node->m_inner);
    devtools::property("m_maxSize", node->m_maxSize);
    devtools::property("m_flip", node->m_flip);
    devtools::property("m_rotate", node->m_rotate);
    devtools::property("m_dual", node->m_dual);
    devtools::property("m_useX", node->m_useX);
    devtools::property("m_useY", node->m_useY);
    devtools::property("m_snapGrid", node->m_snapGrid);
    devtools::property("m_hardEdges", node->m_hardEdges);
    devtools::property("m_disableAll", node->m_disableAll);
    devtools::property("m_zLayerMin", node->m_zLayerMin);
    devtools::property("m_zLayerMax", node->m_zLayerMax);
    devtools::property("m_animate", node->m_animate);
    devtools::property("m_relative", node->m_relative);
    devtools::property("m_editorDisabled", node->m_editorDisabled);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ShaderLayer>) {
devtools::registerNode<ShaderLayer>([](ShaderLayer* node) {
    devtools::label("Members for ShaderLayer:");
    devtools::property("m_timesyncShaderActions", node->m_timesyncShaderActions);
    devtools::property("m_antiAlias", node->m_antiAlias);
    devtools::property("m_configuredAntiAlias", node->m_configuredAntiAlias);
    devtools::property("m_savedCameraPosition", node->m_savedCameraPosition);
    devtools::property("m_savedCameraRotation", node->m_savedCameraRotation);
    devtools::property("m_shockWaveTimeMult", node->m_shockWaveTimeMult);
    devtools::property("m_scaleFactor", node->m_scaleFactor);
    devtools::property("m_aspectRatio", node->m_aspectRatio);
    devtools::property("m_screenSize", node->m_screenSize);
    devtools::property("m_textureContentSize", node->m_textureContentSize);
    devtools::property("m_targetTextureSize", node->m_targetTextureSize);
    devtools::property("m_targetTextureSizeExtra", node->m_targetTextureSizeExtra);
    devtools::property("m_textureScaleUniform", node->m_textureScaleUniform);
    devtools::property("m_textureScaleInvUniform", node->m_textureScaleInvUniform);
    devtools::property("m_screenAspectUniform", node->m_screenAspectUniform);
    devtools::property("m_screenAspectINVUniform", node->m_screenAspectINVUniform);
    devtools::property("m_shaderPositionUniform", node->m_shaderPositionUniform);
    devtools::property("m_blurRefColorUniform", node->m_blurRefColorUniform);
    devtools::property("m_blurUseRefUniform", node->m_blurUseRefUniform);
    devtools::property("m_blurIntensityUniform", node->m_blurIntensityUniform);
    devtools::property("m_blurOnlyEmptyUniform", node->m_blurOnlyEmptyUniform);
    devtools::property("m_shockWaveTimeUniform", node->m_shockWaveTimeUniform);
    devtools::property("m_shockWaveTime1Uniform", node->m_shockWaveTime1Uniform);
    devtools::property("m_shockWaveTime2Uniform", node->m_shockWaveTime2Uniform);
    devtools::property("m_shockWaveTime3Uniform", node->m_shockWaveTime3Uniform);
    devtools::property("m_shockWaveTime4Uniform", node->m_shockWaveTime4Uniform);
    devtools::property("m_shockWaveStrengthUniform", node->m_shockWaveStrengthUniform);
    devtools::property("m_shockWaveWavesUniform", node->m_shockWaveWavesUniform);
    devtools::property("m_shockWaveCenterUniform", node->m_shockWaveCenterUniform);
    devtools::property("m_shockWaveInvertUniform", node->m_shockWaveInvertUniform);
    devtools::property("m_shockWaveMinSizeUniform", node->m_shockWaveMinSizeUniform);
    devtools::property("m_shockWaveMaxSizeUniform", node->m_shockWaveMaxSizeUniform);
    devtools::property("m_shockWaveMaxDistValUniform", node->m_shockWaveMaxDistValUniform);
    devtools::property("m_shockWaveTime1", node->m_shockWaveTime1);
    devtools::property("m_shockWaveTime2", node->m_shockWaveTime2);
    devtools::property("m_shockWaveTime3", node->m_shockWaveTime3);
    devtools::property("m_shockWaveTime4", node->m_shockWaveTime4);
    devtools::property("m_shockWaveMaxDistVal", node->m_shockWaveMaxDistVal);
    devtools::property("m_shockWaveMinSize", node->m_shockWaveMinSize);
    devtools::property("m_shockWaveMaxSize", node->m_shockWaveMaxSize);
    devtools::property("m_shockWaveUnk46c", node->m_shockWaveUnk46c);
    devtools::property("m_shockLineTimeUniform", node->m_shockLineTimeUniform);
    devtools::property("m_shockLineTime1Uniform", node->m_shockLineTime1Uniform);
    devtools::property("m_shockLineTime2Uniform", node->m_shockLineTime2Uniform);
    devtools::property("m_shockLineTime3Uniform", node->m_shockLineTime3Uniform);
    devtools::property("m_shockLineTime4Uniform", node->m_shockLineTime4Uniform);
    devtools::property("m_shockLineAxisUniform", node->m_shockLineAxisUniform);
    devtools::property("m_shockLineDirectionUniform", node->m_shockLineDirectionUniform);
    devtools::property("m_shockLineDualUniform", node->m_shockLineDualUniform);
    devtools::property("m_shockLineWavesUniform", node->m_shockLineWavesUniform);
    devtools::property("m_shockLineStrengthUniform", node->m_shockLineStrengthUniform);
    devtools::property("m_shockLineCenterUniform", node->m_shockLineCenterUniform);
    devtools::property("m_shockLineMaxDistValUniform", node->m_shockLineMaxDistValUniform);
    devtools::property("m_shockLineTime1", node->m_shockLineTime1);
    devtools::property("m_shockLineTime2", node->m_shockLineTime2);
    devtools::property("m_shockLineTime3", node->m_shockLineTime3);
    devtools::property("m_shockLineTime4", node->m_shockLineTime4);
    devtools::property("m_shockLineMaxDistVal", node->m_shockLineMaxDistVal);
    devtools::property("m_unk4b4", node->m_unk4b4);
    devtools::property("m_unk4b8", node->m_unk4b8);
    devtools::property("m_unk4bc", node->m_unk4bc);
    devtools::property("m_glitchBotUniform", node->m_glitchBotUniform);
    devtools::property("m_glitchTopUniform", node->m_glitchTopUniform);
    devtools::property("m_glitchXOffsetUniform", node->m_glitchXOffsetUniform);
    devtools::property("m_glitchColOffsetUniform", node->m_glitchColOffsetUniform);
    devtools::property("m_glitchRndUniform", node->m_glitchRndUniform);
    devtools::property("m_chromaticXOffUniform", node->m_chromaticXOffUniform);
    devtools::property("m_chromaticYOffUniform", node->m_chromaticYOffUniform);
    devtools::property("m_cGRGBOffsetUniform", node->m_cGRGBOffsetUniform);
    devtools::property("m_cGYOffsetUniform", node->m_cGYOffsetUniform);
    devtools::property("m_cGTimeUniform", node->m_cGTimeUniform);
    devtools::property("m_cGStrengthUniform", node->m_cGStrengthUniform);
    devtools::property("m_cGHeightUniform", node->m_cGHeightUniform);
    devtools::property("m_cGLineThickUniform", node->m_cGLineThickUniform);
    devtools::property("m_cGLineStrengthUniform", node->m_cGLineStrengthUniform);
    devtools::property("m_lensCircleOriginUniform", node->m_lensCircleOriginUniform);
    devtools::property("m_lensCircleStartUniform", node->m_lensCircleStartUniform);
    devtools::property("m_lensCircleEndUniform", node->m_lensCircleEndUniform);
    devtools::property("m_lensCircleStrengthUniform", node->m_lensCircleStrengthUniform);
    devtools::property("m_lensCircleTintUniform", node->m_lensCircleTintUniform);
    devtools::property("m_lensCircleAdditiveUniform", node->m_lensCircleAdditiveUniform);
    devtools::property("m_radialBlurCenterUniform", node->m_radialBlurCenterUniform);
    devtools::property("m_radialBlurValueUniform", node->m_radialBlurValueUniform);
    devtools::property("m_blurFadeUniform", node->m_blurFadeUniform);
    devtools::property("m_motionBlurValueUniform", node->m_motionBlurValueUniform);
    devtools::property("m_motionBlurMultUniform", node->m_motionBlurMultUniform);
    devtools::property("m_motionBlurDualUniform", node->m_motionBlurDualUniform);
    devtools::property("m_bulgeValueUniform", node->m_bulgeValueUniform);
    devtools::property("m_bulgeValue2Uniform", node->m_bulgeValue2Uniform);
    devtools::property("m_bulgeOriginUniform", node->m_bulgeOriginUniform);
    devtools::property("m_bulgeRadiusUniform", node->m_bulgeRadiusUniform);
    devtools::property("m_pinchValueUniform", node->m_pinchValueUniform);
    devtools::property("m_pinchCenterPosUniform", node->m_pinchCenterPosUniform);
    devtools::property("m_pinchCalcUniform", node->m_pinchCalcUniform);
    devtools::property("m_pinchRadiusUniform", node->m_pinchRadiusUniform);
    devtools::property("m_grayscaleValueUniform", node->m_grayscaleValueUniform);
    devtools::property("m_grayscaleTintUniform", node->m_grayscaleTintUniform);
    devtools::property("m_grayscaleUseLumUniform", node->m_grayscaleUseLumUniform);
    devtools::property("m_sepiaValueUniform", node->m_sepiaValueUniform);
    devtools::property("m_invertColorValueUniform", node->m_invertColorValueUniform);
    devtools::property("m_hueShiftCosAUniform", node->m_hueShiftCosAUniform);
    devtools::property("m_hueShiftSinAUniform", node->m_hueShiftSinAUniform);
    devtools::property("m_colorChangeCUniform", node->m_colorChangeCUniform);
    devtools::property("m_colorChangeBUniform", node->m_colorChangeBUniform);
    devtools::property("m_rowmodUniform", node->m_rowmodUniform);
    devtools::property("m_colmodUniform", node->m_colmodUniform);
    devtools::property("m_rowmodCalcUniform", node->m_rowmodCalcUniform);
    devtools::property("m_colmodCalcUniform", node->m_colmodCalcUniform);
    devtools::property("m_splitXStartUniform", node->m_splitXStartUniform);
    devtools::property("m_splitXRangeUniform", node->m_splitXRangeUniform);
    devtools::property("m_splitXRangeMultUniform", node->m_splitXRangeMultUniform);
    devtools::property("m_splitYStartUniform", node->m_splitYStartUniform);
    devtools::property("m_splitYRangeUniform", node->m_splitYRangeUniform);
    devtools::property("m_splitYRangeMultUniform", node->m_splitYRangeMultUniform);
    devtools::label("GJShaderState m_state");
    devtools::label(fmt::format("cocos2d::CCGLProgram* m_shader at {}", (void*)node->m_shader).c_str());
    devtools::label(fmt::format("cocos2d::CCRenderTexture* m_renderTexture at {}", (void*)node->m_renderTexture).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_sprite at {}", (void*)node->m_sprite).c_str());
    devtools::label(fmt::format("void* m_unk3d4 at {}", (void*)node->m_unk3d4).c_str());
    devtools::label(fmt::format("GJBaseGameLayer* m_gameLayer at {}", (void*)node->m_gameLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ShardsPage>) {
devtools::registerNode<ShardsPage>([](ShardsPage* node) {
    devtools::label("Members for ShardsPage:");
    devtools::property("m_page", node->m_page);
    devtools::label(fmt::format("cocos2d::CCDictionary* m_pages at {}", (void*)node->m_pages).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_tierSprite at {}", (void*)node->m_tierSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ShareCommentLayer>) {
devtools::registerNode<ShareCommentLayer>([](ShareCommentLayer* node) {
    devtools::label("Members for ShareCommentLayer:");
    devtools::property("m_charLimit", node->m_charLimit);
    devtools::property("m_itemID", node->m_itemID);
    devtools::enumerable("m_commentType", node->m_commentType, {
        { CommentType::Level, "CommentType::Level" },
        { CommentType::Account, "CommentType::Account" },
        { CommentType::FriendRequest, "CommentType::FriendRequest" },
        { CommentType::Multiplayer, "CommentType::Multiplayer" },
        { CommentType::ListDescription, "CommentType::ListDescription" },
        { CommentType::ListDescription2, "CommentType::ListDescription2" },
    });
    devtools::property("m_descText", node->m_descText);
    devtools::property("m_placeholderText", node->m_placeholderText);
    devtools::property("m_uploadSuccess", node->m_uploadSuccess);
    devtools::property("m_percentEnabled", node->m_percentEnabled);
    devtools::property("m_percent", node->m_percent);
    devtools::label(fmt::format("CCTextInputNode* m_commentInput at {}", (void*)node->m_commentInput).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_charCountLabel at {}", (void*)node->m_charCountLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_percentLabel at {}", (void*)node->m_percentLabel).c_str());
    devtools::label(fmt::format("UploadActionPopup* m_uploadPopup at {}", (void*)node->m_uploadPopup).c_str());
    devtools::label(fmt::format("ShareCommentDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ShareLevelLayer>) {
devtools::registerNode<ShareLevelLayer>([](ShareLevelLayer* node) {
    devtools::label("Members for ShareLevelLayer:");
    devtools::property("m_starsRequested", node->m_starsRequested);
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_starButtons at {}", (void*)node->m_starButtons).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_difficultySprite at {}", (void*)node->m_difficultySprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ShareLevelSettingsLayer>) {
devtools::registerNode<ShareLevelSettingsLayer>([](ShareLevelSettingsLayer* node) {
    devtools::label("Members for ShareLevelSettingsLayer:");
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_passwordLabel at {}", (void*)node->m_passwordLabel).c_str());
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_friendsOnlyToggler at {}", (void*)node->m_friendsOnlyToggler).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_friendsOnlyLabel at {}", (void*)node->m_friendsOnlyLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, ShareListLayer>) {
devtools::registerNode<ShareListLayer>([](ShareListLayer* node) {
    devtools::label("Members for ShareListLayer:");
    devtools::label(fmt::format("GJLevelList* m_list at {}", (void*)node->m_list).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_friendsOnlyToggler at {}", (void*)node->m_friendsOnlyToggler).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_friendsOnlyLabel at {}", (void*)node->m_friendsOnlyLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SimpleObject>) {
devtools::registerNode<SimpleObject>([](SimpleObject* node) {
    devtools::label("Members for SimpleObject:");
    devtools::property("m_color", node->m_color);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SimplePlayer>) {
devtools::registerNode<SimplePlayer>([](SimplePlayer* node) {
    devtools::label("Members for SimplePlayer:");
    devtools::property("m_unknown", node->m_unknown);
    devtools::property("m_hasGlowOutline", node->m_hasGlowOutline);
    devtools::property("m_iconRequestID", node->m_iconRequestID);
    devtools::property("m_hasCustomGlowColor", node->m_hasCustomGlowColor);
    devtools::property("m_glowColor", node->m_glowColor);
    devtools::property("m_iconLoaded", node->m_iconLoaded);
    devtools::label(fmt::format("cocos2d::CCSprite* m_firstLayer at {}", (void*)node->m_firstLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_secondLayer at {}", (void*)node->m_secondLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_birdDome at {}", (void*)node->m_birdDome).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_outlineSprite at {}", (void*)node->m_outlineSprite).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_detailSprite at {}", (void*)node->m_detailSprite).c_str());
    devtools::label(fmt::format("GJRobotSprite* m_robotSprite at {}", (void*)node->m_robotSprite).c_str());
    devtools::label(fmt::format("GJSpiderSprite* m_spiderSprite at {}", (void*)node->m_spiderSprite).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SlideInLayer>) {
devtools::registerNode<SlideInLayer>([](SlideInLayer* node) {
    devtools::label("Members for SlideInLayer:");
    devtools::property("m_endPosition", node->m_endPosition);
    devtools::property("m_startPosition", node->m_startPosition);
    devtools::property("m_closeOnHide", node->m_closeOnHide);
    devtools::label(fmt::format("cocos2d::CCLayer* m_mainLayer at {}", (void*)node->m_mainLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_buttonMenu at {}", (void*)node->m_buttonMenu).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_exitSprite at {}", (void*)node->m_exitSprite).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_exitButton at {}", (void*)node->m_exitButton).c_str());
    devtools::label(fmt::format("void* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SliderThumb>) {
devtools::registerNode<SliderThumb>([](SliderThumb* node) {
    devtools::label("Members for SliderThumb:");
    devtools::property("m_length", node->m_length);
    devtools::property("m_vertical", node->m_vertical);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SliderTouchLogic>) {
devtools::registerNode<SliderTouchLogic>([](SliderTouchLogic* node) {
    devtools::label("Members for SliderTouchLogic:");
    devtools::property("m_unknownUnused", node->m_unknownUnused);
    devtools::property("m_length", node->m_length);
    devtools::property("m_activateThumb", node->m_activateThumb);
    devtools::property("m_position", node->m_position);
    devtools::property("m_rotated", node->m_rotated);
    devtools::label(fmt::format("SliderThumb* m_thumb at {}", (void*)node->m_thumb).c_str());
    devtools::label(fmt::format("Slider* m_slider at {}", (void*)node->m_slider).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, Slider>) {
devtools::registerNode<Slider>([](Slider* node) {
    devtools::label("Members for Slider:");
    devtools::property("m_width", node->m_width);
    devtools::property("m_height", node->m_height);
    devtools::property("m_enabled", node->m_enabled);
    devtools::label(fmt::format("SliderTouchLogic* m_touchLogic at {}", (void*)node->m_touchLogic).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_sliderBar at {}", (void*)node->m_sliderBar).c_str());
    devtools::label(fmt::format("cocos2d::CCSprite* m_groove at {}", (void*)node->m_groove).c_str());
    devtools::label(fmt::format("SliderDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SmartGameObject>) {
devtools::registerNode<SmartGameObject>([](SmartGameObject* node) {
    devtools::label("Members for SmartGameObject:");
    devtools::property("m_referenceOnly", node->m_referenceOnly);
    devtools::property("m_baseFrame", node->m_baseFrame);
    devtools::property("m_smartFrame", node->m_smartFrame);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SmartTemplateCell>) {
devtools::registerNode<SmartTemplateCell>([](SmartTemplateCell* node) {
    devtools::label("Members for SmartTemplateCell:");
    devtools::label(fmt::format("GJSmartTemplate* m_smartTemplate at {}", (void*)node->m_smartTemplate).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongCell>) {
devtools::registerNode<SongCell>([](SongCell* node) {
    devtools::label("Members for SongCell:");
    devtools::label(fmt::format("SongObject* m_songObject at {}", (void*)node->m_songObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongInfoLayer>) {
devtools::registerNode<SongInfoLayer>([](SongInfoLayer* node) {
    devtools::label("Members for SongInfoLayer:");
    devtools::property("m_downloadLink", node->m_downloadLink);
    devtools::property("m_newgroundsLink", node->m_newgroundsLink);
    devtools::property("m_youtubeLink", node->m_youtubeLink);
    devtools::property("m_facebookLink", node->m_facebookLink);
    devtools::property("m_songID", node->m_songID);
    devtools::property("m_musicCustomizerMessageIndex", node->m_musicCustomizerMessageIndex);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongInfoObject>) {
devtools::registerNode<SongInfoObject>([](SongInfoObject* node) {
    devtools::label("Members for SongInfoObject:");
    devtools::property("m_songID", node->m_songID);
    devtools::property("m_songName", node->m_songName);
    devtools::property("m_artistName", node->m_artistName);
    devtools::property("m_youtubeVideo", node->m_youtubeVideo);
    devtools::property("m_youtubeChannel", node->m_youtubeChannel);
    devtools::property("m_songUrl", node->m_songUrl);
    devtools::property("m_artistID", node->m_artistID);
    devtools::property("m_fileSize", node->m_fileSize);
    devtools::property("m_nongType", node->m_nongType);
    devtools::property("m_extraArtists", node->m_extraArtists);
    devtools::property("m_isUnknownSong", node->m_isUnknownSong);
    devtools::property("m_autoDownload", node->m_autoDownload);
    devtools::property("m_isBlocked", node->m_isBlocked);
    devtools::property("m_priority", node->m_priority);
    devtools::property("m_unkInt", node->m_unkInt);
    devtools::property("m_BPM", node->m_BPM);
    devtools::property("m_isNew", node->m_isNew);
    devtools::property("m_libraryOrder", node->m_libraryOrder);
    devtools::property("m_songOrder", node->m_songOrder);
    devtools::property("m_extraArtistNames", node->m_extraArtistNames);
    devtools::property("m_longTagsString", node->m_longTagsString);
    devtools::property("m_shortTagsString", node->m_shortTagsString);
    devtools::label("gd::unordered_set<int> m_artistIDs");
    devtools::label("gd::set<int> m_tags");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongObject>) {
devtools::registerNode<SongObject>([](SongObject* node) {
    devtools::label("Members for SongObject:");
    devtools::property("m_audioID", node->m_audioID);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongOptionsLayer>) {
devtools::registerNode<SongOptionsLayer>([](SongOptionsLayer* node) {
    devtools::label("Members for SongOptionsLayer:");
    devtools::label(fmt::format("CustomSongDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("CCTextInputNode* m_offsetInput at {}", (void*)node->m_offsetInput).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_playbackButton at {}", (void*)node->m_playbackButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongSelectNode>) {
devtools::registerNode<SongSelectNode>([](SongSelectNode* node) {
    devtools::label("Members for SongSelectNode:");
    devtools::property("m_selectedSongID", node->m_selectedSongID);
    devtools::property("m_isCustomSong", node->m_isCustomSong);
    devtools::property("m_songChanged", node->m_songChanged);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_audioLabel at {}", (void*)node->m_audioLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_selectSongObjects at {}", (void*)node->m_selectSongObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_normalSongObjects at {}", (void*)node->m_normalSongObjects).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_changeSongObjects at {}", (void*)node->m_changeSongObjects).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_normalButton at {}", (void*)node->m_normalButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_customButton at {}", (void*)node->m_customButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_selectButton at {}", (void*)node->m_selectButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_changeButton at {}", (void*)node->m_changeButton).c_str());
    devtools::label(fmt::format("CustomSongWidget* m_songWidget at {}", (void*)node->m_songWidget).c_str());
    devtools::label(fmt::format("LevelSettingsObject* m_settingsObject at {}", (void*)node->m_settingsObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SongTriggerGameObject>) {
devtools::registerNode<SongTriggerGameObject>([](SongTriggerGameObject* node) {
    devtools::label("Members for SongTriggerGameObject:");
    devtools::property("m_unk7a9", node->m_unk7a9);
    devtools::property("m_prep", node->m_prep);
    devtools::property("m_loadPrep", node->m_loadPrep);
    devtools::property("m_songChannel", node->m_songChannel);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SpawnParticleGameObject>) {
devtools::registerNode<SpawnParticleGameObject>([](SpawnParticleGameObject* node) {
    devtools::label("Members for SpawnParticleGameObject:");
    devtools::property("m_offset", node->m_offset);
    devtools::property("m_offsetVariance", node->m_offsetVariance);
    devtools::property("m_matchRotation", node->m_matchRotation);
    devtools::property("m_rotation", node->m_rotation);
    devtools::property("m_rotationVariance", node->m_rotationVariance);
    devtools::property("m_scale", node->m_scale);
    devtools::property("m_scaleVariance", node->m_scaleVariance);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SpawnTriggerGameObject>) {
devtools::registerNode<SpawnTriggerGameObject>([](SpawnTriggerGameObject* node) {
    devtools::label("Members for SpawnTriggerGameObject:");
    devtools::property("m_remapKey", node->m_remapKey);
    devtools::property("m_currentDelay", node->m_currentDelay);
    devtools::property("m_spawnDelay", node->m_spawnDelay);
    devtools::property("m_delayRange", node->m_delayRange);
    devtools::property("m_resetRemap", node->m_resetRemap);
    devtools::label("gd::vector<ChanceObject> m_remapObjects");
    devtools::label("gd::vector<int> m_remapKeys");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SpecialAnimGameObject>) {
devtools::registerNode<SpecialAnimGameObject>([](SpecialAnimGameObject* node) {
    devtools::label("Members for SpecialAnimGameObject:");
    devtools::property("m_skipMainColorUpdate", node->m_skipMainColorUpdate);
    devtools::property("m_skipSecondaryColorUpdate", node->m_skipSecondaryColorUpdate);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SpriteAnimationManager>) {
devtools::registerNode<SpriteAnimationManager>([](SpriteAnimationManager* node) {
    devtools::label("Members for SpriteAnimationManager:");
    devtools::property("m_queuedAnimation", node->m_queuedAnimation);
    devtools::property("m_speed", node->m_speed);
    devtools::property("m_currentAnimation", node->m_currentAnimation);
    devtools::property("m_nextAnimation", node->m_nextAnimation);
    devtools::label(fmt::format("CCAnimatedSprite* m_sprite at {}", (void*)node->m_sprite).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_priorityDict at {}", (void*)node->m_priorityDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_typeDict at {}", (void*)node->m_typeDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_soundDict at {}", (void*)node->m_soundDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_animateDict at {}", (void*)node->m_animateDict).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_frameDict at {}", (void*)node->m_frameDict).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SpriteDescription>) {
devtools::registerNode<SpriteDescription>([](SpriteDescription* node) {
    devtools::label("Members for SpriteDescription:");
    devtools::property("m_position", node->m_position);
    devtools::property("m_scale", node->m_scale);
    devtools::property("m_flipped", node->m_flipped);
    devtools::property("m_rotation", node->m_rotation);
    devtools::property("m_zValue", node->m_zValue);
    devtools::property("m_tag", node->m_tag);
    devtools::property("m_usesCustomTag", node->m_usesCustomTag);
    devtools::label(fmt::format("cocos2d::CCSpriteFrame* m_texture at {}", (void*)node->m_texture).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, StartPosObject>) {
devtools::registerNode<StartPosObject>([](StartPosObject* node) {
    devtools::label("Members for StartPosObject:");
    devtools::label(fmt::format("LevelSettingsObject* m_startSettings at {}", (void*)node->m_startSettings).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, StatsObject>) {
devtools::registerNode<StatsObject>([](StatsObject* node) {
    devtools::label("Members for StatsObject:");
    devtools::property("m_value", node->m_value);
    devtools::label(fmt::format("const char* m_key at {}", (void*)node->m_key).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, SupportLayer>) {
devtools::registerNode<SupportLayer>([](SupportLayer* node) {
    devtools::label("Members for SupportLayer:");
    devtools::label(fmt::format("UploadActionPopup* m_uploadPopup at {}", (void*)node->m_uploadPopup).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TableView>) {
devtools::registerNode<TableView>([](TableView* node) {
    devtools::label("Members for TableView:");
    devtools::property("m_touchOutOfBoundary", node->m_touchOutOfBoundary);
    devtools::property("m_touchStartPosition2", node->m_touchStartPosition2);
    devtools::property("m_lastCellPos", node->m_lastCellPos);
    devtools::property("m_touchPosition2", node->m_touchPosition2);
    devtools::property("m_touchMoved", node->m_touchMoved);
    devtools::property("m_isTouch", node->m_isTouch);
    devtools::property("m_unused2", node->m_unused2);
    devtools::property("m_unused4", node->m_unused4);
    devtools::property("m_touchLastY", node->m_touchLastY);
    devtools::property("m_cancellingTouches", node->m_cancellingTouches);
    devtools::property("m_idk2", node->m_idk2);
    devtools::label(fmt::format("cocos2d::CCTouch* m_touchStart at {}", (void*)node->m_touchStart).c_str());
    devtools::label(fmt::format("TableViewCell* m_touchedCell at {}", (void*)node->m_touchedCell).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_cellArray at {}", (void*)node->m_cellArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_cellRemovedArray at {}", (void*)node->m_cellRemovedArray).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_indexPathArray at {}", (void*)node->m_indexPathArray).c_str());
    devtools::label(fmt::format("TableViewDelegate* m_tableDelegate at {}", (void*)node->m_tableDelegate).c_str());
    devtools::label(fmt::format("TableViewDataSource* m_dataSource at {}", (void*)node->m_dataSource).c_str());
    devtools::label(fmt::format("TableViewCellDelegate* m_cellDelegate at {}", (void*)node->m_cellDelegate).c_str());
    devtools::label(fmt::format("void* m_unused3 at {}", (void*)node->m_unused3).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TeleportPortalObject>) {
devtools::registerNode<TeleportPortalObject>([](TeleportPortalObject* node) {
    devtools::label("Members for TeleportPortalObject:");
    devtools::property("m_isYellowPortal", node->m_isYellowPortal);
    devtools::property("m_teleportYOffset", node->m_teleportYOffset);
    devtools::property("m_teleportEase", node->m_teleportEase);
    devtools::property("m_staticForceEnabled", node->m_staticForceEnabled);
    devtools::property("m_staticForce", node->m_staticForce);
    devtools::property("m_redirectForceEnabled", node->m_redirectForceEnabled);
    devtools::property("m_redirectForceMod", node->m_redirectForceMod);
    devtools::property("m_redirectForceMin", node->m_redirectForceMin);
    devtools::property("m_redirectForceMax", node->m_redirectForceMax);
    devtools::property("m_saveOffset", node->m_saveOffset);
    devtools::property("m_ignoreX", node->m_ignoreX);
    devtools::property("m_ignoreY", node->m_ignoreY);
    devtools::property("m_gravityMode", node->m_gravityMode);
    devtools::property("m_staticForceAdditive", node->m_staticForceAdditive);
    devtools::property("m_instantCamera", node->m_instantCamera);
    devtools::property("m_snapGround", node->m_snapGround);
    devtools::property("m_redirectDash", node->m_redirectDash);
    devtools::property("m_teleportPosition", node->m_teleportPosition);
    devtools::label(fmt::format("TeleportPortalObject* m_orangePortal at {}", (void*)node->m_orangePortal).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TextAlertPopup>) {
devtools::registerNode<TextAlertPopup>([](TextAlertPopup* node) {
    devtools::label("Members for TextAlertPopup:");
    devtools::property("m_width", node->m_width);
    devtools::property("m_height", node->m_height);
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_label at {}", (void*)node->m_label).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TextArea>) {
devtools::registerNode<TextArea>([](TextArea* node) {
    devtools::label("Members for TextArea:");
    devtools::property("m_disableColor", node->m_disableColor);
    devtools::property("m_width", node->m_width);
    devtools::property("m_unknown", node->m_unknown);
    devtools::property("m_fontFile", node->m_fontFile);
    devtools::property("m_height", node->m_height);
    devtools::property("m_unkBool", node->m_unkBool);
    devtools::property("m_anchorPoint", node->m_anchorPoint);
    devtools::property("m_allShown", node->m_allShown);
    devtools::property("m_scale", node->m_scale);
    devtools::property("m_rectHeight", node->m_rectHeight);
    devtools::property("m_rectWidth", node->m_rectWidth);
    devtools::property("m_maxWidth", node->m_maxWidth);
    devtools::property("m_unkPoint", node->m_unkPoint);
    devtools::property("m_shakeElapsed", node->m_shakeElapsed);
    devtools::label(fmt::format("MultilineBitmapFont* m_label at {}", (void*)node->m_label).c_str());
    devtools::label(fmt::format("TextAreaDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("cocos2d::CCDictionary* m_shakeCharacters at {}", (void*)node->m_shakeCharacters).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TextGameObject>) {
devtools::registerNode<TextGameObject>([](TextGameObject* node) {
    devtools::label("Members for TextGameObject:");
    devtools::property("m_text", node->m_text);
    devtools::property("m_kerning", node->m_kerning);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TextStyleSection>) {
devtools::registerNode<TextStyleSection>([](TextStyleSection* node) {
    devtools::label("Members for TextStyleSection:");
    devtools::enumerable("m_styleType", node->m_styleType, {
        { TextStyleType::Colored, "TextStyleType::Colored" },
        { TextStyleType::Instant, "TextStyleType::Instant" },
        { TextStyleType::Shake, "TextStyleType::Shake" },
        { TextStyleType::Delayed, "TextStyleType::Delayed" },
    });
    devtools::property("m_startIndex", node->m_startIndex);
    devtools::property("m_endIndex", node->m_endIndex);
    devtools::property("m_color", node->m_color);
    devtools::property("m_instantTime", node->m_instantTime);
    devtools::property("m_delay", node->m_delay);
    devtools::property("m_shakeIntensity", node->m_shakeIntensity);
    devtools::property("m_shakesPerSecond", node->m_shakesPerSecond);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TimerTriggerGameObject>) {
devtools::registerNode<TimerTriggerGameObject>([](TimerTriggerGameObject* node) {
    devtools::label("Members for TimerTriggerGameObject:");
    devtools::property("m_startTime", node->m_startTime);
    devtools::property("m_targetTime", node->m_targetTime);
    devtools::property("m_stopTimeEnabled", node->m_stopTimeEnabled);
    devtools::property("m_dontOverride", node->m_dontOverride);
    devtools::property("m_ignoreTimeWarp", node->m_ignoreTimeWarp);
    devtools::property("m_timeMod", node->m_timeMod);
    devtools::property("m_startPaused", node->m_startPaused);
    devtools::property("m_multiActivate", node->m_multiActivate);
    devtools::property("m_controlType", node->m_controlType);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TopArtistsLayer>) {
devtools::registerNode<TopArtistsLayer>([](TopArtistsLayer* node) {
    devtools::label("Members for TopArtistsLayer:");
    devtools::property("m_itemCount", node->m_itemCount);
    devtools::property("m_pageStartIdx", node->m_pageStartIdx);
    devtools::property("m_pageEndIdx", node->m_pageEndIdx);
    devtools::property("m_unkSize4", node->m_unkSize4);
    devtools::property("m_page", node->m_page);
    devtools::label(fmt::format("cocos2d::CCArray* m_topArtists at {}", (void*)node->m_topArtists).c_str());
    devtools::label(fmt::format("GJCommentListLayer* m_listLayer at {}", (void*)node->m_listLayer).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevButton at {}", (void*)node->m_prevButton).c_str());
    devtools::label(fmt::format("void* m_unkPtr at {}", (void*)node->m_unkPtr).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_pageInfoLabel at {}", (void*)node->m_pageInfoLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TransformTriggerGameObject>) {
devtools::registerNode<TransformTriggerGameObject>([](TransformTriggerGameObject* node) {
    devtools::label("Members for TransformTriggerGameObject:");
    devtools::property("m_objectScaleX", node->m_objectScaleX);
    devtools::property("m_objectScaleY", node->m_objectScaleY);
    devtools::property("m_property450", node->m_property450);
    devtools::property("m_property451", node->m_property451);
    devtools::property("m_onlyMove", node->m_onlyMove);
    devtools::property("m_divideX", node->m_divideX);
    devtools::property("m_divideY", node->m_divideY);
    devtools::property("m_relativeRotation", node->m_relativeRotation);
    devtools::property("m_relativeScale", node->m_relativeScale);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TriggerControlGameObject>) {
devtools::registerNode<TriggerControlGameObject>([](TriggerControlGameObject* node) {
    devtools::label("Members for TriggerControlGameObject:");
    devtools::property("m_triggerControlFrame", node->m_triggerControlFrame);
    devtools::enumerable("m_customTriggerValue", node->m_customTriggerValue, {
        { GJActionCommand::Stop, "GJActionCommand::Stop" },
        { GJActionCommand::Pause, "GJActionCommand::Pause" },
        { GJActionCommand::Resume, "GJActionCommand::Resume" },
    });
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TutorialLayer>) {
devtools::registerNode<TutorialLayer>([](TutorialLayer* node) {
    devtools::label("Members for TutorialLayer:");
    devtools::property("m_page", node->m_page);
    devtools::label(fmt::format("cocos2d::CCLayer* m_tutorialLayer at {}", (void*)node->m_tutorialLayer).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextButton at {}", (void*)node->m_nextButton).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_exitButton at {}", (void*)node->m_exitButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, TutorialPopup>) {
devtools::registerNode<TutorialPopup>([](TutorialPopup* node) {
    devtools::label("Members for TutorialPopup:");
    devtools::property("m_currentSprite", node->m_currentSprite);
    devtools::property("m_callbackRegistered", node->m_callbackRegistered);
    devtools::label("cocos2d::SEL_MenuHandler m_callbackSelector");
    devtools::label(fmt::format("cocos2d::CCNode* m_targetNode at {}", (void*)node->m_targetNode).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_closeButton at {}", (void*)node->m_closeButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UILayer>) {
devtools::registerNode<UILayer>([](UILayer* node) {
    devtools::label("Members for UILayer:");
    devtools::property("m_bUnknown2", node->m_bUnknown2);
    devtools::property("m_bUnknown3", node->m_bUnknown3);
    devtools::property("m_p1Jumping", node->m_p1Jumping);
    devtools::property("m_p2Jumping", node->m_p2Jumping);
    devtools::property("m_checkpointBtnDown", node->m_checkpointBtnDown);
    devtools::property("m_p1TouchId", node->m_p1TouchId);
    devtools::property("m_p2TouchId", node->m_p2TouchId);
    devtools::property("m_clkTimer", node->m_clkTimer);
    devtools::property("m_inPlatformer", node->m_inPlatformer);
    devtools::property("m_initialized", node->m_initialized);
    devtools::property("m_dualMode", node->m_dualMode);
    devtools::property("m_dpadType", node->m_dpadType);
    devtools::property("m_editorMode", node->m_editorMode);
    devtools::label(fmt::format("void* m_stupidDelegate at {}", (void*)node->m_stupidDelegate).c_str());
    devtools::label(fmt::format("void* m_pUnknown1 at {}", (void*)node->m_pUnknown1).c_str());
    devtools::label(fmt::format("cocos2d::CCMenu* m_checkpointMenu at {}", (void*)node->m_checkpointMenu).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_pauseBtn at {}", (void*)node->m_pauseBtn).c_str());
    devtools::label(fmt::format("GJBaseGameLayer* m_gameLayer at {}", (void*)node->m_gameLayer).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_uiNodes at {}", (void*)node->m_uiNodes).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_controllerButtons at {}", (void*)node->m_controllerButtons).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UIOptionsLayer>) {
devtools::registerNode<UIOptionsLayer>([](UIOptionsLayer* node) {
    devtools::label("Members for UIOptionsLayer:");
    devtools::property("m_dual", node->m_dual);
    devtools::property("m_activeUIGroup", node->m_activeUIGroup);
    devtools::label(fmt::format("GJUINode* m_uiNode1 at {}", (void*)node->m_uiNode1).c_str());
    devtools::label(fmt::format("GJUINode* m_uiNode2 at {}", (void*)node->m_uiNode2).c_str());
    devtools::label(fmt::format("GJUINode* m_uiNode3 at {}", (void*)node->m_uiNode3).c_str());
    devtools::label(fmt::format("GJUINode* m_uiNode4 at {}", (void*)node->m_uiNode4).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_nameLabel at {}", (void*)node->m_nameLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UIPOptionsLayer>) {
devtools::registerNode<UIPOptionsLayer>([](UIPOptionsLayer* node) {
    devtools::label("Members for UIPOptionsLayer:");
    devtools::property("m_touchID", node->m_touchID);
    devtools::property("m_touchPosition", node->m_touchPosition);
    devtools::property("m_touchDelta", node->m_touchDelta);
    devtools::label(fmt::format("cocos2d::CCNode* m_practiceNode at {}", (void*)node->m_practiceNode).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UISaveLoadLayer>) {
devtools::registerNode<UISaveLoadLayer>([](UISaveLoadLayer* node) {
    devtools::label("Members for UISaveLoadLayer:");
    devtools::label(fmt::format("UIOptionsLayer* m_optionsLayer at {}", (void*)node->m_optionsLayer).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UISettingsGameObject>) {
devtools::registerNode<UISettingsGameObject>([](UISettingsGameObject* node) {
    devtools::label("Members for UISettingsGameObject:");
    devtools::property("m_xRef", node->m_xRef);
    devtools::property("m_yRef", node->m_yRef);
    devtools::property("m_xRelative", node->m_xRelative);
    devtools::property("m_yRelative", node->m_yRelative);
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UndoObject>) {
devtools::registerNode<UndoObject>([](UndoObject* node) {
    devtools::label("Members for UndoObject:");
    devtools::enumerable("m_command", node->m_command, {
        { UndoCommand::Delete, "UndoCommand::Delete" },
        { UndoCommand::New, "UndoCommand::New" },
        { UndoCommand::Paste, "UndoCommand::Paste" },
        { UndoCommand::DeleteMulti, "UndoCommand::DeleteMulti" },
        { UndoCommand::Transform, "UndoCommand::Transform" },
        { UndoCommand::Select, "UndoCommand::Select" },
    });
    devtools::property("m_redo", node->m_redo);
    devtools::property("m_undoTransform", node->m_undoTransform);
    devtools::label(fmt::format("GameObjectCopy* m_objectCopy at {}", (void*)node->m_objectCopy).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_objects at {}", (void*)node->m_objects).c_str());
    devtools::label("GJTransformState m_transformState");
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UpdateAccountSettingsPopup>) {
devtools::registerNode<UpdateAccountSettingsPopup>([](UpdateAccountSettingsPopup* node) {
    devtools::label("Members for UpdateAccountSettingsPopup:");
    devtools::property("m_updateSuccess", node->m_updateSuccess);
    devtools::label(fmt::format("GJAccountSettingsLayer* m_settingsLayer at {}", (void*)node->m_settingsLayer).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_closeButton at {}", (void*)node->m_closeButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UploadActionPopup>) {
devtools::registerNode<UploadActionPopup>([](UploadActionPopup* node) {
    devtools::label("Members for UploadActionPopup:");
    devtools::property("m_succeeded", node->m_succeeded);
    devtools::label(fmt::format("UploadPopupDelegate* m_delegate at {}", (void*)node->m_delegate).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_closeButton at {}", (void*)node->m_closeButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UploadListPopup>) {
devtools::registerNode<UploadListPopup>([](UploadListPopup* node) {
    devtools::label("Members for UploadListPopup:");
    devtools::label(fmt::format("GJLevelList* m_levelList at {}", (void*)node->m_levelList).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_backButton at {}", (void*)node->m_backButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, UploadPopup>) {
devtools::registerNode<UploadPopup>([](UploadPopup* node) {
    devtools::label("Members for UploadPopup:");
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
    devtools::label(fmt::format("TextArea* m_textArea at {}", (void*)node->m_textArea).c_str());
    devtools::label(fmt::format("LoadingCircle* m_loadingCircle at {}", (void*)node->m_loadingCircle).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_backButton at {}", (void*)node->m_backButton).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, URLCell>) {
devtools::registerNode<URLCell>([](URLCell* node) {
    devtools::label("Members for URLCell:");
    devtools::label(fmt::format("CCURLObject* m_urlObject at {}", (void*)node->m_urlObject).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, URLViewLayer>) {
devtools::registerNode<URLViewLayer>([](URLViewLayer* node) {
    devtools::label("Members for URLViewLayer:");
    devtools::label(fmt::format("cocos2d::CCArray* m_urlObjects at {}", (void*)node->m_urlObjects).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, VideoOptionsLayer>) {
devtools::registerNode<VideoOptionsLayer>([](VideoOptionsLayer* node) {
    devtools::label("Members for VideoOptionsLayer:");
    devtools::property("m_textureQuality", node->m_textureQuality);
    devtools::property("m_windowed", node->m_windowed);
    devtools::property("m_borderless", node->m_borderless);
    devtools::property("m_fix", node->m_fix);
    devtools::property("m_currentResolution", node->m_currentResolution);
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_prevResolutionBtn at {}", (void*)node->m_prevResolutionBtn).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_nextResolutionBtn at {}", (void*)node->m_nextResolutionBtn).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_windowedResolutionLabel at {}", (void*)node->m_windowedResolutionLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_selectedResolutionLabel at {}", (void*)node->m_selectedResolutionLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_qualityLabel at {}", (void*)node->m_qualityLabel).c_str());
    devtools::label(fmt::format("cocos2d::CCArray* m_availableResolutions at {}", (void*)node->m_availableResolutions).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_borderlessToggle at {}", (void*)node->m_borderlessToggle).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_borderlessLabel at {}", (void*)node->m_borderlessLabel).c_str());
    devtools::label(fmt::format("CCMenuItemToggler* m_fixToggle at {}", (void*)node->m_fixToggle).c_str());
    devtools::label(fmt::format("cocos2d::CCLabelBMFont* m_fixLabel at {}", (void*)node->m_fixLabel).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, WorldLevelPage>) {
devtools::registerNode<WorldLevelPage>([](WorldLevelPage* node) {
    devtools::label("Members for WorldLevelPage:");
    devtools::label(fmt::format("GJWorldNode* m_worldNode at {}", (void*)node->m_worldNode).c_str());
    devtools::label(fmt::format("GJGameLevel* m_level at {}", (void*)node->m_level).c_str());
});
}

if constexpr (std::is_base_of_v<cocos2d::CCNode, WorldSelectLayer>) {
devtools::registerNode<WorldSelectLayer>([](WorldSelectLayer* node) {
    devtools::label("Members for WorldSelectLayer:");
    devtools::property("m_cleanupSprites", node->m_cleanupSprites);
    devtools::property("m_enteringLevel", node->m_enteringLevel);
    devtools::property("m_buttonsLocked", node->m_buttonsLocked);
    devtools::label(fmt::format("cocos2d::CCSprite* m_background at {}", (void*)node->m_background).c_str());
    devtools::label(fmt::format("BoomScrollLayer* m_scrollLayer at {}", (void*)node->m_scrollLayer).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_arrowLeft at {}", (void*)node->m_arrowLeft).c_str());
    devtools::label(fmt::format("CCMenuItemSpriteExtra* m_arrowRight at {}", (void*)node->m_arrowRight).c_str());
    devtools::label(fmt::format("GJWorldNode* m_worldNode at {}", (void*)node->m_worldNode).c_str());
});
}



    });
}