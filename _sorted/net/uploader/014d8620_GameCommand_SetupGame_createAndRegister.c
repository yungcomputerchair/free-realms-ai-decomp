// addr: 0x014d8620
// name: GameCommand_SetupGame_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SetupGame_createAndRegister(int * factory) */

void * __fastcall GameCommand_SetupGame_createAndRegister(int *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a GameCommand_SetupGame using factory context at
                       factory[2], then passes the new command to factory vmethod +0x48. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad82b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x80);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)GameCommand_SetupGame_ctor(factory[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*factory + 0x48))(pvVar3,uVar1);
  ExceptionList = pvVar2;
  return pvVar3;
}

