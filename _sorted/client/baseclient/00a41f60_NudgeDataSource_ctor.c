// addr: 0x00a41f60
// name: NudgeDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NudgeDataSource_ctor(void * this, void * owner) */

void * __thiscall NudgeDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Nudges data source, installs NudgeDataSource
                       vtables, and stores the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b4118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Nudges_01b4de80);
  *(undefined ***)this = NudgeDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = NudgeDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = NudgeDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

