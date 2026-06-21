// addr: 0x014597a0
// name: CWMatchCommand_LaunchGame_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CWMatchCommand_LaunchGame_createAndRegister(void) */

void * CWMatchCommand_LaunchGame_createAndRegister(void)

{
  uint uVar1;
  void *this;
  int *in_ECX;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CWMatchCommand_LaunchGame, then passes it to the
                       owning factory/registry callback. Evidence is the
                       CWMatchCommand_LaunchGame_ctor callee and the virtual callback after
                       construction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c5fb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0xc);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = CWMatchCommand_LaunchGame_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

