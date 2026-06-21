// addr: 0x014e0ee0
// name: FUN_014e0ee0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall FUN_014e0ee0(int *param_1)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x30-byte object using data from this+8 via FUN_014e0de0, then
                       passes the result to a virtual slot at +0x48. Exact class/factory identity is
                       not present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af46b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x30);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = GameCommand_ButtonPressed_ctor(this,(void *)param_1[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

