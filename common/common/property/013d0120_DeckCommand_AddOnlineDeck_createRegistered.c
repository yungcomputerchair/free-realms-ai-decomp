// addr: 0x013d0120
// name: DeckCommand_AddOnlineDeck_createRegistered
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall DeckCommand_AddOnlineDeck_createRegistered(int *param_1)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates DeckCommand_AddOnlineDeck, constructs it, registers via virtual
                       method 0x48, and returns it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ac9b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0xc);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = DeckCommand_AddOnlineDeck_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

