// addr: 0x014ded40
// name: GameCommand_DiscardCard_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_DiscardCard_createAndRegister(int * factory) */

void * __fastcall GameCommand_DiscardCard_createAndRegister(int *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates, constructs, and registers a GameCommand_DiscardCard command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aee6b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x50);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = GameCommand_DiscardCard_ctor(this,(void *)factory[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

