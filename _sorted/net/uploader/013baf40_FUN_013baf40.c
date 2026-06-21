// addr: 0x013baf40
// name: FUN_013baf40
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013baf40(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168881b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x54);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_013baee0(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(uVar3);
  ExceptionList = pvVar2;
  return uVar3;
}

