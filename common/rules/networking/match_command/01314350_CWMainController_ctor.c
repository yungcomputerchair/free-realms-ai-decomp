// addr: 0x01314350
// name: CWMainController_ctor
// subsystem: common/rules/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CWMainController_ctor(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a CWMainController ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01677810;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWGame_ctor(param_1,param_2,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = CWMainController::vftable;
  param_1[4] = CWMainController::vftable;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x10e] = 0xf;
  param_1[0x10d] = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  param_1[0x115] = 0xf;
  param_1[0x114] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[0x116] = 0;
  param_1[0x11f] = 0xf;
  param_1[0x11e] = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  param_1[0x126] = 0xf;
  param_1[0x125] = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  param_1[0x128] = 2;
  param_1[0x12e] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x4bd) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0x20;
  *(undefined1 *)((int)param_1 + 0x461) = 0x20;
  *(undefined1 *)(param_1 + 0x127) = 0;
  *(undefined1 *)(param_1 + 0x12f) = 1;
  param_1[0x117] = 0;
  *(undefined1 *)(param_1 + 0x129) = 0;
  *(undefined1 *)((int)param_1 + 0x4a5) = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  ExceptionList = local_c;
  return param_1;
}

