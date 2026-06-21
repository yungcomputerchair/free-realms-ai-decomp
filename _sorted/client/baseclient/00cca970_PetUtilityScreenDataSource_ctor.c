// addr: 0x00cca970
// name: PetUtilityScreenDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PetUtilityScreenDataSource_ctor(void * this, void * owner, void * arg3,
   void * arg4, void * screen) */

void * __thiscall
PetUtilityScreenDataSource_ctor(void *this,void *owner,void *arg3,void *arg4,void *screen)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PetUtilityScreenDataSource, installs its vtables after the
                       shared base initializer, stores owner/screen context, and clears an extra
                       state field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160c328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cb1bb0(arg4,arg3);
  *(undefined ***)this = PetUtilityScreenDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PetUtilityScreenDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PetUtilityScreenDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = PetUtilityScreenDataSource::vftable;
  *(void **)((int)this + 0x2dc) = owner;
  *(void **)((int)this + 0x2e0) = screen;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  ExceptionList = local_c;
  return this;
}

