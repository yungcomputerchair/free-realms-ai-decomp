// addr: 0x00e7ffe0
// name: FUN_00e7ffe0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_00e7ffe0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162182b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00e71e90(0xffffffff,param_2,1);
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  ExceptionList = local_c;
  return param_1;
}

