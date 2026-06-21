// addr: 0x014b7f60
// name: LoginCommand_RespondToChallenge_createRegistered
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall LoginCommand_RespondToChallenge_createRegistered(int *param_1)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates LoginCommand_RespondToChallenge, constructs it, registers via
                       virtual method 0x48, and returns it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a85bb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x138);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = LoginCommand_RespondToChallenge_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

