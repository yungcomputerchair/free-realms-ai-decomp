// addr: 0x014e0070
// name: GameCommand_CardPlayed_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_CardPlayed_createAndRegister(int * factory) */

void * __fastcall GameCommand_CardPlayed_createAndRegister(int *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates, constructs, and registers a GameCommand_CardPlayed command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af10b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x34);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = GameCommand_CardPlayed_ctorWithContext(this,factory[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

