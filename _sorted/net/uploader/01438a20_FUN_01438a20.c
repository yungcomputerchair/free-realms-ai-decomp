// addr: 0x01438a20
// name: FUN_01438a20
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01438a20(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169733b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xc);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (local_10 != (void *)0x0) {
    pvVar2 = (void *)FUN_012c54d0(uVar1);
  }
  local_4 = 0xffffffff;
  local_10 = pvVar2;
  FUN_012c5500(param_1);
  FUN_012c5520(param_2);
  FUN_014386a0(&local_10);
  ExceptionList = local_c;
  return;
}

