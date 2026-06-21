// addr: 0x01015730
// name: VideoCapture_AVI_State_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall VideoCapture_AVI_State_ctor(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a large VideoCapture AVI state structure with default AVI
                       constants, embedded old-index array state, and many zeroed counters. Evidence
                       is the call to the MyOLDINDEXENTRY array initializer and nearby AVI
                       functions. */
  puStack_8 = &LAB_016343d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  uVar2 = DAT_01cb6080;
  uVar1 = DAT_01cb6078;
  local_4 = 0;
  param_1[3] = DAT_0187d03c;
  uVar3 = DAT_01cb60b4;
  param_1[5] = uVar1;
  param_1[4] = uVar1;
  uVar1 = DAT_0187d048;
  param_1[2] = uVar3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = uVar1;
  uVar1 = DAT_01cb60ac;
  param_1[0xb] = DAT_01cb60ac;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = uVar2;
  param_1[10] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_01013260(param_1 + 0x10);
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  ExceptionList = local_c;
  return param_1;
}

