// addr: 0x014304a0
// name: GameCommand_SelectDeckForPlayer_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SelectDeckForPlayer_createAndRegister(void * factory) */

void * __fastcall GameCommand_SelectDeckForPlayer_createAndRegister(void *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a SelectDeckForPlayer command via parameterized constructor and
                       registers it through a virtual factory method. Class inferred from
                       neighboring create wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169643b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x44);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)GameCommand_SelectDeckForPlayer_ctor(*(undefined4 *)((int)factory + 8));
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar3,uVar1);
  ExceptionList = pvVar2;
  return pvVar3;
}

