// addr: 0x014bb240
// name: FUN_014bb240
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_014bb240(void * factory) */

void * __fastcall FUN_014bb240(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/registration wrapper allocating 0x10 bytes, constructing with
                       FUN_014bb070, and registering virtually. Exact class unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8e8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x10);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = LobbyCommand_StartTournamentMsg_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

