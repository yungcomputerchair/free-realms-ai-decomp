// addr: 0x00a7dc80
// name: GroupDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GroupDataSource_ctor(void * this, void * owner) */

void * __thiscall GroupDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.GroupData data source, installs GroupDataSource
                       vtables, and stores the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bb808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_GroupData_01b51640);
  *(undefined ***)this = GroupDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = GroupDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = GroupDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

