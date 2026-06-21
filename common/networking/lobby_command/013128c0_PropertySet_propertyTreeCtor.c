// addr: 0x013128c0
// name: PropertySet_propertyTreeCtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertySet_propertyTreeCtor(void * param_1) */

void * __fastcall PropertySet_propertyTreeCtor(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the PropertySet embedded tree/map at offset +4 by allocating a
                       0x18-byte sentinel, marking byte +0x15, self-linking it, and zeroing the
                       count. Evidence: called from PropertySet construction immediately after
                       PropertySet::vftable is installed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016775e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_01310ba0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)((int)param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  ExceptionList = local_c;
  return param_1;
}

