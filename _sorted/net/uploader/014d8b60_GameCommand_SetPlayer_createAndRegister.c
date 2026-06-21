// addr: 0x014d8b60
// name: GameCommand_SetPlayer_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SetPlayer_createAndRegister(int * factory) */

void * __fastcall GameCommand_SetPlayer_createAndRegister(int *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x24 bytes for GameCommand_SetPlayer, constructs it with
                       factory[2], and registers it via factory vmethod +0x48. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad91b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x24);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = GameCommand_SetPlayer_ctorWithContext(this,factory[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

