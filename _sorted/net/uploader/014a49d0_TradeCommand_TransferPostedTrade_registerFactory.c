// addr: 0x014a49d0
// name: TradeCommand_TransferPostedTrade_registerFactory
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeCommand_TransferPostedTrade_registerFactory(void * registry) */

void * __fastcall TradeCommand_TransferPostedTrade_registerFactory(void *registry)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x20 bytes, constructs TradeCommand_TransferPostedTrade, and
                       registers it through the factory/registry callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4a0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x20);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = TradeCommand_TransferPostedTrade_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

