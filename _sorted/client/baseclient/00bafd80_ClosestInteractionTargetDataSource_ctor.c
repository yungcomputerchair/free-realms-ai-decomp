// addr: 0x00bafd80
// name: ClosestInteractionTargetDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClosestInteractionTargetDataSource_ctor(void * this, void * owner) */

void * __thiscall ClosestInteractionTargetDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.ClosestInteractionTarget data source, installs
                       vtables, stores owner, and initializes default target position/range fields.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e7368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_ClosestInteractionTar_01824e5d_3_01b61740);
  *(undefined ***)this = ClosestInteractionTargetDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ClosestInteractionTargetDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ClosestInteractionTargetDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = DAT_01bea478;
  *(undefined4 *)((int)this + 0x25c) = DAT_01bea47c;
  *(undefined4 *)((int)this + 0x260) = DAT_01bea4a8;
  *(undefined4 *)((int)this + 0x264) = DAT_01bea4ac;
  ExceptionList = local_c;
  return this;
}

