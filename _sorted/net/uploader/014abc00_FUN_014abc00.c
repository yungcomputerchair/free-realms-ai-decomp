// addr: 0x014abc00
// name: FUN_014abc00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_014abc00(void * factory) */

void * __fastcall FUN_014abc00(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x14-byte command/object via FUN_014aba90 and registers it
                       through a factory virtual method. Specific type is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a615b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x14);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = TradeCommand_AcceptTradeRequest_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

