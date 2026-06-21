// addr: 0x00cca880
// name: PetEquipScreenDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PetEquipScreenDataSource_ctor(void * this, void * owner, void * arg3,
   void * arg4, void * screen) */

void * __thiscall
PetEquipScreenDataSource_ctor(void *this,void *owner,void *arg3,void *arg4,void *screen)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PetEquipScreenDataSource by invoking the shared data-source base
                       initializer, installing all PetEquipScreenDataSource vtables, and storing
                       owner/screen context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160c2c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cb1bb0(arg4,arg3);
  *(undefined ***)this = PetEquipScreenDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PetEquipScreenDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PetEquipScreenDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = PetEquipScreenDataSource::vftable;
  *(void **)((int)this + 0x2dc) = owner;
  *(void **)((int)this + 0x2e0) = screen;
  ExceptionList = local_c;
  return this;
}

