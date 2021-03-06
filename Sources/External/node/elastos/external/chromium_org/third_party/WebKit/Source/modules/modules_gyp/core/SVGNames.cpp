// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#ifdef SKIP_STATIC_CONSTRUCTORS_ON_GCC
#define SVG_NAMES_HIDE_GLOBALS 1
#else
#define QNAME_DEFAULT_CONSTRUCTOR 1
#endif

#include "SVGNames.h"

#include "wtf/StaticConstructors.h"

namespace WebCore {
namespace SVGNames {

using namespace WebCore;

DEFINE_GLOBAL(AtomicString, svgNamespaceURI)

// Tags
DEFINE_GLOBAL(QualifiedName, aTag)
DEFINE_GLOBAL(QualifiedName, animateTag)
DEFINE_GLOBAL(QualifiedName, animateMotionTag)
DEFINE_GLOBAL(QualifiedName, animateTransformTag)
DEFINE_GLOBAL(QualifiedName, circleTag)
DEFINE_GLOBAL(QualifiedName, clipPathTag)
DEFINE_GLOBAL(QualifiedName, cursorTag)
DEFINE_GLOBAL(QualifiedName, defsTag)
DEFINE_GLOBAL(QualifiedName, descTag)
DEFINE_GLOBAL(QualifiedName, discardTag)
DEFINE_GLOBAL(QualifiedName, ellipseTag)
DEFINE_GLOBAL(QualifiedName, feBlendTag)
DEFINE_GLOBAL(QualifiedName, feColorMatrixTag)
DEFINE_GLOBAL(QualifiedName, feComponentTransferTag)
DEFINE_GLOBAL(QualifiedName, feCompositeTag)
DEFINE_GLOBAL(QualifiedName, feConvolveMatrixTag)
DEFINE_GLOBAL(QualifiedName, feDiffuseLightingTag)
DEFINE_GLOBAL(QualifiedName, feDisplacementMapTag)
DEFINE_GLOBAL(QualifiedName, feDistantLightTag)
DEFINE_GLOBAL(QualifiedName, feDropShadowTag)
DEFINE_GLOBAL(QualifiedName, feFloodTag)
DEFINE_GLOBAL(QualifiedName, feFuncATag)
DEFINE_GLOBAL(QualifiedName, feFuncBTag)
DEFINE_GLOBAL(QualifiedName, feFuncGTag)
DEFINE_GLOBAL(QualifiedName, feFuncRTag)
DEFINE_GLOBAL(QualifiedName, feGaussianBlurTag)
DEFINE_GLOBAL(QualifiedName, feImageTag)
DEFINE_GLOBAL(QualifiedName, feMergeTag)
DEFINE_GLOBAL(QualifiedName, feMergeNodeTag)
DEFINE_GLOBAL(QualifiedName, feMorphologyTag)
DEFINE_GLOBAL(QualifiedName, feOffsetTag)
DEFINE_GLOBAL(QualifiedName, fePointLightTag)
DEFINE_GLOBAL(QualifiedName, feSpecularLightingTag)
DEFINE_GLOBAL(QualifiedName, feSpotLightTag)
DEFINE_GLOBAL(QualifiedName, feTileTag)
DEFINE_GLOBAL(QualifiedName, feTurbulenceTag)
DEFINE_GLOBAL(QualifiedName, filterTag)
DEFINE_GLOBAL(QualifiedName, foreignObjectTag)
DEFINE_GLOBAL(QualifiedName, gTag)
DEFINE_GLOBAL(QualifiedName, imageTag)
DEFINE_GLOBAL(QualifiedName, lineTag)
DEFINE_GLOBAL(QualifiedName, linearGradientTag)
DEFINE_GLOBAL(QualifiedName, mpathTag)
DEFINE_GLOBAL(QualifiedName, markerTag)
DEFINE_GLOBAL(QualifiedName, maskTag)
DEFINE_GLOBAL(QualifiedName, metadataTag)
DEFINE_GLOBAL(QualifiedName, pathTag)
DEFINE_GLOBAL(QualifiedName, patternTag)
DEFINE_GLOBAL(QualifiedName, polygonTag)
DEFINE_GLOBAL(QualifiedName, polylineTag)
DEFINE_GLOBAL(QualifiedName, radialGradientTag)
DEFINE_GLOBAL(QualifiedName, rectTag)
DEFINE_GLOBAL(QualifiedName, svgTag)
DEFINE_GLOBAL(QualifiedName, setTag)
DEFINE_GLOBAL(QualifiedName, stopTag)
DEFINE_GLOBAL(QualifiedName, switchTag)
DEFINE_GLOBAL(QualifiedName, symbolTag)
DEFINE_GLOBAL(QualifiedName, tspanTag)
DEFINE_GLOBAL(QualifiedName, textTag)
DEFINE_GLOBAL(QualifiedName, textPathTag)
DEFINE_GLOBAL(QualifiedName, titleTag)
DEFINE_GLOBAL(QualifiedName, useTag)
DEFINE_GLOBAL(QualifiedName, viewTag)
DEFINE_GLOBAL(QualifiedName, scriptTag)
DEFINE_GLOBAL(QualifiedName, styleTag)
DEFINE_GLOBAL(QualifiedName, animateColorTag)
DEFINE_GLOBAL(QualifiedName, altGlyphDefTag)
DEFINE_GLOBAL(QualifiedName, altGlyphTag)
DEFINE_GLOBAL(QualifiedName, altGlyphItemTag)
DEFINE_GLOBAL(QualifiedName, fontTag)
DEFINE_GLOBAL(QualifiedName, font_faceTag)
DEFINE_GLOBAL(QualifiedName, font_face_formatTag)
DEFINE_GLOBAL(QualifiedName, font_face_nameTag)
DEFINE_GLOBAL(QualifiedName, font_face_srcTag)
DEFINE_GLOBAL(QualifiedName, font_face_uriTag)
DEFINE_GLOBAL(QualifiedName, glyphTag)
DEFINE_GLOBAL(QualifiedName, glyphRefTag)
DEFINE_GLOBAL(QualifiedName, hkernTag)
DEFINE_GLOBAL(QualifiedName, missing_glyphTag)
DEFINE_GLOBAL(QualifiedName, vkernTag)


PassOwnPtr<const QualifiedName*[]> getSVGTags()
{
    OwnPtr<const QualifiedName*[]> tags = adoptArrayPtr(new const QualifiedName*[SVGTagsCount]);
    tags[0] = reinterpret_cast<const QualifiedName*>(&aTag);
    tags[1] = reinterpret_cast<const QualifiedName*>(&animateTag);
    tags[2] = reinterpret_cast<const QualifiedName*>(&animateMotionTag);
    tags[3] = reinterpret_cast<const QualifiedName*>(&animateTransformTag);
    tags[4] = reinterpret_cast<const QualifiedName*>(&circleTag);
    tags[5] = reinterpret_cast<const QualifiedName*>(&clipPathTag);
    tags[6] = reinterpret_cast<const QualifiedName*>(&cursorTag);
    tags[7] = reinterpret_cast<const QualifiedName*>(&defsTag);
    tags[8] = reinterpret_cast<const QualifiedName*>(&descTag);
    tags[9] = reinterpret_cast<const QualifiedName*>(&discardTag);
    tags[10] = reinterpret_cast<const QualifiedName*>(&ellipseTag);
    tags[11] = reinterpret_cast<const QualifiedName*>(&feBlendTag);
    tags[12] = reinterpret_cast<const QualifiedName*>(&feColorMatrixTag);
    tags[13] = reinterpret_cast<const QualifiedName*>(&feComponentTransferTag);
    tags[14] = reinterpret_cast<const QualifiedName*>(&feCompositeTag);
    tags[15] = reinterpret_cast<const QualifiedName*>(&feConvolveMatrixTag);
    tags[16] = reinterpret_cast<const QualifiedName*>(&feDiffuseLightingTag);
    tags[17] = reinterpret_cast<const QualifiedName*>(&feDisplacementMapTag);
    tags[18] = reinterpret_cast<const QualifiedName*>(&feDistantLightTag);
    tags[19] = reinterpret_cast<const QualifiedName*>(&feDropShadowTag);
    tags[20] = reinterpret_cast<const QualifiedName*>(&feFloodTag);
    tags[21] = reinterpret_cast<const QualifiedName*>(&feFuncATag);
    tags[22] = reinterpret_cast<const QualifiedName*>(&feFuncBTag);
    tags[23] = reinterpret_cast<const QualifiedName*>(&feFuncGTag);
    tags[24] = reinterpret_cast<const QualifiedName*>(&feFuncRTag);
    tags[25] = reinterpret_cast<const QualifiedName*>(&feGaussianBlurTag);
    tags[26] = reinterpret_cast<const QualifiedName*>(&feImageTag);
    tags[27] = reinterpret_cast<const QualifiedName*>(&feMergeTag);
    tags[28] = reinterpret_cast<const QualifiedName*>(&feMergeNodeTag);
    tags[29] = reinterpret_cast<const QualifiedName*>(&feMorphologyTag);
    tags[30] = reinterpret_cast<const QualifiedName*>(&feOffsetTag);
    tags[31] = reinterpret_cast<const QualifiedName*>(&fePointLightTag);
    tags[32] = reinterpret_cast<const QualifiedName*>(&feSpecularLightingTag);
    tags[33] = reinterpret_cast<const QualifiedName*>(&feSpotLightTag);
    tags[34] = reinterpret_cast<const QualifiedName*>(&feTileTag);
    tags[35] = reinterpret_cast<const QualifiedName*>(&feTurbulenceTag);
    tags[36] = reinterpret_cast<const QualifiedName*>(&filterTag);
    tags[37] = reinterpret_cast<const QualifiedName*>(&foreignObjectTag);
    tags[38] = reinterpret_cast<const QualifiedName*>(&gTag);
    tags[39] = reinterpret_cast<const QualifiedName*>(&imageTag);
    tags[40] = reinterpret_cast<const QualifiedName*>(&lineTag);
    tags[41] = reinterpret_cast<const QualifiedName*>(&linearGradientTag);
    tags[42] = reinterpret_cast<const QualifiedName*>(&mpathTag);
    tags[43] = reinterpret_cast<const QualifiedName*>(&markerTag);
    tags[44] = reinterpret_cast<const QualifiedName*>(&maskTag);
    tags[45] = reinterpret_cast<const QualifiedName*>(&metadataTag);
    tags[46] = reinterpret_cast<const QualifiedName*>(&pathTag);
    tags[47] = reinterpret_cast<const QualifiedName*>(&patternTag);
    tags[48] = reinterpret_cast<const QualifiedName*>(&polygonTag);
    tags[49] = reinterpret_cast<const QualifiedName*>(&polylineTag);
    tags[50] = reinterpret_cast<const QualifiedName*>(&radialGradientTag);
    tags[51] = reinterpret_cast<const QualifiedName*>(&rectTag);
    tags[52] = reinterpret_cast<const QualifiedName*>(&svgTag);
    tags[53] = reinterpret_cast<const QualifiedName*>(&setTag);
    tags[54] = reinterpret_cast<const QualifiedName*>(&stopTag);
    tags[55] = reinterpret_cast<const QualifiedName*>(&switchTag);
    tags[56] = reinterpret_cast<const QualifiedName*>(&symbolTag);
    tags[57] = reinterpret_cast<const QualifiedName*>(&tspanTag);
    tags[58] = reinterpret_cast<const QualifiedName*>(&textTag);
    tags[59] = reinterpret_cast<const QualifiedName*>(&textPathTag);
    tags[60] = reinterpret_cast<const QualifiedName*>(&titleTag);
    tags[61] = reinterpret_cast<const QualifiedName*>(&useTag);
    tags[62] = reinterpret_cast<const QualifiedName*>(&viewTag);
    tags[63] = reinterpret_cast<const QualifiedName*>(&scriptTag);
    tags[64] = reinterpret_cast<const QualifiedName*>(&styleTag);
    tags[65] = reinterpret_cast<const QualifiedName*>(&animateColorTag);
    tags[66] = reinterpret_cast<const QualifiedName*>(&altGlyphDefTag);
    tags[67] = reinterpret_cast<const QualifiedName*>(&altGlyphTag);
    tags[68] = reinterpret_cast<const QualifiedName*>(&altGlyphItemTag);
    tags[69] = reinterpret_cast<const QualifiedName*>(&fontTag);
    tags[70] = reinterpret_cast<const QualifiedName*>(&font_faceTag);
    tags[71] = reinterpret_cast<const QualifiedName*>(&font_face_formatTag);
    tags[72] = reinterpret_cast<const QualifiedName*>(&font_face_nameTag);
    tags[73] = reinterpret_cast<const QualifiedName*>(&font_face_srcTag);
    tags[74] = reinterpret_cast<const QualifiedName*>(&font_face_uriTag);
    tags[75] = reinterpret_cast<const QualifiedName*>(&glyphTag);
    tags[76] = reinterpret_cast<const QualifiedName*>(&glyphRefTag);
    tags[77] = reinterpret_cast<const QualifiedName*>(&hkernTag);
    tags[78] = reinterpret_cast<const QualifiedName*>(&missing_glyphTag);
    tags[79] = reinterpret_cast<const QualifiedName*>(&vkernTag);
    return tags.release();
}

// Attributes
DEFINE_GLOBAL(QualifiedName, accent_heightAttr)
DEFINE_GLOBAL(QualifiedName, accumulateAttr)
DEFINE_GLOBAL(QualifiedName, additiveAttr)
DEFINE_GLOBAL(QualifiedName, alignment_baselineAttr)
DEFINE_GLOBAL(QualifiedName, alphabeticAttr)
DEFINE_GLOBAL(QualifiedName, amplitudeAttr)
DEFINE_GLOBAL(QualifiedName, animateAttr)
DEFINE_GLOBAL(QualifiedName, arabic_formAttr)
DEFINE_GLOBAL(QualifiedName, ascentAttr)
DEFINE_GLOBAL(QualifiedName, attributeNameAttr)
DEFINE_GLOBAL(QualifiedName, attributeTypeAttr)
DEFINE_GLOBAL(QualifiedName, azimuthAttr)
DEFINE_GLOBAL(QualifiedName, baseFrequencyAttr)
DEFINE_GLOBAL(QualifiedName, baseProfileAttr)
DEFINE_GLOBAL(QualifiedName, baseline_shiftAttr)
DEFINE_GLOBAL(QualifiedName, bboxAttr)
DEFINE_GLOBAL(QualifiedName, beginAttr)
DEFINE_GLOBAL(QualifiedName, biasAttr)
DEFINE_GLOBAL(QualifiedName, buffered_renderingAttr)
DEFINE_GLOBAL(QualifiedName, byAttr)
DEFINE_GLOBAL(QualifiedName, calcModeAttr)
DEFINE_GLOBAL(QualifiedName, cap_heightAttr)
DEFINE_GLOBAL(QualifiedName, clipAttr)
DEFINE_GLOBAL(QualifiedName, clip_pathAttr)
DEFINE_GLOBAL(QualifiedName, clip_ruleAttr)
DEFINE_GLOBAL(QualifiedName, clipPathUnitsAttr)
DEFINE_GLOBAL(QualifiedName, colorAttr)
DEFINE_GLOBAL(QualifiedName, color_interpolationAttr)
DEFINE_GLOBAL(QualifiedName, color_interpolation_filtersAttr)
DEFINE_GLOBAL(QualifiedName, color_renderingAttr)
DEFINE_GLOBAL(QualifiedName, cursorAttr)
DEFINE_GLOBAL(QualifiedName, cxAttr)
DEFINE_GLOBAL(QualifiedName, cyAttr)
DEFINE_GLOBAL(QualifiedName, dAttr)
DEFINE_GLOBAL(QualifiedName, descentAttr)
DEFINE_GLOBAL(QualifiedName, diffuseConstantAttr)
DEFINE_GLOBAL(QualifiedName, directionAttr)
DEFINE_GLOBAL(QualifiedName, displayAttr)
DEFINE_GLOBAL(QualifiedName, divisorAttr)
DEFINE_GLOBAL(QualifiedName, dominant_baselineAttr)
DEFINE_GLOBAL(QualifiedName, durAttr)
DEFINE_GLOBAL(QualifiedName, dxAttr)
DEFINE_GLOBAL(QualifiedName, dyAttr)
DEFINE_GLOBAL(QualifiedName, edgeModeAttr)
DEFINE_GLOBAL(QualifiedName, elevationAttr)
DEFINE_GLOBAL(QualifiedName, enable_backgroundAttr)
DEFINE_GLOBAL(QualifiedName, endAttr)
DEFINE_GLOBAL(QualifiedName, exponentAttr)
DEFINE_GLOBAL(QualifiedName, fillAttr)
DEFINE_GLOBAL(QualifiedName, fill_opacityAttr)
DEFINE_GLOBAL(QualifiedName, fill_ruleAttr)
DEFINE_GLOBAL(QualifiedName, filterAttr)
DEFINE_GLOBAL(QualifiedName, filterResAttr)
DEFINE_GLOBAL(QualifiedName, filterUnitsAttr)
DEFINE_GLOBAL(QualifiedName, flood_colorAttr)
DEFINE_GLOBAL(QualifiedName, flood_opacityAttr)
DEFINE_GLOBAL(QualifiedName, font_familyAttr)
DEFINE_GLOBAL(QualifiedName, font_sizeAttr)
DEFINE_GLOBAL(QualifiedName, font_size_adjustAttr)
DEFINE_GLOBAL(QualifiedName, font_stretchAttr)
DEFINE_GLOBAL(QualifiedName, font_styleAttr)
DEFINE_GLOBAL(QualifiedName, font_variantAttr)
DEFINE_GLOBAL(QualifiedName, font_weightAttr)
DEFINE_GLOBAL(QualifiedName, formatAttr)
DEFINE_GLOBAL(QualifiedName, frAttr)
DEFINE_GLOBAL(QualifiedName, fromAttr)
DEFINE_GLOBAL(QualifiedName, fxAttr)
DEFINE_GLOBAL(QualifiedName, fyAttr)
DEFINE_GLOBAL(QualifiedName, g1Attr)
DEFINE_GLOBAL(QualifiedName, g2Attr)
DEFINE_GLOBAL(QualifiedName, glyph_nameAttr)
DEFINE_GLOBAL(QualifiedName, glyph_orientation_horizontalAttr)
DEFINE_GLOBAL(QualifiedName, glyph_orientation_verticalAttr)
DEFINE_GLOBAL(QualifiedName, glyphRefAttr)
DEFINE_GLOBAL(QualifiedName, gradientTransformAttr)
DEFINE_GLOBAL(QualifiedName, gradientUnitsAttr)
DEFINE_GLOBAL(QualifiedName, hangingAttr)
DEFINE_GLOBAL(QualifiedName, heightAttr)
DEFINE_GLOBAL(QualifiedName, horiz_adv_xAttr)
DEFINE_GLOBAL(QualifiedName, horiz_origin_xAttr)
DEFINE_GLOBAL(QualifiedName, horiz_origin_yAttr)
DEFINE_GLOBAL(QualifiedName, ideographicAttr)
DEFINE_GLOBAL(QualifiedName, image_renderingAttr)
DEFINE_GLOBAL(QualifiedName, inAttr)
DEFINE_GLOBAL(QualifiedName, in2Attr)
DEFINE_GLOBAL(QualifiedName, interceptAttr)
DEFINE_GLOBAL(QualifiedName, kAttr)
DEFINE_GLOBAL(QualifiedName, k1Attr)
DEFINE_GLOBAL(QualifiedName, k2Attr)
DEFINE_GLOBAL(QualifiedName, k3Attr)
DEFINE_GLOBAL(QualifiedName, k4Attr)
DEFINE_GLOBAL(QualifiedName, kernelMatrixAttr)
DEFINE_GLOBAL(QualifiedName, kernelUnitLengthAttr)
DEFINE_GLOBAL(QualifiedName, keyPointsAttr)
DEFINE_GLOBAL(QualifiedName, keySplinesAttr)
DEFINE_GLOBAL(QualifiedName, keyTimesAttr)
DEFINE_GLOBAL(QualifiedName, langAttr)
DEFINE_GLOBAL(QualifiedName, lengthAdjustAttr)
DEFINE_GLOBAL(QualifiedName, letter_spacingAttr)
DEFINE_GLOBAL(QualifiedName, lighting_colorAttr)
DEFINE_GLOBAL(QualifiedName, limitingConeAngleAttr)
DEFINE_GLOBAL(QualifiedName, localAttr)
DEFINE_GLOBAL(QualifiedName, marker_endAttr)
DEFINE_GLOBAL(QualifiedName, marker_midAttr)
DEFINE_GLOBAL(QualifiedName, marker_startAttr)
DEFINE_GLOBAL(QualifiedName, markerHeightAttr)
DEFINE_GLOBAL(QualifiedName, markerUnitsAttr)
DEFINE_GLOBAL(QualifiedName, markerWidthAttr)
DEFINE_GLOBAL(QualifiedName, maskAttr)
DEFINE_GLOBAL(QualifiedName, mask_typeAttr)
DEFINE_GLOBAL(QualifiedName, maskContentUnitsAttr)
DEFINE_GLOBAL(QualifiedName, maskUnitsAttr)
DEFINE_GLOBAL(QualifiedName, mathematicalAttr)
DEFINE_GLOBAL(QualifiedName, maxAttr)
DEFINE_GLOBAL(QualifiedName, mediaAttr)
DEFINE_GLOBAL(QualifiedName, methodAttr)
DEFINE_GLOBAL(QualifiedName, minAttr)
DEFINE_GLOBAL(QualifiedName, modeAttr)
DEFINE_GLOBAL(QualifiedName, nameAttr)
DEFINE_GLOBAL(QualifiedName, numOctavesAttr)
DEFINE_GLOBAL(QualifiedName, offsetAttr)
DEFINE_GLOBAL(QualifiedName, onactivateAttr)
DEFINE_GLOBAL(QualifiedName, onbeginAttr)
DEFINE_GLOBAL(QualifiedName, onendAttr)
DEFINE_GLOBAL(QualifiedName, onfocusinAttr)
DEFINE_GLOBAL(QualifiedName, onfocusoutAttr)
DEFINE_GLOBAL(QualifiedName, onrepeatAttr)
DEFINE_GLOBAL(QualifiedName, onzoomAttr)
DEFINE_GLOBAL(QualifiedName, opacityAttr)
DEFINE_GLOBAL(QualifiedName, operatorAttr)
DEFINE_GLOBAL(QualifiedName, orderAttr)
DEFINE_GLOBAL(QualifiedName, orientAttr)
DEFINE_GLOBAL(QualifiedName, orientationAttr)
DEFINE_GLOBAL(QualifiedName, originAttr)
DEFINE_GLOBAL(QualifiedName, overflowAttr)
DEFINE_GLOBAL(QualifiedName, overline_positionAttr)
DEFINE_GLOBAL(QualifiedName, overline_thicknessAttr)
DEFINE_GLOBAL(QualifiedName, paint_orderAttr)
DEFINE_GLOBAL(QualifiedName, panose_1Attr)
DEFINE_GLOBAL(QualifiedName, pathAttr)
DEFINE_GLOBAL(QualifiedName, pathLengthAttr)
DEFINE_GLOBAL(QualifiedName, patternContentUnitsAttr)
DEFINE_GLOBAL(QualifiedName, patternTransformAttr)
DEFINE_GLOBAL(QualifiedName, patternUnitsAttr)
DEFINE_GLOBAL(QualifiedName, pointer_eventsAttr)
DEFINE_GLOBAL(QualifiedName, pointsAttr)
DEFINE_GLOBAL(QualifiedName, pointsAtXAttr)
DEFINE_GLOBAL(QualifiedName, pointsAtYAttr)
DEFINE_GLOBAL(QualifiedName, pointsAtZAttr)
DEFINE_GLOBAL(QualifiedName, preserveAlphaAttr)
DEFINE_GLOBAL(QualifiedName, preserveAspectRatioAttr)
DEFINE_GLOBAL(QualifiedName, primitiveUnitsAttr)
DEFINE_GLOBAL(QualifiedName, rAttr)
DEFINE_GLOBAL(QualifiedName, radiusAttr)
DEFINE_GLOBAL(QualifiedName, refXAttr)
DEFINE_GLOBAL(QualifiedName, refYAttr)
DEFINE_GLOBAL(QualifiedName, rendering_intentAttr)
DEFINE_GLOBAL(QualifiedName, repeatCountAttr)
DEFINE_GLOBAL(QualifiedName, repeatDurAttr)
DEFINE_GLOBAL(QualifiedName, requiredExtensionsAttr)
DEFINE_GLOBAL(QualifiedName, requiredFeaturesAttr)
DEFINE_GLOBAL(QualifiedName, restartAttr)
DEFINE_GLOBAL(QualifiedName, resultAttr)
DEFINE_GLOBAL(QualifiedName, rotateAttr)
DEFINE_GLOBAL(QualifiedName, rxAttr)
DEFINE_GLOBAL(QualifiedName, ryAttr)
DEFINE_GLOBAL(QualifiedName, scaleAttr)
DEFINE_GLOBAL(QualifiedName, seedAttr)
DEFINE_GLOBAL(QualifiedName, shape_renderingAttr)
DEFINE_GLOBAL(QualifiedName, slopeAttr)
DEFINE_GLOBAL(QualifiedName, spacingAttr)
DEFINE_GLOBAL(QualifiedName, specularConstantAttr)
DEFINE_GLOBAL(QualifiedName, specularExponentAttr)
DEFINE_GLOBAL(QualifiedName, spreadMethodAttr)
DEFINE_GLOBAL(QualifiedName, startOffsetAttr)
DEFINE_GLOBAL(QualifiedName, stdDeviationAttr)
DEFINE_GLOBAL(QualifiedName, stemhAttr)
DEFINE_GLOBAL(QualifiedName, stemvAttr)
DEFINE_GLOBAL(QualifiedName, stitchTilesAttr)
DEFINE_GLOBAL(QualifiedName, stop_colorAttr)
DEFINE_GLOBAL(QualifiedName, stop_opacityAttr)
DEFINE_GLOBAL(QualifiedName, strikethrough_positionAttr)
DEFINE_GLOBAL(QualifiedName, strikethrough_thicknessAttr)
DEFINE_GLOBAL(QualifiedName, strokeAttr)
DEFINE_GLOBAL(QualifiedName, stroke_dasharrayAttr)
DEFINE_GLOBAL(QualifiedName, stroke_dashoffsetAttr)
DEFINE_GLOBAL(QualifiedName, stroke_linecapAttr)
DEFINE_GLOBAL(QualifiedName, stroke_linejoinAttr)
DEFINE_GLOBAL(QualifiedName, stroke_miterlimitAttr)
DEFINE_GLOBAL(QualifiedName, stroke_opacityAttr)
DEFINE_GLOBAL(QualifiedName, stroke_widthAttr)
DEFINE_GLOBAL(QualifiedName, styleAttr)
DEFINE_GLOBAL(QualifiedName, surfaceScaleAttr)
DEFINE_GLOBAL(QualifiedName, systemLanguageAttr)
DEFINE_GLOBAL(QualifiedName, tableValuesAttr)
DEFINE_GLOBAL(QualifiedName, targetAttr)
DEFINE_GLOBAL(QualifiedName, targetXAttr)
DEFINE_GLOBAL(QualifiedName, targetYAttr)
DEFINE_GLOBAL(QualifiedName, text_anchorAttr)
DEFINE_GLOBAL(QualifiedName, text_decorationAttr)
DEFINE_GLOBAL(QualifiedName, text_renderingAttr)
DEFINE_GLOBAL(QualifiedName, textLengthAttr)
DEFINE_GLOBAL(QualifiedName, titleAttr)
DEFINE_GLOBAL(QualifiedName, toAttr)
DEFINE_GLOBAL(QualifiedName, transformAttr)
DEFINE_GLOBAL(QualifiedName, transform_originAttr)
DEFINE_GLOBAL(QualifiedName, typeAttr)
DEFINE_GLOBAL(QualifiedName, u1Attr)
DEFINE_GLOBAL(QualifiedName, u2Attr)
DEFINE_GLOBAL(QualifiedName, underline_positionAttr)
DEFINE_GLOBAL(QualifiedName, underline_thicknessAttr)
DEFINE_GLOBAL(QualifiedName, unicodeAttr)
DEFINE_GLOBAL(QualifiedName, unicode_bidiAttr)
DEFINE_GLOBAL(QualifiedName, unicode_rangeAttr)
DEFINE_GLOBAL(QualifiedName, units_per_emAttr)
DEFINE_GLOBAL(QualifiedName, v_alphabeticAttr)
DEFINE_GLOBAL(QualifiedName, v_hangingAttr)
DEFINE_GLOBAL(QualifiedName, v_ideographicAttr)
DEFINE_GLOBAL(QualifiedName, v_mathematicalAttr)
DEFINE_GLOBAL(QualifiedName, valuesAttr)
DEFINE_GLOBAL(QualifiedName, vector_effectAttr)
DEFINE_GLOBAL(QualifiedName, versionAttr)
DEFINE_GLOBAL(QualifiedName, vert_adv_yAttr)
DEFINE_GLOBAL(QualifiedName, vert_origin_xAttr)
DEFINE_GLOBAL(QualifiedName, vert_origin_yAttr)
DEFINE_GLOBAL(QualifiedName, viewBoxAttr)
DEFINE_GLOBAL(QualifiedName, viewTargetAttr)
DEFINE_GLOBAL(QualifiedName, visibilityAttr)
DEFINE_GLOBAL(QualifiedName, widthAttr)
DEFINE_GLOBAL(QualifiedName, widthsAttr)
DEFINE_GLOBAL(QualifiedName, word_spacingAttr)
DEFINE_GLOBAL(QualifiedName, writing_modeAttr)
DEFINE_GLOBAL(QualifiedName, xAttr)
DEFINE_GLOBAL(QualifiedName, x_heightAttr)
DEFINE_GLOBAL(QualifiedName, x1Attr)
DEFINE_GLOBAL(QualifiedName, x2Attr)
DEFINE_GLOBAL(QualifiedName, xChannelSelectorAttr)
DEFINE_GLOBAL(QualifiedName, yAttr)
DEFINE_GLOBAL(QualifiedName, y1Attr)
DEFINE_GLOBAL(QualifiedName, y2Attr)
DEFINE_GLOBAL(QualifiedName, yChannelSelectorAttr)
DEFINE_GLOBAL(QualifiedName, zAttr)
DEFINE_GLOBAL(QualifiedName, zoomAndPanAttr)

PassOwnPtr<const QualifiedName*[]> getSVGAttrs()
{
    OwnPtr<const QualifiedName*[]> attrs = adoptArrayPtr(new const QualifiedName*[SVGAttrsCount]);
    attrs[0] = reinterpret_cast<const WebCore::QualifiedName*>(&accent_heightAttr);
    attrs[1] = reinterpret_cast<const WebCore::QualifiedName*>(&accumulateAttr);
    attrs[2] = reinterpret_cast<const WebCore::QualifiedName*>(&additiveAttr);
    attrs[3] = reinterpret_cast<const WebCore::QualifiedName*>(&alignment_baselineAttr);
    attrs[4] = reinterpret_cast<const WebCore::QualifiedName*>(&alphabeticAttr);
    attrs[5] = reinterpret_cast<const WebCore::QualifiedName*>(&amplitudeAttr);
    attrs[6] = reinterpret_cast<const WebCore::QualifiedName*>(&animateAttr);
    attrs[7] = reinterpret_cast<const WebCore::QualifiedName*>(&arabic_formAttr);
    attrs[8] = reinterpret_cast<const WebCore::QualifiedName*>(&ascentAttr);
    attrs[9] = reinterpret_cast<const WebCore::QualifiedName*>(&attributeNameAttr);
    attrs[10] = reinterpret_cast<const WebCore::QualifiedName*>(&attributeTypeAttr);
    attrs[11] = reinterpret_cast<const WebCore::QualifiedName*>(&azimuthAttr);
    attrs[12] = reinterpret_cast<const WebCore::QualifiedName*>(&baseFrequencyAttr);
    attrs[13] = reinterpret_cast<const WebCore::QualifiedName*>(&baseProfileAttr);
    attrs[14] = reinterpret_cast<const WebCore::QualifiedName*>(&baseline_shiftAttr);
    attrs[15] = reinterpret_cast<const WebCore::QualifiedName*>(&bboxAttr);
    attrs[16] = reinterpret_cast<const WebCore::QualifiedName*>(&beginAttr);
    attrs[17] = reinterpret_cast<const WebCore::QualifiedName*>(&biasAttr);
    attrs[18] = reinterpret_cast<const WebCore::QualifiedName*>(&buffered_renderingAttr);
    attrs[19] = reinterpret_cast<const WebCore::QualifiedName*>(&byAttr);
    attrs[20] = reinterpret_cast<const WebCore::QualifiedName*>(&calcModeAttr);
    attrs[21] = reinterpret_cast<const WebCore::QualifiedName*>(&cap_heightAttr);
    attrs[22] = reinterpret_cast<const WebCore::QualifiedName*>(&clipAttr);
    attrs[23] = reinterpret_cast<const WebCore::QualifiedName*>(&clip_pathAttr);
    attrs[24] = reinterpret_cast<const WebCore::QualifiedName*>(&clip_ruleAttr);
    attrs[25] = reinterpret_cast<const WebCore::QualifiedName*>(&clipPathUnitsAttr);
    attrs[26] = reinterpret_cast<const WebCore::QualifiedName*>(&colorAttr);
    attrs[27] = reinterpret_cast<const WebCore::QualifiedName*>(&color_interpolationAttr);
    attrs[28] = reinterpret_cast<const WebCore::QualifiedName*>(&color_interpolation_filtersAttr);
    attrs[29] = reinterpret_cast<const WebCore::QualifiedName*>(&color_renderingAttr);
    attrs[30] = reinterpret_cast<const WebCore::QualifiedName*>(&cursorAttr);
    attrs[31] = reinterpret_cast<const WebCore::QualifiedName*>(&cxAttr);
    attrs[32] = reinterpret_cast<const WebCore::QualifiedName*>(&cyAttr);
    attrs[33] = reinterpret_cast<const WebCore::QualifiedName*>(&dAttr);
    attrs[34] = reinterpret_cast<const WebCore::QualifiedName*>(&descentAttr);
    attrs[35] = reinterpret_cast<const WebCore::QualifiedName*>(&diffuseConstantAttr);
    attrs[36] = reinterpret_cast<const WebCore::QualifiedName*>(&directionAttr);
    attrs[37] = reinterpret_cast<const WebCore::QualifiedName*>(&displayAttr);
    attrs[38] = reinterpret_cast<const WebCore::QualifiedName*>(&divisorAttr);
    attrs[39] = reinterpret_cast<const WebCore::QualifiedName*>(&dominant_baselineAttr);
    attrs[40] = reinterpret_cast<const WebCore::QualifiedName*>(&durAttr);
    attrs[41] = reinterpret_cast<const WebCore::QualifiedName*>(&dxAttr);
    attrs[42] = reinterpret_cast<const WebCore::QualifiedName*>(&dyAttr);
    attrs[43] = reinterpret_cast<const WebCore::QualifiedName*>(&edgeModeAttr);
    attrs[44] = reinterpret_cast<const WebCore::QualifiedName*>(&elevationAttr);
    attrs[45] = reinterpret_cast<const WebCore::QualifiedName*>(&enable_backgroundAttr);
    attrs[46] = reinterpret_cast<const WebCore::QualifiedName*>(&endAttr);
    attrs[47] = reinterpret_cast<const WebCore::QualifiedName*>(&exponentAttr);
    attrs[48] = reinterpret_cast<const WebCore::QualifiedName*>(&fillAttr);
    attrs[49] = reinterpret_cast<const WebCore::QualifiedName*>(&fill_opacityAttr);
    attrs[50] = reinterpret_cast<const WebCore::QualifiedName*>(&fill_ruleAttr);
    attrs[51] = reinterpret_cast<const WebCore::QualifiedName*>(&filterAttr);
    attrs[52] = reinterpret_cast<const WebCore::QualifiedName*>(&filterResAttr);
    attrs[53] = reinterpret_cast<const WebCore::QualifiedName*>(&filterUnitsAttr);
    attrs[54] = reinterpret_cast<const WebCore::QualifiedName*>(&flood_colorAttr);
    attrs[55] = reinterpret_cast<const WebCore::QualifiedName*>(&flood_opacityAttr);
    attrs[56] = reinterpret_cast<const WebCore::QualifiedName*>(&font_familyAttr);
    attrs[57] = reinterpret_cast<const WebCore::QualifiedName*>(&font_sizeAttr);
    attrs[58] = reinterpret_cast<const WebCore::QualifiedName*>(&font_size_adjustAttr);
    attrs[59] = reinterpret_cast<const WebCore::QualifiedName*>(&font_stretchAttr);
    attrs[60] = reinterpret_cast<const WebCore::QualifiedName*>(&font_styleAttr);
    attrs[61] = reinterpret_cast<const WebCore::QualifiedName*>(&font_variantAttr);
    attrs[62] = reinterpret_cast<const WebCore::QualifiedName*>(&font_weightAttr);
    attrs[63] = reinterpret_cast<const WebCore::QualifiedName*>(&formatAttr);
    attrs[64] = reinterpret_cast<const WebCore::QualifiedName*>(&frAttr);
    attrs[65] = reinterpret_cast<const WebCore::QualifiedName*>(&fromAttr);
    attrs[66] = reinterpret_cast<const WebCore::QualifiedName*>(&fxAttr);
    attrs[67] = reinterpret_cast<const WebCore::QualifiedName*>(&fyAttr);
    attrs[68] = reinterpret_cast<const WebCore::QualifiedName*>(&g1Attr);
    attrs[69] = reinterpret_cast<const WebCore::QualifiedName*>(&g2Attr);
    attrs[70] = reinterpret_cast<const WebCore::QualifiedName*>(&glyph_nameAttr);
    attrs[71] = reinterpret_cast<const WebCore::QualifiedName*>(&glyph_orientation_horizontalAttr);
    attrs[72] = reinterpret_cast<const WebCore::QualifiedName*>(&glyph_orientation_verticalAttr);
    attrs[73] = reinterpret_cast<const WebCore::QualifiedName*>(&glyphRefAttr);
    attrs[74] = reinterpret_cast<const WebCore::QualifiedName*>(&gradientTransformAttr);
    attrs[75] = reinterpret_cast<const WebCore::QualifiedName*>(&gradientUnitsAttr);
    attrs[76] = reinterpret_cast<const WebCore::QualifiedName*>(&hangingAttr);
    attrs[77] = reinterpret_cast<const WebCore::QualifiedName*>(&heightAttr);
    attrs[78] = reinterpret_cast<const WebCore::QualifiedName*>(&horiz_adv_xAttr);
    attrs[79] = reinterpret_cast<const WebCore::QualifiedName*>(&horiz_origin_xAttr);
    attrs[80] = reinterpret_cast<const WebCore::QualifiedName*>(&horiz_origin_yAttr);
    attrs[81] = reinterpret_cast<const WebCore::QualifiedName*>(&ideographicAttr);
    attrs[82] = reinterpret_cast<const WebCore::QualifiedName*>(&image_renderingAttr);
    attrs[83] = reinterpret_cast<const WebCore::QualifiedName*>(&inAttr);
    attrs[84] = reinterpret_cast<const WebCore::QualifiedName*>(&in2Attr);
    attrs[85] = reinterpret_cast<const WebCore::QualifiedName*>(&interceptAttr);
    attrs[86] = reinterpret_cast<const WebCore::QualifiedName*>(&kAttr);
    attrs[87] = reinterpret_cast<const WebCore::QualifiedName*>(&k1Attr);
    attrs[88] = reinterpret_cast<const WebCore::QualifiedName*>(&k2Attr);
    attrs[89] = reinterpret_cast<const WebCore::QualifiedName*>(&k3Attr);
    attrs[90] = reinterpret_cast<const WebCore::QualifiedName*>(&k4Attr);
    attrs[91] = reinterpret_cast<const WebCore::QualifiedName*>(&kernelMatrixAttr);
    attrs[92] = reinterpret_cast<const WebCore::QualifiedName*>(&kernelUnitLengthAttr);
    attrs[93] = reinterpret_cast<const WebCore::QualifiedName*>(&keyPointsAttr);
    attrs[94] = reinterpret_cast<const WebCore::QualifiedName*>(&keySplinesAttr);
    attrs[95] = reinterpret_cast<const WebCore::QualifiedName*>(&keyTimesAttr);
    attrs[96] = reinterpret_cast<const WebCore::QualifiedName*>(&langAttr);
    attrs[97] = reinterpret_cast<const WebCore::QualifiedName*>(&lengthAdjustAttr);
    attrs[98] = reinterpret_cast<const WebCore::QualifiedName*>(&letter_spacingAttr);
    attrs[99] = reinterpret_cast<const WebCore::QualifiedName*>(&lighting_colorAttr);
    attrs[100] = reinterpret_cast<const WebCore::QualifiedName*>(&limitingConeAngleAttr);
    attrs[101] = reinterpret_cast<const WebCore::QualifiedName*>(&localAttr);
    attrs[102] = reinterpret_cast<const WebCore::QualifiedName*>(&marker_endAttr);
    attrs[103] = reinterpret_cast<const WebCore::QualifiedName*>(&marker_midAttr);
    attrs[104] = reinterpret_cast<const WebCore::QualifiedName*>(&marker_startAttr);
    attrs[105] = reinterpret_cast<const WebCore::QualifiedName*>(&markerHeightAttr);
    attrs[106] = reinterpret_cast<const WebCore::QualifiedName*>(&markerUnitsAttr);
    attrs[107] = reinterpret_cast<const WebCore::QualifiedName*>(&markerWidthAttr);
    attrs[108] = reinterpret_cast<const WebCore::QualifiedName*>(&maskAttr);
    attrs[109] = reinterpret_cast<const WebCore::QualifiedName*>(&mask_typeAttr);
    attrs[110] = reinterpret_cast<const WebCore::QualifiedName*>(&maskContentUnitsAttr);
    attrs[111] = reinterpret_cast<const WebCore::QualifiedName*>(&maskUnitsAttr);
    attrs[112] = reinterpret_cast<const WebCore::QualifiedName*>(&mathematicalAttr);
    attrs[113] = reinterpret_cast<const WebCore::QualifiedName*>(&maxAttr);
    attrs[114] = reinterpret_cast<const WebCore::QualifiedName*>(&mediaAttr);
    attrs[115] = reinterpret_cast<const WebCore::QualifiedName*>(&methodAttr);
    attrs[116] = reinterpret_cast<const WebCore::QualifiedName*>(&minAttr);
    attrs[117] = reinterpret_cast<const WebCore::QualifiedName*>(&modeAttr);
    attrs[118] = reinterpret_cast<const WebCore::QualifiedName*>(&nameAttr);
    attrs[119] = reinterpret_cast<const WebCore::QualifiedName*>(&numOctavesAttr);
    attrs[120] = reinterpret_cast<const WebCore::QualifiedName*>(&offsetAttr);
    attrs[121] = reinterpret_cast<const WebCore::QualifiedName*>(&onactivateAttr);
    attrs[122] = reinterpret_cast<const WebCore::QualifiedName*>(&onbeginAttr);
    attrs[123] = reinterpret_cast<const WebCore::QualifiedName*>(&onendAttr);
    attrs[124] = reinterpret_cast<const WebCore::QualifiedName*>(&onfocusinAttr);
    attrs[125] = reinterpret_cast<const WebCore::QualifiedName*>(&onfocusoutAttr);
    attrs[126] = reinterpret_cast<const WebCore::QualifiedName*>(&onrepeatAttr);
    attrs[127] = reinterpret_cast<const WebCore::QualifiedName*>(&onzoomAttr);
    attrs[128] = reinterpret_cast<const WebCore::QualifiedName*>(&opacityAttr);
    attrs[129] = reinterpret_cast<const WebCore::QualifiedName*>(&operatorAttr);
    attrs[130] = reinterpret_cast<const WebCore::QualifiedName*>(&orderAttr);
    attrs[131] = reinterpret_cast<const WebCore::QualifiedName*>(&orientAttr);
    attrs[132] = reinterpret_cast<const WebCore::QualifiedName*>(&orientationAttr);
    attrs[133] = reinterpret_cast<const WebCore::QualifiedName*>(&originAttr);
    attrs[134] = reinterpret_cast<const WebCore::QualifiedName*>(&overflowAttr);
    attrs[135] = reinterpret_cast<const WebCore::QualifiedName*>(&overline_positionAttr);
    attrs[136] = reinterpret_cast<const WebCore::QualifiedName*>(&overline_thicknessAttr);
    attrs[137] = reinterpret_cast<const WebCore::QualifiedName*>(&paint_orderAttr);
    attrs[138] = reinterpret_cast<const WebCore::QualifiedName*>(&panose_1Attr);
    attrs[139] = reinterpret_cast<const WebCore::QualifiedName*>(&pathAttr);
    attrs[140] = reinterpret_cast<const WebCore::QualifiedName*>(&pathLengthAttr);
    attrs[141] = reinterpret_cast<const WebCore::QualifiedName*>(&patternContentUnitsAttr);
    attrs[142] = reinterpret_cast<const WebCore::QualifiedName*>(&patternTransformAttr);
    attrs[143] = reinterpret_cast<const WebCore::QualifiedName*>(&patternUnitsAttr);
    attrs[144] = reinterpret_cast<const WebCore::QualifiedName*>(&pointer_eventsAttr);
    attrs[145] = reinterpret_cast<const WebCore::QualifiedName*>(&pointsAttr);
    attrs[146] = reinterpret_cast<const WebCore::QualifiedName*>(&pointsAtXAttr);
    attrs[147] = reinterpret_cast<const WebCore::QualifiedName*>(&pointsAtYAttr);
    attrs[148] = reinterpret_cast<const WebCore::QualifiedName*>(&pointsAtZAttr);
    attrs[149] = reinterpret_cast<const WebCore::QualifiedName*>(&preserveAlphaAttr);
    attrs[150] = reinterpret_cast<const WebCore::QualifiedName*>(&preserveAspectRatioAttr);
    attrs[151] = reinterpret_cast<const WebCore::QualifiedName*>(&primitiveUnitsAttr);
    attrs[152] = reinterpret_cast<const WebCore::QualifiedName*>(&rAttr);
    attrs[153] = reinterpret_cast<const WebCore::QualifiedName*>(&radiusAttr);
    attrs[154] = reinterpret_cast<const WebCore::QualifiedName*>(&refXAttr);
    attrs[155] = reinterpret_cast<const WebCore::QualifiedName*>(&refYAttr);
    attrs[156] = reinterpret_cast<const WebCore::QualifiedName*>(&rendering_intentAttr);
    attrs[157] = reinterpret_cast<const WebCore::QualifiedName*>(&repeatCountAttr);
    attrs[158] = reinterpret_cast<const WebCore::QualifiedName*>(&repeatDurAttr);
    attrs[159] = reinterpret_cast<const WebCore::QualifiedName*>(&requiredExtensionsAttr);
    attrs[160] = reinterpret_cast<const WebCore::QualifiedName*>(&requiredFeaturesAttr);
    attrs[161] = reinterpret_cast<const WebCore::QualifiedName*>(&restartAttr);
    attrs[162] = reinterpret_cast<const WebCore::QualifiedName*>(&resultAttr);
    attrs[163] = reinterpret_cast<const WebCore::QualifiedName*>(&rotateAttr);
    attrs[164] = reinterpret_cast<const WebCore::QualifiedName*>(&rxAttr);
    attrs[165] = reinterpret_cast<const WebCore::QualifiedName*>(&ryAttr);
    attrs[166] = reinterpret_cast<const WebCore::QualifiedName*>(&scaleAttr);
    attrs[167] = reinterpret_cast<const WebCore::QualifiedName*>(&seedAttr);
    attrs[168] = reinterpret_cast<const WebCore::QualifiedName*>(&shape_renderingAttr);
    attrs[169] = reinterpret_cast<const WebCore::QualifiedName*>(&slopeAttr);
    attrs[170] = reinterpret_cast<const WebCore::QualifiedName*>(&spacingAttr);
    attrs[171] = reinterpret_cast<const WebCore::QualifiedName*>(&specularConstantAttr);
    attrs[172] = reinterpret_cast<const WebCore::QualifiedName*>(&specularExponentAttr);
    attrs[173] = reinterpret_cast<const WebCore::QualifiedName*>(&spreadMethodAttr);
    attrs[174] = reinterpret_cast<const WebCore::QualifiedName*>(&startOffsetAttr);
    attrs[175] = reinterpret_cast<const WebCore::QualifiedName*>(&stdDeviationAttr);
    attrs[176] = reinterpret_cast<const WebCore::QualifiedName*>(&stemhAttr);
    attrs[177] = reinterpret_cast<const WebCore::QualifiedName*>(&stemvAttr);
    attrs[178] = reinterpret_cast<const WebCore::QualifiedName*>(&stitchTilesAttr);
    attrs[179] = reinterpret_cast<const WebCore::QualifiedName*>(&stop_colorAttr);
    attrs[180] = reinterpret_cast<const WebCore::QualifiedName*>(&stop_opacityAttr);
    attrs[181] = reinterpret_cast<const WebCore::QualifiedName*>(&strikethrough_positionAttr);
    attrs[182] = reinterpret_cast<const WebCore::QualifiedName*>(&strikethrough_thicknessAttr);
    attrs[183] = reinterpret_cast<const WebCore::QualifiedName*>(&strokeAttr);
    attrs[184] = reinterpret_cast<const WebCore::QualifiedName*>(&stroke_dasharrayAttr);
    attrs[185] = reinterpret_cast<const WebCore::QualifiedName*>(&stroke_dashoffsetAttr);
    attrs[186] = reinterpret_cast<const WebCore::QualifiedName*>(&stroke_linecapAttr);
    attrs[187] = reinterpret_cast<const WebCore::QualifiedName*>(&stroke_linejoinAttr);
    attrs[188] = reinterpret_cast<const WebCore::QualifiedName*>(&stroke_miterlimitAttr);
    attrs[189] = reinterpret_cast<const WebCore::QualifiedName*>(&stroke_opacityAttr);
    attrs[190] = reinterpret_cast<const WebCore::QualifiedName*>(&stroke_widthAttr);
    attrs[191] = reinterpret_cast<const WebCore::QualifiedName*>(&styleAttr);
    attrs[192] = reinterpret_cast<const WebCore::QualifiedName*>(&surfaceScaleAttr);
    attrs[193] = reinterpret_cast<const WebCore::QualifiedName*>(&systemLanguageAttr);
    attrs[194] = reinterpret_cast<const WebCore::QualifiedName*>(&tableValuesAttr);
    attrs[195] = reinterpret_cast<const WebCore::QualifiedName*>(&targetAttr);
    attrs[196] = reinterpret_cast<const WebCore::QualifiedName*>(&targetXAttr);
    attrs[197] = reinterpret_cast<const WebCore::QualifiedName*>(&targetYAttr);
    attrs[198] = reinterpret_cast<const WebCore::QualifiedName*>(&text_anchorAttr);
    attrs[199] = reinterpret_cast<const WebCore::QualifiedName*>(&text_decorationAttr);
    attrs[200] = reinterpret_cast<const WebCore::QualifiedName*>(&text_renderingAttr);
    attrs[201] = reinterpret_cast<const WebCore::QualifiedName*>(&textLengthAttr);
    attrs[202] = reinterpret_cast<const WebCore::QualifiedName*>(&titleAttr);
    attrs[203] = reinterpret_cast<const WebCore::QualifiedName*>(&toAttr);
    attrs[204] = reinterpret_cast<const WebCore::QualifiedName*>(&transformAttr);
    attrs[205] = reinterpret_cast<const WebCore::QualifiedName*>(&transform_originAttr);
    attrs[206] = reinterpret_cast<const WebCore::QualifiedName*>(&typeAttr);
    attrs[207] = reinterpret_cast<const WebCore::QualifiedName*>(&u1Attr);
    attrs[208] = reinterpret_cast<const WebCore::QualifiedName*>(&u2Attr);
    attrs[209] = reinterpret_cast<const WebCore::QualifiedName*>(&underline_positionAttr);
    attrs[210] = reinterpret_cast<const WebCore::QualifiedName*>(&underline_thicknessAttr);
    attrs[211] = reinterpret_cast<const WebCore::QualifiedName*>(&unicodeAttr);
    attrs[212] = reinterpret_cast<const WebCore::QualifiedName*>(&unicode_bidiAttr);
    attrs[213] = reinterpret_cast<const WebCore::QualifiedName*>(&unicode_rangeAttr);
    attrs[214] = reinterpret_cast<const WebCore::QualifiedName*>(&units_per_emAttr);
    attrs[215] = reinterpret_cast<const WebCore::QualifiedName*>(&v_alphabeticAttr);
    attrs[216] = reinterpret_cast<const WebCore::QualifiedName*>(&v_hangingAttr);
    attrs[217] = reinterpret_cast<const WebCore::QualifiedName*>(&v_ideographicAttr);
    attrs[218] = reinterpret_cast<const WebCore::QualifiedName*>(&v_mathematicalAttr);
    attrs[219] = reinterpret_cast<const WebCore::QualifiedName*>(&valuesAttr);
    attrs[220] = reinterpret_cast<const WebCore::QualifiedName*>(&vector_effectAttr);
    attrs[221] = reinterpret_cast<const WebCore::QualifiedName*>(&versionAttr);
    attrs[222] = reinterpret_cast<const WebCore::QualifiedName*>(&vert_adv_yAttr);
    attrs[223] = reinterpret_cast<const WebCore::QualifiedName*>(&vert_origin_xAttr);
    attrs[224] = reinterpret_cast<const WebCore::QualifiedName*>(&vert_origin_yAttr);
    attrs[225] = reinterpret_cast<const WebCore::QualifiedName*>(&viewBoxAttr);
    attrs[226] = reinterpret_cast<const WebCore::QualifiedName*>(&viewTargetAttr);
    attrs[227] = reinterpret_cast<const WebCore::QualifiedName*>(&visibilityAttr);
    attrs[228] = reinterpret_cast<const WebCore::QualifiedName*>(&widthAttr);
    attrs[229] = reinterpret_cast<const WebCore::QualifiedName*>(&widthsAttr);
    attrs[230] = reinterpret_cast<const WebCore::QualifiedName*>(&word_spacingAttr);
    attrs[231] = reinterpret_cast<const WebCore::QualifiedName*>(&writing_modeAttr);
    attrs[232] = reinterpret_cast<const WebCore::QualifiedName*>(&xAttr);
    attrs[233] = reinterpret_cast<const WebCore::QualifiedName*>(&x_heightAttr);
    attrs[234] = reinterpret_cast<const WebCore::QualifiedName*>(&x1Attr);
    attrs[235] = reinterpret_cast<const WebCore::QualifiedName*>(&x2Attr);
    attrs[236] = reinterpret_cast<const WebCore::QualifiedName*>(&xChannelSelectorAttr);
    attrs[237] = reinterpret_cast<const WebCore::QualifiedName*>(&yAttr);
    attrs[238] = reinterpret_cast<const WebCore::QualifiedName*>(&y1Attr);
    attrs[239] = reinterpret_cast<const WebCore::QualifiedName*>(&y2Attr);
    attrs[240] = reinterpret_cast<const WebCore::QualifiedName*>(&yChannelSelectorAttr);
    attrs[241] = reinterpret_cast<const WebCore::QualifiedName*>(&zAttr);
    attrs[242] = reinterpret_cast<const WebCore::QualifiedName*>(&zoomAndPanAttr);
    return attrs.release();
}

void init()
{
    // Use placement new to initialize the globals.
    AtomicString svgNS("http://www.w3.org/2000/svg", AtomicString::ConstructFromLiteral);

    // Namespace
    new ((void*)&svgNamespaceURI) AtomicString(svgNS);
    StringImpl* aImpl = StringImpl::createStatic("a", 1, 9778235);
    StringImpl* accent_heightImpl = StringImpl::createStatic("accent-height", 13, 7818218);
    StringImpl* accumulateImpl = StringImpl::createStatic("accumulate", 10, 12470039);
    StringImpl* additiveImpl = StringImpl::createStatic("additive", 8, 2986601);
    StringImpl* alignment_baselineImpl = StringImpl::createStatic("alignment-baseline", 18, 15363520);
    StringImpl* alphabeticImpl = StringImpl::createStatic("alphabetic", 10, 5333598);
    StringImpl* altGlyphImpl = StringImpl::createStatic("altGlyph", 8, 12570899);
    StringImpl* altGlyphDefImpl = StringImpl::createStatic("altGlyphDef", 11, 5789627);
    StringImpl* altGlyphItemImpl = StringImpl::createStatic("altGlyphItem", 12, 14093917);
    StringImpl* amplitudeImpl = StringImpl::createStatic("amplitude", 9, 4611145);
    StringImpl* animateImpl = StringImpl::createStatic("animate", 7, 15142871);
    StringImpl* animateColorImpl = StringImpl::createStatic("animateColor", 12, 8168430);
    StringImpl* animateMotionImpl = StringImpl::createStatic("animateMotion", 13, 9626227);
    StringImpl* animateTransformImpl = StringImpl::createStatic("animateTransform", 16, 8940358);
    StringImpl* arabic_formImpl = StringImpl::createStatic("arabic-form", 11, 11127318);
    StringImpl* ascentImpl = StringImpl::createStatic("ascent", 6, 10886646);
    StringImpl* attributeNameImpl = StringImpl::createStatic("attributeName", 13, 8469069);
    StringImpl* attributeTypeImpl = StringImpl::createStatic("attributeType", 13, 4267467);
    StringImpl* azimuthImpl = StringImpl::createStatic("azimuth", 7, 11445731);
    StringImpl* baseFrequencyImpl = StringImpl::createStatic("baseFrequency", 13, 5843500);
    StringImpl* baseProfileImpl = StringImpl::createStatic("baseProfile", 11, 6136015);
    StringImpl* baseline_shiftImpl = StringImpl::createStatic("baseline-shift", 14, 738627);
    StringImpl* bboxImpl = StringImpl::createStatic("bbox", 4, 3471533);
    StringImpl* beginImpl = StringImpl::createStatic("begin", 5, 12626174);
    StringImpl* biasImpl = StringImpl::createStatic("bias", 4, 16339666);
    StringImpl* buffered_renderingImpl = StringImpl::createStatic("buffered-rendering", 18, 711842);
    StringImpl* byImpl = StringImpl::createStatic("by", 2, 2718574);
    StringImpl* calcModeImpl = StringImpl::createStatic("calcMode", 8, 13855136);
    StringImpl* cap_heightImpl = StringImpl::createStatic("cap-height", 10, 2435412);
    StringImpl* circleImpl = StringImpl::createStatic("circle", 6, 1709685);
    StringImpl* clipImpl = StringImpl::createStatic("clip", 4, 15009294);
    StringImpl* clip_pathImpl = StringImpl::createStatic("clip-path", 9, 15117952);
    StringImpl* clip_ruleImpl = StringImpl::createStatic("clip-rule", 9, 9308965);
    StringImpl* clipPathImpl = StringImpl::createStatic("clipPath", 8, 4241194);
    StringImpl* clipPathUnitsImpl = StringImpl::createStatic("clipPathUnits", 13, 6700353);
    StringImpl* colorImpl = StringImpl::createStatic("color", 5, 2734929);
    StringImpl* color_interpolationImpl = StringImpl::createStatic("color-interpolation", 19, 5191234);
    StringImpl* color_interpolation_filtersImpl = StringImpl::createStatic("color-interpolation-filters", 27, 10987393);
    StringImpl* color_renderingImpl = StringImpl::createStatic("color-rendering", 15, 10166753);
    StringImpl* cursorImpl = StringImpl::createStatic("cursor", 6, 1987604);
    StringImpl* cxImpl = StringImpl::createStatic("cx", 2, 4988833);
    StringImpl* cyImpl = StringImpl::createStatic("cy", 2, 1446155);
    StringImpl* dImpl = StringImpl::createStatic("d", 1, 2286069);
    StringImpl* defsImpl = StringImpl::createStatic("defs", 4, 3666553);
    StringImpl* descImpl = StringImpl::createStatic("desc", 4, 8557401);
    StringImpl* descentImpl = StringImpl::createStatic("descent", 7, 1127408);
    StringImpl* diffuseConstantImpl = StringImpl::createStatic("diffuseConstant", 15, 2992919);
    StringImpl* directionImpl = StringImpl::createStatic("direction", 9, 16092904);
    StringImpl* discardImpl = StringImpl::createStatic("discard", 7, 12039290);
    StringImpl* displayImpl = StringImpl::createStatic("display", 7, 16245385);
    StringImpl* divisorImpl = StringImpl::createStatic("divisor", 7, 5380631);
    StringImpl* dominant_baselineImpl = StringImpl::createStatic("dominant-baseline", 17, 8742937);
    StringImpl* durImpl = StringImpl::createStatic("dur", 3, 1381072);
    StringImpl* dxImpl = StringImpl::createStatic("dx", 2, 4552890);
    StringImpl* dyImpl = StringImpl::createStatic("dy", 2, 7600873);
    StringImpl* edgeModeImpl = StringImpl::createStatic("edgeMode", 8, 8996806);
    StringImpl* elevationImpl = StringImpl::createStatic("elevation", 9, 4496523);
    StringImpl* ellipseImpl = StringImpl::createStatic("ellipse", 7, 15372068);
    StringImpl* enable_backgroundImpl = StringImpl::createStatic("enable-background", 17, 7604741);
    StringImpl* endImpl = StringImpl::createStatic("end", 3, 1590106);
    StringImpl* exponentImpl = StringImpl::createStatic("exponent", 8, 7735438);
    StringImpl* feBlendImpl = StringImpl::createStatic("feBlend", 7, 11501676);
    StringImpl* feColorMatrixImpl = StringImpl::createStatic("feColorMatrix", 13, 3169415);
    StringImpl* feComponentTransferImpl = StringImpl::createStatic("feComponentTransfer", 19, 3518927);
    StringImpl* feCompositeImpl = StringImpl::createStatic("feComposite", 11, 12541773);
    StringImpl* feConvolveMatrixImpl = StringImpl::createStatic("feConvolveMatrix", 16, 14493860);
    StringImpl* feDiffuseLightingImpl = StringImpl::createStatic("feDiffuseLighting", 17, 3352565);
    StringImpl* feDisplacementMapImpl = StringImpl::createStatic("feDisplacementMap", 17, 5905267);
    StringImpl* feDistantLightImpl = StringImpl::createStatic("feDistantLight", 14, 747025);
    StringImpl* feDropShadowImpl = StringImpl::createStatic("feDropShadow", 12, 10767402);
    StringImpl* feFloodImpl = StringImpl::createStatic("feFlood", 7, 6640775);
    StringImpl* feFuncAImpl = StringImpl::createStatic("feFuncA", 7, 4019930);
    StringImpl* feFuncBImpl = StringImpl::createStatic("feFuncB", 7, 15012662);
    StringImpl* feFuncGImpl = StringImpl::createStatic("feFuncG", 7, 4786906);
    StringImpl* feFuncRImpl = StringImpl::createStatic("feFuncR", 7, 95219);
    StringImpl* feGaussianBlurImpl = StringImpl::createStatic("feGaussianBlur", 14, 11103364);
    StringImpl* feImageImpl = StringImpl::createStatic("feImage", 7, 7842896);
    StringImpl* feMergeImpl = StringImpl::createStatic("feMerge", 7, 1453606);
    StringImpl* feMergeNodeImpl = StringImpl::createStatic("feMergeNode", 11, 15500549);
    StringImpl* feMorphologyImpl = StringImpl::createStatic("feMorphology", 12, 8041573);
    StringImpl* feOffsetImpl = StringImpl::createStatic("feOffset", 8, 10253256);
    StringImpl* fePointLightImpl = StringImpl::createStatic("fePointLight", 12, 15054408);
    StringImpl* feSpecularLightingImpl = StringImpl::createStatic("feSpecularLighting", 18, 10866110);
    StringImpl* feSpotLightImpl = StringImpl::createStatic("feSpotLight", 11, 3344980);
    StringImpl* feTileImpl = StringImpl::createStatic("feTile", 6, 2220132);
    StringImpl* feTurbulenceImpl = StringImpl::createStatic("feTurbulence", 12, 14661844);
    StringImpl* fillImpl = StringImpl::createStatic("fill", 4, 14906492);
    StringImpl* fill_opacityImpl = StringImpl::createStatic("fill-opacity", 12, 1178205);
    StringImpl* fill_ruleImpl = StringImpl::createStatic("fill-rule", 9, 11672563);
    StringImpl* filterImpl = StringImpl::createStatic("filter", 6, 16731886);
    StringImpl* filterResImpl = StringImpl::createStatic("filterRes", 9, 9476320);
    StringImpl* filterUnitsImpl = StringImpl::createStatic("filterUnits", 11, 11167090);
    StringImpl* flood_colorImpl = StringImpl::createStatic("flood-color", 11, 9861123);
    StringImpl* flood_opacityImpl = StringImpl::createStatic("flood-opacity", 13, 12898900);
    StringImpl* fontImpl = StringImpl::createStatic("font", 4, 4588695);
    StringImpl* font_faceImpl = StringImpl::createStatic("font-face", 9, 12627022);
    StringImpl* font_face_formatImpl = StringImpl::createStatic("font-face-format", 16, 8465693);
    StringImpl* font_face_nameImpl = StringImpl::createStatic("font-face-name", 14, 4830233);
    StringImpl* font_face_srcImpl = StringImpl::createStatic("font-face-src", 13, 1094419);
    StringImpl* font_face_uriImpl = StringImpl::createStatic("font-face-uri", 13, 10647832);
    StringImpl* font_familyImpl = StringImpl::createStatic("font-family", 11, 11614204);
    StringImpl* font_sizeImpl = StringImpl::createStatic("font-size", 9, 3230817);
    StringImpl* font_size_adjustImpl = StringImpl::createStatic("font-size-adjust", 16, 7342273);
    StringImpl* font_stretchImpl = StringImpl::createStatic("font-stretch", 12, 8655366);
    StringImpl* font_styleImpl = StringImpl::createStatic("font-style", 10, 6471658);
    StringImpl* font_variantImpl = StringImpl::createStatic("font-variant", 12, 7877027);
    StringImpl* font_weightImpl = StringImpl::createStatic("font-weight", 11, 7792151);
    StringImpl* foreignObjectImpl = StringImpl::createStatic("foreignObject", 13, 15048399);
    StringImpl* formatImpl = StringImpl::createStatic("format", 6, 15152429);
    StringImpl* frImpl = StringImpl::createStatic("fr", 2, 9385464);
    StringImpl* fromImpl = StringImpl::createStatic("from", 4, 16135834);
    StringImpl* fxImpl = StringImpl::createStatic("fx", 2, 15324007);
    StringImpl* fyImpl = StringImpl::createStatic("fy", 2, 15642507);
    StringImpl* gImpl = StringImpl::createStatic("g", 1, 16436612);
    StringImpl* g1Impl = StringImpl::createStatic("g1", 2, 11608154);
    StringImpl* g2Impl = StringImpl::createStatic("g2", 2, 4017113);
    StringImpl* glyphImpl = StringImpl::createStatic("glyph", 5, 7621275);
    StringImpl* glyph_nameImpl = StringImpl::createStatic("glyph-name", 10, 16482391);
    StringImpl* glyph_orientation_horizontalImpl = StringImpl::createStatic("glyph-orientation-horizontal", 28, 9213710);
    StringImpl* glyph_orientation_verticalImpl = StringImpl::createStatic("glyph-orientation-vertical", 26, 5038937);
    StringImpl* glyphRefImpl = StringImpl::createStatic("glyphRef", 8, 7998179);
    StringImpl* gradientTransformImpl = StringImpl::createStatic("gradientTransform", 17, 7347535);
    StringImpl* gradientUnitsImpl = StringImpl::createStatic("gradientUnits", 13, 1404814);
    StringImpl* hangingImpl = StringImpl::createStatic("hanging", 7, 10850364);
    StringImpl* heightImpl = StringImpl::createStatic("height", 6, 6697833);
    StringImpl* hkernImpl = StringImpl::createStatic("hkern", 5, 954644);
    StringImpl* horiz_adv_xImpl = StringImpl::createStatic("horiz-adv-x", 11, 5218312);
    StringImpl* horiz_origin_xImpl = StringImpl::createStatic("horiz-origin-x", 14, 7598127);
    StringImpl* horiz_origin_yImpl = StringImpl::createStatic("horiz-origin-y", 14, 14834332);
    StringImpl* ideographicImpl = StringImpl::createStatic("ideographic", 11, 4061484);
    StringImpl* imageImpl = StringImpl::createStatic("image", 5, 10287573);
    StringImpl* image_renderingImpl = StringImpl::createStatic("image-rendering", 15, 16430331);
    StringImpl* inImpl = StringImpl::createStatic("in", 2, 5937979);
    StringImpl* in2Impl = StringImpl::createStatic("in2", 3, 14108186);
    StringImpl* interceptImpl = StringImpl::createStatic("intercept", 9, 1705558);
    StringImpl* kImpl = StringImpl::createStatic("k", 1, 2339254);
    StringImpl* k1Impl = StringImpl::createStatic("k1", 2, 6632531);
    StringImpl* k2Impl = StringImpl::createStatic("k2", 2, 14802177);
    StringImpl* k3Impl = StringImpl::createStatic("k3", 2, 5328286);
    StringImpl* k4Impl = StringImpl::createStatic("k4", 2, 1699474);
    StringImpl* kernelMatrixImpl = StringImpl::createStatic("kernelMatrix", 12, 12629737);
    StringImpl* kernelUnitLengthImpl = StringImpl::createStatic("kernelUnitLength", 16, 12011177);
    StringImpl* keyPointsImpl = StringImpl::createStatic("keyPoints", 9, 4334432);
    StringImpl* keySplinesImpl = StringImpl::createStatic("keySplines", 10, 14518292);
    StringImpl* keyTimesImpl = StringImpl::createStatic("keyTimes", 8, 16684339);
    StringImpl* langImpl = StringImpl::createStatic("lang", 4, 3702417);
    StringImpl* lengthAdjustImpl = StringImpl::createStatic("lengthAdjust", 12, 13438957);
    StringImpl* letter_spacingImpl = StringImpl::createStatic("letter-spacing", 14, 15248365);
    StringImpl* lighting_colorImpl = StringImpl::createStatic("lighting-color", 14, 8113130);
    StringImpl* limitingConeAngleImpl = StringImpl::createStatic("limitingConeAngle", 17, 1376504);
    StringImpl* lineImpl = StringImpl::createStatic("line", 4, 15272783);
    StringImpl* linearGradientImpl = StringImpl::createStatic("linearGradient", 14, 1246858);
    StringImpl* localImpl = StringImpl::createStatic("local", 5, 9423053);
    StringImpl* markerImpl = StringImpl::createStatic("marker", 6, 15384222);
    StringImpl* marker_endImpl = StringImpl::createStatic("marker-end", 10, 5221081);
    StringImpl* marker_midImpl = StringImpl::createStatic("marker-mid", 10, 14289583);
    StringImpl* marker_startImpl = StringImpl::createStatic("marker-start", 12, 980150);
    StringImpl* markerHeightImpl = StringImpl::createStatic("markerHeight", 12, 3243627);
    StringImpl* markerUnitsImpl = StringImpl::createStatic("markerUnits", 11, 126910);
    StringImpl* markerWidthImpl = StringImpl::createStatic("markerWidth", 11, 2347631);
    StringImpl* maskImpl = StringImpl::createStatic("mask", 4, 10325940);
    StringImpl* mask_typeImpl = StringImpl::createStatic("mask-type", 9, 1273039);
    StringImpl* maskContentUnitsImpl = StringImpl::createStatic("maskContentUnits", 16, 6357138);
    StringImpl* maskUnitsImpl = StringImpl::createStatic("maskUnits", 9, 13353827);
    StringImpl* mathematicalImpl = StringImpl::createStatic("mathematical", 12, 10197022);
    StringImpl* maxImpl = StringImpl::createStatic("max", 3, 3449166);
    StringImpl* mediaImpl = StringImpl::createStatic("media", 5, 13905581);
    StringImpl* metadataImpl = StringImpl::createStatic("metadata", 8, 2268346);
    StringImpl* methodImpl = StringImpl::createStatic("method", 6, 14679268);
    StringImpl* minImpl = StringImpl::createStatic("min", 3, 2196278);
    StringImpl* missing_glyphImpl = StringImpl::createStatic("missing-glyph", 13, 2873042);
    StringImpl* modeImpl = StringImpl::createStatic("mode", 4, 13319651);
    StringImpl* mpathImpl = StringImpl::createStatic("mpath", 5, 9277366);
    StringImpl* nameImpl = StringImpl::createStatic("name", 4, 8774809);
    StringImpl* numOctavesImpl = StringImpl::createStatic("numOctaves", 10, 6742044);
    StringImpl* offsetImpl = StringImpl::createStatic("offset", 6, 1221606);
    StringImpl* onactivateImpl = StringImpl::createStatic("onactivate", 10, 3026152);
    StringImpl* onbeginImpl = StringImpl::createStatic("onbegin", 7, 12049348);
    StringImpl* onendImpl = StringImpl::createStatic("onend", 5, 811239);
    StringImpl* onfocusinImpl = StringImpl::createStatic("onfocusin", 9, 2970475);
    StringImpl* onfocusoutImpl = StringImpl::createStatic("onfocusout", 10, 4459422);
    StringImpl* onrepeatImpl = StringImpl::createStatic("onrepeat", 8, 6681969);
    StringImpl* onzoomImpl = StringImpl::createStatic("onzoom", 6, 1226916);
    StringImpl* opacityImpl = StringImpl::createStatic("opacity", 7, 12231101);
    StringImpl* operatorImpl = StringImpl::createStatic("operator", 8, 16379917);
    StringImpl* orderImpl = StringImpl::createStatic("order", 5, 15651464);
    StringImpl* orientImpl = StringImpl::createStatic("orient", 6, 5635487);
    StringImpl* orientationImpl = StringImpl::createStatic("orientation", 11, 10339552);
    StringImpl* originImpl = StringImpl::createStatic("origin", 6, 2361284);
    StringImpl* overflowImpl = StringImpl::createStatic("overflow", 8, 13155215);
    StringImpl* overline_positionImpl = StringImpl::createStatic("overline-position", 17, 13556011);
    StringImpl* overline_thicknessImpl = StringImpl::createStatic("overline-thickness", 18, 16671138);
    StringImpl* paint_orderImpl = StringImpl::createStatic("paint-order", 11, 3304976);
    StringImpl* panose_1Impl = StringImpl::createStatic("panose-1", 8, 641618);
    StringImpl* pathImpl = StringImpl::createStatic("path", 4, 14212236);
    StringImpl* pathLengthImpl = StringImpl::createStatic("pathLength", 10, 691978);
    StringImpl* patternImpl = StringImpl::createStatic("pattern", 7, 16283150);
    StringImpl* patternContentUnitsImpl = StringImpl::createStatic("patternContentUnits", 19, 3102758);
    StringImpl* patternTransformImpl = StringImpl::createStatic("patternTransform", 16, 15581536);
    StringImpl* patternUnitsImpl = StringImpl::createStatic("patternUnits", 12, 12052704);
    StringImpl* pointer_eventsImpl = StringImpl::createStatic("pointer-events", 14, 9363889);
    StringImpl* pointsImpl = StringImpl::createStatic("points", 6, 12718235);
    StringImpl* pointsAtXImpl = StringImpl::createStatic("pointsAtX", 9, 16510410);
    StringImpl* pointsAtYImpl = StringImpl::createStatic("pointsAtY", 9, 10912372);
    StringImpl* pointsAtZImpl = StringImpl::createStatic("pointsAtZ", 9, 13666400);
    StringImpl* polygonImpl = StringImpl::createStatic("polygon", 7, 1875665);
    StringImpl* polylineImpl = StringImpl::createStatic("polyline", 8, 9966402);
    StringImpl* preserveAlphaImpl = StringImpl::createStatic("preserveAlpha", 13, 16654065);
    StringImpl* preserveAspectRatioImpl = StringImpl::createStatic("preserveAspectRatio", 19, 15032206);
    StringImpl* primitiveUnitsImpl = StringImpl::createStatic("primitiveUnits", 14, 12203325);
    StringImpl* rImpl = StringImpl::createStatic("r", 1, 9755863);
    StringImpl* radialGradientImpl = StringImpl::createStatic("radialGradient", 14, 4356263);
    StringImpl* radiusImpl = StringImpl::createStatic("radius", 6, 2794824);
    StringImpl* rectImpl = StringImpl::createStatic("rect", 4, 15193729);
    StringImpl* refXImpl = StringImpl::createStatic("refX", 4, 11984993);
    StringImpl* refYImpl = StringImpl::createStatic("refY", 4, 14103698);
    StringImpl* rendering_intentImpl = StringImpl::createStatic("rendering-intent", 16, 10528535);
    StringImpl* repeatCountImpl = StringImpl::createStatic("repeatCount", 11, 10019402);
    StringImpl* repeatDurImpl = StringImpl::createStatic("repeatDur", 9, 8664793);
    StringImpl* requiredExtensionsImpl = StringImpl::createStatic("requiredExtensions", 18, 4208057);
    StringImpl* requiredFeaturesImpl = StringImpl::createStatic("requiredFeatures", 16, 11389123);
    StringImpl* restartImpl = StringImpl::createStatic("restart", 7, 2504772);
    StringImpl* resultImpl = StringImpl::createStatic("result", 6, 15954886);
    StringImpl* rotateImpl = StringImpl::createStatic("rotate", 6, 16211843);
    StringImpl* rxImpl = StringImpl::createStatic("rx", 2, 5132163);
    StringImpl* ryImpl = StringImpl::createStatic("ry", 2, 14820197);
    StringImpl* scaleImpl = StringImpl::createStatic("scale", 5, 7900465);
    StringImpl* scriptImpl = StringImpl::createStatic("script", 6, 7137273);
    StringImpl* seedImpl = StringImpl::createStatic("seed", 4, 15054065);
    StringImpl* setImpl = StringImpl::createStatic("set", 3, 7291079);
    StringImpl* shape_renderingImpl = StringImpl::createStatic("shape-rendering", 15, 7310465);
    StringImpl* slopeImpl = StringImpl::createStatic("slope", 5, 8800286);
    StringImpl* spacingImpl = StringImpl::createStatic("spacing", 7, 11396576);
    StringImpl* specularConstantImpl = StringImpl::createStatic("specularConstant", 16, 15821133);
    StringImpl* specularExponentImpl = StringImpl::createStatic("specularExponent", 16, 12340909);
    StringImpl* spreadMethodImpl = StringImpl::createStatic("spreadMethod", 12, 7294005);
    StringImpl* startOffsetImpl = StringImpl::createStatic("startOffset", 11, 16206982);
    StringImpl* stdDeviationImpl = StringImpl::createStatic("stdDeviation", 12, 9412814);
    StringImpl* stemhImpl = StringImpl::createStatic("stemh", 5, 1638345);
    StringImpl* stemvImpl = StringImpl::createStatic("stemv", 5, 15263686);
    StringImpl* stitchTilesImpl = StringImpl::createStatic("stitchTiles", 11, 14130215);
    StringImpl* stopImpl = StringImpl::createStatic("stop", 4, 16220638);
    StringImpl* stop_colorImpl = StringImpl::createStatic("stop-color", 10, 4601095);
    StringImpl* stop_opacityImpl = StringImpl::createStatic("stop-opacity", 12, 15542229);
    StringImpl* strikethrough_positionImpl = StringImpl::createStatic("strikethrough-position", 22, 14866568);
    StringImpl* strikethrough_thicknessImpl = StringImpl::createStatic("strikethrough-thickness", 23, 4458024);
    StringImpl* strokeImpl = StringImpl::createStatic("stroke", 6, 13630306);
    StringImpl* stroke_dasharrayImpl = StringImpl::createStatic("stroke-dasharray", 16, 13918191);
    StringImpl* stroke_dashoffsetImpl = StringImpl::createStatic("stroke-dashoffset", 17, 12491343);
    StringImpl* stroke_linecapImpl = StringImpl::createStatic("stroke-linecap", 14, 2304011);
    StringImpl* stroke_linejoinImpl = StringImpl::createStatic("stroke-linejoin", 15, 14943542);
    StringImpl* stroke_miterlimitImpl = StringImpl::createStatic("stroke-miterlimit", 17, 3565435);
    StringImpl* stroke_opacityImpl = StringImpl::createStatic("stroke-opacity", 14, 16354193);
    StringImpl* stroke_widthImpl = StringImpl::createStatic("stroke-width", 12, 15643309);
    StringImpl* styleImpl = StringImpl::createStatic("style", 5, 10993676);
    StringImpl* surfaceScaleImpl = StringImpl::createStatic("surfaceScale", 12, 3931981);
    StringImpl* svgImpl = StringImpl::createStatic("svg", 3, 8018441);
    StringImpl* switchImpl = StringImpl::createStatic("switch", 6, 1240910);
    StringImpl* symbolImpl = StringImpl::createStatic("symbol", 6, 9487027);
    StringImpl* systemLanguageImpl = StringImpl::createStatic("systemLanguage", 14, 16769792);
    StringImpl* tableValuesImpl = StringImpl::createStatic("tableValues", 11, 3989232);
    StringImpl* targetImpl = StringImpl::createStatic("target", 6, 1752822);
    StringImpl* targetXImpl = StringImpl::createStatic("targetX", 7, 15131166);
    StringImpl* targetYImpl = StringImpl::createStatic("targetY", 7, 9495385);
    StringImpl* textImpl = StringImpl::createStatic("text", 4, 2784654);
    StringImpl* text_anchorImpl = StringImpl::createStatic("text-anchor", 11, 10988461);
    StringImpl* text_decorationImpl = StringImpl::createStatic("text-decoration", 15, 8931788);
    StringImpl* text_renderingImpl = StringImpl::createStatic("text-rendering", 14, 5473995);
    StringImpl* textLengthImpl = StringImpl::createStatic("textLength", 10, 10317958);
    StringImpl* textPathImpl = StringImpl::createStatic("textPath", 8, 14264041);
    StringImpl* titleImpl = StringImpl::createStatic("title", 5, 2337488);
    StringImpl* toImpl = StringImpl::createStatic("to", 2, 8637605);
    StringImpl* transformImpl = StringImpl::createStatic("transform", 9, 12016467);
    StringImpl* transform_originImpl = StringImpl::createStatic("transform-origin", 16, 11461635);
    StringImpl* tspanImpl = StringImpl::createStatic("tspan", 5, 1121562);
    StringImpl* typeImpl = StringImpl::createStatic("type", 4, 1916283);
    StringImpl* u1Impl = StringImpl::createStatic("u1", 2, 8892538);
    StringImpl* u2Impl = StringImpl::createStatic("u2", 2, 3297321);
    StringImpl* underline_positionImpl = StringImpl::createStatic("underline-position", 18, 16729143);
    StringImpl* underline_thicknessImpl = StringImpl::createStatic("underline-thickness", 19, 8311364);
    StringImpl* unicodeImpl = StringImpl::createStatic("unicode", 7, 12294694);
    StringImpl* unicode_bidiImpl = StringImpl::createStatic("unicode-bidi", 12, 16168075);
    StringImpl* unicode_rangeImpl = StringImpl::createStatic("unicode-range", 13, 8777099);
    StringImpl* units_per_emImpl = StringImpl::createStatic("units-per-em", 12, 14229671);
    StringImpl* useImpl = StringImpl::createStatic("use", 3, 1434542);
    StringImpl* v_alphabeticImpl = StringImpl::createStatic("v-alphabetic", 12, 4753593);
    StringImpl* v_hangingImpl = StringImpl::createStatic("v-hanging", 9, 6170815);
    StringImpl* v_ideographicImpl = StringImpl::createStatic("v-ideographic", 13, 12768143);
    StringImpl* v_mathematicalImpl = StringImpl::createStatic("v-mathematical", 14, 6401279);
    StringImpl* valuesImpl = StringImpl::createStatic("values", 6, 6531200);
    StringImpl* vector_effectImpl = StringImpl::createStatic("vector-effect", 13, 16211112);
    StringImpl* versionImpl = StringImpl::createStatic("version", 7, 8128447);
    StringImpl* vert_adv_yImpl = StringImpl::createStatic("vert-adv-y", 10, 12348807);
    StringImpl* vert_origin_xImpl = StringImpl::createStatic("vert-origin-x", 13, 7838799);
    StringImpl* vert_origin_yImpl = StringImpl::createStatic("vert-origin-y", 13, 13566707);
    StringImpl* viewImpl = StringImpl::createStatic("view", 4, 9558954);
    StringImpl* viewBoxImpl = StringImpl::createStatic("viewBox", 7, 12063430);
    StringImpl* viewTargetImpl = StringImpl::createStatic("viewTarget", 10, 7658893);
    StringImpl* visibilityImpl = StringImpl::createStatic("visibility", 10, 7049701);
    StringImpl* vkernImpl = StringImpl::createStatic("vkern", 5, 1724419);
    StringImpl* widthImpl = StringImpl::createStatic("width", 5, 12902275);
    StringImpl* widthsImpl = StringImpl::createStatic("widths", 6, 12497930);
    StringImpl* word_spacingImpl = StringImpl::createStatic("word-spacing", 12, 965879);
    StringImpl* writing_modeImpl = StringImpl::createStatic("writing-mode", 12, 3659809);
    StringImpl* xImpl = StringImpl::createStatic("x", 1, 15484113);
    StringImpl* x_heightImpl = StringImpl::createStatic("x-height", 8, 7361931);
    StringImpl* x1Impl = StringImpl::createStatic("x1", 2, 9037550);
    StringImpl* x2Impl = StringImpl::createStatic("x2", 2, 14272341);
    StringImpl* xChannelSelectorImpl = StringImpl::createStatic("xChannelSelector", 16, 11124924);
    StringImpl* yImpl = StringImpl::createStatic("y", 1, 4984204);
    StringImpl* y1Impl = StringImpl::createStatic("y1", 2, 9285315);
    StringImpl* y2Impl = StringImpl::createStatic("y2", 2, 1776935);
    StringImpl* yChannelSelectorImpl = StringImpl::createStatic("yChannelSelector", 16, 12848041);
    StringImpl* zImpl = StringImpl::createStatic("z", 1, 9090206);
    StringImpl* zoomAndPanImpl = StringImpl::createStatic("zoomAndPan", 10, 16695696);

    // Tags
    QualifiedName::createStatic((void*)&aTag, aImpl, svgNS);
    QualifiedName::createStatic((void*)&animateTag, animateImpl, svgNS);
    QualifiedName::createStatic((void*)&animateMotionTag, animateMotionImpl, svgNS);
    QualifiedName::createStatic((void*)&animateTransformTag, animateTransformImpl, svgNS);
    QualifiedName::createStatic((void*)&circleTag, circleImpl, svgNS);
    QualifiedName::createStatic((void*)&clipPathTag, clipPathImpl, svgNS);
    QualifiedName::createStatic((void*)&cursorTag, cursorImpl, svgNS);
    QualifiedName::createStatic((void*)&defsTag, defsImpl, svgNS);
    QualifiedName::createStatic((void*)&descTag, descImpl, svgNS);
    QualifiedName::createStatic((void*)&discardTag, discardImpl, svgNS);
    QualifiedName::createStatic((void*)&ellipseTag, ellipseImpl, svgNS);
    QualifiedName::createStatic((void*)&feBlendTag, feBlendImpl, svgNS);
    QualifiedName::createStatic((void*)&feColorMatrixTag, feColorMatrixImpl, svgNS);
    QualifiedName::createStatic((void*)&feComponentTransferTag, feComponentTransferImpl, svgNS);
    QualifiedName::createStatic((void*)&feCompositeTag, feCompositeImpl, svgNS);
    QualifiedName::createStatic((void*)&feConvolveMatrixTag, feConvolveMatrixImpl, svgNS);
    QualifiedName::createStatic((void*)&feDiffuseLightingTag, feDiffuseLightingImpl, svgNS);
    QualifiedName::createStatic((void*)&feDisplacementMapTag, feDisplacementMapImpl, svgNS);
    QualifiedName::createStatic((void*)&feDistantLightTag, feDistantLightImpl, svgNS);
    QualifiedName::createStatic((void*)&feDropShadowTag, feDropShadowImpl, svgNS);
    QualifiedName::createStatic((void*)&feFloodTag, feFloodImpl, svgNS);
    QualifiedName::createStatic((void*)&feFuncATag, feFuncAImpl, svgNS);
    QualifiedName::createStatic((void*)&feFuncBTag, feFuncBImpl, svgNS);
    QualifiedName::createStatic((void*)&feFuncGTag, feFuncGImpl, svgNS);
    QualifiedName::createStatic((void*)&feFuncRTag, feFuncRImpl, svgNS);
    QualifiedName::createStatic((void*)&feGaussianBlurTag, feGaussianBlurImpl, svgNS);
    QualifiedName::createStatic((void*)&feImageTag, feImageImpl, svgNS);
    QualifiedName::createStatic((void*)&feMergeTag, feMergeImpl, svgNS);
    QualifiedName::createStatic((void*)&feMergeNodeTag, feMergeNodeImpl, svgNS);
    QualifiedName::createStatic((void*)&feMorphologyTag, feMorphologyImpl, svgNS);
    QualifiedName::createStatic((void*)&feOffsetTag, feOffsetImpl, svgNS);
    QualifiedName::createStatic((void*)&fePointLightTag, fePointLightImpl, svgNS);
    QualifiedName::createStatic((void*)&feSpecularLightingTag, feSpecularLightingImpl, svgNS);
    QualifiedName::createStatic((void*)&feSpotLightTag, feSpotLightImpl, svgNS);
    QualifiedName::createStatic((void*)&feTileTag, feTileImpl, svgNS);
    QualifiedName::createStatic((void*)&feTurbulenceTag, feTurbulenceImpl, svgNS);
    QualifiedName::createStatic((void*)&filterTag, filterImpl, svgNS);
    QualifiedName::createStatic((void*)&foreignObjectTag, foreignObjectImpl, svgNS);
    QualifiedName::createStatic((void*)&gTag, gImpl, svgNS);
    QualifiedName::createStatic((void*)&imageTag, imageImpl, svgNS);
    QualifiedName::createStatic((void*)&lineTag, lineImpl, svgNS);
    QualifiedName::createStatic((void*)&linearGradientTag, linearGradientImpl, svgNS);
    QualifiedName::createStatic((void*)&mpathTag, mpathImpl, svgNS);
    QualifiedName::createStatic((void*)&markerTag, markerImpl, svgNS);
    QualifiedName::createStatic((void*)&maskTag, maskImpl, svgNS);
    QualifiedName::createStatic((void*)&metadataTag, metadataImpl, svgNS);
    QualifiedName::createStatic((void*)&pathTag, pathImpl, svgNS);
    QualifiedName::createStatic((void*)&patternTag, patternImpl, svgNS);
    QualifiedName::createStatic((void*)&polygonTag, polygonImpl, svgNS);
    QualifiedName::createStatic((void*)&polylineTag, polylineImpl, svgNS);
    QualifiedName::createStatic((void*)&radialGradientTag, radialGradientImpl, svgNS);
    QualifiedName::createStatic((void*)&rectTag, rectImpl, svgNS);
    QualifiedName::createStatic((void*)&svgTag, svgImpl, svgNS);
    QualifiedName::createStatic((void*)&setTag, setImpl, svgNS);
    QualifiedName::createStatic((void*)&stopTag, stopImpl, svgNS);
    QualifiedName::createStatic((void*)&switchTag, switchImpl, svgNS);
    QualifiedName::createStatic((void*)&symbolTag, symbolImpl, svgNS);
    QualifiedName::createStatic((void*)&tspanTag, tspanImpl, svgNS);
    QualifiedName::createStatic((void*)&textTag, textImpl, svgNS);
    QualifiedName::createStatic((void*)&textPathTag, textPathImpl, svgNS);
    QualifiedName::createStatic((void*)&titleTag, titleImpl, svgNS);
    QualifiedName::createStatic((void*)&useTag, useImpl, svgNS);
    QualifiedName::createStatic((void*)&viewTag, viewImpl, svgNS);
    QualifiedName::createStatic((void*)&scriptTag, scriptImpl, svgNS);
    QualifiedName::createStatic((void*)&styleTag, styleImpl, svgNS);
    QualifiedName::createStatic((void*)&animateColorTag, animateColorImpl, svgNS);
    QualifiedName::createStatic((void*)&altGlyphDefTag, altGlyphDefImpl, svgNS);
    QualifiedName::createStatic((void*)&altGlyphTag, altGlyphImpl, svgNS);
    QualifiedName::createStatic((void*)&altGlyphItemTag, altGlyphItemImpl, svgNS);
    QualifiedName::createStatic((void*)&fontTag, fontImpl, svgNS);
    QualifiedName::createStatic((void*)&font_faceTag, font_faceImpl, svgNS);
    QualifiedName::createStatic((void*)&font_face_formatTag, font_face_formatImpl, svgNS);
    QualifiedName::createStatic((void*)&font_face_nameTag, font_face_nameImpl, svgNS);
    QualifiedName::createStatic((void*)&font_face_srcTag, font_face_srcImpl, svgNS);
    QualifiedName::createStatic((void*)&font_face_uriTag, font_face_uriImpl, svgNS);
    QualifiedName::createStatic((void*)&glyphTag, glyphImpl, svgNS);
    QualifiedName::createStatic((void*)&glyphRefTag, glyphRefImpl, svgNS);
    QualifiedName::createStatic((void*)&hkernTag, hkernImpl, svgNS);
    QualifiedName::createStatic((void*)&missing_glyphTag, missing_glyphImpl, svgNS);
    QualifiedName::createStatic((void*)&vkernTag, vkernImpl, svgNS);

    // Attrs
    QualifiedName::createStatic((void*)&accent_heightAttr, accent_heightImpl);
    QualifiedName::createStatic((void*)&accumulateAttr, accumulateImpl);
    QualifiedName::createStatic((void*)&additiveAttr, additiveImpl);
    QualifiedName::createStatic((void*)&alignment_baselineAttr, alignment_baselineImpl);
    QualifiedName::createStatic((void*)&alphabeticAttr, alphabeticImpl);
    QualifiedName::createStatic((void*)&amplitudeAttr, amplitudeImpl);
    QualifiedName::createStatic((void*)&animateAttr, animateImpl);
    QualifiedName::createStatic((void*)&arabic_formAttr, arabic_formImpl);
    QualifiedName::createStatic((void*)&ascentAttr, ascentImpl);
    QualifiedName::createStatic((void*)&attributeNameAttr, attributeNameImpl);
    QualifiedName::createStatic((void*)&attributeTypeAttr, attributeTypeImpl);
    QualifiedName::createStatic((void*)&azimuthAttr, azimuthImpl);
    QualifiedName::createStatic((void*)&baseFrequencyAttr, baseFrequencyImpl);
    QualifiedName::createStatic((void*)&baseProfileAttr, baseProfileImpl);
    QualifiedName::createStatic((void*)&baseline_shiftAttr, baseline_shiftImpl);
    QualifiedName::createStatic((void*)&bboxAttr, bboxImpl);
    QualifiedName::createStatic((void*)&beginAttr, beginImpl);
    QualifiedName::createStatic((void*)&biasAttr, biasImpl);
    QualifiedName::createStatic((void*)&buffered_renderingAttr, buffered_renderingImpl);
    QualifiedName::createStatic((void*)&byAttr, byImpl);
    QualifiedName::createStatic((void*)&calcModeAttr, calcModeImpl);
    QualifiedName::createStatic((void*)&cap_heightAttr, cap_heightImpl);
    QualifiedName::createStatic((void*)&clipAttr, clipImpl);
    QualifiedName::createStatic((void*)&clip_pathAttr, clip_pathImpl);
    QualifiedName::createStatic((void*)&clip_ruleAttr, clip_ruleImpl);
    QualifiedName::createStatic((void*)&clipPathUnitsAttr, clipPathUnitsImpl);
    QualifiedName::createStatic((void*)&colorAttr, colorImpl);
    QualifiedName::createStatic((void*)&color_interpolationAttr, color_interpolationImpl);
    QualifiedName::createStatic((void*)&color_interpolation_filtersAttr, color_interpolation_filtersImpl);
    QualifiedName::createStatic((void*)&color_renderingAttr, color_renderingImpl);
    QualifiedName::createStatic((void*)&cursorAttr, cursorImpl);
    QualifiedName::createStatic((void*)&cxAttr, cxImpl);
    QualifiedName::createStatic((void*)&cyAttr, cyImpl);
    QualifiedName::createStatic((void*)&dAttr, dImpl);
    QualifiedName::createStatic((void*)&descentAttr, descentImpl);
    QualifiedName::createStatic((void*)&diffuseConstantAttr, diffuseConstantImpl);
    QualifiedName::createStatic((void*)&directionAttr, directionImpl);
    QualifiedName::createStatic((void*)&displayAttr, displayImpl);
    QualifiedName::createStatic((void*)&divisorAttr, divisorImpl);
    QualifiedName::createStatic((void*)&dominant_baselineAttr, dominant_baselineImpl);
    QualifiedName::createStatic((void*)&durAttr, durImpl);
    QualifiedName::createStatic((void*)&dxAttr, dxImpl);
    QualifiedName::createStatic((void*)&dyAttr, dyImpl);
    QualifiedName::createStatic((void*)&edgeModeAttr, edgeModeImpl);
    QualifiedName::createStatic((void*)&elevationAttr, elevationImpl);
    QualifiedName::createStatic((void*)&enable_backgroundAttr, enable_backgroundImpl);
    QualifiedName::createStatic((void*)&endAttr, endImpl);
    QualifiedName::createStatic((void*)&exponentAttr, exponentImpl);
    QualifiedName::createStatic((void*)&fillAttr, fillImpl);
    QualifiedName::createStatic((void*)&fill_opacityAttr, fill_opacityImpl);
    QualifiedName::createStatic((void*)&fill_ruleAttr, fill_ruleImpl);
    QualifiedName::createStatic((void*)&filterAttr, filterImpl);
    QualifiedName::createStatic((void*)&filterResAttr, filterResImpl);
    QualifiedName::createStatic((void*)&filterUnitsAttr, filterUnitsImpl);
    QualifiedName::createStatic((void*)&flood_colorAttr, flood_colorImpl);
    QualifiedName::createStatic((void*)&flood_opacityAttr, flood_opacityImpl);
    QualifiedName::createStatic((void*)&font_familyAttr, font_familyImpl);
    QualifiedName::createStatic((void*)&font_sizeAttr, font_sizeImpl);
    QualifiedName::createStatic((void*)&font_size_adjustAttr, font_size_adjustImpl);
    QualifiedName::createStatic((void*)&font_stretchAttr, font_stretchImpl);
    QualifiedName::createStatic((void*)&font_styleAttr, font_styleImpl);
    QualifiedName::createStatic((void*)&font_variantAttr, font_variantImpl);
    QualifiedName::createStatic((void*)&font_weightAttr, font_weightImpl);
    QualifiedName::createStatic((void*)&formatAttr, formatImpl);
    QualifiedName::createStatic((void*)&frAttr, frImpl);
    QualifiedName::createStatic((void*)&fromAttr, fromImpl);
    QualifiedName::createStatic((void*)&fxAttr, fxImpl);
    QualifiedName::createStatic((void*)&fyAttr, fyImpl);
    QualifiedName::createStatic((void*)&g1Attr, g1Impl);
    QualifiedName::createStatic((void*)&g2Attr, g2Impl);
    QualifiedName::createStatic((void*)&glyph_nameAttr, glyph_nameImpl);
    QualifiedName::createStatic((void*)&glyph_orientation_horizontalAttr, glyph_orientation_horizontalImpl);
    QualifiedName::createStatic((void*)&glyph_orientation_verticalAttr, glyph_orientation_verticalImpl);
    QualifiedName::createStatic((void*)&glyphRefAttr, glyphRefImpl);
    QualifiedName::createStatic((void*)&gradientTransformAttr, gradientTransformImpl);
    QualifiedName::createStatic((void*)&gradientUnitsAttr, gradientUnitsImpl);
    QualifiedName::createStatic((void*)&hangingAttr, hangingImpl);
    QualifiedName::createStatic((void*)&heightAttr, heightImpl);
    QualifiedName::createStatic((void*)&horiz_adv_xAttr, horiz_adv_xImpl);
    QualifiedName::createStatic((void*)&horiz_origin_xAttr, horiz_origin_xImpl);
    QualifiedName::createStatic((void*)&horiz_origin_yAttr, horiz_origin_yImpl);
    QualifiedName::createStatic((void*)&ideographicAttr, ideographicImpl);
    QualifiedName::createStatic((void*)&image_renderingAttr, image_renderingImpl);
    QualifiedName::createStatic((void*)&inAttr, inImpl);
    QualifiedName::createStatic((void*)&in2Attr, in2Impl);
    QualifiedName::createStatic((void*)&interceptAttr, interceptImpl);
    QualifiedName::createStatic((void*)&kAttr, kImpl);
    QualifiedName::createStatic((void*)&k1Attr, k1Impl);
    QualifiedName::createStatic((void*)&k2Attr, k2Impl);
    QualifiedName::createStatic((void*)&k3Attr, k3Impl);
    QualifiedName::createStatic((void*)&k4Attr, k4Impl);
    QualifiedName::createStatic((void*)&kernelMatrixAttr, kernelMatrixImpl);
    QualifiedName::createStatic((void*)&kernelUnitLengthAttr, kernelUnitLengthImpl);
    QualifiedName::createStatic((void*)&keyPointsAttr, keyPointsImpl);
    QualifiedName::createStatic((void*)&keySplinesAttr, keySplinesImpl);
    QualifiedName::createStatic((void*)&keyTimesAttr, keyTimesImpl);
    QualifiedName::createStatic((void*)&langAttr, langImpl);
    QualifiedName::createStatic((void*)&lengthAdjustAttr, lengthAdjustImpl);
    QualifiedName::createStatic((void*)&letter_spacingAttr, letter_spacingImpl);
    QualifiedName::createStatic((void*)&lighting_colorAttr, lighting_colorImpl);
    QualifiedName::createStatic((void*)&limitingConeAngleAttr, limitingConeAngleImpl);
    QualifiedName::createStatic((void*)&localAttr, localImpl);
    QualifiedName::createStatic((void*)&marker_endAttr, marker_endImpl);
    QualifiedName::createStatic((void*)&marker_midAttr, marker_midImpl);
    QualifiedName::createStatic((void*)&marker_startAttr, marker_startImpl);
    QualifiedName::createStatic((void*)&markerHeightAttr, markerHeightImpl);
    QualifiedName::createStatic((void*)&markerUnitsAttr, markerUnitsImpl);
    QualifiedName::createStatic((void*)&markerWidthAttr, markerWidthImpl);
    QualifiedName::createStatic((void*)&maskAttr, maskImpl);
    QualifiedName::createStatic((void*)&mask_typeAttr, mask_typeImpl);
    QualifiedName::createStatic((void*)&maskContentUnitsAttr, maskContentUnitsImpl);
    QualifiedName::createStatic((void*)&maskUnitsAttr, maskUnitsImpl);
    QualifiedName::createStatic((void*)&mathematicalAttr, mathematicalImpl);
    QualifiedName::createStatic((void*)&maxAttr, maxImpl);
    QualifiedName::createStatic((void*)&mediaAttr, mediaImpl);
    QualifiedName::createStatic((void*)&methodAttr, methodImpl);
    QualifiedName::createStatic((void*)&minAttr, minImpl);
    QualifiedName::createStatic((void*)&modeAttr, modeImpl);
    QualifiedName::createStatic((void*)&nameAttr, nameImpl);
    QualifiedName::createStatic((void*)&numOctavesAttr, numOctavesImpl);
    QualifiedName::createStatic((void*)&offsetAttr, offsetImpl);
    QualifiedName::createStatic((void*)&onactivateAttr, onactivateImpl);
    QualifiedName::createStatic((void*)&onbeginAttr, onbeginImpl);
    QualifiedName::createStatic((void*)&onendAttr, onendImpl);
    QualifiedName::createStatic((void*)&onfocusinAttr, onfocusinImpl);
    QualifiedName::createStatic((void*)&onfocusoutAttr, onfocusoutImpl);
    QualifiedName::createStatic((void*)&onrepeatAttr, onrepeatImpl);
    QualifiedName::createStatic((void*)&onzoomAttr, onzoomImpl);
    QualifiedName::createStatic((void*)&opacityAttr, opacityImpl);
    QualifiedName::createStatic((void*)&operatorAttr, operatorImpl);
    QualifiedName::createStatic((void*)&orderAttr, orderImpl);
    QualifiedName::createStatic((void*)&orientAttr, orientImpl);
    QualifiedName::createStatic((void*)&orientationAttr, orientationImpl);
    QualifiedName::createStatic((void*)&originAttr, originImpl);
    QualifiedName::createStatic((void*)&overflowAttr, overflowImpl);
    QualifiedName::createStatic((void*)&overline_positionAttr, overline_positionImpl);
    QualifiedName::createStatic((void*)&overline_thicknessAttr, overline_thicknessImpl);
    QualifiedName::createStatic((void*)&paint_orderAttr, paint_orderImpl);
    QualifiedName::createStatic((void*)&panose_1Attr, panose_1Impl);
    QualifiedName::createStatic((void*)&pathAttr, pathImpl);
    QualifiedName::createStatic((void*)&pathLengthAttr, pathLengthImpl);
    QualifiedName::createStatic((void*)&patternContentUnitsAttr, patternContentUnitsImpl);
    QualifiedName::createStatic((void*)&patternTransformAttr, patternTransformImpl);
    QualifiedName::createStatic((void*)&patternUnitsAttr, patternUnitsImpl);
    QualifiedName::createStatic((void*)&pointer_eventsAttr, pointer_eventsImpl);
    QualifiedName::createStatic((void*)&pointsAttr, pointsImpl);
    QualifiedName::createStatic((void*)&pointsAtXAttr, pointsAtXImpl);
    QualifiedName::createStatic((void*)&pointsAtYAttr, pointsAtYImpl);
    QualifiedName::createStatic((void*)&pointsAtZAttr, pointsAtZImpl);
    QualifiedName::createStatic((void*)&preserveAlphaAttr, preserveAlphaImpl);
    QualifiedName::createStatic((void*)&preserveAspectRatioAttr, preserveAspectRatioImpl);
    QualifiedName::createStatic((void*)&primitiveUnitsAttr, primitiveUnitsImpl);
    QualifiedName::createStatic((void*)&rAttr, rImpl);
    QualifiedName::createStatic((void*)&radiusAttr, radiusImpl);
    QualifiedName::createStatic((void*)&refXAttr, refXImpl);
    QualifiedName::createStatic((void*)&refYAttr, refYImpl);
    QualifiedName::createStatic((void*)&rendering_intentAttr, rendering_intentImpl);
    QualifiedName::createStatic((void*)&repeatCountAttr, repeatCountImpl);
    QualifiedName::createStatic((void*)&repeatDurAttr, repeatDurImpl);
    QualifiedName::createStatic((void*)&requiredExtensionsAttr, requiredExtensionsImpl);
    QualifiedName::createStatic((void*)&requiredFeaturesAttr, requiredFeaturesImpl);
    QualifiedName::createStatic((void*)&restartAttr, restartImpl);
    QualifiedName::createStatic((void*)&resultAttr, resultImpl);
    QualifiedName::createStatic((void*)&rotateAttr, rotateImpl);
    QualifiedName::createStatic((void*)&rxAttr, rxImpl);
    QualifiedName::createStatic((void*)&ryAttr, ryImpl);
    QualifiedName::createStatic((void*)&scaleAttr, scaleImpl);
    QualifiedName::createStatic((void*)&seedAttr, seedImpl);
    QualifiedName::createStatic((void*)&shape_renderingAttr, shape_renderingImpl);
    QualifiedName::createStatic((void*)&slopeAttr, slopeImpl);
    QualifiedName::createStatic((void*)&spacingAttr, spacingImpl);
    QualifiedName::createStatic((void*)&specularConstantAttr, specularConstantImpl);
    QualifiedName::createStatic((void*)&specularExponentAttr, specularExponentImpl);
    QualifiedName::createStatic((void*)&spreadMethodAttr, spreadMethodImpl);
    QualifiedName::createStatic((void*)&startOffsetAttr, startOffsetImpl);
    QualifiedName::createStatic((void*)&stdDeviationAttr, stdDeviationImpl);
    QualifiedName::createStatic((void*)&stemhAttr, stemhImpl);
    QualifiedName::createStatic((void*)&stemvAttr, stemvImpl);
    QualifiedName::createStatic((void*)&stitchTilesAttr, stitchTilesImpl);
    QualifiedName::createStatic((void*)&stop_colorAttr, stop_colorImpl);
    QualifiedName::createStatic((void*)&stop_opacityAttr, stop_opacityImpl);
    QualifiedName::createStatic((void*)&strikethrough_positionAttr, strikethrough_positionImpl);
    QualifiedName::createStatic((void*)&strikethrough_thicknessAttr, strikethrough_thicknessImpl);
    QualifiedName::createStatic((void*)&strokeAttr, strokeImpl);
    QualifiedName::createStatic((void*)&stroke_dasharrayAttr, stroke_dasharrayImpl);
    QualifiedName::createStatic((void*)&stroke_dashoffsetAttr, stroke_dashoffsetImpl);
    QualifiedName::createStatic((void*)&stroke_linecapAttr, stroke_linecapImpl);
    QualifiedName::createStatic((void*)&stroke_linejoinAttr, stroke_linejoinImpl);
    QualifiedName::createStatic((void*)&stroke_miterlimitAttr, stroke_miterlimitImpl);
    QualifiedName::createStatic((void*)&stroke_opacityAttr, stroke_opacityImpl);
    QualifiedName::createStatic((void*)&stroke_widthAttr, stroke_widthImpl);
    QualifiedName::createStatic((void*)&styleAttr, styleImpl);
    QualifiedName::createStatic((void*)&surfaceScaleAttr, surfaceScaleImpl);
    QualifiedName::createStatic((void*)&systemLanguageAttr, systemLanguageImpl);
    QualifiedName::createStatic((void*)&tableValuesAttr, tableValuesImpl);
    QualifiedName::createStatic((void*)&targetAttr, targetImpl);
    QualifiedName::createStatic((void*)&targetXAttr, targetXImpl);
    QualifiedName::createStatic((void*)&targetYAttr, targetYImpl);
    QualifiedName::createStatic((void*)&text_anchorAttr, text_anchorImpl);
    QualifiedName::createStatic((void*)&text_decorationAttr, text_decorationImpl);
    QualifiedName::createStatic((void*)&text_renderingAttr, text_renderingImpl);
    QualifiedName::createStatic((void*)&textLengthAttr, textLengthImpl);
    QualifiedName::createStatic((void*)&titleAttr, titleImpl);
    QualifiedName::createStatic((void*)&toAttr, toImpl);
    QualifiedName::createStatic((void*)&transformAttr, transformImpl);
    QualifiedName::createStatic((void*)&transform_originAttr, transform_originImpl);
    QualifiedName::createStatic((void*)&typeAttr, typeImpl);
    QualifiedName::createStatic((void*)&u1Attr, u1Impl);
    QualifiedName::createStatic((void*)&u2Attr, u2Impl);
    QualifiedName::createStatic((void*)&underline_positionAttr, underline_positionImpl);
    QualifiedName::createStatic((void*)&underline_thicknessAttr, underline_thicknessImpl);
    QualifiedName::createStatic((void*)&unicodeAttr, unicodeImpl);
    QualifiedName::createStatic((void*)&unicode_bidiAttr, unicode_bidiImpl);
    QualifiedName::createStatic((void*)&unicode_rangeAttr, unicode_rangeImpl);
    QualifiedName::createStatic((void*)&units_per_emAttr, units_per_emImpl);
    QualifiedName::createStatic((void*)&v_alphabeticAttr, v_alphabeticImpl);
    QualifiedName::createStatic((void*)&v_hangingAttr, v_hangingImpl);
    QualifiedName::createStatic((void*)&v_ideographicAttr, v_ideographicImpl);
    QualifiedName::createStatic((void*)&v_mathematicalAttr, v_mathematicalImpl);
    QualifiedName::createStatic((void*)&valuesAttr, valuesImpl);
    QualifiedName::createStatic((void*)&vector_effectAttr, vector_effectImpl);
    QualifiedName::createStatic((void*)&versionAttr, versionImpl);
    QualifiedName::createStatic((void*)&vert_adv_yAttr, vert_adv_yImpl);
    QualifiedName::createStatic((void*)&vert_origin_xAttr, vert_origin_xImpl);
    QualifiedName::createStatic((void*)&vert_origin_yAttr, vert_origin_yImpl);
    QualifiedName::createStatic((void*)&viewBoxAttr, viewBoxImpl);
    QualifiedName::createStatic((void*)&viewTargetAttr, viewTargetImpl);
    QualifiedName::createStatic((void*)&visibilityAttr, visibilityImpl);
    QualifiedName::createStatic((void*)&widthAttr, widthImpl);
    QualifiedName::createStatic((void*)&widthsAttr, widthsImpl);
    QualifiedName::createStatic((void*)&word_spacingAttr, word_spacingImpl);
    QualifiedName::createStatic((void*)&writing_modeAttr, writing_modeImpl);
    QualifiedName::createStatic((void*)&xAttr, xImpl);
    QualifiedName::createStatic((void*)&x_heightAttr, x_heightImpl);
    QualifiedName::createStatic((void*)&x1Attr, x1Impl);
    QualifiedName::createStatic((void*)&x2Attr, x2Impl);
    QualifiedName::createStatic((void*)&xChannelSelectorAttr, xChannelSelectorImpl);
    QualifiedName::createStatic((void*)&yAttr, yImpl);
    QualifiedName::createStatic((void*)&y1Attr, y1Impl);
    QualifiedName::createStatic((void*)&y2Attr, y2Impl);
    QualifiedName::createStatic((void*)&yChannelSelectorAttr, yChannelSelectorImpl);
    QualifiedName::createStatic((void*)&zAttr, zImpl);
    QualifiedName::createStatic((void*)&zoomAndPanAttr, zoomAndPanImpl);
}

} // SVG
} // WebCore
