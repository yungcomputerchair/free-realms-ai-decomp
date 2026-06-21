// addr: 0x014a4ec0
// name: FUN_014a4ec0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall FUN_014a4ec0(int *param_1)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and registers a 0x10-byte object using constructor helper
                       FUN_014a4d70. Exact class is not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4b0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x10);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = TradeCommand_StartTradeSync_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

