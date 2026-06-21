// addr: 0x01004e60
// name: FUN_01004e60
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01004e60(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016321b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc45f0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  FUN_01004bf0(param_2);
  FUN_00fc4db0(1);
  local_4 = 0xffffffff;
  if (param_1 != -0x1d8) {
    FUN_00fc4610();
  }
  ExceptionList = local_c;
  return;
}

