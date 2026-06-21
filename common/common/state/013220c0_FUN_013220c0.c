// addr: 0x013220c0
// name: FUN_013220c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013220c0(int param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678f7b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar2 = Mem_Alloc(0x1c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = MessageText_ctor(uVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  local_4 = 0xffffffff;
  set_pair_fields_4_8(*(void **)(param_1 + 0x1c),param_2,*(uint *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}

