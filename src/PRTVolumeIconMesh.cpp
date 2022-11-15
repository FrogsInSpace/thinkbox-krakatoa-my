// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0
#include "stdafx.h"

#include "PRTIconMesh.hpp"
#include "PRTVolumeIconMesh.hpp"

namespace {

float vertices[] = {
    -0.382369f,  0.0f, 0.368268f, -0.384947f,   0.0f, 0.360952f, -0.389152f,  0.0f, 0.354901f,
    -0.394895f,  0.0f, 0.350044f, -0.400727f,   0.0f, 0.346946f, -0.407375f,  0.0f, 0.344732f,
    -0.415235f,  0.0f, 0.343405f, -0.424704f,   0.0f, 0.342962f, -0.47043f,   0.0f, 0.342962f,
    -0.47043f,   0.0f, 0.450602f, -0.44271f,    0.0f, 0.450602f, -0.44271f,   0.0f, 0.415502f,
    -0.425399f,  0.0f, 0.415502f, -0.414563f,   0.0f, 0.414689f, -0.405664f,  0.0f, 0.412251f,
    -0.398104f,  0.0f, 0.408223f, -0.391286f,   0.0f, 0.40264f,  -0.387123f,  0.0f, 0.397395f,
    -0.384045f,  0.0f, 0.391046f, -0.382144f,   0.0f, 0.384064f, -0.38151f,   0.0f, 0.37692f,
    -0.410608f,  0.0f, 0.381884f, -0.411504f,   0.0f, 0.385411f, -0.413068f,  0.0f, 0.388366f,
    -0.415372f,  0.0f, 0.390876f, -0.418853f,   0.0f, 0.393018f, -0.423074f,  0.0f, 0.394304f,
    -0.42829f,   0.0f, 0.394948f, -0.434753f,   0.0f, 0.395162f, -0.44271f,   0.0f, 0.395162f,
    -0.44271f,   0.0f, 0.363302f, -0.437937f,   0.0f, 0.363302f, -0.426944f,  0.0f, 0.363481f,
    -0.422768f,  0.0f, 0.364043f, -0.418483f,   0.0f, 0.365375f, -0.415428f,  0.0f, 0.367151f,
    -0.412769f,  0.0f, 0.36991f,  -0.410925f,   0.0f, 0.373472f, -0.41031f,   0.0f, 0.37766f,
    -0.306744f,  0.0f, 0.3799f,   -0.307747f,   0.0f, 0.383051f, -0.309474f,  0.0f, 0.385628f,
    -0.311979f,  0.0f, 0.38797f,  -0.315378f,   0.0f, 0.389855f, -0.319499f,  0.0f, 0.390915f,
    -0.324525f,  0.0f, 0.3914f,   -0.330637f,   0.0f, 0.391562f, -0.33917f,   0.0f, 0.391562f,
    -0.33917f,   0.0f, 0.362762f, -0.329118f,   0.0f, 0.362762f, -0.320368f,  0.0f, 0.363014f,
    -0.316843f,  0.0f, 0.363489f, -0.313787f,   0.0f, 0.364413f, -0.310334f,  0.0f, 0.366371f,
    -0.308074f,  0.0f, 0.36894f,  -0.306826f,   0.0f, 0.3721f,   -0.30641f,   0.0f, 0.375834f,
    -0.299027f,  0.0f, 0.404528f, -0.289906f,   0.0f, 0.398903f, -0.283163f,  0.0f, 0.392012f,
    -0.278998f,  0.0f, 0.383385f, -0.27761f,    0.0f, 0.372552f, -0.278507f,  0.0f, 0.364603f,
    -0.281197f,  0.0f, 0.358119f, -0.285409f,   0.0f, 0.352901f, -0.290871f,  0.0f, 0.34875f,
    -0.297104f,  0.0f, 0.345766f, -0.30377f,    0.0f, 0.344048f, -0.311325f,  0.0f, 0.343233f,
    -0.320222f,  0.0f, 0.342962f, -0.36689f,    0.0f, 0.342962f, -0.36689f,   0.0f, 0.450602f,
    -0.33917f,   0.0f, 0.450602f, -0.33917f,    0.0f, 0.411182f, -0.32639f,   0.0f, 0.411182f,
    -0.297064f,  0.0f, 0.450602f, -0.26303f,    0.0f, 0.450602f, -0.17173f,   0.0f, 0.342962f,
    -0.26677f,   0.0f, 0.342962f, -0.26677f,    0.0f, 0.363842f, -0.23311f,   0.0f, 0.363842f,
    -0.23311f,   0.0f, 0.450602f, -0.20539f,    0.0f, 0.450602f, -0.20539f,   0.0f, 0.363842f,
    -0.17173f,   0.0f, 0.363842f, -0.0416084f,  0.0f, 0.342962f, -0.0676774f, 0.0f, 0.418652f,
    -0.0937465f, 0.0f, 0.342962f, -0.12287f,    0.0f, 0.342962f, -0.0836074f, 0.0f, 0.450602f,
    -0.0525124f, 0.0f, 0.450602f, -0.0132499f,  0.0f, 0.342962f, 0.0760434f,  0.0f, 0.392143f,
    0.0673232f,  0.0f, 0.378466f, 0.053279f,    0.0f, 0.369793f, 0.0344f,     0.0f, 0.366902f,
    0.0157022f,  0.0f, 0.369775f, 0.00162179f,  0.0f, 0.378394f, -0.007207f,  0.0f, 0.392053f,
    -0.0101499f, 0.0f, 0.410049f, -0.00722527f, 0.0f, 0.427945f, 0.00154868f, 0.0f, 0.441595f,
    0.0156108f,  0.0f, 0.45024f,  0.0344f,      0.0f, 0.453122f, 0.0531893f,  0.0f, 0.45024f,
    0.0672515f,  0.0f, 0.441595f, 0.0760254f,   0.0f, 0.427945f, 0.0789501f,  0.0f, 0.410049f,
    0.0443813f,  0.0f, 0.432154f, 0.041399f,    0.0f, 0.433751f, 0.0380897f,  0.0f, 0.434644f,
    0.0346167f,  0.0f, 0.434942f, 0.0307111f,   0.0f, 0.434617f, 0.0272577f,  0.0f, 0.433643f,
    0.0242572f,  0.0f, 0.431965f, 0.0217101f,   0.0f, 0.429531f, 0.0196067f,  0.0f, 0.426094f,
    0.0180833f,  0.0f, 0.421701f, 0.0171584f,   0.0f, 0.416388f, 0.0168501f,  0.0f, 0.410192f,
    0.0172037f,  0.0f, 0.403392f, 0.0182648f,   0.0f, 0.397854f, 0.0199241f,  0.0f, 0.39347f,
    0.0220729f,  0.0f, 0.390133f, 0.0248193f,   0.0f, 0.387607f, 0.0276923f,  0.0f, 0.386092f,
    0.0308373f,  0.0f, 0.385334f, 0.0344f,      0.0f, 0.385082f, 0.0380444f,  0.0f, 0.385389f,
    0.0414341f,  0.0f, 0.386308f, 0.0444618f,   0.0f, 0.387968f, 0.0470198f,  0.0f, 0.390493f,
    0.0490862f,  0.0f, 0.393866f, 0.0506451f,   0.0f, 0.398214f, 0.0516238f,  0.0f, 0.403626f,
    0.0519501f,  0.0f, 0.410192f, 0.051633f,    0.0f, 0.417074f, 0.0506817f,  0.0f, 0.422279f,
    0.0490954f,  0.0f, 0.426329f, 0.0468735f,   0.0f, 0.429747f, 0.11859f,    0.0f, 0.338102f,
    0.0924901f,  0.0f, 0.338102f, 0.0924901f,   0.0f, 0.450602f, 0.11859f,    0.0f, 0.450602f,
    0.21907f,    0.0f, 0.369422f, 0.19297f,     0.0f, 0.369422f, 0.19297f,    0.0f, 0.426867f,
    0.18914f,    0.0f, 0.428961f, 0.185165f,    0.0f, 0.430476f, 0.181299f,   0.0f, 0.431395f,
    0.177794f,   0.0f, 0.431702f, 0.173359f,    0.0f, 0.431395f, 0.170026f,   0.0f, 0.430476f,
    0.167596f,   0.0f, 0.428888f, 0.165872f,    0.0f, 0.426578f, 0.164688f,   0.0f, 0.423556f,
    0.164028f,   0.0f, 0.41983f,  0.16373f,     0.0f, 0.415238f, 0.16363f,    0.0f, 0.409618f,
    0.16363f,    0.0f, 0.369422f, 0.13753f,     0.0f, 0.369422f, 0.13753f,    0.0f, 0.422213f,
    0.139344f,   0.0f, 0.435466f, 0.144785f,    0.0f, 0.445035f, 0.153583f,   0.0f, 0.45083f,
    0.165467f,   0.0f, 0.452762f, 0.173191f,    0.0f, 0.452049f, 0.17976f,    0.0f, 0.449909f,
    0.186058f,   0.0f, 0.446397f, 0.19297f,     0.0f, 0.441568f, 0.19297f,    0.0f, 0.450602f,
    0.21907f,    0.0f, 0.450602f, 0.322069f,    0.0f, 0.390757f, 0.325521f,   0.0f, 0.389264f,
    0.328665f,   0.0f, 0.388423f, 0.331883f,    0.0f, 0.388142f, 0.336184f,   0.0f, 0.38844f,
    0.339401f,   0.0f, 0.389336f, 0.341713f,    0.0f, 0.390883f, 0.343302f,   0.0f, 0.393137f,
    0.344342f,   0.0f, 0.396122f, 0.344857f,    0.0f, 0.399867f, 0.34511f,    0.0f, 0.410001f,
    0.34511f,    0.0f, 0.450602f, 0.37121f,     0.0f, 0.450602f, 0.37121f,    0.0f, 0.397696f,
    0.369505f,   0.0f, 0.384597f, 0.364388f,    0.0f, 0.374971f, 0.355988f,   0.0f, 0.369054f,
    0.34443f,    0.0f, 0.367082f, 0.337282f,    0.0f, 0.368023f, 0.32999f,    0.0f, 0.370845f,
    0.322519f,   0.0f, 0.375314f, 0.314831f,    0.0f, 0.381195f, 0.310698f,   0.0f, 0.375089f,
    0.305229f,   0.0f, 0.370665f, 0.298622f,    0.0f, 0.367978f, 0.291076f,   0.0f, 0.367082f,
    0.283965f,   0.0f, 0.367824f, 0.277502f,    0.0f, 0.370049f, 0.27122f,    0.0f, 0.373596f,
    0.26465f,    0.0f, 0.378301f, 0.26465f,     0.0f, 0.369422f, 0.23855f,    0.0f, 0.369422f,
    0.23855f,    0.0f, 0.450602f, 0.26465f,     0.0f, 0.450602f, 0.26465f,    0.0f, 0.392991f,
    0.267722f,   0.0f, 0.3913f,   0.271155f,    0.0f, 0.389699f, 0.274824f,   0.0f, 0.388531f,
    0.278603f,   0.0f, 0.388142f, 0.28284f,     0.0f, 0.38844f,  0.286011f,   0.0f, 0.389336f,
    0.288315f,   0.0f, 0.390883f, 0.289951f,    0.0f, 0.393137f, 0.290998f,   0.0f, 0.396131f,
    0.29154f,    0.0f, 0.399902f, 0.291758f,    0.0f, 0.404508f, 0.29183f,    0.0f, 0.410001f,
    0.29183f,    0.0f, 0.450602f, 0.31793f,     0.0f, 0.450602f, 0.31793f,    0.0f, 0.392991f,
    0.47043f,    0.0f, 0.405684f, 0.467932f,    0.0f, 0.389101f, 0.460436f,   0.0f, 0.376905f,
    0.447979f,   0.0f, 0.369403f, 0.430597f,    0.0f, 0.366902f, 0.411377f,   0.0f, 0.369838f,
    0.396738f,   0.0f, 0.378647f, 0.387477f,    0.0f, 0.392478f, 0.38439f,    0.0f, 0.410482f,
    0.387652f,   0.0f, 0.42846f,  0.397439f,    0.0f, 0.441776f, 0.413351f,   0.0f, 0.450016f,
    0.43499f,    0.0f, 0.452762f, 0.44407f,     0.0f, 0.452363f, 0.452316f,   0.0f, 0.451166f,
    0.460399f,   0.0f, 0.44908f,  0.46899f,     0.0f, 0.446015f, 0.46899f,    0.0f, 0.425042f,
    0.466076f,   0.0f, 0.425042f, 0.46074f,     0.0f, 0.428407f, 0.453765f,   0.0f, 0.43155f,
    0.445842f,   0.0f, 0.433824f, 0.437665f,    0.0f, 0.434582f, 0.426144f,   0.0f, 0.433308f,
    0.417811f,   0.0f, 0.429486f, 0.412611f,    0.0f, 0.423262f, 0.41049f,    0.0f, 0.414782f,
    0.47043f,    0.0f, 0.414782f, 0.410417f,    0.0f, 0.399482f, 0.41207f,    0.0f, 0.392068f,
    0.415863f,   0.0f, 0.386999f, 0.4214f,      0.0f, 0.384076f, 0.428282f,   0.0f, 0.383102f,
    0.435345f,   0.0f, 0.38413f,  0.440265f,    0.0f, 0.387215f, 0.443206f,   0.0f, 0.392339f,
    0.44433f,    0.0f, 0.399482f,
};

int faces[] = {
    21,  22,  1,   38,  21,  1,   37,  38,  1,   0,   1,   22,  20,  0,   22,  19,  20,  22,  18,  19,  22,  17,  18,
    22,  16,  17,  22,  16,  22,  23,  15,  16,  23,  15,  23,  24,  14,  15,  24,  13,  14,  24,  13,  24,  25,  37,
    1,   2,   36,  37,  2,   36,  2,   3,   36,  3,   4,   35,  36,  4,   35,  4,   5,   34,  35,  5,   34,  5,   6,
    33,  34,  6,   33,  6,   7,   32,  33,  7,   12,  13,  25,  12,  25,  26,  12,  26,  27,  11,  12,  27,  11,  27,
    28,  11,  28,  29,  32,  7,   8,   31,  32,  8,   30,  31,  8,   30,  8,   9,   29,  30,  9,   11,  29,  9,   10,
    11,  9,   75,  76,  57,  74,  75,  57,  57,  40,  41,  74,  57,  41,  74,  41,  42,  74,  42,  43,  74,  43,  44,
    74,  44,  45,  40,  57,  58,  74,  45,  46,  73,  74,  46,  73,  46,  47,  71,  72,  73,  70,  71,  73,  70,  73,
    47,  70,  47,  48,  69,  70,  48,  69,  48,  49,  69,  49,  50,  68,  69,  50,  68,  50,  51,  68,  51,  52,  67,
    68,  52,  40,  58,  59,  39,  40,  59,  39,  59,  60,  39,  60,  61,  56,  39,  61,  55,  56,  61,  55,  61,  62,
    55,  62,  63,  55,  63,  64,  54,  55,  64,  54,  64,  65,  54,  65,  66,  53,  54,  66,  53,  66,  67,  53,  67,
    52,  83,  84,  77,  83,  77,  78,  81,  82,  83,  80,  81,  83,  80,  83,  78,  79,  80,  78,  90,  91,  85,  90,
    85,  86,  89,  90,  86,  88,  89,  86,  88,  86,  87,  93,  127, 128, 93,  128, 129, 127, 93,  94,  93,  129, 130,
    127, 94,  95,  93,  130, 131, 127, 95,  96,  126, 127, 96,  125, 126, 96,  124, 125, 96,  124, 96,  97,  123, 124,
    97,  122, 123, 97,  122, 97,  98,  121, 122, 98,  121, 98,  99,  120, 121, 99,  119, 120, 99,  119, 99,  100, 118,
    119, 100, 117, 118, 100, 117, 100, 101, 116, 117, 101, 116, 101, 102, 115, 116, 102, 114, 115, 102, 114, 102, 103,
    113, 114, 103, 112, 113, 103, 111, 112, 103, 111, 103, 104, 110, 111, 104, 109, 110, 104, 108, 109, 104, 108, 104,
    105, 139, 108, 105, 138, 139, 105, 138, 105, 106, 137, 138, 106, 137, 106, 107, 136, 137, 107, 135, 136, 107, 135,
    107, 92,  134, 135, 92,  133, 134, 92,  133, 92,  93,  132, 133, 93,  132, 93,  131, 142, 143, 140, 141, 142, 140,
    170, 171, 144, 169, 170, 144, 159, 160, 161, 158, 159, 161, 157, 158, 161, 156, 157, 161, 156, 161, 162, 155, 156,
    162, 155, 162, 163, 154, 155, 163, 154, 163, 164, 153, 154, 164, 153, 164, 165, 152, 153, 165, 152, 165, 166, 151,
    152, 166, 151, 166, 167, 150, 151, 167, 150, 167, 168, 149, 150, 168, 149, 168, 169, 148, 149, 169, 147, 148, 169,
    144, 145, 146, 169, 144, 146, 147, 169, 146, 219, 220, 221, 218, 219, 221, 217, 218, 221, 216, 217, 221, 215, 216,
    221, 204, 205, 206, 203, 204, 206, 201, 202, 203, 201, 203, 206, 201, 206, 207, 201, 207, 208, 183, 184, 185, 182,
    183, 185, 181, 182, 185, 181, 185, 186, 180, 181, 186, 179, 180, 186, 179, 186, 187, 179, 187, 188, 178, 179, 188,
    178, 188, 189, 177, 178, 189, 177, 189, 190, 176, 177, 190, 176, 190, 191, 175, 176, 191, 175, 191, 192, 174, 175,
    192, 174, 192, 193, 173, 174, 193, 172, 173, 193, 221, 172, 193, 215, 221, 193, 214, 215, 193, 214, 193, 194, 214,
    194, 195, 213, 214, 195, 213, 195, 196, 213, 196, 197, 212, 213, 197, 212, 197, 198, 211, 212, 198, 211, 198, 199,
    210, 211, 199, 210, 199, 200, 209, 210, 200, 209, 200, 201, 209, 201, 208, 258, 250, 222, 258, 222, 223, 257, 258,
    223, 257, 223, 224, 257, 224, 225, 256, 257, 225, 256, 225, 226, 255, 256, 226, 254, 255, 226, 254, 226, 227, 253,
    254, 227, 252, 253, 227, 252, 227, 228, 251, 252, 228, 251, 228, 229, 250, 251, 229, 250, 229, 230, 248, 249, 222,
    248, 222, 250, 248, 250, 230, 248, 230, 231, 247, 248, 231, 247, 231, 232, 247, 232, 233, 246, 247, 233, 245, 246,
    233, 245, 233, 234, 244, 245, 234, 244, 234, 235, 243, 244, 235, 243, 235, 236, 242, 243, 236, 242, 236, 237, 238,
    239, 240, 238, 240, 241, 237, 238, 241, 242, 237, 241,
};

frantic::geometry::trimesh3 g_prtVolumeIconMesh;
bool g_isPRTVolumeIconMeshBuilt = false;
} // namespace

const frantic::geometry::trimesh3& get_prt_volume_icon_mesh() {
    if( !g_isPRTVolumeIconMeshBuilt ) {
        build_icon_mesh( vertices, sizeof( vertices ) / ( sizeof( float ) * 3 ), faces,
                         sizeof( faces ) / ( sizeof( int ) * 3 ), g_prtVolumeIconMesh );
        g_isPRTVolumeIconMeshBuilt = true;
    }

    return g_prtVolumeIconMesh;
}