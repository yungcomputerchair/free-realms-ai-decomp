// addr: 0x00a7dbe0
// name: GroupMemberDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GroupMemberDataSource_ctor(void * this, void * owner) */

void * __thiscall GroupMemberDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.GroupMemberData data source, installs
                       GroupMemberDataSource vtables, stores the owner, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bb7d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_GroupMemberData_01b5163c);
  *(undefined ***)this = GroupMemberDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = GroupMemberDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = GroupMemberDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  ExceptionList = local_c;
  return this;
}

