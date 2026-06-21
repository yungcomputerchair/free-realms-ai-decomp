// addr: 0x014e2610
// name: GameCommand_ActionPlayed_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GameCommand_ActionPlayed_createAndRegister(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates GameCommand_ActionPlayed with a factory-supplied argument, then
                       registers it through the creator vtable callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af82b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x5c);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = GameCommand_ActionPlayed_ctor(param_1[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(uVar3,uVar1);
  ExceptionList = pvVar2;
  return uVar3;
}

