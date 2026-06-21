// addr: 0x010141c0
// name: FUN_010141c0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_010141c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a physics/shape descriptor from global defaults, copies a
                       0x40-byte default block, zeros counters, and invokes another helper. No class
                       evidence. */
  uVar2 = DAT_01cb6098;
  puStack_8 = &LAB_01634156;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = DAT_0187d048;
  uVar1 = DAT_01cb6080;
  param_1[3] = uVar2;
  param_1[2] = uVar2;
  *param_1 = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = &DAT_0187d060;
  puVar5 = param_1 + 6;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  local_4 = 1;
  init_video_capture_config(param_1 + 0x1c);
  param_1[0x66] = param_2;
  ExceptionList = local_c;
  return param_1;
}

