// addr: 0x013d0bd0
// name: FUN_013d0bd0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_013d0bd0(void * factory) */

void * __fastcall FUN_013d0bd0(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x14-byte command/object via FUN_013d09e0 and registers it
                       through a factory virtual method. Specific type is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168aedb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x14);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = TradeCommand_AcceptPostedTrade_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

