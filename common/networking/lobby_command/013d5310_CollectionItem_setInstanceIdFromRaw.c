// addr: 0x013d5310
// name: CollectionItem_setInstanceIdFromRaw
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionItem_setInstanceIdFromRaw(void * this, void * rawId) */

void * __thiscall CollectionItem_setInstanceIdFromRaw(void *this,void *rawId)

{
  undefined4 uVar1;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a temporary InstanceID, copies/assigns data from param_2 into it, then
                       destroys the temporary before returning this. Evidence is
                       InstanceID_ctor/dtor calls and the CollectionItem_ctor caller. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = InstanceID_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  FUN_013d5090(rawId,uVar1);
  local_4 = 0xffffffff;
  InstanceID_dtor(local_1c);
  ExceptionList = local_c;
  return this;
}

