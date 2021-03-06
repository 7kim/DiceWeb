#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// COLOR                    1   xyzw        1     NONE   float   xyzw
// TEXCOORD                 0   xy          2     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[86]
// Embedded Data:
//  0x00000056 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x00000051 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[26], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.xyzw
dcl_input_ps linear v2.xy
dcl_output o0.xyzw
dcl_temps 2
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v2.xyxx, t0.xyzw, s0
mul r0.xyzw, r0.xyzw, v0.xyzw
mad r0.xyz, v1.xyzx, r0.wwww, r0.xyzx
mad r1.xyz, cb0[13].xyzx, r0.wwww, -r0.xyzx
mov o0.w, r0.w
mad o0.xyz, v1.wwww, r1.xyzx, r0.xyzx
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[86], bundle is:[181] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneBasicEffect_PSBasicVertexLightingTx.pdb
// Shader Semantic Hash      : 0x1a638c60ff047219
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 0, channelMask 15, param0, paramSlot0, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 1, channelMask 15, param1, paramSlot1, DefaultVal={0,0,0,0}
;   [2] generic,  usageIdx 2, channelMask  3, param2, paramSlot2, DefaultVal={0,0,0,0}

codeLenInByte        = 208 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 3;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
;  extUserElements 1[2] = IMM_CONST_BUFFER 0, offset 0xc:15 dwords
NumVgprs             = 13;
NumSgprs             = 24;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000003
SPIC:NUM_INTERP             = 3
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0xBC, dwords=0x2F)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, off, off, off done vm         // 000000000008: F8001801 00000002
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, off, off done vm          // 000000000008: F8001803 00000302
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v5, off, off done vm          // 000000000008: F8001803 00000502
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 000000000000: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 000000000004: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v2, v3                      // 000000000000: 5C000702
  v_cvt_pknorm_u16_f32  v1, v4, v5                      // 000000000004: 5C020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v2, v3                      // 000000000000: 5A000702
  v_cvt_pknorm_i16_f32  v1, v4, v5                      // 000000000004: 5A020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v2, v3                          // 000000000000: 60000702
  v_cvt_pk_u16_u32  v1, v4, v5                          // 000000000004: 60020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v2, v3                          // 000000000000: 62000702
  v_cvt_pk_i16_i32  v1, v4, v5                          // 000000000004: 62020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, v4, v5 done vm            // 000000000008: F800180F 05040302
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[20:21], exec                          // 000000000000: BE94047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_load_dwordx16  s[4:19], s[0:1], 0x00                // 000000000008: C1020100
  s_mov_b32     m0, s2                                  // 00000000000C: BEFC0302
  v_interp_p1_f32  v2, v0, attr2.x                      // 000000000010: C8080800
  v_interp_p1_f32  v3, v0, attr2.y                      // 000000000014: C80C0900
  v_interp_p2_f32  v2, v1, attr2.x                      // 000000000018: C8090801
  v_interp_p2_f32  v3, v1, attr2.y                      // 00000000001C: C80D0901
  s_waitcnt     lgkmcnt(0)                              // 000000000020: BF8C007F
  image_sample  v[2:5], v[2:3], s[4:11], s[12:15] dmask:0xf // 000000000024: F0800F00 00610202
  s_buffer_load_dwordx4  s[0:3], s[16:19], 0x34         // 00000000002C: C2801134
  v_interp_p1_f32  v6, v0, attr0.x                      // 000000000030: C8180000
  v_interp_p1_f32  v7, v0, attr0.y                      // 000000000034: C81C0100
  v_interp_p1_f32  v8, v0, attr0.z                      // 000000000038: C8200200
  v_interp_p1_f32  v9, v0, attr0.w                      // 00000000003C: C8240300
  v_interp_p2_f32  v6, v1, attr0.x                      // 000000000040: C8190001
  v_interp_p2_f32  v7, v1, attr0.y                      // 000000000044: C81D0101
  v_interp_p2_f32  v8, v1, attr0.z                      // 000000000048: C8210201
  v_interp_p2_f32  v9, v1, attr0.w                      // 00000000004C: C8250301
  v_interp_p1_f32  v10, v0, attr1.x                     // 000000000050: C8280400
  v_interp_p1_f32  v11, v0, attr1.y                     // 000000000054: C82C0500
  v_interp_p1_f32  v12, v0, attr1.z                     // 000000000058: C8300600
  s_waitcnt     vmcnt(0)                                // 00000000005C: BF8C0F70
  v_mul_legacy_f32  v2, v2, v6                          // 000000000060: 0E040D02
  v_mul_legacy_f32  v3, v3, v7                          // 000000000064: 0E060F03
  v_mul_legacy_f32  v4, v4, v8                          // 000000000068: 0E081104
  v_mul_legacy_f32  v5, v5, v9                          // 00000000006C: 0E0A1305
  v_interp_p2_f32  v10, v1, attr1.x                     // 000000000070: C8290401
  v_interp_p2_f32  v11, v1, attr1.y                     // 000000000074: C82D0501
  v_interp_p2_f32  v12, v1, attr1.z                     // 000000000078: C8310601
  v_mac_f32     v2, v10, v5                             // 00000000007C: 3E040B0A
  v_mac_f32     v3, v11, v5                             // 000000000080: 3E060B0B
  v_mac_f32     v4, v12, v5                             // 000000000084: 3E080B0C
  v_interp_p1_f32  v0, v0, attr1.w                      // 000000000088: C8000700
  s_waitcnt     lgkmcnt(0)                              // 00000000008C: BF8C007F
  v_mad_legacy_f32  v6, s0, v5, -v2                     // 000000000090: D2800006 840A0A00
  v_mad_legacy_f32  v7, s1, v5, -v3                     // 000000000098: D2800007 840E0A01
  v_mad_legacy_f32  v8, s2, v5, -v4                     // 0000000000A0: D2800008 84120A02
  v_interp_p2_f32  v0, v1, attr1.w                      // 0000000000A8: C8010701
  v_mac_f32     v2, v0, v6                              // 0000000000AC: 3E040D00
  v_mac_f32     v3, v0, v7                              // 0000000000B0: 3E060F00
  v_mac_f32     v4, v0, v8                              // 0000000000B4: 3E081100
  s_mov_b64     exec, s[20:21]                          // 0000000000B8: BEFE0414
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 0000000000BC: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 0000000000C0: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 0000000000C4: F8001C0F 00000100
  s_endpgm                                              // 0000000000CC: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   13
//  NumSRegs:                   24
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   78
//  CycleSimNWaves:             78
//  Code Size:                  208
//Assembler Counts:
//  num_32bit_ops                     : 42
//  num_64bit_ops                     : 5
//  num_alu                           : 35
//  num_fc                            : 10
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 4
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 4
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 0
//  num_inst_vop2                     : 12
//  num_inst_vop3                     : 6
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 20
//  constant_literal_operands         : 0
//  num_tex                           : 2
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 13
// m_uNumSRegs                       : 24
// m_uSCCodeSize                     : 208
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 78
// m_uCycleSimNWaves                 : 78

// Assembler Counts:
// num_32bit_ops                     : 42
// num_64bit_ops                     : 5
// num_alu                           : 35
// num_fc                            : 10
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 4
// num_inst_sopc                     : 0
// num_inst_sop1                     : 4
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 0
// num_inst_vop2                     : 12
// num_inst_vop3                     : 6
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 20
// num_inst_smem                     : 2
// constant_literal_operands         : 0
// num_tex                           : 2
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE BasicEffect_PSBasicVertexLightingTx[] =
{
     68,  88,  66,  67, 200, 108, 
    137,  22, 205, 197, 228,   1, 
    176,  79, 110, 116,   5, 218, 
     43,  62,   1,   0,   0,   0, 
    144,   5,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    156,   0,   0,   0, 208,   0, 
      0,   0,  12,   5,   0,   0, 
     28,   5,   0,   0,  73,  83, 
     71,  78,  96,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0,  80,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,  15, 
      0,   0,  86,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   3, 
      0,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88,  52,   4,   0,   0, 
     80,   0,   0,   0,  13,   1, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0,  86,   0, 
      0,   0,  80,   0,   0,   0, 
     81,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  26,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      0,   0,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      1,   0,   0,   0,  98,  16, 
      0,   3,  50,  16,  16,   0, 
      2,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
     69,   0,   0, 139, 194,   0, 
      0, 128,  67,  85,  21,   0, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      2,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,   9, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   1,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  11, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  13,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70,   2,  16, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,   9, 114,  32,  16,   0, 
      0,   0,   0,   0, 246,  31, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  53,  16,   0,   0, 
    183,   0,   0,   0,  23,   0, 
      1,   0,  41,  33,  16,   0, 
    120,   1, 237,  87, 207,  79, 
     19,  65,  20, 126, 179, 157, 
    110, 183, 219, 118, 215,  42, 
      7, 106,  48, 130,  98, 130, 
     10, 254,   8, 158,  60,  52, 
     10,  24,  15,  24,  53, 210, 
     24,  66,  54,  72, 127,  44, 
    109, 147,   2,  77, 219,   3, 
      7, 131,  37, 233, 177,   7, 
     15,  30, 244, 238, 255, 160, 
    167,  86,  61, 205,  65,  19, 
    226, 127, 225, 205, 131,   7, 
     77,  12, 248, 222, 118,   6, 
     22, 148, 219,  38,  26, 179, 
     95, 242, 189, 111, 191, 157, 
    153, 215,  55,  59, 211, 100, 
    102, 236,   4, 120, 248, 242, 
    166,  60,  66, 250, 227, 213, 
    246, 196,  28,   3, 136, 226, 
     51, 138, 167, 132, 151,  41, 
    138,   0, 111,  45, 138,   0, 
     19,  20, 168, 131,   6,  64, 
     77, 195, 200,  29, 228,  45, 
     36, 181,  41, 126, 250, 120, 
    110, 102, 122, 250, 242,  12, 
     62,  66,  26,  73, 125, 239, 
     75,  94,  66,  82, 254, 243, 
     72,  19,  73, 233,   8,  74, 
      9, 156,   2,  66, 169,  31, 
     73, 164, 142,  36,  12,  33, 
    177,  20,  15, 164, 254,  28, 
    224,  82, 248,  51, 174,  34, 
    169, 166, 227,  64, 181, 169, 
     92, 164,  84,  39, 129, 230, 
    251, 183,  49, 168, 235,  32, 
     18, 213,  58,  17, 104,  61, 
    252, 160, 165, 163,  62, 132, 
    138,  92, 199,   8,   5, 196, 
     83, 233, 105,  56, 205, 237, 
     29, 242,  56, 236,  33, 228, 
    182, 217, 135, 242, 148,  79, 
      7,  27,  35,  42,  59,  11, 
     96, 160, 106, 248,  21, 143, 
     14, 248, 143, 161, 246,  42, 
    125,  11, 218, 139,  52, 245, 
    193,  23,  25,  64, 181, 211, 
    222,   3, 104, 247, 137, 207, 
    135, 225,  59,  57, 229,  25, 
    122,  26, 171, 124, 132,  60, 
     37, 244, 123, 252, 243, 104, 
     49,  88, 230,   9, 109, 217, 
     30, 193, 241, 184, 184, 232, 
     29, 244, 142, 207,  47, 161, 
     95, 242, 249,  21, 244,  43, 
     62,  95,  64,  95,  80,  94, 
    229, 183, 189, 223, 227,  81, 
     90, 107, 124, 185, 245,  47, 
     51, 172,  49,  24, 134,  53, 
      6, 195, 176, 198,  96,  24, 
    214,  24,  12, 195,  26, 131, 
     97,  88,  99,  48,  12, 107, 
     12, 140, 176, 197,  95, 244, 
    182, 204, 221,  30,  48, 237, 
    189,  22, 249, 217,   3, 195, 
     16,  16,  79,  10, 102, 196, 
      5, 139, 167, 196,  51, 232, 
    246, 193, 110, 127, 213, 180, 
     60, 220,  72, 183,  63, 224, 
    233,  94,   0,  27,  17, 160, 
    141,  10, 136, 140,  11,   6, 
     25, 193, 216,  25, 193, 180, 
     49, 193,  34,  23,   4, 240, 
      9,   1, 209,  73,   1, 250, 
     53,  81, 183, 187, 125,  45, 
    197, 173, 136, 173,  91,  60, 
    109,  88, 209,  83, 166, 197, 
    248,  69, 193, 162,  83, 130, 
    233, 215, 133, 153, 224, 217, 
     68,  66, 207,  38,  19,  70, 
     22,  98, 224, 253, 150,  14, 
    237, 207,  96, 154, 157,  24, 
     42,  51, 173, 142, 129, 170, 
    153,  39,  59,  44, 198,   4, 
    164, 120,  22, 108,  61,  11, 
    105,  35,  59, 196, 119, 123, 
    120, 246,  60, 116, 118,   5, 
    216, 238, 103,  72,   7,   7, 
    223, 195,  48, 188,  14, 251, 
    240,  28, 103, 116, 189, 216, 
    135,  55,  12, 223, 209, 189, 
     80, 225, 155, 188, 215, 236, 
     72,  29,  71, 198, 145, 204, 
     59, 157,   3, 156,  70, 114, 
    121, 139, 204,  52, 248, 222, 
     74, 183,  72, 175,  60,  76, 
    202,  67, 123,  82, 234,  40, 
    210, 159,  27, 224,  53, 133, 
    223, 144, 147, 253, 231, 164, 
    210, 249, 159, 206, 252, 150, 
    186,  77, 203,  90,  90, 178, 
    189,  38, 149, 230, 146,  64, 
     30, 173, 163,  43, 219, 215, 
    144,  84, 233, 236,  77, 231, 
    145,  91, 223, 104,  58, 139, 
    133, 141, 205, 169, 219, 185, 
    187,  83,  11, 249, 181, 122, 
    205, 109,  58, 243, 213,  86, 
    211, 153, 171,  54, 220,  98, 
    107,  49,  55, 239,  52,  27, 
     69, 103, 161, 146,  47, 185, 
    141, 166,  51, 187, 177,  86, 
    175, 214, 220, 146,  55, 232, 
    193, 186,  59, 147, 111,  86, 
    139, 119,  86,  87, 177, 235, 
    147, 135,  11, 158, 123, 236, 
     54,  90, 238, 230, 189, 106, 
    185, 210, 170, 174, 151, 115, 
    155,  87, 234, 165,   2, 252, 
      2, 183, 219, 249, 215,   0, 
      0,   0,  88,  72,  83,  72, 
      8,   0,   0,   0,  25, 114, 
      4, 255,  96, 140,  99,  26, 
     88,  80,  68,  80, 108,   0, 
      0,   0,  67,  58,  92,  82, 
    101, 112, 111, 115,  92,  88, 
     98, 111, 120,  45,  65,  84, 
     71,  45,  83,  97, 109, 112, 
    108, 101, 115,  92,  75, 105, 
    116, 115,  92,  68, 105, 114, 
    101,  99, 116,  88,  84,  75, 
     92, 115, 114,  99,  92,  83, 
    104,  97, 100, 101, 114, 115, 
     92,  67, 111, 109, 112, 105, 
    108, 101, 100,  92,  88,  98, 
    111, 120,  79, 110, 101,  66, 
     97, 115, 105,  99,  69, 102, 
    102, 101,  99, 116,  95,  80, 
     83,  66,  97, 115, 105,  99, 
     86, 101, 114, 116, 101, 120, 
     76, 105, 103, 104, 116, 105, 
    110, 103,  84, 120,  46, 112, 
    100,  98
};
