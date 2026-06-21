// addr: 0x013df710
// name: FUN_013df710
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_013df710(void)

{
  uint uVar1;
  int iVar2;
  void *this;
  void *handle;
  void *local_4c;
  undefined1 local_48 [56];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168cfb3;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_4c;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  if (iVar2 != 0) {
    local_4c = Mem_Alloc(0x94);
    local_4 = 0;
    if (local_4c == (void *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)CWDeck_ctor();
    }
    local_4 = 0xffffffff;
    PropertyCommand_emitRandomizedIds(this,false,(void *)0x0);
    FUN_01446c50();
    local_4 = 1;
    uVar1 = FUN_013a3480();
    EventCommand_setDisplayActionId(local_48,uVar1);
    EventCommand_RequestJoinMatchingQueue_setDeck(local_48,this);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = 0xffffffff;
    EventCommand_RequestJoinMatchingQueue_dtor(local_48);
  }
  ExceptionList = local_c;
  return;
}

