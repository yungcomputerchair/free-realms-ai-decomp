// addr: 0x014d0aa0
// name: Guild_createAndRegister
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Guild_createAndRegister(undefined4 registryOrContext_) */

void Guild_createAndRegister(undefined4 registryOrContext_)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a Guild object, initializes/uses it through helper
                       014f8980, then passes it to helper 014d0930 for ownership/registration. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016abf8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x54);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    local_10 = (void *)0x0;
  }
  else {
    local_10 = (void *)Guild_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_014f8980(registryOrContext_);
  FUN_014d0930(&local_10);
  ExceptionList = local_c;
  return;
}

