// addr: 0x00770630
// name: FUN_00770630
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00770630(int param_1)

{
  undefined4 extraout_EAX;
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily creates an object at offset 0x378 after refreshing another dependency
                       at 0x374; skips creation when an existing object or disabled parent state is
                       present. No class-identifying evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155743b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 0x378) == 0) &&
     ((*(int *)(param_1 + 0x2b0) == 0 || (*(char *)(*(int *)(param_1 + 0x2b0) + 0x138) == '\0')))) {
    uVar2 = *(undefined4 *)(param_1 + 0x1a0);
    if (*(int *)(param_1 + 0x374) != 0) {
      FUN_007ecba0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
      *(undefined4 *)(param_1 + 0x374) = 0;
    }
    FUN_007f5f10();
    *(undefined4 *)(param_1 + 0x374) = extraout_EAX;
    pvVar1 = Mem_Alloc(0x1c);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_007704b0(uVar2,*(undefined4 *)(param_1 + 0x374));
    }
    *(undefined4 *)(param_1 + 0x378) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

