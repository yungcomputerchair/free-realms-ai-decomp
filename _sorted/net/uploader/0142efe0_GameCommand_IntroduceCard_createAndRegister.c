// addr: 0x0142efe0
// name: GameCommand_IntroduceCard_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_IntroduceCard_createAndRegister(void * factory) */

void * __fastcall GameCommand_IntroduceCard_createAndRegister(void *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an IntroduceCard game command with a parameterized constructor and
                       registers it through a virtual factory method. Class inferred from
                       neighboring wrappers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695fcb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x30);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)GameCommand_IntroduceCard_ctor(*(undefined4 *)((int)factory + 8));
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar3,uVar1);
  ExceptionList = pvVar2;
  return pvVar3;
}

