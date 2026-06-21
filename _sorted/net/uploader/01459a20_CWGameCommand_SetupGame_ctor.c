// addr: 0x01459a20
// name: CWGameCommand_SetupGame_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWGameCommand_SetupGame_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a CWGameCommand_SetupGame ctor routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d8420(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = CWGameCommand_SetupGame::vftable;
  param_1[0x20] = 1;
  param_1[0x21] = 1;
  ExceptionList = local_c;
  return param_1;
}

