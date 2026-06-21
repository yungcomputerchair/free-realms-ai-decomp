// addr: 0x00843e30
// name: FUN_00843e30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00843e30(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156ede8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00842230(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  KeyboardInput_initializeKeyTranslationTable();
  ExceptionList = local_c;
  return param_1;
}

