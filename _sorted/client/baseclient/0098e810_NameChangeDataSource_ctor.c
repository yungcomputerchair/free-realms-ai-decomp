// addr: 0x0098e810
// name: NameChangeDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NameChangeDataSource_ctor(void * this, void * owner, void * callback)
    */

void * __thiscall NameChangeDataSource_ctor(void *this,void *owner,void *callback)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the NameChangeDataSource for BaseClient.NameChange, installs its
                       vtables, stores owner/callback fields, clears a flag, and initializes a
                       sentinel id. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159b4b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_NameChange_01b44e6c);
  *(undefined1 *)((int)this + 0x25c) = 0;
  *(undefined ***)this = NameChangeDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = NameChangeDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = NameChangeDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(void **)((int)this + 600) = callback;
  *(undefined4 *)((int)this + 0x260) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

