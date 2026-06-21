// addr: 0x013ef870
// name: FUN_013ef870
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013ef870(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 300-byte object and constructs it with FUN_01475300. Strongly
                       labeled in this subsystem but no class or method evidence is visible here. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f22b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(300);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CWDoublePassState_ctor(param_1);
  }
  ExceptionList = local_c;
  return uVar2;
}

