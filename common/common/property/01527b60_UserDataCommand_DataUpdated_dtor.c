// addr: 0x01527b60
// name: UserDataCommand_DataUpdated_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_DataUpdated_dtor(void * this) */

void __fastcall UserDataCommand_DataUpdated_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a DataUpdated command by restoring its vtable and destroying its
                       embedded PropertyTree/list storage before base cleanup. */
  puStack_8 = &LAB_016b9613;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = UserDataCommand_DataUpdated::vftable;
  local_4 = 0;
  PropertyTree_destroyNodesAndStorage((void *)((int)this + 8));
  UserDataCommand_dtor(this);
  ExceptionList = puStack_8;
  return;
}

