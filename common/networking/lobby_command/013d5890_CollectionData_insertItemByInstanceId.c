// addr: 0x013d5890
// name: CollectionData_insertItemByInstanceId
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CollectionData_insertItemByInstanceId(undefined4 itemId_, undefined4
   instanceValue_) */

void CollectionData_insertItemByInstanceId(int itemId_,int instanceValue_)

{
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an InstanceID from two arguments, inserts a unique item record
                       into CollectionData, then destroys the temporary InstanceID. Evidence is
                       InstanceID_ctor/dtor and CollectionData_insertUniqueItemRecord. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b8c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  InstanceID_ctor(local_1c,itemId_,instanceValue_);
  local_4 = 0;
  CollectionData_insertUniqueItemRecord(local_1c);
  local_4 = 0xffffffff;
  InstanceID_dtor(local_1c);
  ExceptionList = local_c;
  return;
}

