// addr: 0x014c2710
// name: FUN_014c2710
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_014c2710(void * registry) */

void * __fastcall FUN_014c2710(void *registry)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x18-byte object using constructor helper FUN_014c26a0 and
                       registers it via the registry vtable callback at offset 0x48. Exact class not
                       visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa36b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x18);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = LobbyCommand_RemoveBuddies_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

