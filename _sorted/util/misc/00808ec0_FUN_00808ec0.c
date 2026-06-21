// addr: 0x00808ec0
// name: FUN_00808ec0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_00808ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SkyDefinition controller segment containing two
                       two-tinted-texture subobjects and stores a duration/state field at 0xe0. No
                       exact class name evidence, so left unnamed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567a13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008069d0(param_2);
  local_4 = 0;
  FUN_008069d0(param_3);
  *(undefined4 *)(param_1 + 0xe0) = param_4;
  ExceptionList = local_c;
  return param_1;
}

