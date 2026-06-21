// addr: 0x01489540
// name: FUN_01489540
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01489540(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a 0x1c-byte helper object at this+0x28 via FUN_01401df0,
                       then applies the supplied parameters through FUN_01401bc0. Owner identity is
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a187b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar2 = Mem_Alloc(0x1c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = MessageText_ctor(uVar1);
    }
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  local_4 = 0xffffffff;
  set_pair_fields_4_8(*(void **)(param_1 + 0x28),param_2,param_3);
  ExceptionList = local_c;
  return;
}

