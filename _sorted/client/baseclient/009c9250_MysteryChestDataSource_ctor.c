// addr: 0x009c9250
// name: MysteryChestDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MysteryChestDataSource_ctor(void * this, void * name, void * owner,
   void * context) */

void * __thiscall MysteryChestDataSource_ctor(void *this,void *name,void *owner,void *context)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MysteryChestDataSource by running GuiDsTable construction,
                       installing MysteryChestDataSource vtables, storing owner/context, and
                       clearing a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a3538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  *(undefined ***)this = MysteryChestDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MysteryChestDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MysteryChestDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(void **)((int)this + 600) = context;
  *(undefined1 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

